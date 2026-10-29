char *__fastcall CoinMpsIO::addString(CoinMpsIO *this, int a2, int a3, const char *a4)
{
  int *v6; // r14
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  int v12; // r14d
  int v13; // edi
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  unsigned __int64 v22; // r10
  _QWORD *v23; // rcx
  signed int v24; // esi
  __int64 v25; // rax
  int v26; // esi
  char *v27; // rax
  char *v28; // rax
  unsigned __int64 v30; // rax
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v6 = (int *)savedregs;
  sprintf((char *)savedregs, "%d,%d,", a2, a3);
  do
  {
    v7 = *v6++;
    v8 = ~v7 & (v7 - 16843009) & 0x80808080;
  }
  while ( !v8 );
  if ( (~v7 & (v7 - 16843009) & 0x8080) == 0 )
  {
    v8 >>= 16;
    v6 = (int *)((char *)v6 + 2);
  }
  v9 = (char *)v6 - __CFADD__((_BYTE)v8, (_BYTE)v8) - 3 - (char *)savedregs;
  v10 = strlen(a4);
  v11 = *((int *)this + 73);
  v12 = v10 + v9;
  if ( (_DWORD)v11 == *((_DWORD *)this + 72) )
  {
    v13 = 2 * v11 + 100;
    *((_DWORD *)this + 72) = v13;
    if ( (unsigned __int64)v13 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v14 = (_QWORD *)operator new[](8LL * v13);
    v11 = *((int *)this + 73);
    v15 = v14;
    if ( (int)v11 <= 0 )
    {
      v16 = *((_QWORD *)this + 37);
    }
    else
    {
      v16 = *((_QWORD *)this + 37);
      if ( ((unsigned __int64)v14 >= v16 + 16 || v16 >= (unsigned __int64)(v14 + 2)) && (unsigned int)v11 > 0x18 )
      {
        v17 = 0;
        if ( ((v16 >> 3) & 1) != 0 )
        {
          v17 = 1;
          *v14 = *(_QWORD *)v16;
        }
        v18 = 0;
        v19 = 0;
        v20 = v11 - ((v16 >> 3) & 1);
        v21 = (v16 >> 3) & 1;
        v22 = v16 + v21 * 8;
        v23 = &v15[v21];
        do
        {
          ++v19;
          *(__m128i *)&v23[v18] = _mm_load_si128((const __m128i *)(v22 + v18 * 8));
          v18 += 2;
        }
        while ( v20 >> 1 > v19 );
        v24 = (v20 & 0xFFFFFFFE) + v17;
        if ( v20 != (v20 & 0xFFFFFFFE) )
        {
          v25 = v24;
          v26 = v24 + 1;
          v15[v25] = *(_QWORD *)(v16 + 8 * v25);
          if ( v26 < (int)v11 )
            v15[v26] = *(_QWORD *)(v16 + 8LL * v26);
        }
      }
      else
      {
        v30 = 0;
        do
        {
          v15[v30 / 8] = *(_QWORD *)(v16 + v30);
          v30 += 8LL;
        }
        while ( v30 != 8LL * (unsigned int)(v11 - 1) + 8 );
      }
    }
    if ( v16 )
    {
      operator delete[]((void *)v16);
      v11 = *((int *)this + 73);
    }
    *((_QWORD *)this + 37) = v15;
  }
  else
  {
    v15 = *((_QWORD **)this + 37);
  }
  v27 = (char *)malloc(v12 + 1);
  *((_DWORD *)this + 73) = v11 + 1;
  v15[v11] = v27;
  v28 = strcpy(v27, (const char *)savedregs);
  return strcat(v28, a4);
}

