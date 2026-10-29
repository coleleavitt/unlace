__int64 __fastcall sub_61A810(__m128i *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbp
  unsigned int *v21; // r12
  __int64 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // [rsp+20h] [rbp-98h] BYREF
  __m128i v29; // [rsp+30h] [rbp-88h] BYREF
  __m128i v30; // [rsp+40h] [rbp-78h] BYREF
  __m128i v31; // [rsp+50h] [rbp-68h] BYREF
  __m128i v32; // [rsp+60h] [rbp-58h] BYREF
  __m128i v33[4]; // [rsp+70h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 88);
  sub_639C80(&v28, v4, v3, a1->m128i_i64[0]);
  if ( (unsigned __int8)sub_619180(
                          (__int64)a1,
                          v4,
                          v5,
                          v6,
                          v7,
                          v8,
                          (__int128)_mm_load_si128(&v28),
                          (__int128)_mm_load_si128(&v29)) )
    return 1;
  v11 = *(_QWORD *)(a2 + 96);
  if ( v11 )
  {
    v12 = (__int64 *)(v11 + 16);
    v13 = 8LL * *(unsigned int *)(v11 + 8);
    v14 = v11 + v13 + 16;
    if ( v13 )
    {
      do
      {
        v15 = *v12;
        sub_639160(&v32, *v12, a1->m128i_i64[0], *(__int64 *)((char *)a1[5].m128i_i64 + 4), 1, v9);
        if ( (unsigned __int8)sub_619180(
                                (__int64)a1,
                                v15,
                                v16,
                                v17,
                                v18,
                                v19,
                                (__int128)_mm_load_si128(&v32),
                                (__int128)_mm_load_si128(v33)) )
          return 1;
        ++v12;
      }
      while ( (__int64 *)v14 != v12 );
    }
  }
  v20 = *(__int64 **)(a2 + 104);
  v21 = *(unsigned int **)(a2 + 120);
  v22 = &v20[*(unsigned int *)(a2 + 112)];
  if ( v22 != v20 )
  {
    while ( 1 )
    {
      v23 = *v20;
      sub_639C30(&v30, *v20, *v21, a1->m128i_i64[0]);
      if ( (unsigned __int8)sub_619180(
                              (__int64)a1,
                              v23,
                              v24,
                              v25,
                              v26,
                              v27,
                              (__int128)_mm_load_si128(&v30),
                              (__int128)_mm_load_si128(&v31)) )
        break;
      ++v20;
      ++v21;
      if ( v20 == v22 )
        return sub_618260(a1, a2);
    }
    return 1;
  }
  return sub_618260(a1, a2);
}

