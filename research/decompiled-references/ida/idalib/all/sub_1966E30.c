__int64 __fastcall sub_1966E30(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbp
  unsigned __int16 *v11; // r12
  __int64 v12; // rax
  unsigned __int16 *v14; // rsi
  __int32 v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // r13d
  const __m128i *v27; // rax
  __int32 v28; // edx
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int16 v32; // dx
  int v33; // esi
  int v34; // ebp
  __m128 v35; // xmm0
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r12
  __int64 v41; // rax
  int v42; // edx
  int v43; // esi
  int v44; // r9d
  __int64 v45; // rdi
  __int8 v46; // dl
  __int64 v47; // [rsp+0h] [rbp-D8h]
  const __m128i *v48; // [rsp+0h] [rbp-D8h]
  __m128i v49; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+20h] [rbp-B8h]
  __m128i v51; // [rsp+30h] [rbp-A8h]
  __int64 v52; // [rsp+40h] [rbp-98h]
  const __m128i *v53; // [rsp+50h] [rbp-88h] BYREF
  __int32 v54; // [rsp+58h] [rbp-80h]
  __int64 v55; // [rsp+60h] [rbp-78h]
  __int64 v56; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-68h]
  __int8 v58; // [rsp+74h] [rbp-64h]
  char v59; // [rsp+78h] [rbp-60h]
  __int16 v60; // [rsp+80h] [rbp-58h]
  __m128 v61; // [rsp+88h] [rbp-50h]
  char v62; // [rsp+98h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v10 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 8), 0, a3, a4, a6, a7, a8);
  if ( v10 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v10 )
    sub_1B28470(*(_QWORD *)(*a1 + 760), *(unsigned int *)(a2 + 4), v10 & 0xFFFFFFFFFFFFFFFELL);
  v11 = *(unsigned __int16 **)(a2 + 24);
  v12 = sub_EEE130(a2);
  sub_194FF90((__int64)&v49, a1, *(_DWORD *)(a2 + 4), v12, v11, 0, a3, a4);
  if ( (_BYTE)v50 )
    return 1;
  v14 = *(unsigned __int16 **)(a2 + 32);
  v15 = v49.m128i_i32[2];
  v16 = sub_1944E10(a1, v14, a3, a4);
  if ( v16 == 1 )
    return 1;
  v19 = 0;
  v20 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *a1;
  v22 = v20;
  if ( v20 )
    v19 = (unsigned int)sub_C00A40(v20, (__int64)v14, 0, v17, v18);
  v23 = sub_19B4A30(v21, v22, v19, 1, 0, 0);
  v24 = *(_QWORD *)(a2 + 32);
  v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v26 = v25;
  if ( v24 )
  {
    if ( !v25 )
      return 1;
  }
  v27 = *(const __m128i **)(*a1 + 744);
  v28 = v27[2].m128i_i32[0];
  v29 = v27[4].m128i_i8[0] == 0;
  v53 = v27;
  v54 = v28;
  v30 = v27[2].m128i_i64[1];
  v59 = 0;
  v55 = v30;
  if ( v29 )
  {
    LODWORD(v31) = (_DWORD)v27;
  }
  else
  {
    v57 = v27[3].m128i_u32[2];
    if ( v57 > 0x40 )
    {
      v48 = v27;
      sub_2205510(&v56);
      v24 = *(_QWORD *)(a2 + 32);
      v27 = v48;
      v31 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      LODWORD(v31) = (_DWORD)v27;
      v56 = v27[3].m128i_i64[0];
    }
    v46 = v27[3].m128i_i8[12];
    v59 = 1;
    v58 = v46;
  }
  v32 = v27[4].m128i_i16[4];
  v33 = *(_DWORD *)(a2 + 4);
  v34 = v10 & 0xFFFFFFFE;
  v35 = (__m128)_mm_loadu_si128(v27 + 5);
  v62 = 1;
  v60 = v32;
  v36 = *(_QWORD *)(a2 + 24);
  v61 = v35;
  sub_1AAA420(v31, v33, *(_QWORD *)(a2 + 8), v34, v36, v15 & 0xFFFFFFFE, v24, v22);
  v40 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 40), 0, v35, a4, v37, v38, v39);
  v41 = 1;
  if ( v40 != 1 )
  {
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 4), v40);
    v42 = *(_DWORD *)(a2 + 48);
    v43 = *(_DWORD *)(a2 + 4);
    v44 = *(_DWORD *)(a2 + 52);
    v45 = *a1;
    v51 = _mm_load_si128(&v49);
    v52 = v50;
    v41 = sub_1C4D120(v45, v43, v42, v34, v26, v44, v51.m128i_i64[0], v51.m128i_i64[1], v50, v40 & 0xFFFFFFFFFFFFFFFELL);
  }
  v47 = v41;
  sub_15354C0((__int64)&v53);
  return v47;
}
