__m128i *__fastcall sub_9EC320(__m128i *a1, __int64 a2, unsigned int *a3, int a4, int a5, int a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  void *v12; // rbx
  _DWORD *v14; // rax
  char v15; // dl
  __int8 v16; // al
  char v17; // dl
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // dl
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char *v28; // rbx
  char *v29; // r13
  unsigned int v30; // r14d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  char v35; // dl
  __int8 v36; // al
  char v37; // dl
  __int64 v38; // rax
  char v39; // dl
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // dl
  __int64 v43; // rax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  _QWORD *v47; // r14
  int *v48; // rcx
  char v49; // dl
  __int8 v50; // al
  char v51; // dl
  __int64 v52; // rax
  char v53; // dl
  __int64 v54; // rax
  __int64 v55; // rax
  char v56; // dl
  __int64 v57; // rax
  int v58; // [rsp+0h] [rbp-288h]
  int *v59; // [rsp+0h] [rbp-288h]
  int v60; // [rsp+0h] [rbp-288h]
  int *v61; // [rsp+0h] [rbp-288h]
  int v62; // [rsp+8h] [rbp-280h]
  int *v63; // [rsp+8h] [rbp-280h]
  int v64; // [rsp+8h] [rbp-280h]
  int v65[2]; // [rsp+8h] [rbp-280h]
  void *v66; // [rsp+10h] [rbp-278h]
  int *v67; // [rsp+10h] [rbp-278h]
  int v68; // [rsp+10h] [rbp-278h]
  int *v69; // [rsp+10h] [rbp-278h]
  char v70; // [rsp+18h] [rbp-270h]
  char *v71; // [rsp+18h] [rbp-270h]
  int v72; // [rsp+18h] [rbp-270h]
  int v73[2]; // [rsp+20h] [rbp-268h] BYREF
  int v74[2]; // [rsp+28h] [rbp-260h]
  int v75[2]; // [rsp+30h] [rbp-258h] BYREF
  int v76[2]; // [rsp+38h] [rbp-250h]
  int v77; // [rsp+40h] [rbp-248h] BYREF
  int v78; // [rsp+48h] [rbp-240h]
  int v79; // [rsp+50h] [rbp-238h]
  int v80; // [rsp+58h] [rbp-230h]
  int v81[2]; // [rsp+60h] [rbp-228h] BYREF
  __int32 v82; // [rsp+68h] [rbp-220h]
  int v83; // [rsp+70h] [rbp-218h] BYREF
  char v84; // [rsp+74h] [rbp-214h]
  __int64 v85; // [rsp+78h] [rbp-210h]
  int v86; // [rsp+80h] [rbp-208h]
  char v87; // [rsp+84h] [rbp-204h]
  __int64 v88; // [rsp+88h] [rbp-200h]
  __int32 v89; // [rsp+90h] [rbp-1F8h]
  int v90; // [rsp+98h] [rbp-1F0h] BYREF
  char v91; // [rsp+9Ch] [rbp-1ECh]
  __int64 v92; // [rsp+A0h] [rbp-1E8h]
  int v93; // [rsp+A8h] [rbp-1E0h]
  char v94; // [rsp+ACh] [rbp-1DCh]
  __int64 v95; // [rsp+B0h] [rbp-1D8h]
  int v96; // [rsp+B8h] [rbp-1D0h]
  __m128i v97; // [rsp+C0h] [rbp-1C8h] BYREF
  int v98[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int32 v99; // [rsp+D8h] [rbp-1B0h]
  int v100; // [rsp+E0h] [rbp-1A8h] BYREF
  char v101; // [rsp+E4h] [rbp-1A4h]
  __int64 v102; // [rsp+E8h] [rbp-1A0h]
  int v103; // [rsp+F0h] [rbp-198h]
  char v104; // [rsp+F4h] [rbp-194h]
  __int64 v105; // [rsp+F8h] [rbp-190h]
  __int32 v106; // [rsp+100h] [rbp-188h]
  int v107; // [rsp+108h] [rbp-180h] BYREF
  char v108; // [rsp+10Ch] [rbp-17Ch]
  __int64 v109; // [rsp+110h] [rbp-178h]
  int v110; // [rsp+118h] [rbp-170h]
  char v111; // [rsp+11Ch] [rbp-16Ch]
  __int64 v112; // [rsp+120h] [rbp-168h]
  int v113; // [rsp+128h] [rbp-160h]
  __m128i v114; // [rsp+130h] [rbp-158h] BYREF
  void *ptr; // [rsp+140h] [rbp-148h] BYREF
  int v116[2]; // [rsp+148h] [rbp-140h]
  int v117[2]; // [rsp+150h] [rbp-138h] BYREF
  int v118[2]; // [rsp+158h] [rbp-130h]
  int v119; // [rsp+160h] [rbp-128h]
  char v120; // [rsp+164h] [rbp-124h]
  __int64 v121; // [rsp+168h] [rbp-120h]
  __int32 v122; // [rsp+170h] [rbp-118h]
  int v123; // [rsp+178h] [rbp-110h] BYREF
  char v124; // [rsp+17Ch] [rbp-10Ch]
  __int64 v125; // [rsp+180h] [rbp-108h]
  __int32 v126; // [rsp+188h] [rbp-100h]
  char v127; // [rsp+18Ch] [rbp-FCh]
  __int64 v128; // [rsp+190h] [rbp-F8h]
  __int16 v129; // [rsp+198h] [rbp-F0h]
  __m128i v130[14]; // [rsp+1A0h] [rbp-E8h] BYREF

  v8 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)v73 = 0;
  *(_QWORD *)v74 = 0;
  v9 = *(_QWORD *)(v8 + 8656);
  *(_QWORD *)v75 = 1;
  *(_QWORD *)v76 = 0;
  if ( v9 )
  {
    v10 = *a3;
    if ( (unsigned int)v10 < *(_DWORD *)(v9 - 4) )
    {
      v11 = *(_QWORD *)(v9 + 8 * v10);
      if ( v11 )
      {
        if ( (unsigned int)sub_B39350(v11, *(unsigned int *)(a2 + 8)) != -1 )
        {
          sub_9B2530((__int64)a1, a2, a3);
          goto LABEL_6;
        }
      }
    }
  }
  if ( *((_WORD *)a3 + 2) )
    goto LABEL_10;
  v14 = *(_DWORD **)(*((_QWORD *)a3 + 2) + 24LL);
  if ( !v14 || *v14 != 5 )
    goto LABEL_10;
  v24 = v14[1];
  if ( v24 == 6 )
  {
    ptr = nullptr;
    v61 = v117;
    *(_QWORD *)v116 = 0;
    *(_QWORD *)v117 = 1;
    *(_QWORD *)v118 = 0;
    sub_182CBA0(qword_1C7F2C0, v117);
    LOBYTE(v117[1]) &= ~1u;
    v117[0] = 1;
    sub_B28AA0(v98, a2 + 712, &ptr, 0, 0);
    sub_25A130((char *)&ptr);
    v46 = a3[6];
    v47 = a3 + 8;
    v46 *= 8;
    v65[0] = (_DWORD)v47 + v46;
    v48 = &v123;
    v69 = &v123;
    if ( v46 )
    {
      do
      {
        sub_9EC320(
          (int)&ptr,
          a2,
          *v47,
          (int)v48,
          v44,
          v45,
          (int)v61,
          v65[0],
          v69,
          v70,
          v73[0],
          v74[0],
          v75[0],
          v76[0],
          v77,
          v78,
          v79,
          v80,
          v81[0],
          v82,
          v83,
          v85,
          v86,
          v88,
          v89,
          v90,
          v92,
          v93,
          v95,
          v96,
          v97.m128i_i32[0],
          v97.m128i_i32[2],
          v98[0],
          v99,
          v100,
          v102,
          v103,
          v105,
          v106,
          v107,
          v109,
          v110,
          v112,
          v113,
          v114.m128i_i32[0],
          (void *)v114.m128i_i64[1],
          (int)ptr,
          v116[0],
          v117[0],
          v118[0],
          v119,
          v121,
          v122);
        sub_B29360(v98, &ptr);
        ++v47;
        sub_25A130((char *)v69);
        sub_25A130((char *)v61);
      }
      while ( *(_QWORD **)v65 != v47 );
    }
    v49 = v101;
    a1->m128i_i64[0] = *(_QWORD *)v98;
    a1->m128i_i32[2] = v99;
    a1[1].m128i_i32[0] = v100;
    v50 = v49 & 3 | a1[1].m128i_i8[4] & 0xFC;
    v51 = v104;
    a1[1].m128i_i8[4] = v50;
    v52 = v102;
    v102 = 0;
    a1[1].m128i_i64[1] = v52;
    a1[2].m128i_i32[0] = v103;
    LOBYTE(v52) = v51 & 3 | a1[2].m128i_i8[4] & 0xFC;
    v53 = v108;
    a1[2].m128i_i8[4] = v52;
    v54 = v105;
    v105 = 0;
    a1[2].m128i_i64[1] = v54;
    a1[3].m128i_i32[0] = v106;
    a1[3].m128i_i32[2] = v107;
    a1[3].m128i_i8[12] = v53 & 3 | a1[3].m128i_i8[12] & 0xFC;
    v55 = v109;
    v109 = 0;
    a1[4].m128i_i64[0] = v55;
    a1[4].m128i_i32[2] = v110;
    LOBYTE(v55) = a1[4].m128i_i8[12] & 0xFC;
    v56 = v111 & 3;
    a1[6] = _mm_load_si128(&v114);
    a1[4].m128i_i8[12] = v56 | v55;
    v57 = v112;
    v112 = 0;
    a1[5].m128i_i64[0] = v57;
    a1[5].m128i_i16[4] = v113;
    sub_25A130((char *)&v107);
    sub_25A130((char *)&v100);
  }
  else
  {
    if ( v24 != 9 )
    {
      if ( v14[1] == 18 && a3[6] == 1 )
      {
        sub_9EC320(
          (int)a1,
          a2,
          *((_QWORD *)a3 + 4),
          a4,
          a5,
          a6,
          v58,
          v62,
          v66,
          v70,
          v73[0],
          v74[0],
          v75[0],
          v76[0],
          v77,
          v78,
          v79,
          v80,
          v81[0],
          v82,
          v83,
          v85,
          v86,
          v88,
          v89,
          v90,
          v92,
          v93,
          v95,
          v96,
          v97.m128i_i32[0],
          v97.m128i_i32[2],
          v98[0],
          v99,
          v100,
          v102,
          v103,
          v105,
          v106,
          v107,
          v109,
          v110,
          v112,
          v113,
          v114.m128i_i32[0],
          (void *)v114.m128i_i64[1],
          (int)ptr,
          v116[0],
          v117[0],
          v118[0],
          v119,
          v121,
          v122);
        goto LABEL_6;
      }
LABEL_10:
      if ( (unsigned __int8)sub_1666AE0(a2 + 344, a3, v73, &ptr) )
      {
        sub_B28AA0(&ptr, a2 + 712, v73, 0, 0);
        v15 = v117[1];
        a1->m128i_i64[0] = (__int64)ptr;
        a1->m128i_i32[2] = v116[0];
        a1[1].m128i_i32[0] = v117[0];
        v16 = v15 & 3 | a1[1].m128i_i8[4] & 0xFC;
        v17 = v120;
        a1[1].m128i_i8[4] = v16;
        v18 = *(_QWORD *)v118;
        *(_QWORD *)v118 = 0;
        a1[1].m128i_i64[1] = v18;
        a1[2].m128i_i32[0] = v119;
        LOBYTE(v18) = v17 & 3 | a1[2].m128i_i8[4] & 0xFC;
        v19 = v124;
        a1[2].m128i_i8[4] = v18;
        v20 = v121;
        v121 = 0;
        a1[2].m128i_i64[1] = v20;
        a1[3].m128i_i32[0] = v122;
        a1[3].m128i_i32[2] = v123;
        a1[3].m128i_i8[12] = v19 & 3 | a1[3].m128i_i8[12] & 0xFC;
        v21 = v125;
        v125 = 0;
        a1[4].m128i_i64[0] = v21;
        a1[4].m128i_i32[2] = v126;
        LOBYTE(v21) = a1[4].m128i_i8[12] & 0xFC;
        v22 = v127 & 3;
        a1[6] = _mm_load_si128(v130);
        a1[4].m128i_i8[12] = v22 | v21;
        v23 = v128;
        v128 = 0;
        a1[5].m128i_i64[0] = v23;
        a1[5].m128i_i16[4] = v129;
        sub_25A130((char *)&v123);
        sub_25A130((char *)v117);
      }
      else
      {
        sub_B28750(a1);
      }
      goto LABEL_6;
    }
    v59 = v117;
    ptr = v117;
    v71 = (char *)&v77;
    *(_QWORD *)v116 = 0x1000000000LL;
    sub_9EB220((__int64)&v77, a2, (__int64)a3, (__int64)&ptr);
    v63 = v81;
    sub_B28AA0(v81, a2 + 712, &v77, 0, 0);
    v28 = (char *)ptr;
    v29 = (char *)ptr + 16 * (unsigned int)v116[0];
    v67 = &v107;
    if ( v29 != ptr )
    {
      do
      {
        v30 = *((_DWORD *)v28 + 2);
        sub_9EC320(
          (int)v98,
          a2,
          *(_QWORD *)v28,
          v25,
          v26,
          v27,
          (int)v59,
          (int)v63,
          v67,
          (char)v71,
          v73[0],
          v74[0],
          v75[0],
          v76[0],
          v77,
          v78,
          v79,
          v80,
          v81[0],
          v82,
          v83,
          v85,
          v86,
          v88,
          v89,
          v90,
          v92,
          v93,
          v95,
          v96,
          v97.m128i_i32[0],
          v97.m128i_i32[2],
          v98[0],
          v99,
          v100,
          v102,
          v103,
          v105,
          v106,
          v107,
          v109,
          v110,
          v112,
          v113,
          v114.m128i_i32[0],
          (void *)v114.m128i_i64[1],
          (int)ptr,
          v116[0],
          v117[0],
          v118[0],
          v119,
          v121,
          v122);
        sub_B2F710(v98, v30);
        sub_B2A400(
          v64,
          (unsigned int)v98,
          v31,
          v32,
          v33,
          v34,
          v60,
          v64,
          v68,
          v72,
          v73[0],
          v74[0],
          v75[0],
          v76[0],
          v77,
          v78,
          v79,
          v80,
          v81[0],
          v82,
          v83,
          v85,
          v86,
          v88,
          v89,
          v90,
          v92,
          v93,
          v95,
          v96,
          v97.m128i_i32[0],
          v97.m128i_i32[2],
          v98[0]);
        v28 += 16;
        sub_25A130((char *)v67);
        sub_25A130((char *)&v100);
      }
      while ( v29 != v28 );
    }
    v35 = v84;
    a1->m128i_i64[0] = *(_QWORD *)v81;
    a1->m128i_i32[2] = v82;
    a1[1].m128i_i32[0] = v83;
    v36 = v35 & 3 | a1[1].m128i_i8[4] & 0xFC;
    v37 = v87;
    a1[1].m128i_i8[4] = v36;
    v38 = v85;
    v85 = 0;
    a1[1].m128i_i64[1] = v38;
    a1[2].m128i_i32[0] = v86;
    LOBYTE(v38) = v37 & 3 | a1[2].m128i_i8[4] & 0xFC;
    v39 = v91;
    a1[2].m128i_i8[4] = v38;
    v40 = v88;
    v88 = 0;
    a1[2].m128i_i64[1] = v40;
    a1[3].m128i_i32[0] = v89;
    a1[3].m128i_i32[2] = v90;
    a1[3].m128i_i8[12] = v39 & 3 | a1[3].m128i_i8[12] & 0xFC;
    v41 = v92;
    v92 = 0;
    a1[4].m128i_i64[0] = v41;
    a1[4].m128i_i32[2] = v93;
    LOBYTE(v41) = a1[4].m128i_i8[12] & 0xFC;
    v42 = v94 & 3;
    a1[6] = _mm_load_si128(&v97);
    a1[4].m128i_i8[12] = v42 | v41;
    v43 = v95;
    v95 = 0;
    a1[5].m128i_i64[0] = v43;
    a1[5].m128i_i16[4] = v96;
    sub_25A130((char *)&v90);
    sub_25A130((char *)&v83);
    sub_25A130(v71);
    if ( ptr != v59 && ptr )
      sub_186B220(ptr);
  }
LABEL_6:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v73);
  sub_182CBA0(v12, v75);
  return a1;
}

