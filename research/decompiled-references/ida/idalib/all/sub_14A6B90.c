__int64 __fastcall sub_14A6B90(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int32 *a7,
        __int16 a8)
{
  bool v11; // zf
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 *m128i_i64; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int32 v17; // eax
  __m128i v18; // xmm2
  unsigned __int64 v19; // rbx
  __int32 v20; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  char *v24; // rdi
  char *v25; // rax
  __int32 v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int16 v32; // ax
  char v33; // dl
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned int v37; // r12d
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __int32 v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  char *v45; // rdi
  char *v46; // rax
  __int64 *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rbx
  unsigned int v54; // eax
  size_t v55; // r15
  int v56; // eax
  size_t v57; // rax
  __int64 v58; // r15
  int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  char *v69; // rdi
  char *v70; // rax
  __int64 v72; // [rsp+0h] [rbp-1D8h]
  __int16 v75; // [rsp+10h] [rbp-1C8h]
  __int64 v76; // [rsp+10h] [rbp-1C8h]
  __int64 v77; // [rsp+10h] [rbp-1C8h]
  __int32 v78; // [rsp+18h] [rbp-1C0h]
  __int64 v79; // [rsp+18h] [rbp-1C0h]
  __int64 v80; // [rsp+24h] [rbp-1B4h] BYREF
  char v81; // [rsp+2Ch] [rbp-1ACh]
  __m128i *v82; // [rsp+30h] [rbp-1A8h] BYREF
  __int8 v83; // [rsp+38h] [rbp-1A0h]
  const __m128i *v84; // [rsp+40h] [rbp-198h]
  int v85; // [rsp+48h] [rbp-190h]
  __int16 v86; // [rsp+4Ch] [rbp-18Ch]
  __int64 (__fastcall *v87)(__int64); // [rsp+50h] [rbp-188h]
  __int64 v88; // [rsp+58h] [rbp-180h]
  __int64 v89; // [rsp+60h] [rbp-178h]
  _DWORD v90[6]; // [rsp+70h] [rbp-168h] BYREF
  void *v91; // [rsp+88h] [rbp-150h]
  __int64 v92; // [rsp+98h] [rbp-140h] BYREF
  _DWORD v93[6]; // [rsp+B0h] [rbp-128h] BYREF
  void *v94; // [rsp+C8h] [rbp-110h]
  __int64 v95; // [rsp+D8h] [rbp-100h] BYREF
  unsigned __int8 *v96[11]; // [rsp+F0h] [rbp-E8h] BYREF
  __m128i v97; // [rsp+148h] [rbp-90h] BYREF
  __m128i v98; // [rsp+158h] [rbp-80h] BYREF
  __int64 v99; // [rsp+168h] [rbp-70h]
  __m128i v100; // [rsp+170h] [rbp-68h] BYREF
  __int32 v101; // [rsp+180h] [rbp-58h]

  v11 = a1[2].m128i_i16[0] == 22;
  v82 = (__m128i *)&a1[122];
  v83 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v84 = a1;
  v85 = 1507350;
  v86 = 63;
  v87 = sub_146A990;
  v88 = 0;
  v89 = 0;
  if ( v11 )
  {
    if ( (unsigned int)a1[5].m128i_u16[4] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
      sub_1568800(&v82);
    else
      LODWORD(v89) = sub_146A990((__int64)a1);
  }
  v12 = a1[6].m128i_i64[0];
  sub_18C74E0(v12, 6, 0, 4);
  v13 = a1->m128i_i64[1];
  m128i_i64 = nullptr;
  v15 = _mm_loadu_si128(a1 + 3);
  v16 = _mm_loadu_si128(a1 + 4);
  v99 = a1[5].m128i_i64[0];
  v17 = a1[2].m128i_i32[0];
  v18 = _mm_loadu_si128(a1 + 1);
  v97 = v15;
  v19 = a1[169].m128i_u32[2];
  v101 = v17;
  LOWORD(v17) = a1[5].m128i_i16[6];
  v98 = v16;
  v75 = v17;
  v20 = a1[5].m128i_i32[2];
  v100 = v18;
  v78 = v20;
  sub_1418D30(v13, 0);
  v21 = sub_14C4B90(a1);
  if ( v21 == 1 )
  {
    v67 = a1[169].m128i_u32[2];
    if ( v19 != v67 )
    {
      if ( v19 >= v67 )
      {
        if ( v19 > a1[169].m128i_u32[3] )
        {
          sub_2237220(&a1[169], &a1[170], v19, 8);
          v67 = a1[169].m128i_u32[2];
        }
        v68 = a1[169].m128i_i64[0];
        v69 = (char *)(v68 + 8 * v67);
        v70 = (char *)(v68 + 8 * v19);
        if ( v69 != v70 )
          memset(v69, 0, 8 * ((unsigned __int64)(v70 - 8 - v69) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v19;
    }
    v37 = 1;
    sub_1417B70(a1->m128i_i64[1]);
    v47 = (__int64 *)v96;
    LODWORD(v96[0]) = 1376279;
    sub_15680D0(a1, v96, 2, 3);
    if ( a1[2].m128i_i16[0] == 23 )
      goto LABEL_28;
  }
  else
  {
    if ( (a1[2].m128i_i16[0] & 0xFFFD) == 0x15 )
    {
      v22 = a1[169].m128i_u32[2];
      if ( v19 != v22 )
      {
        if ( v19 >= v22 )
        {
          if ( v19 > a1[169].m128i_u32[3] )
          {
            v77 = v21;
            m128i_i64 = a1[170].m128i_i64;
            sub_2237220(&a1[169], &a1[170], v19, 8);
            v22 = a1[169].m128i_u32[2];
            v21 = v77;
          }
          v23 = a1[169].m128i_i64[0];
          v24 = (char *)(v23 + 8 * v22);
          v25 = (char *)(v23 + 8 * v19);
          if ( v24 != v25 )
          {
            m128i_i64 = nullptr;
            v76 = v21;
            memset(v24, 0, 8 * ((unsigned __int64)(v25 - 8 - v24) >> 3) + 8);
            v21 = v76;
          }
        }
        a1[169].m128i_i32[2] = v19;
      }
      v79 = v21;
      sub_1417B70(a1->m128i_i64[1]);
      v26 = a1[1].m128i_i32[0];
      sub_14808E0((__int64)&v82, m128i_i64, v27, v28, v29, v30);
      v31 = sub_15D92D0(*(_QWORD *)(a2 + 40), 88);
      v32 = sub_F963B0(a3, a5, a8 & 0xF);
      *(_QWORD *)v31 = a3;
      v33 = *(_BYTE *)(v31 + 35);
      *(_WORD *)(v31 + 32) = v32;
      *(_QWORD *)(v31 + 8) = a5;
      *(_DWORD *)(v31 + 28) = v26;
      *(_DWORD *)(v31 + 16) = a6;
      *(_BYTE *)(v31 + 34) = (16 * ((unsigned __int8)a8 >> 4)) | a8 & 0xF;
      *(_DWORD *)(v31 + 20) = 0;
      *(_DWORD *)(v31 + 24) = a4;
      *(_QWORD *)(v31 + 40) = 0;
      *(_QWORD *)(v31 + 48) = 0;
      *(_BYTE *)(v31 + 35) = HIBYTE(a8) & 1 | v33 & 0xFC | (2 * ((a8 & 0x200) != 0));
      *(_QWORD *)(v31 + 56) = *(_QWORD *)(v31 + 56) & 0x7F800000LL | 1;
      *(_QWORD *)(v31 + 72) = sub_15D7D80(v31);
      *(_QWORD *)(v31 + 80) = v79 & 0xFFFFFFFFFFFFFFFCLL;
      v34 = *(unsigned int *)(a2 + 56);
      if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 60) )
      {
        sub_2237220(a2 + 48, a2 + 64, v34 + 1, 8);
        v34 = *(unsigned int *)(a2 + 56);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v34) = v31;
      v35 = *(unsigned int *)(a2 + 16);
      v36 = *(unsigned int *)(a2 + 20);
      ++*(_DWORD *)(a2 + 56);
      if ( v35 + 1 > v36 )
      {
        sub_2237220(a2 + 8, a2 + 24, v35 + 1, 8);
        v35 = *(unsigned int *)(a2 + 16);
      }
      v37 = 0;
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v35) = v31;
      ++*(_DWORD *)(a2 + 16);
      if ( a7 )
        *a7 = v26;
      goto LABEL_19;
    }
    sub_1417BC0(a1->m128i_i64[1]);
    v39 = _mm_loadu_si128(&v97);
    v40 = _mm_loadu_si128(&v98);
    v41 = _mm_load_si128(&v100);
    a1[5].m128i_i64[0] = v99;
    v42 = v101;
    a1[3] = v39;
    a1[2].m128i_i32[0] = v42;
    v43 = a1[169].m128i_u32[2];
    a1[4] = v40;
    a1[1] = v41;
    if ( v19 != v43 )
    {
      if ( v19 >= v43 )
      {
        if ( v19 > a1[169].m128i_u32[3] )
        {
          sub_2237220(&a1[169], &a1[170], v19, 8);
          v43 = a1[169].m128i_u32[2];
        }
        v44 = a1[169].m128i_i64[0];
        v45 = (char *)(v44 + 8 * v43);
        v46 = (char *)(v44 + 8 * v19);
        if ( v45 != v46 )
          memset(v45, 0, 8 * ((unsigned __int64)(v46 - 8 - v45) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v19;
    }
    v47 = nullptr;
    a1[5].m128i_i32[2] = v78;
    a1[5].m128i_i16[6] = v75;
    v48 = sub_14BFC10(a1, 0);
    if ( v48 == 1 )
    {
LABEL_28:
      v37 = 1;
      sub_14808E0((__int64)&v82, v47, v49, v50, v51, v52);
      goto LABEL_19;
    }
    v53 = v48 & 0xFFFFFFFFFFFFFFFELL;
    v54 = sub_C00A40(v48 & 0xFFFFFFFFFFFFFFFELL, 0, v49, v50, v51);
    sub_1564820(v96, a1, v54, 1549);
    sub_AE9DF0(v96, a3, 5u);
    v55 = j__strlen("(");
    v56 = sub_EEB7E0(v53, a3, *(double *)v15.m128i_i64);
    sub_9EC740((__int64)v90, v56, "(", v55, 0);
    if ( v90[0] && v90[1] )
      sub_14A2370((__int64 *)v96, (unsigned __int64)v90);
    v57 = j__strlen(")");
    v58 = a1->m128i_i64[1];
    v72 = v57;
    v59 = sub_EEC140(v53);
    v60 = sub_13DC060(v59, 0, *(__int64 **)(v58 + 88), *(_QWORD *)(v58 + 56), v15, *(double *)v16.m128i_i64);
    v61 = v60;
    sub_9EC740((__int64)v93, v60, ")", v72, 0);
    if ( v93[0] && v93[1] )
    {
      v61 = (__int64)v93;
      sub_14A2370((__int64 *)v96, (unsigned __int64)v93);
    }
    v62 = sub_EEC8C0(v53, v61, *(double *)v15.m128i_i64);
    v81 = 1;
    v80 = v62;
    sub_AEC610((__int64 *)v96, &v80);
    if ( v94 != &v95 )
      operator delete(v94);
    if ( v91 != &v92 )
      operator delete(v91);
    v37 = 1;
    sub_AEA040((__int64)v96);
    sub_14808E0((__int64)&v82, &v80, v63, v64, v65, v66);
  }
LABEL_19:
  sub_190D5E0(v12);
  v82->m128i_i8[0] = v83;
  return v37;
}
