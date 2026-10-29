__int64 __fastcall sub_AA4380(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *exception; // r13
  char *v5; // rax
  unsigned int v7; // r13d
  __int64 v8; // r14
  _QWORD *v9; // rbx
  int v10; // r15d
  __int64 v11; // rax
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 *v15; // r13
  __int64 v16; // rsi
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // r9d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 *v27; // r12
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  _QWORD *v31; // rax
  unsigned int v33; // [rsp+14h] [rbp-74h]
  _BYTE v35[16]; // [rsp+20h] [rbp-68h] BYREF
  char v36[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v7 = a1[2];
    v8 = *(_QWORD *)(a4 + 8LL * (v7 >> 1));
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_34;
    }
    v9 = nullptr;
    v10 = 0;
    while ( 1 )
    {
      ++*(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      do
      {
        v18 = *((_DWORD *)v9 - 1);
        if ( v18 == *((_DWORD *)v9 - 2) )
        {
          v19 = (3 * v18 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
          {
            exception = (__m128i *)__cxa_allocate_exception(0x28u);
            v5 = (char *)operator new(0x2Bu);
            strcpy(v5, "Overflow encountered when expanding vector");
            exception->m128i_i64[1] = (__int64)v5;
            exception->m128i_i64[0] = (__int64)off_1C63128;
            exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (3 * v18 + 1) >> 1;
          v21 = (unsigned int *)sub_186B300(v9 - 1, v20);
          v9 = v21 + 2;
          *v21 = v33;
          v22 = v21[1];
          v23 = v22;
          v13 = &v9[v22];
          v12 = v23 + 1;
        }
        else
        {
          v11 = v18;
          v12 = v18 + 1;
          v13 = &v9[v11];
        }
LABEL_5:
        *v13 = v8;
        *((_DWORD *)v9 - 1) = v12;
        if ( (v7 & 1) != 0 )
        {
          v14 = sub_15E1A70(a3);
          v15 = &v9[*((_DWORD *)v9 - 1) - 1];
          if ( v14 )
            ++*(_DWORD *)(v14 + 8);
          v16 = *v15;
          if ( *v15 )
          {
            v17 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v17 )
              sub_15D7BC0(a3, v16);
          }
          *v15 = v14;
        }
        if ( (unsigned int)++v10 >= *a1 )
          goto LABEL_19;
        v7 = a1[v10 + 2];
        v8 = *(_QWORD *)(a4 + 8LL * (v7 >> 1));
      }
      while ( !v8 );
    }
LABEL_34:
    v31 = (_QWORD *)sub_186B270(0x18u);
    *v31 = 2;
    v13 = v31 + 1;
    v12 = 1;
    v9 = v13;
    goto LABEL_5;
  }
  v9 = nullptr;
LABEL_19:
  v24 = sub_15E1AF0(a3);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_1606360(v35, v24, a3, 3, 0, 0);
  v26 = sub_160E8B0(a2, v35);
  sub_18572D0(v36);
  if ( v25 )
  {
    v17 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(a3, v25);
  }
  if ( v9 )
  {
    v27 = v9;
    v28 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v17 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            goto LABEL_31;
        }
        ++v27;
        sub_15D7BC0(a3, v29);
      }
      while ( (unsigned __int64)v27 < v28 );
    }
LABEL_31:
    sub_186B220(v9 - 1);
  }
  return v26;
}

