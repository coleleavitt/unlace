unsigned __int64 __fastcall sub_398AD0(__int64 a1)
{
  __int64 v1; // rax
  __m128 v2; // xmm0
  int *v3; // rdx
  __int64 v4; // rax
  int *v5; // rax
  __m128i v6; // xmm0
  int *v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  int v10; // edx
  int v11; // r13d
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // esi
  bool v17; // cf
  int v18; // eax
  __int64 v19; // rbp
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int *v24; // rax
  int *v25; // rbx
  __m128 v26; // xmm0
  int *v27; // rcx
  int v29; // [rsp+8h] [rbp-70h] BYREF
  __m128 v30; // [rsp+10h] [rbp-68h] BYREF
  int *v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  __m128i v33; // [rsp+30h] [rbp-48h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  unsigned __int64 v35; // [rsp+48h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = _mm_loadh_ps((const double *)(a1 + 24));
    v29 = *(_DWORD *)(a1 + 8);
    v3 = *(int **)(a1 + 32);
    v30 = v2;
    v31 = v3;
    *(_QWORD *)(v1 + 8) = &v29;
    v4 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 16) = 0;
    v32 = v4;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 24) = a1 + 8;
    *(_QWORD *)(a1 + 32) = a1 + 8;
    v5 = (int *)v30.m128_u64[1];
  }
  else
  {
    v29 = 0;
    v30.m128_u64[0] = 0;
    v5 = &v29;
    v30.m128_u64[1] = (unsigned __int64)&v29;
    v31 = &v29;
    v32 = 0;
  }
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v7 = (int *)(a1 - 64);
  v34 = *(_QWORD *)(a1 + 64);
  v33 = v6;
  while ( 1 )
  {
    v8 = *((_QWORD *)v5 + 4);
    v9 = *(_QWORD *)(std::_Rb_tree_decrement(&v29) + 32);
    if ( v33.m128i_i64[0] < v8 )
    {
      v11 = v9 - v33.m128i_i32[0];
    }
    else
    {
      v10 = v33.m128i_i32[0] - v8;
      if ( v9 >= v33.m128i_i64[0] )
        v10 = v9 - v8;
      v11 = v10;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
    v13 = std::_Rb_tree_decrement(v7);
    v14 = *((_QWORD *)v7 + 5);
    v15 = *(_QWORD *)(v13 + 32);
    if ( v14 < v12 )
    {
      v18 = v15 - v14;
    }
    else
    {
      v16 = v15 - v12;
      v17 = v15 < v14;
      v18 = v14 - v12;
      if ( !v17 )
        v18 = v16;
    }
    if ( v18 <= v11 )
      break;
    v19 = *((_QWORD *)v7 + 1);
    *((_QWORD *)v7 + 10) = 0;
    *((_QWORD *)v7 + 11) = v7 + 18;
    *((_QWORD *)v7 + 12) = v7 + 18;
    *((_QWORD *)v7 + 13) = 0;
    if ( v19 )
    {
      v20 = *v7;
      *((_QWORD *)v7 + 10) = v19;
      v7[18] = v20;
      *((_QWORD *)v7 + 11) = *((_QWORD *)v7 + 2);
      *((_QWORD *)v7 + 12) = *((_QWORD *)v7 + 3);
      *(_QWORD *)(v19 + 8) = v7 + 18;
      v21 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 1) = 0;
      *((_QWORD *)v7 + 13) = v21;
      *((_QWORD *)v7 + 2) = v7;
      *((_QWORD *)v7 + 3) = v7;
      *((_QWORD *)v7 + 4) = 0;
    }
    v22 = *((_QWORD *)v7 + 5);
    v7 -= 18;
    *((_QWORD *)v7 + 23) = v22;
    v7[48] = v7[30];
    *((_QWORD *)v7 + 25) = *((_QWORD *)v7 + 16);
    v5 = (int *)v30.m128_u64[1];
  }
  v23 = v30.m128_u64[0];
  v24 = v7 + 16;
  v25 = v7 + 18;
  *((_QWORD *)v24 + 2) = 0;
  *((_QWORD *)v24 + 3) = v25;
  *((_QWORD *)v24 + 4) = v25;
  *((_QWORD *)v24 + 5) = 0;
  if ( v23 )
  {
    v26 = _mm_loadh_ps((const double *)&v30.m128_u64[1]);
    v24[2] = v29;
    v27 = v31;
    *((__m128 *)v24 + 1) = v26;
    *((_QWORD *)v24 + 4) = v27;
    *(_QWORD *)(v23 + 8) = v25;
    *((_QWORD *)v24 + 5) = v32;
  }
  *((_QWORD *)v24 + 6) = v33.m128i_i64[0];
  v24[14] = v33.m128i_i32[2];
  *((_QWORD *)v24 + 8) = v34;
  return v35 - __readfsqword(0x28u);
}
