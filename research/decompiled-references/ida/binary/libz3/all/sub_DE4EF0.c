__int64 __fastcall sub_DE4EF0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  int v3; // edx
  int v4; // ecx
  _DWORD *v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // ecx
  int v20; // esi
  __m128 v21; // xmm0
  __int64 v22; // r12
  __int64 v23; // rax
  int v24; // ecx
  int v25; // esi
  __m128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rax
  int v30; // ecx
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // [rsp+10h] [rbp-78h] BYREF
  __int64 v42; // [rsp+18h] [rbp-70h] BYREF
  __int64 v43; // [rsp+20h] [rbp-68h] BYREF
  __int64 v44; // [rsp+28h] [rbp-60h] BYREF
  __m128i v45; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+40h] [rbp-48h]

  v1 = sub_17E9C90(*(_QWORD *)(a1 + 8), 40);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && (v3 = *(_DWORD *)(v2 - 4)) != 0 )
  {
    v40 = (unsigned int)(v3 - 1);
    v4 = *(_DWORD *)(v2 + 4 * v40);
    *(_DWORD *)(v2 - 4) = v40;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v4 + 1;
  }
  *(_DWORD *)(v1 + 8) = v4;
  *(_QWORD *)(v1 + 12) = 1;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)v1 = off_1C5AAF8;
  *(_DWORD *)(v1 + 32) = 0;
  v45.m128i_i32[2] = 0;
  v5 = sub_DE2E10(a1, (_DWORD *)v1);
  sub_180C5A0(&v43, "head");
  v6 = sub_17E9C90(*(_QWORD *)(a1 + 8), 56);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 && (v8 = *(_DWORD *)(v7 - 4)) != 0 )
  {
    v39 = (unsigned int)(v8 - 1);
    v9 = *(_DWORD *)(v7 + 4 * v39);
    *(_DWORD *)(v7 - 4) = v39;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v9 + 1;
  }
  v10 = v43;
  *(_DWORD *)(v6 + 8) = v9;
  *(_QWORD *)(v6 + 12) = 1;
  *(_QWORD *)v6 = off_1C5ADA8;
  *(_QWORD *)(v6 + 24) = v10;
  *(_DWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = v5;
  *(_QWORD *)(v6 + 48) = 0;
  if ( v5 )
    ++v5[4];
  sub_180C5A0(&v44, "tail");
  v11 = sub_17E9C90(*(_QWORD *)(a1 + 8), 56);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 && (v13 = *(_DWORD *)(v12 - 4)) != 0 )
  {
    v38 = (unsigned int)(v13 - 1);
    v14 = *(_DWORD *)(v12 + 4 * v38);
    *(_DWORD *)(v12 - 4) = v38;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v14 + 1;
  }
  v15 = v44;
  v45.m128i_i32[0] = 1;
  v16 = _mm_load_si128(&v45);
  *(_DWORD *)(v11 + 8) = v14;
  *(_QWORD *)(v11 + 24) = v15;
  *(_QWORD *)v11 = off_1C5ADA8;
  *(_QWORD *)(v11 + 12) = 1;
  v46 = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(__m128i *)(v11 + 32) = v16;
  if ( !_mm_cvtsi128_si32(v16) && v45.m128i_i64[1] )
    ++*(_DWORD *)(v45.m128i_i64[1] + 16);
  sub_180C5A0(&v42, "is-nil");
  sub_180C5A0(&v41, "nil");
  v17 = sub_17E9C90(*(_QWORD *)(a1 + 8), 48);
  v18 = *(_QWORD *)(a1 + 24);
  if ( v18 && (v19 = *(_DWORD *)(v18 - 4)) != 0 )
  {
    v37 = (unsigned int)(v19 - 1);
    v20 = *(_DWORD *)(v18 + 4 * v37);
    *(_DWORD *)(v18 - 4) = v37;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v20 + 1;
  }
  *(_DWORD *)(v17 + 8) = v20;
  *(_QWORD *)(v17 + 12) = 1;
  v21 = _mm_loadh_ps((const double *)&v42);
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)v17 = off_1C5ADF8;
  *(__m128 *)(v17 + 24) = v21;
  sub_180C5A0(&v44, "is-insert");
  sub_180C5A0(&v43, "insert");
  v22 = sub_17E9C90(*(_QWORD *)(a1 + 8), 48);
  v23 = *(_QWORD *)(a1 + 24);
  if ( v23 && (v24 = *(_DWORD *)(v23 - 4)) != 0 )
  {
    v36 = (unsigned int)(v24 - 1);
    v25 = *(_DWORD *)(v23 + 4 * v36);
    *(_DWORD *)(v23 - 4) = v36;
  }
  else
  {
    v25 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v25 + 1;
  }
  v26 = _mm_loadh_ps((const double *)&v44);
  *(_DWORD *)(v22 + 8) = v25;
  *(_QWORD *)v22 = off_1C5ADF8;
  *(_QWORD *)(v22 + 12) = 1;
  *(_QWORD *)(v22 + 40) = 0;
  *(__m128 *)(v22 + 24) = v26;
  v27 = sub_186B270(0x18u);
  *(_QWORD *)v27 = 2;
  *(_QWORD *)(v22 + 40) = v27 + 8;
  *(_QWORD *)(v27 + 8) = v6;
  *(_QWORD *)(v27 + 16) = v11;
  *(_DWORD *)(v27 + 4) = 2;
  ++*(_DWORD *)(v6 + 16);
  ++*(_DWORD *)(v11 + 16);
  sub_180C5A0(&v44, "List");
  v28 = sub_17E9C90(*(_QWORD *)(a1 + 8), 64);
  v29 = *(_QWORD *)(a1 + 24);
  if ( v29 && (v30 = *(_DWORD *)(v29 - 4)) != 0 )
  {
    v35 = (unsigned int)(v30 - 1);
    v31 = *(_DWORD *)(v29 + 4 * v35);
    *(_DWORD *)(v29 - 4) = v35;
  }
  else
  {
    v31 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v31 + 1;
  }
  v32 = v44;
  *(_DWORD *)(v28 + 8) = v31;
  *(_QWORD *)(v28 + 12) = 1;
  *(_QWORD *)(v28 + 24) = v32;
  *(_DWORD *)(v28 + 32) = 0;
  *(_QWORD *)v28 = off_1C5AE48;
  *(_OWORD *)(v28 + 40) = 0;
  v33 = sub_186B270(0x18u);
  *(_QWORD *)v33 = 2;
  *(_QWORD *)(v28 + 48) = v33 + 8;
  *(_QWORD *)(v33 + 8) = v17;
  *(_QWORD *)(v33 + 16) = v22;
  *(_DWORD *)(v33 + 4) = 2;
  *(_QWORD *)(v28 + 56) = 0;
  ++*(_DWORD *)(v17 + 16);
  ++*(_DWORD *)(v22 + 16);
  *(_QWORD *)(a1 + 88) = v28;
  ++*(_DWORD *)(v28 + 16);
  return sub_DE4A10(v28, a1);
}

