__int64 __fastcall sub_8E0D80(void *s, _DWORD *a2, unsigned int *a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned int *v8; // r13
  unsigned __int64 v10; // r14
  unsigned int *v11; // r10
  char *v12; // r11
  char *v13; // rsi
  unsigned int *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int *v19; // rdx
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 n; // [rsp+0h] [rbp-48h]

  n = 4LL * (unsigned int)(*a2 + 1);
  if ( a4 )
  {
    v8 = (unsigned int *)((char *)a3 + a4);
    *a6 = 0;
    v10 = (unsigned __int64)a3 + a4 - 15;
    v11 = (unsigned int *)(a6 + 128);
    a6[511] = 0;
    v12 = (char *)(a6 + 256);
    v13 = (char *)(a6 + 384);
    memset(
      (void *)((unsigned __int64)(a6 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a6 - (((_DWORD)a6 + 8) & 0xFFFFFFF8) + 4096) >> 3));
    v14 = a3 + 1;
    v15 = *a3;
    if ( (unsigned __int64)(a3 + 1) < v10 )
    {
      do
      {
        v16 = *v14;
        v14 += 4;
        ++*((_DWORD *)a6 + (unsigned __int8)v15);
        ++v11[BYTE1(v15)];
        ++*(_DWORD *)&v12[4 * BYTE2(v15)];
        ++*(_DWORD *)&v13[4 * HIBYTE(v15)];
        v17 = *(v14 - 3);
        ++*((_DWORD *)a6 + (unsigned __int8)v16);
        ++v11[BYTE1(v16)];
        ++*(_DWORD *)&v12[4 * BYTE2(v16)];
        ++*(_DWORD *)&v13[4 * HIBYTE(v16)];
        v18 = *(v14 - 2);
        ++*((_DWORD *)a6 + (unsigned __int8)v17);
        ++v11[BYTE1(v17)];
        ++*(_DWORD *)&v12[4 * BYTE2(v17)];
        ++*(_DWORD *)&v13[4 * HIBYTE(v17)];
        v15 = *(v14 - 1);
        ++*((_DWORD *)a6 + (unsigned __int8)v18);
        ++v11[BYTE1(v18)];
        ++*(_DWORD *)&v12[4 * BYTE2(v18)];
        ++*(_DWORD *)&v13[4 * HIBYTE(v18)];
      }
      while ( v10 > (unsigned __int64)v14 );
      a3 = (unsigned int *)((char *)a3 + ((a4 - 20) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    }
    if ( v8 > a3 )
    {
      do
      {
        a3 = (unsigned int *)((char *)a3 + 1);
        ++*((_DWORD *)a6 + *((unsigned __int8 *)a3 - 1));
      }
      while ( v8 != a3 );
    }
    v19 = (unsigned int *)a6;
    v20 = 0;
    do
    {
      v21 = v19[768] + v19[512] + *v19 + v19[256];
      *v19 = v21;
      if ( v20 < v21 )
        v20 = v21;
      ++v19;
    }
    while ( v11 != v19 );
    LODWORD(v22) = 255;
    if ( !*((_DWORD *)a6 + 255) )
    {
      do
        v22 = (unsigned int)(v22 - 1);
      while ( !*((_DWORD *)a6 + v22) );
    }
    if ( !a5 || (result = -48, *a2 >= (unsigned int)v22) )
    {
      *a2 = v22;
      memmove(s, a6, n);
      return v20;
    }
  }
  else
  {
    memset(s, 0, 4LL * (unsigned int)(*a2 + 1));
    *a2 = 0;
    return 0;
  }
  return result;
}

