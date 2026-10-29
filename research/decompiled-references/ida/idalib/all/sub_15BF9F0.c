__int64 (__fastcall *__fastcall sub_15BF9F0(__int64 a1))(__m128i *a1, __m128i *a2, int a3)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  _DWORD *v4; // r15
  _DWORD *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i si128; // xmm0
  __int64 (__fastcall *v12)(__m128i *, __m128i *, int); // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // xmm0
  void (__fastcall *v22)(_QWORD *, _QWORD *, int); // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128i v31; // xmm0
  __int64 (__fastcall *v32)(__m128i *, __m128i *, int); // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 *v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // xmm0
  __int64 (__fastcall *v42)(__m128i *, __m128i *, int); // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 *v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128i v51; // xmm0
  __int64 (__fastcall *v52)(__m128i *, __m128i *, int); // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 *v55; // rax
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128i v61; // xmm0
  __int64 (__fastcall *v62)(__m128i *, __m128i *, int); // rax
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 *v65; // rax
  __int64 v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __m128i v71; // xmm0
  __int64 (__fastcall *v72)(__m128i *, __m128i *, int); // rax
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 *v75; // rax
  __int64 v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __m128i v81; // xmm0
  __int64 (__fastcall *v82)(__m128i *, __m128i *, int); // rax
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // r12
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __m128i v90; // xmm0
  __int64 (__fastcall *v91)(__m128i *, __m128i *, int); // rax
  __int64 v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // r12
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __m128i v99; // xmm0
  __int64 (__fastcall *v100)(__m128i *, __m128i *, int); // rax
  __int64 v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // r12
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __m128i v108; // xmm0
  __int64 (__fastcall *result)(__m128i *, __m128i *, int); // rax
  __m128 v110; // [rsp+0h] [rbp-A8h] BYREF
  __m128 v111; // [rsp+10h] [rbp-98h] BYREF
  const char *v112; // [rsp+20h] [rbp-88h] BYREF
  __int64 v113; // [rsp+28h] [rbp-80h]
  __m128i v114; // [rsp+30h] [rbp-78h] BYREF
  __m128i v115; // [rsp+40h] [rbp-68h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD7A0;
  v111 = _mm_loadh_ps((const double *)v110.m128_u64);
  v4 = (_DWORD *)sub_15BE6C0(v3, v2, 1);
  v5 = (_DWORD *)sub_15BE6C0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0);
  sub_15BA710(&v114, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), "Buffer", 6u);
  v112 = "element_type";
  v113 = 12;
  v6 = sub_15B9C20(v114.m128i_i64, &v112, 1, v4);
  v110.m128_u64[0] = sub_15B99D0((__int64)v6);
  sub_15B9900((__int64)&v114, (__int64)&v112, v7, v8, v9, v10);
  si128 = _mm_load_si128((const __m128i *)&v111);
  v114.m128i_i64[0] = a1;
  v115 = si128;
  if ( (*(_BYTE *)(v110.m128_u64[0] + 74) & 1) != 0 )
  {
    v12 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD3F0;
  }
  else
  {
    sub_15BF240(a1, v110.m128_i64[0], &v114);
    v12 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_3;
  }
  v12(&v114, &v114, 3);
LABEL_3:
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD7F0;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v14, v13, "RWBuffer", 8u);
  v112 = "element_type";
  v113 = 12;
  v15 = sub_15B9C20(v114.m128i_i64, &v112, 1, v4);
  v16 = sub_15B99D0((__int64)v15);
  sub_15B9900((__int64)&v114, (__int64)&v112, v17, v18, v19, v20);
  v21 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v21;
  if ( (*(_BYTE *)(v16 + 74) & 1) != 0 )
  {
    v22 = (void (__fastcall *)(_QWORD *, _QWORD *, int))sub_15BD410;
LABEL_5:
    v22(&v114, &v114, 3);
    goto LABEL_6;
  }
  sub_15BF240(a1, v16, &v114);
  v22 = (void (__fastcall *)(_QWORD *, _QWORD *, int))v115.m128i_i64[0];
  if ( v115.m128i_i64[0] )
    goto LABEL_5;
LABEL_6:
  v23 = *(_QWORD *)(a1 + 24);
  v24 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD840;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v24, v23, "RasterizerOrderedBuffer", 0x17u);
  v112 = "element_type";
  v113 = 12;
  v25 = sub_15B9C20(v114.m128i_i64, &v112, 1, v5);
  v26 = sub_15B99D0((__int64)v25);
  sub_15B9900((__int64)&v114, (__int64)&v112, v27, v28, v29, v30);
  v31 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v31;
  if ( (*(_BYTE *)(v26 + 74) & 1) != 0 )
  {
    v32 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD430;
  }
  else
  {
    sub_15BF240(a1, v26, &v114);
    v32 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_8;
  }
  v32(&v114, &v114, 3);
LABEL_8:
  v33 = *(_QWORD *)(a1 + 24);
  v34 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD890;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v34, v33, "StructuredBuffer", 0x10u);
  v112 = "element_type";
  v113 = 12;
  v35 = sub_15B9C20(v114.m128i_i64, &v112, 1, v5);
  v36 = sub_15B99D0((__int64)v35);
  sub_15B9900((__int64)&v114, (__int64)&v112, v37, v38, v39, v40);
  v41 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v41;
  if ( (*(_BYTE *)(v36 + 74) & 1) != 0 )
  {
    v42 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD450;
  }
  else
  {
    sub_15BF240(a1, v36, &v114);
    v42 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_10;
  }
  v42(&v114, &v114, 3);
