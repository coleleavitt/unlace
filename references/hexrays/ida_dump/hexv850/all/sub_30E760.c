__int64 __fastcall sub_30E760(__m128i *a1, __int64 a2, int a3)
{
  __int32 v3; // eax
  char v4; // r12
  int v5; // eax
  unsigned int v6; // edx
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 i; // rax
  __int64 v15; // r8
  int v16; // edx
  char v17; // r12
  __int64 v18; // rdx
  __int32 v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 *v24; // r9
  __int64 v25; // r14
  __int64 *v26; // r15
  unsigned __int64 k; // r14
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i *v31; // rsi
  __int64 v32; // rdx
  _QWORD *v33; // rax
  void *v34; // rbp
  unsigned __int64 v35; // rax
  __m128i *v36; // rax
  __m128i v37; // xmm2
  size_t v38; // rbx
  __m128i v39; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 j; // [rsp+10h] [rbp-98h]
  _QWORD *v41; // [rsp+18h] [rbp-90h]
  __int64 v42; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+28h] [rbp-80h]
  __m128i *v44; // [rsp+30h] [rbp-78h]
  _QWORD *v45; // [rsp+38h] [rbp-70h]
  _QWORD v46[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v47; // [rsp+50h] [rbp-58h] BYREF
  __m128i v48; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v3 = a1->m128i_i32[0];
  v44 = a1;
  v42 = a2;
  v49 = __readfsqword(0x28u);
  v4 = a3;
  v39.m128i_i32[0] = v3;
  v5 = v3 & 0xF;
  if ( a3 )
  {
    if ( v5 != 2 )
      return 0;
    v8 = v44[1].m128i_i64[0];
    if ( !v8 )
    {
      v10 = 0;
LABEL_15:
      v39.m128i_i32[0] = *(_DWORD *)v42;
      if ( (v39.m128i_i8[0] & 0xF) != 2 )
        return 0;
LABEL_16:
      v12 = *(_QWORD *)(v42 + 16);
      if ( !v12 )
        goto LABEL_26;
      v13 = 0;
      for ( i = 0; i != v12; ++i )
      {
        v13 += *(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL * (int)i + 8);
        if ( v13 > 0x10 )
          return 0;
      }
      if ( v10 * v13 <= 0x10 )
      {
LABEL_26:
        v17 = 8 * v4;
        v47 = nullptr;
        v48 = 0;
        v18 = -1;
        v19 = v44->m128i_i32[1];
        if ( v19 != 8 )
          v18 = (1LL << (8 * (unsigned __int8)v19)) - 1;
        v20 = *(_DWORD *)(v42 + 4);
        v21 = -1;
        if ( v20 != 8 )
          v21 = (1LL << (8 * (unsigned __int8)v20)) - 1;
        v22 = 2 * v8;
        v43 = v18 - (v21 << v17);
        v41 = (_QWORD *)v44->m128i_i64[1];
        v45 = &v41[v22];
        if ( v41 == &v41[v22] )
        {
          v29 = 0;
          v30 = 0;
        }
        else
        {
          do
          {
            for ( j = 0; j < v41[1]; ++j )
            {
              v23 = v43 & (*v41 + j);
              v24 = *(__int64 **)(v42 + 8);
              v25 = 2LL * *(_QWORD *)(v42 + 16);
              v39.m128i_i64[0] = (__int64)&v24[v25];
              if ( v24 != &v24[v25] )
              {
                v26 = v24;
                do
                {
                  for ( k = 0; k < v26[1]; ++k )
                  {
                    v28 = *v26;
                    v46[1] = 1;
                    v46[0] = v23 + ((k + v28) << v17);
                    sub_3112F0(&v47, v46);
                  }
                  v26 += 2;
                }
                while ( (__int64 *)v39.m128i_i64[0] != v26 );
              }
            }
            v41 += 2;
          }
          while ( v45 != v41 );
          v29 = _mm_loadu_si128(&v48);
          v45 = (_QWORD *)v44->m128i_i64[1];
          v30 = (__int64)v47;
        }
        v31 = v44;
        v32 = v44[1].m128i_i64[1];
        v44->m128i_i64[1] = v30;
        v33 = v45;
        v31[1] = v29;
        v48.m128i_i64[1] = v32;
        v47 = v33;
        if ( v33 )
        {
          v48.m128i_i64[0] = 0;
          qfree(v33);
        }
        return 1;
      }
      return 0;
    }
    v9 = v44->m128i_i64[1];
LABEL_10:
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v10 += *(_QWORD *)(v9 + 16LL * (int)v11 + 8);
      if ( v10 > 0x10 )
        return 0;
      if ( v8 == ++v11 )
        goto LABEL_15;
    }
  }
  v6 = 0;
  if ( v5 == 2 )
  {
    v8 = a1[1].m128i_i64[0];
    v39.m128i_i32[0] = *(_DWORD *)v42;
    if ( (v39.m128i_i8[0] & 0xF) != 2 )
    {
      if ( !v8 )
        return v6;
      v9 = v44->m128i_i64[1];
      goto LABEL_10;
    }
    v9 = a1->m128i_i64[1];
    v15 = v9;
    v16 = *(_DWORD *)(v42 + 4);
    if ( v16 == 8
      || (1LL << (8 * (unsigned __int8)v16)) - 1 >= (unsigned __int64)(*(_QWORD *)(v9 + 16 * v8 - 16 + 8)
                                                                     + *(_QWORD *)(v9 + 16 * v8 - 16)
                                                                     - 1LL) )
    {
      v34 = nullptr;
      v35 = *(_QWORD *)(v42 + 16);
      v39 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
      if ( v35 )
      {
        v38 = 16 * v35;
        v34 = (void *)qalloc_or_throw(16 * v35);
        memcpy(v34, *(const void **)(v42 + 8), v38);
        v15 = v44->m128i_i64[1];
      }
      if ( v15 )
      {
        v44[1].m128i_i64[0] = 0;
        qfree(v15);
      }
      v36 = v44;
      v37 = _mm_load_si128(&v39);
      v44->m128i_i64[1] = (__int64)v34;
      v36[1] = v37;
      return 1;
    }
    v10 = 0;
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_10;
  }
  return v6;
}
