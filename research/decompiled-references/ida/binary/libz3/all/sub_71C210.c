__m128 *__fastcall sub_71C210(__m128 *a1, __m128i *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // r13
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int16 v21; // ax
  __int64 v22; // rdi
  __int64 *v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdi
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdi
  __int64 v38; // rdi
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  __m128 v42; // xmm0
  __int64 *v43; // rdi
  __int64 v44; // rsi
  int v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  __m128i v48; // xmm0
  __m128i si128; // xmm0
  __int64 v50; // rdi
  __m128 *v51; // [rsp+0h] [rbp-118h]
  __int64 v52; // [rsp+8h] [rbp-110h]
  __int64 v53; // [rsp+8h] [rbp-110h]
  int v54[4]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v55; // [rsp+20h] [rbp-F8h]
  __int64 *v56; // [rsp+28h] [rbp-F0h]
  void **p_ptr; // [rsp+30h] [rbp-E8h]
  __int64 v58; // [rsp+38h] [rbp-E0h]
  _QWORD *v59; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-B0h]
  __int64 v65; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+78h] [rbp-A0h] BYREF
  __m128i v67; // [rsp+80h] [rbp-98h] BYREF
  __m128i v68; // [rsp+90h] [rbp-88h] BYREF
  __m128i v69; // [rsp+A0h] [rbp-78h] BYREF
  int v70[4]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-58h] BYREF
  unsigned int v72; // [rsp+C8h] [rbp-50h]
  __int64 v73; // [rsp+CCh] [rbp-4Ch]

  v5 = a2[1].m128i_i64[0];
  v51 = a1;
  v63 = 0;
  v64 = v5;
  v65 = v5;
  v6 = sub_186B270(0x80u);
  v73 = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = a3;
  v52 = (__int64)(v7 + 1);
  *v7 = 0x100000002LL;
  v8 = (_QWORD *)sub_186B270(0x18u);
  v8[1] = a3;
  v9 = v8 + 1;
  v10 = 8;
  *v8 = 0x100000002LL;
  while ( 1 )
  {
    sub_EE4F40(a2[1].m128i_i64[0]);
    v11 = v9[*((_DWORD *)v9 - 1) - 1];
    v55 = (__int64)sub_7109E0((_QWORD *)v6, v10, v11);
    if ( !v55 )
      break;
    *((_DWORD *)v9 - 1) = v14;
LABEL_6:
    if ( !*((_DWORD *)v9 - 1) )
      goto LABEL_7;
  }
  v21 = *(_WORD *)(v11 + 4);
  if ( v21 )
  {
    if ( v21 != 2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1070);
    }
    LODWORD(v56) = *(_DWORD *)(v11 + 16);
    if ( (_DWORD)v56 == 2 )
    {
      v71 = v6;
      v72 = v10;
      v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
      sub_686B20((__int64)&v71, &v68);
      --*((_DWORD *)v9 - 1);
      v6 = v71;
      v10 = v72;
      goto LABEL_6;
    }
    v68.m128i_i64[1] = 0;
    v68.m128i_i64[0] = a2[1].m128i_i64[0];
    v30 = *(_QWORD *)(v11 + 24);
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v55 = v30;
    *(_QWORD *)v54 = &v68;
    sub_710AA0(v63, v64);
    *(_QWORD *)v54 = &v68;
    v63 = v55;
    p_ptr = (void **)&v63;
    sub_6AB960(v11, &v63, (__int64)&v68);
    sub_71C210(
      (unsigned int)v70,
      (_DWORD)a2,
      v63,
      (unsigned int)v70,
      v31,
      v32,
      (__int64)v51,
      v52,
      v54[0],
      *(__int64 *)&v54[2],
      (unsigned int)v70,
      (_DWORD)v56,
      (_DWORD)p_ptr,
      v58,
      (_DWORD)v59,
      (_DWORD)ptr,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67.m128i_i32[0],
      v67.m128i_i32[2],
      v68.m128i_i32[0],
      v68.m128i_i32[2],
      v69.m128i_i32[0],
      v69.m128i_i8[8],
      *(__int64 *)v70,
      *(__int64 *)&v70[2]);
    v33 = v63;
    v63 = *(_QWORD *)v70;
    *(_QWORD *)v70 = v33;
    sub_710AA0(v33, *(__int64 *)&v70[2]);
    if ( !(_DWORD)v56 )
    {
      sub_15ECFD0(v55, (_DWORD)p_ptr, 8, v34, v35, v36);
      v37 = v63;
      v63 = *(_QWORD *)v70;
      *(_QWORD *)v70 = v37;
      sub_710AA0(v37, *(__int64 *)&v70[2]);
    }
    sub_71BB00((__m128i *)v55, a2, *(__int64 *)v54, v63);
    v38 = v63;
    v63 = *(_QWORD *)v70;
    sub_710AA0(v38, *(__int64 *)&v70[2]);
    v41 = v63;
    if ( !v63 )
    {
      v71 = v6;
      v72 = v10;
      v69 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
      sub_686B20((__int64)&v71, &v69);
      goto LABEL_40;
    }
    if ( (_DWORD)v56 )
    {
      v62 = v63;
    }
    else
    {
      sub_15ECFD0(v55, (_DWORD)p_ptr, 8, 0, v39, v40);
      v50 = v63;
      v63 = *(_QWORD *)v70;
      *(_QWORD *)v70 = v50;
      sub_710AA0(v50, *(__int64 *)&v70[2]);
      v41 = v63;
      v62 = v63;
      if ( !v63 )
        goto LABEL_39;
    }
    ++*(_DWORD *)(v41 + 8);
