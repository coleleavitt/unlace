unsigned __int64 __fastcall sub_399630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  void *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __m128 v13; // xmm0
  int *v14; // rcx
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // esi
  int v23; // r13d
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rbx
  void *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rbx
  void *v31; // rdi
  unsigned __int64 v32; // rcx
  __m128 v33; // xmm0
  int *v34; // rsi
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rcx
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+8h] [rbp-A0h]
  int v44; // [rsp+28h] [rbp-80h] BYREF
  __m128 v45; // [rsp+30h] [rbp-78h] BYREF
  int *v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+48h] [rbp-60h]
  __m128i v48; // [rsp+50h] [rbp-58h]
  __int64 v49; // [rsp+60h] [rbp-48h]
  unsigned __int64 v50; // [rsp+68h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v40 = (a3 - 1) / 2;
  if ( a2 >= v40 )
  {
    v6 = a2;
    v9 = a1 + 72 * a2;
  }
  else
  {
    v6 = a2;
    do
    {
      v7 = a1 + 72 * v6;
      v6 = 2 * (v6 + 1) - sub_3995A0(a1 + 144 * (v6 + 1), a1 + 144 * (v6 + 1) - 72);
      v8 = *(_QWORD *)(v7 + 16);
      v9 = a1 + 72 * v6;
      while ( v8 )
      {
        sub_398830(*(_QWORD **)(v8 + 24));
        v10 = (void *)v8;
        v8 = *(_QWORD *)(v8 + 16);
        operator delete(v10, 0x30u);
      }
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = v7 + 8;
      *(_QWORD *)(v7 + 32) = v7 + 8;
      *(_QWORD *)(v7 + 40) = 0;
      if ( *(_QWORD *)(v9 + 16) )
      {
        *(_DWORD *)(v7 + 8) = *(_DWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v7 + 16) = v11;
        *(_QWORD *)(v7 + 24) = *(_QWORD *)(v9 + 24);
        *(_QWORD *)(v7 + 32) = *(_QWORD *)(v9 + 32);
        *(_QWORD *)(v11 + 8) = v7 + 8;
        *(_QWORD *)(v7 + 40) = *(_QWORD *)(v9 + 40);
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 24) = v9 + 8;
        *(_QWORD *)(v9 + 32) = v9 + 8;
        *(_QWORD *)(v9 + 40) = 0;
      }
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v9 + 56);
      *(_QWORD *)(v7 + 64) = *(_QWORD *)(v9 + 64);
    }
    while ( v40 > v6 );
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v6 )
  {
    v36 = v6 + 1;
    v37 = 2 * (v6 + 1);
    v38 = a1 + 8 * (v37 + 16 * v36) - 72;
    sub_398830(*(_QWORD **)(v9 + 16));
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = v9 + 8;
    *(_QWORD *)(v9 + 32) = v9 + 8;
    *(_QWORD *)(v9 + 40) = 0;
    if ( *(_QWORD *)(v38 + 16) )
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v38 + 8);
      v39 = *(_QWORD *)(v38 + 16);
      *(_QWORD *)(v9 + 16) = v39;
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v38 + 24);
      *(_QWORD *)(v9 + 32) = *(_QWORD *)(v38 + 32);
      *(_QWORD *)(v39 + 8) = v9 + 8;
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(v38 + 40);
      *(_QWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 24) = v38 + 8;
      *(_QWORD *)(v38 + 32) = v38 + 8;
      *(_QWORD *)(v38 + 40) = 0;
    }
    v6 = v37 - 1;
    *(_QWORD *)(v9 + 48) = *(_QWORD *)(v38 + 48);
    *(_DWORD *)(v9 + 56) = *(_DWORD *)(v38 + 56);
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(v38 + 64);
    v9 = a1 + 72 * v6;
  }
  v12 = *(_QWORD *)(a4 + 16);
  if ( v12 )
  {
    v13 = _mm_loadh_ps((const double *)(a4 + 24));
    v44 = *(_DWORD *)(a4 + 8);
    v14 = *(int **)(a4 + 32);
    v45 = v13;
    v46 = v14;
    *(_QWORD *)(v12 + 8) = &v44;
    v15 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 16) = 0;
    v47 = v15;
    *(_QWORD *)(a4 + 24) = a4 + 8;
    *(_QWORD *)(a4 + 32) = a4 + 8;
    *(_QWORD *)(a4 + 40) = 0;
  }
  else
  {
    v44 = 0;
    v45.m128_u64[0] = 0;
    v45.m128_u64[1] = (unsigned __int64)&v44;
    v46 = &v44;
    v47 = 0;
  }
  v16 = _mm_loadu_si128((const __m128i *)(a4 + 48));
  v49 = *(_QWORD *)(a4 + 64);
  v48 = v16;
  v17 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v18 = a1 + 72 * v17;
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 32LL);
      v41 = v18 + 8;
      v20 = *(_QWORD *)(std::_Rb_tree_decrement(v18 + 8) + 32);
      v21 = *(_QWORD *)(v18 + 48);
      if ( v21 < v19 )
      {
        v23 = v20 - v21;
      }
      else
      {
        v22 = v21 - v19;
        if ( v20 >= v21 )
          v22 = v20 - v19;
        v23 = v22;
      }
      v24 = *(_QWORD *)(v45.m128_u64[1] + 32);
      v25 = *(_QWORD *)(std::_Rb_tree_decrement(&v44) + 32);
      v26 = v25 - v48.m128i_i32[0];
      if ( v48.m128i_i64[0] >= v24 )
      {
        v26 = v48.m128i_i32[0] - v24;
        if ( v25 >= v48.m128i_i64[0] )
          v26 = v25 - v24;
      }
      v9 = a1 + 72 * v6;
      v27 = *(_QWORD *)(v9 + 16);
      if ( v26 <= v23 )
        break;
      while ( v27 )
      {
        sub_398830(*(_QWORD **)(v27 + 24));
        v28 = (void *)v27;
        v27 = *(_QWORD *)(v27 + 16);
        operator delete(v28, 0x30u);
      }
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = v9 + 8;
      *(_QWORD *)(v9 + 32) = v9 + 8;
      *(_QWORD *)(v9 + 40) = 0;
      if ( *(_QWORD *)(v18 + 16) )
      {
        *(_DWORD *)(v9 + 8) = *(_DWORD *)(v18 + 8);
        v29 = *(_QWORD *)(v18 + 16);
        *(_QWORD *)(v9 + 16) = v29;
        *(_QWORD *)(v9 + 24) = *(_QWORD *)(v18 + 24);
        *(_QWORD *)(v9 + 32) = *(_QWORD *)(v18 + 32);
        *(_QWORD *)(v29 + 8) = v9 + 8;
        *(_QWORD *)(v9 + 40) = *(_QWORD *)(v18 + 40);
        *(_QWORD *)(v18 + 16) = 0;
        *(_QWORD *)(v18 + 24) = v41;
        *(_QWORD *)(v18 + 32) = v41;
        *(_QWORD *)(v18 + 40) = 0;
      }
      v6 = v17;
      *(_QWORD *)(v9 + 48) = *(_QWORD *)(v18 + 48);
      *(_DWORD *)(v9 + 56) = *(_DWORD *)(v18 + 56);
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(v18 + 64);
      if ( a2 >= v17 )
      {
        v9 = a1 + 72 * v17;
        break;
      }
      v17 = (v17 - 1) / 2;
    }
  }
  v30 = *(_QWORD *)(v9 + 16);
  while ( v30 )
  {
    sub_398830(*(_QWORD **)(v30 + 24));
    v31 = (void *)v30;
    v30 = *(_QWORD *)(v30 + 16);
    operator delete(v31, 0x30u);
  }
  v32 = v45.m128_u64[0];
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = v9 + 8;
  *(_QWORD *)(v9 + 32) = v9 + 8;
  *(_QWORD *)(v9 + 40) = 0;
  if ( v32 )
  {
    v33 = _mm_loadh_ps((const double *)&v45.m128_u64[1]);
    *(_DWORD *)(v9 + 8) = v44;
    v34 = v46;
    *(__m128 *)(v9 + 16) = v33;
    *(_QWORD *)(v9 + 32) = v34;
    *(_QWORD *)(v32 + 8) = v9 + 8;
    *(_QWORD *)(v9 + 40) = v47;
  }
  *(_QWORD *)(v9 + 48) = v48.m128i_i64[0];
  *(_DWORD *)(v9 + 56) = v48.m128i_i32[2];
  *(_QWORD *)(v9 + 64) = v49;
  return v50 - __readfsqword(0x28u);
}
