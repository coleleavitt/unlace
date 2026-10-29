__int64 __fastcall sub_B6DEA0(_QWORD *a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  _DWORD *v5; // r15
  _DWORD *v6; // r14
  __int64 v7; // rax
  unsigned int *v8; // rbp
  __int64 v9; // rax
  unsigned int *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r14d
  __m128i v27; // xmm0
  unsigned int v28; // r15d
  __int64 result; // rax
  _QWORD *v30; // r15
  bool v31; // zf
  __int64 v32; // [rsp+0h] [rbp-68h]
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+0h] [rbp-68h]
  __int64 v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+0h] [rbp-68h]
  unsigned int *v37; // [rsp+0h] [rbp-68h]
  int v38[2]; // [rsp+8h] [rbp-60h]
  int v39; // [rsp+8h] [rbp-60h]
  int v40; // [rsp+8h] [rbp-60h]
  int v41; // [rsp+8h] [rbp-60h]
  int v42; // [rsp+8h] [rbp-60h]
  int v43[2]; // [rsp+8h] [rbp-60h]
  int v44[2]; // [rsp+10h] [rbp-58h]
  int v45; // [rsp+10h] [rbp-58h]
  int v46; // [rsp+10h] [rbp-58h]
  int v47; // [rsp+10h] [rbp-58h]
  int v48; // [rsp+10h] [rbp-58h]
  int v49[2]; // [rsp+10h] [rbp-58h]
  __int64 v50; // [rsp+18h] [rbp-50h]
  __int64 v51; // [rsp+18h] [rbp-50h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+18h] [rbp-50h]
  int v55[2]; // [rsp+20h] [rbp-48h] BYREF
  int v56[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v57; // [rsp+30h] [rbp-38h]

  v5 = *(_DWORD **)(a2 + 40);
  v6 = *(_DWORD **)(a2 + 48);
  v32 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)v38 = a1[13];
  v7 = sub_8E7230((__int64)a1, (_DWORD *)a2, v5);
  v8 = (unsigned int *)v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  *(_QWORD *)v44 = a1[13];
  v9 = sub_8E7230((__int64)a1, (_DWORD *)a2, v6);
  v10 = (unsigned int *)v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_B68280((__int64)a1, (unsigned int *)a2, 1, 0, 0, a3, *(double *)a4.m128_u64, a5);
  sub_B6DE20(a1, v32, 1u, a3, a4, a5, v11, v12, v13, v32, v38[0], v44[0], v50, *(__int64 *)v55, *(__int64 *)v56, v57);
  sub_B6DE20(a1, (__int64)v5, 0, a3, a4, a5, v14, v15, v16, v33, v39, v45, v51, *(__int64 *)v55, *(__int64 *)v56, v57);
  sub_B6DE20(a1, (__int64)v6, 0, a3, a4, a5, v17, v18, v19, v34, v40, v46, v52, *(__int64 *)v55, *(__int64 *)v56, v57);
  sub_B6DE20(a1, (__int64)v8, 1u, a3, a4, a5, v20, v21, v22, v35, v41, v47, v53, *(__int64 *)v55, *(__int64 *)v56, v57);
  sub_B6DE20(a1, (__int64)v10, 1u, a3, a4, a5, v23, v24, v25, v36, v42, v48, v54, *(__int64 *)v55, *(__int64 *)v56, v57);
  v26 = sub_B645B0((__int64)a1, v37);
  v27 = _mm_cvtsi32_si128(sub_B645B0((__int64)a1, v8));
  v28 = sub_B645B0((__int64)a1, v10);
  *(_QWORD *)v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26 ^ 1), v27).m128i_u64[0];
  sub_B6BA00((__int64)a1, (unsigned int *)v55);
  *(_QWORD *)v56 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v28)).m128i_u64[0];
  sub_B6BA00((__int64)a1, (unsigned int *)v56);
  result = sub_8E7030((__int64)a1);
  if ( (_DWORD)result )
  {
    v30 = sub_918DC0(a1[936], a2, (__int64)v8, (__int64)v10);
    (*(void (__fastcall **)(_QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)a1[936] + 24LL))(
      a1[936],
      *(_QWORD *)(a1[1105] + 8LL * (v26 >> 1)),
      (v26 & 1) == 0,
      v30);
    (*(void (__fastcall **)(_QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)a1[936] + 24LL))(
      a1[936],
      *(_QWORD *)(a1[1105] + 8LL * (v26 >> 1)),
      (((unsigned __int8)v26 ^ 1) & 1) == 0,
      v30);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)a1[936] + 16LL))(a1[936], a2, v30);
  }
  if ( v10 )
  {
    v31 = v10[2]-- == 1;
    if ( v31 )
      result = sub_15D7BC0(*(_QWORD *)v49, v10);
  }
  if ( v8 )
  {
    v31 = v8[2]-- == 1;
    if ( v31 )
      return sub_15D7BC0(*(_QWORD *)v43, v8);
  }
  return result;
}

