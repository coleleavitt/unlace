__int64 __fastcall sub_5DD0(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __m128i *v10; // rsi
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // edx
  __m128i *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __m128i *v33; // rsi
  __m128i *v34; // rsi
  unsigned int j; // r12d
  __int64 v36; // rsi
  __int64 v37; // r13
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __m128i *v43; // rsi
  __int64 v45; // rdi
  __m128i *v46; // rsi
  __m128i *v47; // rsi
  __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __m128i si128; // xmm0
  __m128i *v55; // rsi
  __int64 v56; // rsi
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __m128i *v61; // rsi
  __m128i *v62; // rsi
  __int64 v63; // rsi
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdi
  __m128i *v72; // rsi
  __m128i *v73; // rsi
  unsigned int i; // r12d
  __int64 v75; // r13
  __int64 v76; // rsi
  __int64 v77; // r14
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rsi
  __m128i *v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rsi
  __m128i *v86; // rsi
  __int64 v89; // rdi
  __m128i *v90; // rsi
  __m128i *v91; // rsi
  unsigned __int64 v92; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v93; // [rsp+8h] [rbp-C0h]
  unsigned int v94; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v95; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int v96; // [rsp+28h] [rbp-A0h] BYREF
  int v97; // [rsp+2Ch] [rbp-9Ch] BYREF
  __m128i *v98; // [rsp+30h] [rbp-98h] BYREF
  __int128 v99; // [rsp+38h] [rbp-90h]
  __int64 v100; // [rsp+50h] [rbp-78h] BYREF
  __int128 v101; // [rsp+58h] [rbp-70h]
  __int64 v102; // [rsp+70h] [rbp-58h] BYREF
  __int128 v103; // [rsp+78h] [rbp-50h]
  unsigned __int64 v104; // [rsp+88h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  v2 = a1[3];
  v92 = a1[4];
  while ( v2 < v92 )
  {
    v3 = a1[1];
    v4 = v3 + v2;
    v5 = v92 + v3;
    if ( v4 >= v5 || (v6 = sub_E440(v4, v5, &v94)) == 0 )
      sub_3890((__int64)"dylink0 section: couldn't read dylink type at 0x%llx\n", a1[5]);
    v7 = a1[3];
    a1[5] = v7;
    a1[3] = v6 + v7;
    create_data(v7, 0, v6, -1);
    v99 = 0;
    v98 = nullptr;
    v8 = qvector_reserve(&v98, 0, 6, 1);
    v98 = (__m128i *)v8;
    *(_QWORD *)&v99 = 6;
    *(_DWORD *)v8 = 1701869940;
    v9 = v94;
    *(_BYTE *)(v8 + 4) = 32;
    v98->m128i_i8[5] = 0;
    sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v9);
    v10 = (__m128i *)&unk_10F58;
    if ( (_QWORD)v99 )
      v10 = v98;
    set_cmt(a1[5], v10, 0);
    v11 = a1[1];
    v12 = v11 + a1[3];
    v13 = a1[4] + v11;
    if ( v12 >= v13 || (v14 = sub_E440(v12, v13, &v95)) == 0 )
      sub_3890((__int64)"dylink0 section: couldn't read subsection size at 0x%llx\n", a1[5]);
    v15 = a1[3];
    a1[5] = v15;
    a1[3] = v14 + v15;
    create_data(v15, 0, v14, -1);
    v16 = (__int64)v98;
    if ( *((_QWORD *)&v99 + 1) <= 5u )
    {
      v98 = (__m128i *)qvector_reserve(&v98, v98, 6, 1);
      v16 = (__int64)v98;
    }
    *(_QWORD *)&v99 = 6;
    *(_DWORD *)v16 = 1702521203;
    v17 = v95;
    *(_BYTE *)(v16 + 4) = 32;
    v98->m128i_i8[5] = 0;
    sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v17);
    v18 = (__m128i *)&unk_10F58;
    if ( (_QWORD)v99 )
      v18 = v98;
    set_cmt(a1[5], v18, 0);
    v19 = a1[3];
    v93 = v19 + v95;
    v92 = a1[4];
    if ( v92 < v93 )
      sub_3890((__int64)"dylink0 section: invalid subsection size at 0x%llx\n", a1[5]);
    a1[4] = v93;
    if ( v94 == 3 )
    {
      v67 = a1[1];
      v68 = v67 + v19;
      v69 = v93 + v67;
      if ( v68 >= v69 || (v70 = sub_E440(v68, v69, &v96)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read export count at 0x%llx\n", a1[5]);
      v71 = a1[3];
      a1[5] = v71;
      a1[3] = v70 + v71;
      create_data(v71, 0, v70, -1);
      v72 = v98;
      if ( *((_QWORD *)&v99 + 1) <= 0xDu )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 14, 1);
        v72 = v98;
      }
      *(_QWORD *)&v99 = 14;
      qmemcpy(v72, "export count ", 13);
      v98->m128i_i8[13] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v96);
      v73 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v73 = v98;
      set_cmt(a1[5], v73, 0);
      if ( v96 )
      {
        for ( i = 0; i < v96; ++i )
        {
          v97 = 0;
          v100 = 0;
          v101 = 0;
          v103 = 0;
          sub_4200(a1, &v100);
          v75 = v100;
          v102 = 0;
          sub_4200(a1, &v102);
          v76 = a1[1];
          v77 = v102;
          v78 = v76 + a1[3];
          v79 = a1[4] + v76;
          if ( v78 >= v79 || (v80 = sub_E440(v78, v79, &v97)) == 0 )
            sub_3890((__int64)"dylink0 section: couldn't read export flags at 0x%llx\n", a1[5]);
          v81 = a1[3];
          a1[5] = v81;
          a1[3] = v80 + v81;
          create_data(v81, 0, v80, -1);
          v82 = (__int64)v98;
          if ( *((_QWORD *)&v99 + 1) <= 6u )
          {
            v98 = (__m128i *)qvector_reserve(&v98, v98, 7, 1);
            v82 = (__int64)v98;
          }
          *(_QWORD *)&v99 = 7;
          *(_WORD *)(v82 + 4) = 8307;
          *(_DWORD *)v82 = 1734437990;
          v98->m128i_i8[6] = 0;
          sub_4EE0((__int64 *)&v98, (__int64)"(0x%x)", v97);
          v83 = (__m128i *)&unk_10F58;
          if ( (_QWORD)v99 )
            v83 = v98;
          set_cmt(a1[5], v83, 0);
          if ( v77 )
            qfree(v77);
          if ( v75 )
            qfree(v75);
        }
      }
    }
    else if ( v94 > 3 )
    {
      if ( v94 != 4 )
      {
LABEL_71:
        a1[5] = v19;
        a1[3] = v93;
LABEL_72:
        sub_3890((__int64)"unfinished subsection at 0x%llx (expected end 0x%llx", v93, v93);
      }
      v24 = a1[1];
      v25 = v24 + v19;
      v26 = v93 + v24;
      if ( v25 >= v26 || (v27 = sub_E440(v25, v26, &v96)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read import count at 0x%llx\n", a1[5]);
      v32 = a1[3];
      a1[5] = v32;
      a1[3] = v27 + v32;
      create_data(v32, 0, v27, -1);
      v33 = v98;
      if ( *((_QWORD *)&v99 + 1) <= 0xDu )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 14, 1);
        v33 = v98;
      }
      *(_QWORD *)&v99 = 14;
      qmemcpy(v33, "import count ", 13);
      v98->m128i_i8[13] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v96);
      v34 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v34 = v98;
      set_cmt(a1[5], v34, 0);
      if ( v96 )
      {
        for ( j = 0; j < v96; ++j )
        {
          LODWORD(v100) = 0;
          v102 = 0;
          v103 = 0;
          sub_4200(a1, &v102);
          v36 = a1[1];
          v37 = v102;
          v38 = v36 + a1[3];
          v39 = a1[4] + v36;
          if ( v38 >= v39 || (v40 = sub_E440(v38, v39, &v100)) == 0 )
            sub_3890((__int64)"dylink0 section: couldn't read import flags at 0x%llx\n", a1[5]);
          v41 = a1[3];
          a1[5] = v41;
          a1[3] = v40 + v41;
          create_data(v41, 0, v40, -1);
          v42 = (__int64)v98;
          if ( *((_QWORD *)&v99 + 1) <= 6u )
          {
            v98 = (__m128i *)qvector_reserve(&v98, v98, 7, 1);
            v42 = (__int64)v98;
          }
          *(_QWORD *)&v99 = 7;
          *(_DWORD *)v42 = 1734437990;
          *(_WORD *)(v42 + 4) = 8307;
          v98->m128i_i8[6] = 0;
          sub_4EE0((__int64 *)&v98, (__int64)"(0x%x)", v100);
          v43 = (__m128i *)&unk_10F58;
          if ( (_QWORD)v99 )
            v43 = v98;
          set_cmt(a1[5], v43, 0);
          if ( v37 )
            qfree(v37);
        }
      }
    }
    else if ( v94 == 1 )
    {
      v28 = a1[1];
      v29 = v28 + v19;
      v30 = v93 + v28;
      if ( v29 >= v30 || (v31 = sub_E440(v29, v30, &v96)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read memory size at 0x%llx\n", a1[5]);
      v45 = a1[3];
      a1[5] = v45;
      a1[3] = v31 + v45;
      create_data(v45, 0, v31, -1);
      v46 = v98;
      if ( *((_QWORD *)&v99 + 1) <= 0xCu )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 13, 1);
        v46 = v98;
      }
      *(_QWORD *)&v99 = 13;
      qmemcpy(v46, "memory size ", 12);
      v98->m128i_i8[12] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v96);
      v47 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v47 = v98;
      set_cmt(a1[5], v47, 0);
      v48 = a1[1];
      v49 = v48 + a1[3];
      v50 = a1[4] + v48;
      if ( v49 >= v50 || (v51 = sub_E440(v49, v50, &v97)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read memory alignment at 0x%llx\n", a1[5]);
      v52 = a1[3];
      a1[5] = v52;
      a1[3] = v51 + v52;
      create_data(v52, 0, v51, -1);
      v53 = (__int64)v98;
      if ( *((_QWORD *)&v99 + 1) <= 0x11u )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 18, 1);
        v53 = (__int64)v98;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_F330);
      *(_BYTE *)(v53 + 16) = 32;
      *(_QWORD *)&v99 = 18;
      *(__m128i *)v53 = si128;
      v98[1].m128i_i8[1] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v97);
      v55 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v55 = v98;
      set_cmt(a1[5], v55, 0);
      v56 = a1[1];
      v57 = v56 + a1[3];
      v58 = a1[4] + v56;
      if ( v57 >= v58 || (v59 = sub_E440(v57, v58, &v100)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read table size at 0x%llx\n", a1[5]);
      v60 = a1[3];
      a1[5] = v60;
      a1[3] = v59 + v60;
      create_data(v60, 0, v59, -1);
      v61 = v98;
      if ( *((_QWORD *)&v99 + 1) <= 0xBu )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 12, 1);
        v61 = v98;
      }
      *(_QWORD *)&v99 = 12;
      qmemcpy(v61, "table size ", 11);
      v98->m128i_i8[11] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v100);
      v62 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v62 = v98;
      set_cmt(a1[5], v62, 0);
      v63 = a1[1];
      v64 = v63 + a1[3];
      v65 = a1[4] + v63;
      if ( v64 >= v65 || (v66 = sub_E440(v64, v65, &v102)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read table alignment at 0x%llx\n", a1[5]);
      v89 = a1[3];
      a1[5] = v89;
      a1[3] = v66 + v89;
      create_data(v89, 0, v66, -1);
      v90 = v98;
      if ( *((_QWORD *)&v99 + 1) <= 0x10u )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 17, 1);
        v90 = v98;
      }
      *(_QWORD *)&v99 = 17;
      *v90 = _mm_load_si128((const __m128i *)&xmmword_F340);
      v98[1].m128i_i8[0] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v102);
      v91 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v91 = v98;
      set_cmt(a1[5], v91, 0);
    }
    else
    {
      if ( v94 != 2 )
        goto LABEL_71;
      v20 = a1[1];
      v21 = v20 + v19;
      v22 = v93 + v20;
      if ( v21 >= v22 || (v23 = sub_E440(v21, v22, &v96)) == 0 )
        sub_3890((__int64)"dylink0 section: couldn't read needed dynlibs count at 0x%llx\n", a1[5]);
      v84 = a1[3];
      a1[5] = v84;
      a1[3] = v23 + v84;
      create_data(v84, 0, v23, -1);
      v85 = (__int64)v98;
      if ( *((_QWORD *)&v99 + 1) <= 0x15u )
      {
        v98 = (__m128i *)qvector_reserve(&v98, v98, 22, 1);
        v85 = (__int64)v98;
      }
      *(_QWORD *)&v99 = 22;
      *(__m128i *)v85 = _mm_load_si128((const __m128i *)&xmmword_F350);
      *(_QWORD *)(v85 + 13) = 0x20746E756F632073LL;
      v98[1].m128i_i8[5] = 0;
      sub_4EE0((__int64 *)&v98, (__int64)"(%u)", v96);
      v86 = (__m128i *)&unk_10F58;
      if ( (_QWORD)v99 )
        v86 = v98;
      set_cmt(a1[5], v86, 0);
      while ( v96-- )
      {
        v102 = 0;
        v103 = 0;
        sub_4200(a1, &v102);
        if ( v102 )
          qfree(v102);
      }
    }
    v2 = a1[3];
    if ( v2 == v93 )
      goto LABEL_72;
    a1[4] = v92;
    if ( v98 )
    {
      *(_QWORD *)&v99 = 0;
      qfree(v98);
      v2 = a1[3];
      v92 = a1[4];
    }
  }
  return 1;
}
