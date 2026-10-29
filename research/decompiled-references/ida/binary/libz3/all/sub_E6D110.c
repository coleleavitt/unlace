__int64 __fastcall sub_E6D110(const __m128i *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  bool v5; // zf
  _QWORD *v7; // rax
  unsigned int v9; // r15d
  __int64 *v10; // rdi
  __int64 v12; // rax
  void *v13; // rdi
  bool v14; // cc
  unsigned int v15; // r13d
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // r14d
  _QWORD *v27; // rdi
  __int64 v29; // rsi
  _DWORD *v30; // [rsp+10h] [rbp-110h]
  __int64 v31; // [rsp+18h] [rbp-108h]
  int v33[2]; // [rsp+28h] [rbp-F8h] BYREF
  _DWORD *v34; // [rsp+30h] [rbp-F0h] BYREF
  int v35[2]; // [rsp+38h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-D8h]
  __m128 v38; // [rsp+50h] [rbp-D0h] BYREF
  __m128i v39; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-B0h]
  __int64 v41; // [rsp+78h] [rbp-A8h]
  __int64 v42; // [rsp+80h] [rbp-A0h]
  __int64 v43; // [rsp+88h] [rbp-98h]
  __int64 v44; // [rsp+90h] [rbp-90h]
  __int64 v45; // [rsp+98h] [rbp-88h]
  __int64 v46; // [rsp+A0h] [rbp-80h]
  __int64 v47; // [rsp+A8h] [rbp-78h]
  __int64 *v48; // [rsp+B0h] [rbp-70h]
  __int64 v49; // [rsp+B8h] [rbp-68h]
  __int64 v50; // [rsp+C0h] [rbp-60h]
  __int64 v51; // [rsp+C8h] [rbp-58h]
  int v52; // [rsp+D0h] [rbp-50h]
  __int64 v53; // [rsp+D8h] [rbp-48h]
  __int64 v54; // [rsp+E0h] [rbp-40h] BYREF

  v5 = *(_WORD *)(a4 + 4) == 0;
  *(_QWORD *)v33 = a5;
  if ( !v5 )
    return 0;
  v7 = *(_QWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
  if ( !v7 )
    return 0;
  v9 = 0;
  if ( *v7 != (a1->m128i_u32[2] | 0x100000000LL) )
    return v9;
  v10 = (__int64 *)a1[1].m128i_i64[1];
  v12 = *v10;
  v30 = *(_DWORD **)(a4 + 32);
  v34 = v30;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v12 + 16))(v10);
  if ( !(_BYTE)v9 )
    return 0;
  v13 = (void *)a1[3].m128i_i64[1];
  if ( v13 )
    memset(v13, 0, 4LL * a1[3].m128i_u32[1]);
  v14 = *(_DWORD *)(a4 + 24) <= 1u;
  a1[3].m128i_i32[0] = 0;
  v15 = 1;
  v31 = (__int64)&a1[2].m128i_i64[1];
  if ( !v14 )
  {
    do
    {
      v16 = v15++;
      sub_E65CC0(v31, *(_DWORD **)(a4 + 8 * v16 + 32));
    }
    while ( v15 < *(_DWORD *)(a4 + 24) );
  }
  sub_E65CC0(v31, *(_DWORD **)v33);
  if ( *v30 < a1[3].m128i_i32[0] && (*(_DWORD *)(a1[3].m128i_i64[1] + 4LL * (*v30 >> 5)) & (1 << *v30)) != 0 )
    return 0;
  *(_QWORD *)v35 = 0;
  sub_E67160((unsigned int **)v35, &v34);
  v17 = *(_DWORD *)(a4 + 24);
  v18 = *(_QWORD *)v35;
  if ( v17 != 1 )
  {
    v19 = (_QWORD *)(a4 + 40);
    v20 = a4 + 8LL * (unsigned int)(v17 - 2) + 48;
    do
    {
      *(_QWORD *)v35 = v18;
      sub_E67160((unsigned int **)v35, v19++);
      v18 = *(_QWORD *)v35;
    }
    while ( v19 != (_QWORD *)v20 );
  }
  *(_QWORD *)v35 = v18;
  sub_E67160((unsigned int **)v35, v33);
  v21 = *(_QWORD *)v35;
  v22 = sub_15DCAD0(a1[1].m128i_i64[0], v35[0], 0);
  v23 = _mm_loadl_epi64(a1);
  v52 = 1065353216;
  v48 = &v54;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v49 = 1;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v39 = _mm_unpacklo_epi64(v23, v23);
  v41 = v23.m128i_i64[0];
  v46 = v23.m128i_i64[0];
  sub_14EA0D0(&v39, v30, v22);
  v24 = a1->m128i_i64[0];
  v36 = 0;
  v25 = *(_QWORD *)(a2 + 8);
  v37 = v24;
  if ( v25 )
  {
    v26 = 0;
    do
    {
      if ( v26 >= *(_DWORD *)(v25 - 4) )
        break;
      v27 = (_QWORD *)(8LL * v26 + v25);
      if ( a3 == v26 )
      {
        v29 = *(_QWORD *)(a1->m128i_i64[0] + 856);
        v38 = _mm_loadh_ps((const double *)a2);
        sub_E65C70((__int64 **)&v38, v29);
      }
      else
      {
        sub_14EA2A0(&v39, *v27, &v36);
        v38 = _mm_loadh_ps((const double *)a2);
        sub_E65C70((__int64 **)&v38, v36);
      }
      ++v26;
      v25 = *(_QWORD *)(a2 + 8);
    }
    while ( v25 );
    v25 = v36;
    v24 = v37;
  }
  sub_E65BC0(v25, v24);
  sub_268600((__int64)&v39);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  return v9;
}

