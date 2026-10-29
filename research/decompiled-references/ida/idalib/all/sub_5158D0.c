unsigned __int64 __fastcall sub_5158D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 *v9; // rbx
  char *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v14; // rdx
  bool v15; // al
  char *v16; // rdx
  char *v17; // rsi
  char *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // si
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 i; // rbp
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 j; // r14
  __int64 v30; // rdx
  bool v31; // al
  char *v32; // rdx
  char *v33; // rsi
  char *v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // si
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v42 = __readfsqword(0x28u);
  v41 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v41);
  v6 = *(_QWORD *)(a1 + 1768);
  if ( !*(_BYTE *)(v6 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = v5 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v6 + 40) )
    sub_5144F0();
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = v5;
  v9 = (__int64 *)(*(_QWORD *)(v6 + 32) + v8);
  v10 = (char *)*v9;
  if ( *v9 )
  {
    v9[1] = 0;
    qfree(v10);
    *v9 = 0;
    v9[2] = 0;
  }
  if ( a3 )
  {
    v25 = unpack_dq(&v41);
    if ( v25 )
    {
      for ( i = 0; i != v25; ++i )
      {
        unpack_dq(&v41);
        unpack_dq(&v41);
        unpack_dq(&v41);
        v27 = v41.m128i_i64[0];
        if ( v41.m128i_i64[0] < (unsigned __int64)v41.m128i_i64[1] )
        {
          if ( (unsigned __int64)(v41.m128i_i64[0] + 1) >= v41.m128i_i64[1] )
            v27 = v41.m128i_i64[0] + 1;
          else
            v27 = v41.m128i_i64[0] + 2;
        }
        v41.m128i_i64[0] = v27;
      }
    }
    v28 = unpack_dq(&v41);
    if ( v28 )
    {
      for ( j = 0; j != v28; ++j )
      {
        v32 = (char *)v9[1];
        v33 = (char *)*v9;
        if ( v9[2] < (unsigned __int64)(v32 + 1) )
        {
          v40 = qvector_reserve(v9, v33, v32 + 1, 33);
          v32 = (char *)v9[1];
          *v9 = v40;
          v33 = (char *)v40;
        }
        v34 = &v33[33 * (_QWORD)v32];
        *(_OWORD *)v34 = 0;
        v34[32] = 0;
        ++v9[1];
        v35 = unpack_dq(&v41);
        *(_QWORD *)v34 = v35;
        *((_QWORD *)v34 + 1) = unpack_dq(&v41) + v35;
        v36 = unpack_dq(&v41);
        v37 = v41.m128i_u64[1];
        *((_QWORD *)v34 + 2) = v36;
        v38 = v41.m128i_i64[0];
        if ( v41.m128i_i64[0] >= v37 )
        {
          v34[24] = 0;
          v30 = v38;
          v31 = 0;
        }
        else
        {
          v39 = *(_BYTE *)v41.m128i_i64[0];
          v30 = ++v41.m128i_i64[0];
          v34[24] = v39;
          if ( v38 + 1 >= v37 )
          {
            v31 = 0;
          }
          else
          {
            v30 = v38 + 2;
            v31 = *(_BYTE *)(v38 + 1) != 0;
          }
        }
        v41.m128i_i64[0] = v30;
        v34[32] = v31;
      }
    }
  }
  else
  {
    v11 = 0;
    v12 = unpack_dq(&v41);
    if ( v12 )
    {
      do
      {
        v16 = (char *)v9[1];
        v17 = (char *)*v9;
        if ( v9[2] < (unsigned __int64)(v16 + 1) )
        {
          v24 = qvector_reserve(v9, v17, v16 + 1, 33);
          v16 = (char *)v9[1];
          *v9 = v24;
          v17 = (char *)v24;
        }
        v18 = &v17[33 * (_QWORD)v16];
        *(_OWORD *)v18 = 0;
        v18[32] = 0;
        ++v9[1];
        v19 = unpack_dq(&v41);
        *(_QWORD *)v18 = v19;
        *((_QWORD *)v18 + 1) = unpack_dq(&v41) + v19;
        v20 = unpack_dq(&v41);
        v21 = v41.m128i_u64[1];
        *((_QWORD *)v18 + 2) = v20;
        v22 = v41.m128i_i64[0];
        if ( v41.m128i_i64[0] >= v21 )
        {
          v18[24] = 0;
          v14 = v22;
          v15 = 0;
        }
        else
        {
          v23 = *(_BYTE *)v41.m128i_i64[0];
          v14 = ++v41.m128i_i64[0];
          v18[24] = v23;
          if ( v22 + 1 >= v21 )
          {
            v15 = 0;
          }
          else
          {
            v14 = v22 + 2;
            v15 = *(_BYTE *)(v22 + 1) != 0;
          }
        }
        ++v11;
        v41.m128i_i64[0] = v14;
        v18[32] = v15;
      }
      while ( v11 != v12 );
    }
  }
  return v42 - __readfsqword(0x28u);
}
