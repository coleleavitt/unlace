__int64 __fastcall sub_17810A0(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // rbp
  unsigned __int16 *v10; // r12
  __int64 v11; // rax
  unsigned __int16 *v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  const __m128i *v24; // rax
  __int32 v25; // edx
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int16 v29; // dx
  int v30; // esi
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rbp
  __m128i v33; // xmm0
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  int v41; // edx
  int v42; // esi
  int v43; // r9d
  __int8 v44; // dl
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-E8h]
  __int64 v47; // [rsp+0h] [rbp-E8h]
  int v48; // [rsp+8h] [rbp-E0h]
  __int64 v49; // [rsp+10h] [rbp-D8h]
  const __m128i *v50; // [rsp+10h] [rbp-D8h]
  __int64 v51; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+18h] [rbp-D0h]
  __m128i v53; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-B8h]
  __m128i v55; // [rsp+40h] [rbp-A8h]
  __int64 v56; // [rsp+50h] [rbp-98h]
  const __m128i *v57; // [rsp+60h] [rbp-88h] BYREF
  __int32 v58; // [rsp+68h] [rbp-80h]
  __int64 v59; // [rsp+70h] [rbp-78h]
  __int64 v60; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v61; // [rsp+80h] [rbp-68h]
  __int8 v62; // [rsp+84h] [rbp-64h]
  char v63; // [rsp+88h] [rbp-60h]
  __int16 v64; // [rsp+90h] [rbp-58h]
  __m128i v65; // [rsp+98h] [rbp-50h]
  char v66; // [rsp+A8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v9 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 8), 0, a3, a5, a6, a7);
  if ( v9 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v9 )
    sub_1B28470(*(_QWORD *)(*a1 + 760), *(unsigned int *)(a2 + 4), v9 & 0xFFFFFFFFFFFFFFFELL);
  v10 = *(unsigned __int16 **)(a2 + 24);
  v11 = sub_EEE130(a2);
  sub_175C5C0((__int64)&v53, a1, *(_DWORD *)(a2 + 4), v11, v10, 0);
  if ( (_BYTE)v54 )
    return 1;
  v13 = *(unsigned __int16 **)(a2 + 32);
  v14 = v53.m128i_i64[1];
  v46 = v53.m128i_i64[0];
  v15 = sub_175B800(a1, v13);
  if ( v15 == 1 )
    return 1;
  v18 = 0;
  v19 = v15 & 0xFFFFFFFFFFFFFFFELL;
  v20 = *a1;
  v21 = v19;
  if ( v19 )
    v18 = (unsigned int)sub_C00A40(v19, (__int64)v13, 0, v16, v17);
  v22 = sub_19B4A30(v20, v21, v18, 1, 0, 0);
  v23 = *(_QWORD *)(a2 + 32);
  v48 = v22 & 0xFFFFFFFE;
  if ( (v22 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
    if ( v23 )
      return 1;
  }
  v24 = *(const __m128i **)(*a1 + 744);
  v25 = v24[2].m128i_i32[0];
  v26 = v24[4].m128i_i8[0] == 0;
  v57 = v24;
  v58 = v25;
  v27 = v24[2].m128i_i64[1];
  v63 = 0;
  v59 = v27;
  if ( v26 )
  {
    LODWORD(v28) = (_DWORD)v24;
  }
  else
  {
    v61 = v24[3].m128i_u32[2];
    if ( v61 > 0x40 )
    {
      v50 = v24;
      sub_2205510(&v60);
      v23 = *(_QWORD *)(a2 + 32);
      v24 = v50;
      v28 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      LODWORD(v28) = (_DWORD)v24;
      v60 = v24[3].m128i_i64[0];
    }
    v44 = v24[3].m128i_i8[12];
    v63 = 1;
    v62 = v44;
  }
  v29 = v24[4].m128i_i16[4];
  v30 = *(_DWORD *)(a2 + 4);
  v31 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v32 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v33 = _mm_loadu_si128(v24 + 5);
  v66 = 1;
  v64 = v29;
  v34 = *(_QWORD *)(a2 + 24);
  v65 = v33;
  sub_1AAA420(v28, v30, *(_QWORD *)(a2 + 8), v32, v34, v31, v23, v21);
  v38 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 40), 0, *(double *)v33.m128i_i64, v35, v36, v37);
  if ( v38 != 1 )
  {
    v49 = v38;
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 4), v38);
    v39 = *a1;
    v40 = v49 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && v32 == *(_QWORD *)(a2 + 8) )
    {
      v52 = v49 & 0xFFFFFFFFFFFFFFFELL;
      v51 = *(_QWORD *)(a2 + 24);
      v45 = sub_EEE130(a2);
      v40 = v52;
      if ( v31 == v51 && v45 == v46 && v21 == *(_QWORD *)(a2 + 32) && *(_QWORD *)(a2 + 40) == v52 )
      {
        v38 = a2;
        goto LABEL_20;
      }
      v39 = *a1;
    }
    v41 = *(_DWORD *)(a2 + 48);
    v42 = *(_DWORD *)(a2 + 4);
    v55 = _mm_load_si128(&v53);
    v43 = *(_DWORD *)(a2 + 52);
    v56 = v54;
    v38 = sub_1C4D120(v39, v42, v41, v32, v48, v43, v55.m128i_i64[0], v55.m128i_i64[1], v54, v40);
  }
LABEL_20:
  v47 = v38;
  sub_15354C0((__int64)&v57);
  return v47;
}
