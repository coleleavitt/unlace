__int64 __fastcall sub_12DCA70(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  void **v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  char *v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  char *v13; // r14
  _QWORD *v15; // r14
  _QWORD *i; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  void **v19; // r13
  void **v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  char *v24; // rdi
  unsigned __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+10h] [rbp-48h]

  if ( a2 != (__int64 *)a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = *(void ***)a1;
    v26 = v3 - *a2;
    v6 = 0x6DB6DB6DB6DB6DB7LL * (v26 >> 3);
    v7 = v6;
    if ( 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) < v6 )
    {
      v15 = nullptr;
      if ( v6 )
      {
        if ( v6 > 0x492492492492492LL )
          std::__throw_bad_alloc();
        v15 = (_QWORD *)operator new(v26);
      }
      for ( i = v15; v3 != v4; *((_DWORD *)i - 1) = *(_DWORD *)(v4 - 4) )
      {
        v17 = i + 2;
        v18 = i;
        v4 += 56;
        i += 7;
        *(i - 7) = v17;
        sub_12DB130(v18, *(_BYTE **)(v4 - 56), *(_QWORD *)(v4 - 56) + *(_QWORD *)(v4 - 48));
        *(__m128i *)(i - 3) = _mm_loadu_si128((const __m128i *)(v4 - 24));
        *((_DWORD *)i - 2) = *(_DWORD *)(v4 - 8);
      }
      v19 = *(void ***)(a1 + 8);
      v20 = *(void ***)a1;
      if ( v19 != *(void ***)a1 )
      {
        do
        {
          while ( *v20 != v20 + 2 )
          {
            operator delete(*v20);
            v20 += 7;
            if ( v19 == v20 )
              goto LABEL_20;
          }
          v20 += 7;
        }
        while ( v19 != v20 );
LABEL_20:
        v20 = *(void ***)a1;
      }
      if ( v20 )
        operator delete(v20);
      *(_QWORD *)a1 = v15;
      v13 = (char *)v15 + v26;
      *(_QWORD *)(a1 + 16) = v13;
      goto LABEL_10;
    }
    v8 = *(char **)(a1 + 8);
    v9 = v8 - (char *)v5;
    v10 = 0x6DB6DB6DB6DB6DB7LL * ((v8 - (char *)v5) >> 3);
    if ( v7 > v10 )
    {
      if ( v9 > 0 )
      {
        do
        {
          v21 = v4;
          v25 = v10;
          v4 += 56;
          sub_9EE8A0((__int64)v5, v21);
          v5 += 7;
          *(__m128i *)(v5 - 3) = _mm_loadu_si128((const __m128i *)(v4 - 24));
          *((_DWORD *)v5 - 2) = *(_DWORD *)(v4 - 8);
          *((_DWORD *)v5 - 1) = *(_DWORD *)(v4 - 4);
          v10 = v25 - 1;
        }
        while ( v25 != 1 );
        v8 = *(char **)(a1 + 8);
        v5 = *(void ***)a1;
        v3 = a2[1];
        v4 = *a2;
        v9 = (__int64)&v8[-*(_QWORD *)a1];
      }
      v22 = v9 + v4;
      if ( v22 == v3 )
      {
        v13 = (char *)v5 + v26;
        goto LABEL_10;
      }
      do
      {
        v23 = v8 + 16;
        v24 = v8;
        v22 += 56;
        v8 += 56;
        *((_QWORD *)v8 - 7) = v23;
        sub_12DB130(v24, *(_BYTE **)(v22 - 56), *(_QWORD *)(v22 - 56) + *(_QWORD *)(v22 - 48));
        *(__m128i *)(v8 - 24) = _mm_loadu_si128((const __m128i *)(v22 - 24));
        *((_DWORD *)v8 - 2) = *(_DWORD *)(v22 - 8);
        *((_DWORD *)v8 - 1) = *(_DWORD *)(v22 - 4);
      }
      while ( v22 != v3 );
    }
    else
    {
      if ( v26 > 0 )
      {
        do
        {
          v11 = v4;
          v12 = (__int64)v5;
          v4 += 56;
          v5 += 7;
          sub_9EE8A0(v12, v11);
          *(__m128i *)(v5 - 3) = _mm_loadu_si128((const __m128i *)(v4 - 24));
          *((_DWORD *)v5 - 2) = *(_DWORD *)(v4 - 8);
          *((_DWORD *)v5 - 1) = *(_DWORD *)(v4 - 4);
          --v7;
        }
        while ( v7 );
      }
      while ( v8 != (char *)v5 )
      {
        while ( *v5 != v5 + 2 )
        {
          operator delete(*v5);
          v5 += 7;
          if ( v8 == (char *)v5 )
            goto LABEL_9;
        }
        v5 += 7;
      }
    }
LABEL_9:
    v13 = (char *)(*(_QWORD *)a1 + v26);
LABEL_10:
    *(_QWORD *)(a1 + 8) = v13;
  }
  return a1;
}
