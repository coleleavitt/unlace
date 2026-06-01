__int64 __fastcall sub_314020(__m128i *a1, __int64 a2, int a3, __int64 a4)
{
  __int32 v4; // eax
  char v5; // r12
  int v6; // eax
  unsigned int v7; // edx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __int64 i; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  char v18; // r12
  __int64 v19; // rdx
  __int32 v20; // eax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 *v25; // r9
  __int64 v26; // r14
  __int64 *v27; // r15
  unsigned __int64 k; // r14
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // rbp
  unsigned __int64 v36; // rax
  __m128i *v37; // rax
  __m128i v38; // xmm2
  size_t v39; // rbx
  __m128i v40; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 j; // [rsp+10h] [rbp-98h]
  _QWORD *v42; // [rsp+18h] [rbp-90h]
  __int64 v43; // [rsp+20h] [rbp-88h]
  __int64 v44; // [rsp+28h] [rbp-80h]
  __m128i *v45; // [rsp+30h] [rbp-78h]
  _QWORD *v46; // [rsp+38h] [rbp-70h]
  _QWORD v47[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v48; // [rsp+50h] [rbp-58h] BYREF
  __m128i v49; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-40h]

  v4 = a1->m128i_i32[0];
  v45 = a1;
  v43 = a2;
  v50 = __readfsqword(0x28u);
  v5 = a3;
  v40.m128i_i32[0] = v4;
  v6 = v4 & 0xF;
  if ( a3 )
  {
    if ( v6 != 2 )
      return 0;
    v9 = v45[1].m128i_i64[0];
    if ( !v9 )
    {
      v11 = 0;
LABEL_15:
      v40.m128i_i32[0] = *(_DWORD *)v43;
      if ( (v40.m128i_i8[0] & 0xF) != 2 )
        return 0;
LABEL_16:
      v13 = *(_QWORD *)(v43 + 16);
      if ( !v13 )
        goto LABEL_26;
      v14 = 0;
      for ( i = 0; i != v13; ++i )
      {
        v14 += *(_QWORD *)(*(_QWORD *)(v43 + 8) + 16LL * (int)i + 8);
        if ( v14 > 0x10 )
          return 0;
      }
      if ( v11 * v14 <= 0x10 )
      {
LABEL_26:
        v18 = 8 * v5;
        v48 = 0;
        v49 = 0;
        v19 = -1;
        v20 = v45->m128i_i32[1];
        if ( v20 != 8 )
          v19 = (1LL << (8 * (unsigned __int8)v20)) - 1;
        v21 = *(_DWORD *)(v43 + 4);
        v22 = -1;
        if ( v21 != 8 )
          v22 = (1LL << (8 * (unsigned __int8)v21)) - 1;
        v23 = 2 * v9;
        v44 = v19 - (v22 << v18);
        v42 = (_QWORD *)v45->m128i_i64[1];
        v46 = &v42[v23];
        if ( v42 == &v42[v23] )
        {
          v30 = 0;
          v31 = 0;
        }
        else
        {
          do
          {
            for ( j = 0; j < v42[1]; ++j )
            {
              v24 = v44 & (*v42 + j);
              v25 = *(__int64 **)(v43 + 8);
              v26 = 2LL * *(_QWORD *)(v43 + 16);
              v40.m128i_i64[0] = (__int64)&v25[v26];
              if ( v25 != &v25[v26] )
              {
                v27 = v25;
                do
                {
                  for ( k = 0; k < v27[1]; ++k )
                  {
                    v29 = *v27;
                    v47[1] = 1;
                    v47[0] = v24 + ((k + v29) << v18);
                    sub_316BB0(&v48, v47);
                  }
                  v27 += 2;
                }
                while ( (__int64 *)v40.m128i_i64[0] != v27 );
              }
            }
            v42 += 2;
          }
          while ( v46 != v42 );
          v30 = _mm_loadu_si128(&v49);
          v46 = (_QWORD *)v45->m128i_i64[1];
          v31 = v48;
        }
        v32 = v45;
        v33 = v45[1].m128i_i64[1];
        v45->m128i_i64[1] = v31;
        v34 = (__int64)v46;
        v32[1] = v30;
        v49.m128i_i64[1] = v33;
        v48 = v34;
        if ( v34 )
        {
          v49.m128i_i64[0] = 0;
          qfree(v34);
        }
        return 1;
      }
      return 0;
    }
    v10 = v45->m128i_i64[1];
LABEL_10:
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v11 += *(_QWORD *)(v10 + 16LL * (int)v12 + 8);
      if ( v11 > 0x10 )
        return 0;
      if ( v9 == ++v12 )
        goto LABEL_15;
    }
  }
  v7 = 0;
  if ( v6 == 2 )
  {
    v9 = a1[1].m128i_i64[0];
    v40.m128i_i32[0] = *(_DWORD *)v43;
    if ( (v40.m128i_i8[0] & 0xF) != 2 )
    {
      if ( !v9 )
        return v7;
      v10 = v45->m128i_i64[1];
      goto LABEL_10;
    }
    v10 = a1->m128i_i64[1];
    v16 = v10;
    v17 = *(unsigned int *)(v43 + 4);
    if ( (_DWORD)v17 == 8
      || (a4 = (unsigned int)(8 * v17),
          v17 = (1LL << (8 * (unsigned __int8)v17)) - 1,
          v17 >= *(_QWORD *)(v10 + 16 * v9 - 16 + 8) + *(_QWORD *)(v10 + 16 * v9 - 16) - 1LL) )
    {
      v35 = nullptr;
      v36 = *(_QWORD *)(v43 + 16);
      v40 = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
      if ( v36 )
      {
        v39 = 16 * v36;
        v35 = (void *)qalloc_or_throw(16 * v36, v9, v17, a4);
        memcpy(v35, *(const void **)(v43 + 8), v39);
        v16 = v45->m128i_i64[1];
      }
      if ( v16 )
      {
        v45[1].m128i_i64[0] = 0;
        qfree(v16);
      }
      v37 = v45;
      v38 = _mm_load_si128(&v40);
      v45->m128i_i64[1] = (__int64)v35;
      v37[1] = v38;
      return 1;
    }
    v11 = 0;
    if ( !v9 )
      goto LABEL_16;
    goto LABEL_10;
  }
  return v7;
}
