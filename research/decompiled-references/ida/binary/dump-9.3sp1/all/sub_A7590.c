__int64 __fastcall sub_A7590(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  int v29; // edx
  int v30; // esi
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 i; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  int v63; // eax
  __int64 v64; // rax
  void *v66; // rax
  const void *v67; // rsi
  __int64 v68; // rbp
  int v69; // eax
  void *v70; // rdi
  __int64 v71; // [rsp+8h] [rbp-200h]
  __int64 *v72; // [rsp+10h] [rbp-1F8h]
  __int64 v73; // [rsp+18h] [rbp-1F0h]
  unsigned int v74; // [rsp+24h] [rbp-1E4h]
  __int64 *v75; // [rsp+30h] [rbp-1D8h]
  __int64 *v76; // [rsp+38h] [rbp-1D0h]
  __int64 *v77; // [rsp+40h] [rbp-1C8h]
  __int64 n; // [rsp+48h] [rbp-1C0h]
  __int64 v79[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v80; // [rsp+60h] [rbp-1A8h]
  __m128i v81; // [rsp+68h] [rbp-1A0h]
  __int64 v82[2]; // [rsp+80h] [rbp-188h] BYREF
  __int64 v83; // [rsp+90h] [rbp-178h]
  __m128i v84; // [rsp+98h] [rbp-170h]
  __int64 v85[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-148h]
  __m128i v87; // [rsp+C8h] [rbp-140h]
  __int64 v88[2]; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-118h]
  __m128i v90; // [rsp+F8h] [rbp-110h]
  __int64 v91[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v92; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v93; // [rsp+128h] [rbp-E0h]
  __int64 v94[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+158h] [rbp-B0h]
  __int64 v97[2]; // [rsp+170h] [rbp-98h] BYREF
  void *src; // [rsp+180h] [rbp-88h] BYREF
  __int128 v99; // [rsp+188h] [rbp-80h]
  __int64 v100[2]; // [rsp+1A0h] [rbp-68h] BYREF
  void *v101; // [rsp+1B0h] [rbp-58h] BYREF
  __int128 v102; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v103; // [rsp+1C8h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 72);
  v103 = __readfsqword(0x28u);
  if ( !(_DWORD)v6 || *(_DWORD *)(a1 + 76) == 1 && (BYTE1(**(_DWORD **)(a1 + 64)) & 0x80u) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x200u;
    return 0;
  }
  v76 = (__int64 *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 160);
  v81 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v79[0] = v8;
  v9 = *(_QWORD *)(a1 + 168);
  v84 = _mm_loadu_si128((const __m128i *)(a1 + 264));
  v79[1] = v9;
  v10 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0;
  v80 = v10;
  v72 = (__int64 *)(a1 + 240);
  v11 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 168) = 0;
  v82[0] = v11;
  v12 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 176) = 0;
  v82[1] = v12;
  v13 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 240) = 0;
  v83 = v13;
  v77 = (__int64 *)(a1 + 120);
  v14 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 248) = 0;
  v85[0] = v14;
  v15 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 256) = 0;
  v85[1] = v15;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 144));
  v75 = (__int64 *)(a1 + 200);
  v17 = *(_QWORD *)(a1 + 200);
  v18 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 200) = 0;
  v88[0] = v17;
  v19 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 136) = 0;
  v88[1] = v19;
  v20 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  v89 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 216) = 0;
  v87 = v16;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 224));
  BYTE1(v20) = BYTE1(v20) & 0xF9 | 4;
  *(_OWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 24) = v20;
  v22 = *(_QWORD *)(a1 + 480);
  *(_OWORD *)(a1 + 224) = 0;
  v23 = *(_QWORD *)(v22 + 112);
  v86 = v18;
  v24 = 0;
  v90 = v21;
  v73 = v23;
  if ( !a2 )
  {
    v74 = 0;
    goto LABEL_16;
  }
  v74 = 0;
  v25 = -1;
  v71 = v23 + 104;
  while ( 1 )
  {
    sub_64000(v97, v71);
    src = nullptr;
    v99 = 0;
    v28 = *(_QWORD *)(v73 + 128);
    if ( v28 )
    {
      src = (void *)qalloc_or_throw(16 * v28, v71, v26, v27);
      *((_QWORD *)&v99 + 1) = v28;
      memcpy(src, *(const void **)(v73 + 120), 16 * v28);
      *(_QWORD *)&v99 = v28;
    }
    v29 = *(_DWORD *)(v73 + 84);
    v30 = *(_DWORD *)(v73 + 60);
    v100[0] = 0;
    v100[1] = 0;
    sub_63E80(v100, v30, v29);
    v101 = nullptr;
    v102 = 0;
    sub_64280(v97, v100);
    sub_316CB0(&src, &v101);
    if ( v101 )
    {
      *(_QWORD *)&v102 = 0;
      qfree((__int64)v101);
    }
    qfree(v100[0]);
    v31 = sub_A53D0(a1, v73, *(unsigned int **)(a1 + 56), v97);
    v74 += v31;
    if ( !(v25 | v31) )
      break;
    v68 = *(_QWORD *)(a1 + 48);
    if ( !v68 )
      goto LABEL_77;
    v25 = 0;
    do
    {
      while ( 1 )
      {
        v25 += sub_167810(a1, v68, 6);
        if ( !*(_DWORD *)v68 )
          break;
        v68 = *(_QWORD *)(v68 + 8);
        if ( !v68 )
          goto LABEL_76;
      }
      v68 = sub_A3480(a1, v68);
      ++v74;
    }
    while ( v68 );
LABEL_76:
    if ( !v25 )
    {
LABEL_77:
      v69 = *(_DWORD *)(a1 + 24);
      if ( (v69 & 0x100) == 0 )
        break;
      v70 = src;
      v25 = 0;
LABEL_79:
      BYTE1(v69) &= ~1u;
      *(_DWORD *)(a1 + 24) = v69;
      if ( v70 )
      {
        *(_QWORD *)&v99 = 0;
        qfree((__int64)v70);
      }
      goto LABEL_81;
    }
    sub_A7520(a1);
    v69 = *(_DWORD *)(a1 + 24);
    v70 = src;
    if ( (v69 & 0x100) != 0 )
      goto LABEL_79;
    if ( src )
    {
      *(_QWORD *)&v99 = 0;
      qfree((__int64)src);
    }
LABEL_81:
    qfree(v97[0]);
  }
  if ( src )
  {
    *(_QWORD *)&v99 = 0;
    qfree((__int64)src);
  }
  qfree(v97[0]);
  v32 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 168) = 0;
  if ( v32 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v32);
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  v24 = *(_QWORD *)(a1 + 136);
LABEL_16:
  *(_QWORD *)(a1 + 128) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v33 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = 0;
  if ( v33 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree(v33);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  v34 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  if ( v34 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v34);
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  v35 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 288) = 0;
  if ( v35 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v35);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(char *)(i + 4) >= 0 )
    {
      sub_124680(v91, a1, i, 1);
      if ( !(unsigned __int8)sub_64880(v91) || v93 )
      {
        sub_64640((__int64 *)(a1 + 280), v91, v37, v38, v39, v40);
        sub_317C60(a1 + 296, &v92);
        v41 = *(_QWORD *)(a1 + 64);
        sub_64000(v100, (__int64)v72);
        v43 = *(_QWORD *)(a1 + 264);
        v101 = nullptr;
        v102 = 0;
        if ( v43 )
        {
          v66 = (void *)qalloc_or_throw(16 * v43, (__int64)v72, 16 * v43, v42);
          v67 = *(const void **)(a1 + 256);
          v101 = v66;
          *((_QWORD *)&v102 + 1) = v43;
          memcpy(v66, v67, 16 * v43);
          *(_QWORD *)&v102 = v43;
        }
        sub_3180C0(&v101, v41 + 208);
        sub_64640(v91, v100, v44, v45, v46, v47);
        sub_317C60(&v92, &v101);
        if ( v101 )
        {
          *(_QWORD *)&v102 = 0;
          qfree((__int64)v101);
        }
        qfree(v100[0]);
        sub_64280(v76, v91);
        sub_316CB0(a1 + 176, &v92);
        sub_124680(v100, a1, i, 0);
        sub_64640(v100, v72, v48, v49, v50, v51);
        sub_317C60(&v101, a1 + 256);
        sub_64280(v77, v100);
        sub_316CB0(a1 + 136, &v101);
        if ( v101 )
        {
          *(_QWORD *)&v102 = 0;
          qfree((__int64)v101);
        }
        qfree(v100[0]);
      }
      sub_127A20(v94, a1, i, 1);
      if ( !(unsigned __int8)sub_64880(v94) || v96 )
      {
        sub_64280(v72, v94);
        sub_316CB0(a1 + 256, &v95);
        sub_127A20(v97, a1, i, 0);
        sub_64280(v75, v97);
        sub_316CB0(a1 + 216, &src);
        v52 = *(_QWORD *)(a1 + 64);
        sub_64000(v100, (__int64)v97);
        v54 = v99;
        v101 = nullptr;
        v102 = 0;
        if ( (_QWORD)v99 )
        {
          n = 16 * v99;
          v101 = (void *)qalloc_or_throw(16 * v99, (__int64)v97, 16 * v99, v53);
          *((_QWORD *)&v102 + 1) = v54;
          memcpy(v101, src, n);
          *(_QWORD *)&v102 = v54;
        }
        sub_3180C0(&v101, v52 + 208);
        sub_64280((__int64 *)(a1 + 280), v100);
        sub_316CB0(a1 + 296, &v101);
        if ( v101 )
        {
          *(_QWORD *)&v102 = 0;
          qfree((__int64)v101);
        }
        qfree(v100[0]);
        if ( src )
        {
          *(_QWORD *)&v99 = 0;
          qfree((__int64)src);
        }
        qfree(v97[0]);
      }
      if ( v95 )
      {
        v96 = 0;
        qfree(v95);
      }
      qfree(v94[0]);
      if ( v92 )
      {
        v93 = 0;
        qfree(v92);
      }
      qfree(v91[0]);
    }
  }
  sub_64640(v75, (__int64 *)(v73 + 104), v6, a4, a5, a6);
  sub_317C60(a1 + 216, v73 + 120);
  sub_64640(v72, (__int64 *)(v73 + 104), v55, v56, v57, v58);
  sub_317C60(a1 + 256, v73 + 120);
  sub_64640((__int64 *)(a1 + 280), (__int64 *)(v73 + 104), v59, v60, v61, v62);
  sub_317C60(a1 + 296, v73 + 120);
  v63 = *(_DWORD *)(a1 + 24);
  BYTE1(v63) = BYTE1(v63) & 0xF9 | 2;
  *(_DWORD *)(a1 + 24) = v63;
  if ( v74 )
    sub_A2520(a1, (__int64)"local dead elimination result, total dead: %d", v74);
  if ( (unsigned int)sub_122C30(v79, v76)
    || (unsigned int)sub_122C30(v82, v72)
    || (unsigned int)sub_122C30(v85, v77)
    || (unsigned int)sub_122C30(v88, v75) )
  {
    v64 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( v64 )
      *(_DWORD *)(v64 + 48) = 63;
  }
  if ( v89 )
  {
    v90.m128i_i64[0] = 0;
    qfree(v89);
  }
  qfree(v88[0]);
  if ( v86 )
  {
    v87.m128i_i64[0] = 0;
    qfree(v86);
  }
  qfree(v85[0]);
  if ( v83 )
  {
    v84.m128i_i64[0] = 0;
    qfree(v83);
  }
  qfree(v82[0]);
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree(v80);
  }
  qfree(v79[0]);
  return v74;
}
