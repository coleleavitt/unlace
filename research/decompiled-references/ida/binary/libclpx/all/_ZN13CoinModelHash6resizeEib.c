void __fastcall CoinModelHash::resize(CoinModelHash *this, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r12
  int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  signed int v15; // esi
  __int64 v16; // rax
  int v17; // esi
  int v18; // eax
  void *v19; // rdi
  int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // edi
  __int64 v24; // r12
  int i; // ebx
  const char *v26; // rsi
  int *v27; // rax
  int j; // ebx
  const char *v29; // r13
  int v30; // eax
  __int64 v31; // r12
  int *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // r8d
  _DWORD *v38; // rsi
  unsigned __int64 v39; // rax
  __int64 v40; // [rsp+0h] [rbp-48h]

  v3 = *((int *)this + 5);
  if ( (int)v3 < a2 || a3 )
  {
    *((_DWORD *)this + 5) = a2;
    if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_52;
    v5 = (_QWORD *)operator new[](8LL * a2);
    v6 = v5;
    if ( (int)v3 <= 0 )
    {
      v7 = *(_QWORD *)this;
      v3 = 0;
    }
    else
    {
      v7 = *(_QWORD *)this;
      if ( ((unsigned __int64)v5 >= *(_QWORD *)this + 16LL || *(_QWORD *)this >= (unsigned __int64)(v5 + 2))
        && (unsigned int)v3 > 0x18 )
      {
        v8 = 0;
        if ( ((v7 >> 3) & 1) != 0 )
        {
          v8 = 1;
          *v5 = *(_QWORD *)v7;
        }
        v9 = 0;
        v10 = v3 - ((v7 >> 3) & 1);
        v11 = (v7 >> 3) & 1;
        v12 = 0;
        v13 = (_QWORD *)(v7 + v11 * 8);
        v14 = &v6[v11];
        do
        {
          ++v9;
          *(__m128i *)&v14[v12] = _mm_load_si128((const __m128i *)&v13[v12]);
          v12 += 2;
        }
        while ( v10 >> 1 > v9 );
        v15 = (v10 & 0xFFFFFFFE) + v8;
        if ( (v10 & 0xFFFFFFFE) != v10 )
        {
          v16 = v15;
          v17 = v15 + 1;
          v6[v16] = *(_QWORD *)(v7 + 8 * v16);
          if ( (int)v3 > v17 )
            v6[v17] = *(_QWORD *)(v7 + 8LL * v17);
        }
      }
      else
      {
        v39 = 0;
        do
        {
          v6[v39 / 8] = *(_QWORD *)(v7 + v39);
          v39 += 8LL;
        }
        while ( v39 != 8LL * (unsigned int)(v3 - 1) + 8 );
      }
    }
    v18 = *((_DWORD *)this + 5);
    if ( (int)v3 < v18 )
      memset(&v6[v3], 0, 8LL * (unsigned int)(v18 - 1 - v3) + 8);
    if ( v7 )
      operator delete[]((void *)v7);
    v19 = *((void **)this + 1);
    *(_QWORD *)this = v6;
    if ( v19 )
      operator delete[](v19);
    v20 = 4 * *((_DWORD *)this + 5);
    if ( (unsigned __int64)v20 > 0xFFFFFFFFFFFFFFFLL )
LABEL_52:
      __cxa_throw_bad_array_new_length();
    v21 = operator new[](8LL * v20);
    *((_QWORD *)this + 1) = v21;
    if ( v20 > 0 )
    {
      v22 = 0;
      do
      {
        ++v22;
        v21 += 16;
        *(_OWORD *)(v21 - 16) = -1;
      }
      while ( (unsigned int)v20 >> 1 > v22 );
    }
    v23 = *((_DWORD *)this + 4);
    if ( v23 <= 0 )
    {
      *((_DWORD *)this + 6) = -1;
    }
    else
    {
      v24 = 0;
      for ( i = 0; i < v23; ++i )
      {
        v26 = *(const char **)(*(_QWORD *)this + v24);
        if ( v26 )
        {
          v27 = (int *)(*((_QWORD *)this + 1) + 8LL * (int)CoinModelHash::hashValue(this, v26));
          if ( *v27 == -1 )
            *v27 = i;
          v23 = *((_DWORD *)this + 4);
        }
        v24 += 8;
      }
      *((_DWORD *)this + 6) = -1;
      if ( v23 > 0 )
      {
        v40 = 0;
        for ( j = 0; j < v23; ++j )
        {
          if ( *(_QWORD *)(*(_QWORD *)this + v40 * 8) )
          {
            v29 = (const char *)v6[v40];
            v30 = CoinModelHash::hashValue(this, v29);
            v31 = *((_QWORD *)this + 1);
            do
            {
              v32 = (int *)(v31 + 8LL * v30);
              v33 = *v32;
              if ( (_DWORD)v33 == j )
              {
                v23 = *((_DWORD *)this + 4);
                goto LABEL_39;
              }
              if ( !strcmp(v29, (const char *)v6[v33]) )
              {
                printf("** duplicate name %s\n", (const char *)v6[v40]);
                abort();
              }
              v30 = v32[1];
            }
            while ( v30 != -1 );
            v34 = *((int *)this + 6);
            v23 = *((_DWORD *)this + 4);
            v35 = v34 + 1;
            v36 = v31 + 8 * v34 + 8;
            do
            {
              v37 = v35;
              if ( v35 > v23 )
              {
                *((_DWORD *)this + 6) = v35;
                puts("** too many names");
                abort();
              }
              v38 = (_DWORD *)v36;
              ++v35;
              v36 += 8;
            }
            while ( *v38 != -1 );
            *((_DWORD *)this + 6) = v37;
            v32[1] = v37;
            *v38 = j;
          }
LABEL_39:
          ++v40;
        }
      }
    }
  }
}

