unsigned __int64 __fastcall sub_593C20(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  char *v4; // r12
  __int64 v5; // r13
  _QWORD *v6; // rdi
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  char *v13; // r12
  __int64 v14; // r8
  __int64 i; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  const __m128i *v18; // r14
  __m128i v19; // xmm0
  void *v20; // rdx
  __int64 *v21; // rbp
  __int64 v22; // r15
  __int64 v23; // r13
  void *v24; // rdi
  unsigned __int64 v25; // r13
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  int v32; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __m128i v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1[19];
  v37 = __readfsqword(0x28u);
  v35 = 0;
  ptr = nullptr;
  v3 = *(_QWORD *)(v1 + 48);
  if ( v3 )
  {
    v4 = (char *)qvector_reserve(&ptr, 0, *(_QWORD *)(v1 + 48), 12);
    v5 = v35.m128i_i64[1];
    v35.m128i_i64[1] = 0;
    v6 = ptr;
    v7 = v35.m128i_i64[0] - 1;
    if ( v35.m128i_i64[0] - 1 >= 0 )
    {
      v8 = v4;
      do
      {
        v9 = *v6;
        v8 += 12;
        v6 = (_QWORD *)((char *)v6 + 12);
        *(_QWORD *)(v8 - 12) = v9;
        *((_DWORD *)v8 - 1) = *((_DWORD *)v6 - 1);
      }
      while ( v7-- != 0 );
      v6 = ptr;
    }
    qfree(v6);
    v11 = v35.m128i_i64[0];
    ptr = v4;
    v35.m128i_i64[1] = v5;
    if ( v35.m128i_i64[0] < v3 )
    {
      v12 = 12 * v35.m128i_i64[0];
      do
      {
        v13 = &v4[v12];
        ++v11;
        v12 += 12;
        *(_QWORD *)v13 = 0;
        *((_DWORD *)v13 + 2) = 0;
        v4 = (char *)ptr;
      }
      while ( v3 != v11 );
    }
    v35.m128i_i64[0] = v3;
    v14 = 0;
    for ( i = 0; i != v3; ++i )
    {
      if ( a1[22] )
      {
        v16 = 0;
        do
        {
          *(_DWORD *)&v4[4 * v16 + v14] = *(_DWORD *)(*(_QWORD *)(a1[v16 + 19] + 40LL) + 32 * i + 24);
          ++v16;
        }
        while ( v16 < a1[22] );
        v4 = (char *)ptr;
      }
      v14 += 12;
    }
    v17 = v35.m128i_i64[1];
    v3 = v35.m128i_i64[0];
  }
  else
  {
    v17 = 0;
    v4 = nullptr;
  }
  v18 = *(const __m128i **)(a1[1] + 8LL);
  v19 = _mm_loadu_si128(v18 + 38);
  v18[38].m128i_i64[1] = v17;
  v20 = (void *)v18[37].m128i_i64[1];
  v18[37].m128i_i64[1] = (__int64)v4;
  v18[38].m128i_i64[0] = v3;
  v21 = &v36;
  v36 = 0x100000000LL;
  ptr = v20;
  v35 = v19;
  do
  {
    v22 = *(int *)v21;
    v23 = v18[3 * v22 + 40].m128i_i64[0];
    while ( v23 )
    {
      sub_58E1E0(*(_QWORD **)(v23 + 24));
      v24 = (void *)v23;
      v23 = *(_QWORD *)(v23 + 16);
      operator delete(v24, 0x30u);
    }
    v25 = 0;
    v18[3 * v22 + 40].m128i_i64[0] = 0;
    v18[3 * v22 + 40].m128i_i64[1] = (__int64)&v18[3 * v22 + 39].m128i_i64[1];
    v18[3 * v22 + 41].m128i_i64[0] = (__int64)&v18[3 * v22 + 39].m128i_i64[1];
    for ( v18[3 * v22 + 41].m128i_i64[1] = 0; v25 < v18[38].m128i_i64[0]; ++v25 )
    {
      v26 = *(_DWORD *)(v18[37].m128i_i64[1] + 12 * v25 + 4 * v22);
      if ( v26 )
      {
        v27 = v18[3 * v22 + 40].m128i_i64[0];
        v32 = *(_DWORD *)(v18[37].m128i_i64[1] + 12 * v25 + 4 * v22);
        v28 = (__int64)&v18[3 * v22 + 39].m128i_i64[1];
        v33 = v25;
        if ( v27 )
        {
          do
          {
            while ( 1 )
            {
              v29 = *(_QWORD *)(v27 + 16);
              v30 = *(_QWORD *)(v27 + 24);
              if ( v26 > *(_DWORD *)(v27 + 32) )
                break;
              v28 = v27;
              v27 = *(_QWORD *)(v27 + 16);
              if ( !v29 )
                goto LABEL_27;
            }
            v27 = *(_QWORD *)(v27 + 24);
          }
          while ( v30 );
LABEL_27:
          if ( (unsigned __int64 *)v28 != &v18[3 * v22 + 39].m128i_u64[1] && v26 >= *(_DWORD *)(v28 + 32) )
          {
            if ( !under_debugger )
              interr(1940);
            BUG();
          }
        }
        sub_593AC0((const __m128i *)v18[3 * v22 + 39].m128i_i64, v28, (__int64)&v32);
      }
    }
    v21 = (__int64 *)((char *)v21 + 4);
  }
  while ( &v37 != (unsigned __int64 *)v21 );
  if ( ptr )
  {
    v35.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v37 - __readfsqword(0x28u);
}