LABEL_10:
  v43 = *(_QWORD *)(a1 + 24);
  v44 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD8E0;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v44, v43, "RWStructuredBuffer", 0x12u);
  v112 = "element_type";
  v113 = 12;
  v45 = sub_15B9C20(v114.m128i_i64, &v112, 1, v5);
  v46 = sub_15B99D0((__int64)v45);
  sub_15B9900((__int64)&v114, (__int64)&v112, v47, v48, v49, v50);
  v51 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v51;
  if ( (*(_BYTE *)(v46 + 74) & 1) != 0 )
  {
    v52 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD470;
  }
  else
  {
    sub_15BF240(a1, v46, &v114);
    v52 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_12;
  }
  v52(&v114, &v114, 3);
LABEL_12:
  v53 = *(_QWORD *)(a1 + 24);
  v54 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD940;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v54, v53, "AppendStructuredBuffer", 0x16u);
  v112 = "element_type";
  v113 = 12;
  v55 = sub_15B9C20(v114.m128i_i64, &v112, 1, v5);
  v56 = sub_15B99D0((__int64)v55);
  sub_15B9900((__int64)&v114, (__int64)&v112, v57, v58, v59, v60);
  v61 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v61;
  if ( (*(_BYTE *)(v56 + 74) & 1) != 0 )
  {
    v62 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD490;
  }
  else
  {
    sub_15BF240(a1, v56, &v114);
    v62 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_14;
  }
  v62(&v114, &v114, 3);
LABEL_14:
  v63 = *(_QWORD *)(a1 + 24);
  v64 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD990;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v64, v63, "ConsumeStructuredBuffer", 0x17u);
  v112 = "element_type";
  v113 = 12;
  v65 = sub_15B9C20(v114.m128i_i64, &v112, 1, v5);
  v66 = sub_15B99D0((__int64)v65);
  sub_15B9900((__int64)&v114, (__int64)&v112, v67, v68, v69, v70);
  v71 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v71;
  if ( (*(_BYTE *)(v66 + 74) & 1) != 0 )
  {
    v72 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD4B0;
  }
  else
  {
    sub_15BF240(a1, v66, &v114);
    v72 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_16;
  }
  v72(&v114, &v114, 3);
LABEL_16:
  v73 = *(_QWORD *)(a1 + 24);
  v74 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BD9E0;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v74, v73, "RasterizerOrderedStructuredBuffer", 0x21u);
  v112 = "element_type";
  v113 = 12;
  v75 = sub_15B9C20(v114.m128i_i64, &v112, 1, v5);
  v76 = sub_15B99D0((__int64)v75);
  sub_15B9900((__int64)&v114, (__int64)&v112, v77, v78, v79, v80);
  v81 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v81;
  if ( (*(_BYTE *)(v76 + 74) & 1) != 0 )
  {
    v82 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD4D0;
  }
  else
  {
    sub_15BF240(a1, v76, &v114);
    v82 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_18;
  }
  v82(&v114, &v114, 3);
LABEL_18:
  v83 = *(_QWORD *)(a1 + 24);
  v84 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BDA50;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v84, v83, "ByteAddressBuffer", 0x11u);
  v85 = sub_15B99D0((__int64)&v114);
  sub_15B9900((__int64)&v114, v84, v86, v87, v88, v89);
  v90 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v90;
  if ( (*(_BYTE *)(v85 + 74) & 1) != 0 )
  {
    v91 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD4F0;
  }
  else
  {
    sub_15BF240(a1, v85, &v114);
    v91 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_20;
  }
  v91(&v114, &v114, 3);
LABEL_20:
  v92 = *(_QWORD *)(a1 + 24);
  v93 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BDA90;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v93, v92, "RWByteAddressBuffer", 0x13u);
  v94 = sub_15B99D0((__int64)&v114);
  sub_15B9900((__int64)&v114, v93, v95, v96, v97, v98);
  v99 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v99;
  if ( (*(_BYTE *)(v94 + 74) & 1) != 0 )
  {
    v100 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD510;
  }
  else
  {
    sub_15BF240(a1, v94, &v114);
    v100 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
    if ( !v115.m128i_i64[0] )
      goto LABEL_22;
  }
  v100(&v114, &v114, 3);
LABEL_22:
  v101 = *(_QWORD *)(a1 + 24);
  v102 = *(_QWORD *)(a1 + 16);
  v110.m128_u64[0] = (unsigned __int64)sub_15BDAD0;
  v110 = _mm_loadh_ps((const double *)v110.m128_u64);
  sub_15BA710(&v114, v102, v101, "RasterizerOrderedByteAddressBuffer", 0x22u);
  v103 = sub_15B99D0((__int64)&v114);
  sub_15B9900((__int64)&v114, v102, v104, v105, v106, v107);
  v108 = _mm_load_si128((const __m128i *)&v110);
  v114.m128i_i64[0] = a1;
  v115 = v108;
  if ( (*(_BYTE *)(v103 + 74) & 1) != 0 )
  {
    result = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_15BD530;
    return (__int64 (__fastcall *)(__m128i *, __m128i *, int))result(&v114, &v114, 3);
  }
  sub_15BF240(a1, v103, &v114);
  result = (__int64 (__fastcall *)(__m128i *, __m128i *, int))v115.m128i_i64[0];
  if ( v115.m128i_i64[0] )
    return (__int64 (__fastcall *)(__m128i *, __m128i *, int))result(&v114, &v114, 3);
  return result;
}
