__int64 __fastcall sub_1BC5700(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v17; // rsi
  __m128i v18; // kr00_16
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  const __m128i *v29; // rax
  __int32 v30; // edx
  bool v31; // zf
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int16 v34; // dx
  unsigned int v35; // esi
  unsigned __int64 v36; // r12
  __m128 v37; // xmm0
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  int v45; // edx
  int v46; // esi
  int v47; // r9d
  __int64 v48; // r12
  __int8 v49; // dl
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-E8h]
  int v52; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v53; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v54; // [rsp+10h] [rbp-D8h]
  const __m128i *v55; // [rsp+10h] [rbp-D8h]
  __int64 v56; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v57; // [rsp+18h] [rbp-D0h]
  __m128i v58; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+30h] [rbp-B8h]
  __m128i v60; // [rsp+40h] [rbp-A8h]
  __int64 v61; // [rsp+50h] [rbp-98h]
  const __m128i *v62; // [rsp+60h] [rbp-88h] BYREF
  __int32 v63; // [rsp+68h] [rbp-80h]
  __int64 v64; // [rsp+70h] [rbp-78h]
  __int64 v65; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+80h] [rbp-68h]
  __int8 v67; // [rsp+84h] [rbp-64h]
  char v68; // [rsp+88h] [rbp-60h]
  __int16 v69; // [rsp+90h] [rbp-58h]
  __m128 v70; // [rsp+98h] [rbp-50h]
  char v71; // [rsp+A8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
  {
    v48 = *(_QWORD *)(*a1 + 760);
    sub_1AE5FF0(*(_QWORD *)(v48 + 8));
    if ( def_FFDDA1() )
      *(_BYTE *)(sub_1AE5FF0(*(_QWORD *)(v48 + 8)) + 1107) = 1;
  }
  v10 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 8), 0, a3, a4, a6, a7, a8);
  if ( v10 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v10 )
    sub_1B28470(
      *(__int64 **)(*a1 + 760),
      *(_DWORD *)(a2 + 4),
      (__int64 (__fastcall ***)())(v10 & 0xFFFFFFFFFFFFFFFELL),
      *(double *)a3.m128_u64,
      a4);
  v11 = *(_QWORD *)(a2 + 24);
  v12 = sub_EEE130(a2);
  sub_1BA5100((__int64)&v58, a1, *(unsigned int *)(a2 + 4), v12, v11, 0, a3, a4);
  if ( (_BYTE)v59 )
    return 1;
  v17 = *(_QWORD *)(a2 + 32);
  v18 = v58;
  v19 = sub_1B73BE0(a1, v17, v13, a3, a4, v14, v15);
  if ( v19 == 1 )
    return 1;
  v22 = 0;
  v23 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v24 = *a1;
  v25 = v23;
  if ( v23 )
  {
    v51 = *a1;
    v26 = sub_C00A40(v23, v17, 0, v20, v21);
    v24 = v51;
    v22 = v26;
  }
  v27 = sub_19B4A30(v24, v25, v22, 1, 0, 0, a3, a4);
  v28 = *(_QWORD *)(a2 + 32);
  v52 = v27 & 0xFFFFFFFE;
  if ( (v27 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
    if ( v28 )
      return 1;
  }
  v29 = *(const __m128i **)(*a1 + 744);
  v30 = v29[2].m128i_i32[0];
  v31 = v29[4].m128i_i8[0] == 0;
  v62 = v29;
  v63 = v30;
  v32 = v29[2].m128i_i64[1];
  v68 = 0;
  v64 = v32;
  if ( v31 )
  {
    v33 = (__int64)v29;
  }
  else
  {
    v66 = v29[3].m128i_u32[2];
    if ( v66 > 0x40 )
    {
      v55 = v29;
      sub_2205510(&v65);
      v28 = *(_QWORD *)(a2 + 32);
      v29 = v55;
      v33 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v33 = (__int64)v29;
      v65 = v29[3].m128i_i64[0];
    }
    v49 = v29[3].m128i_i8[12];
    v68 = 1;
    v67 = v49;
  }
  v34 = v29[4].m128i_i16[4];
  v35 = *(_DWORD *)(a2 + 4);
  v36 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v37 = (__m128)_mm_loadu_si128(v29 + 5);
  v71 = 1;
  v69 = v34;
  v38 = *(_QWORD *)(a2 + 24);
  v70 = v37;
  sub_1AAA420(v33, v35, *(_QWORD *)(a2 + 8), v36, v38, v18.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL, v28, v25);
  v42 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 40), 0, v37, a4, v39, v40, v41);
  if ( v42 != 1 )
  {
    v54 = v42;
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 4), v42, *(double *)v37.m128_u64);
    v43 = *a1;
    v44 = v54 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && v36 == *(_QWORD *)(a2 + 8) )
    {
      v57 = v54 & 0xFFFFFFFFFFFFFFFELL;
      v56 = *(_QWORD *)(a2 + 24);
      v50 = sub_EEE130(a2);
      v44 = v57;
      if ( (v18.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) == v56
        && v50 == v18.m128i_i64[0]
        && v25 == *(_QWORD *)(a2 + 32)
        && *(_QWORD *)(a2 + 40) == v57 )
      {
        v42 = a2;
        goto LABEL_19;
      }
      v43 = *a1;
    }
    v45 = *(_DWORD *)(a2 + 48);
    v46 = *(_DWORD *)(a2 + 4);
    v60 = _mm_load_si128(&v58);
    v47 = *(_DWORD *)(a2 + 52);
    v61 = v59;
    v42 = sub_1C4D120(v43, v46, v45, v36, v52, v47, v60.m128i_i64[0], v60.m128i_i64[1], v59, v44);
  }
LABEL_19:
  v53 = v42;
  sub_15354C0((__int64)&v62);
  return v53;
}