LABEL_39:
    v66 = v52;
    sub_712A90(&v66, &v62);
    v42 = _mm_loadh_ps((const double *)&v63);
    v71 = v6;
    v52 = v66;
    v72 = v10;
    *(__m128 *)v70 = v42;
    sub_686B20((__int64)&v71, (const __m128i *)v55);
LABEL_40:
    v43 = *(__int64 **)v54;
    v6 = v71;
    v10 = v72;
    --*((_DWORD *)v9 - 1);
    sub_2B4F40(v43);
    goto LABEL_6;
  }
  v22 = a2[1].m128i_i64[0];
  v23 = (__int64 *)(v11 + 32);
  v24 = 8LL * *(unsigned int *)(v11 + 24);
  *(_QWORD *)v70 = v22;
  v56 = (__int64 *)(v11 + 32 + v24);
  if ( !v24 )
  {
    v44 = *(_QWORD *)(v11 + 16);
    v46 = v55;
    v45 = 0;
    goto LABEL_44;
  }
  HIBYTE(v58) = 1;
  p_ptr = &ptr;
  do
  {
    v27 = *v23;
    *(_QWORD *)v54 = v23;
    v69.m128i_i64[0] = v27;
    v28 = sub_7109E0((_QWORD *)v6, v10, v27);
    v29 = *(_QWORD *)v54;
    if ( v28 )
    {
      v25 = (_DWORD *)v28[1];
      ptr = v25;
      if ( v25 )
        ++v25[2];
      *(_QWORD *)v54 = v29;
      *(_QWORD *)&v70[2] = v55;
      sub_712A90(&v70[2], p_ptr);
      v26 = *(_QWORD *)v54;
      v55 = *(_QWORD *)&v70[2];
    }
    else
    {
      v59 = v9;
      sub_712A90(&v59, &v69);
      v9 = v59;
      v26 = *(_QWORD *)v54;
      HIBYTE(v58) = 0;
    }
    v23 = (__int64 *)(v26 + 8);
  }
  while ( v56 != v23 );
  if ( HIBYTE(v58) )
  {
    v22 = a2[1].m128i_i64[0];
    v44 = *(_QWORD *)(v11 + 16);
    if ( v55 )
    {
      v45 = *(_DWORD *)(v55 - 4);
      v46 = v55;
    }
    else
    {
      v45 = 0;
      v46 = 0;
    }
LABEL_44:
    v47 = sub_15DC610(
            v22,
            v44,
            v45,
            v46,
            v12,
            v13,
            (int)v51,
            v52,
            v54[0],
            v54[2],
            v55,
            (char)v56,
            (int)p_ptr,
            v58,
            (int)v59,
            ptr);
    --*((_DWORD *)v9 - 1);
    v61 = v47;
    v48 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v47);
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    *(__m128i *)v54 = v48;
    v66 = v53;
    sub_712A90(&v66, &v61);
    si128 = _mm_load_si128((const __m128i *)v54);
    v71 = v6;
    v52 = v66;
    v72 = v10;
    v67 = si128;
    sub_686B20((__int64)&v71, &v67);
    v6 = v71;
    v10 = v72;
  }
  *(_QWORD *)&v70[2] = v55;
  sub_2334C0((__int64 *)v70);
  if ( v9 )
    goto LABEL_6;
LABEL_7:
  v15 = sub_7109E0((_QWORD *)v6, v10, a3);
  if ( !v15 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1074);
  }
  v16 = v15[1];
  *v51 = _mm_loadh_ps((const double *)a2[1].m128i_i64);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  if ( v9 )
    sub_186B220(v9 - 1);
  if ( v6 )
    sub_186B220((void *)v6);
  v66 = v52;
  sub_2334C0(&v65);
  v17 = v63;
  if ( v63 )
  {
    v18 = v64;
    if ( (*(_DWORD *)(v63 + 8))-- == 1 )
      sub_15D7BC0(v18, v17);
  }
  return v51;
}

