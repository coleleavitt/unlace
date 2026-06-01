__int64 __fastcall sub_E93F50(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
  __int64 *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // r15
  __int64 *v15; // rax
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // r15
  __int64 *v25; // rax
  __int64 v27; // r13
  unsigned int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 *v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 *v43; // r14
  __int64 *v44; // rax
  __int64 v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 *v50; // r14
  __int64 *v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r15
  __int64 *v57; // r14
  __int64 *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r15
  __int64 *v68; // r14
  __int64 *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __m128i v72; // xmm0
  unsigned int v73; // eax
  __int64 v74; // rdx
  unsigned __int64 v75; // rax
  __m128i si128; // xmm0
  unsigned int v77; // eax
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __m128i v80; // xmm0
  unsigned int v81; // eax
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __m128i v84; // xmm0
  unsigned int v85; // eax
  __int64 v86; // rdx
  unsigned __int64 v87; // rax
  __m128i v88; // xmm0
  unsigned int v89; // eax
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  unsigned int v95; // eax
  __int64 v96; // rdi
  __int64 v97; // rdi
  __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  int v103; // [rsp+Ch] [rbp-5Ch]
  __int64 *v104; // [rsp+18h] [rbp-50h] BYREF
  __int64 *v105[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64 *)(a1 + 8LL * (int)a2 + 88);
  v3 = *v2;
  if ( *v2 )
    return *(_QWORD *)(a1 + 8LL * (int)a2 + 88);
  switch ( a2 )
  {
    case 0LL:
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v53 = sub_2244B30("stringWithString", 16);
      v56 = (unsigned int)sub_2244CB0(v27, "stringWithString", 16, v53);
      v57 = (__int64 *)(*(_QWORD *)v27 + 8 * v56);
      if ( !*v57 )
        goto LABEL_57;
      if ( *v57 == -8 )
      {
        --*(_DWORD *)(v27 + 16);
LABEL_57:
        v74 = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 104) += 33LL;
        v75 = (v74 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v27 + 32) >= v75 + 33 && v74 )
          *(_QWORD *)(v27 + 24) = v75 + 33;
        else
          v75 = sub_986170(v27 + 24, 33, 33, 3, v54, v55);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8F60);
        *(_BYTE *)(v75 + 32) = 0;
        *(_QWORD *)v75 = 16;
        *(__m128i *)(v75 + 16) = si128;
        *(_QWORD *)(v75 + 8) = 0;
        *v57 = v75;
        ++*(_DWORD *)(v27 + 12);
        v77 = sub_22450D0(v27, (unsigned int)v56);
        sub_989490(v105, (__int64 *)(*(_QWORD *)v27 + 8LL * v77), 0);
        v58 = v105[0];
      }
      else
      {
        sub_989490(v105, v57, 0);
        v58 = v105[0];
      }
      v36 = *v58;
      v37 = *(_QWORD *)(*v58 + 8);
      if ( v37 )
        goto LABEL_49;
      v59 = *(_QWORD *)(v27 + 120);
      if ( v59 )
      {
        v37 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v59 + 16LL))(
                v59,
                "stringWithString",
                16);
        *(_QWORD *)(v36 + 8) = v37;
        if ( v37 )
          goto LABEL_49;
      }
      goto LABEL_41;
    case 1LL:
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v46 = sub_2244B30("stringWithUTF8String", 20);
      v49 = (unsigned int)sub_2244CB0(v27, "stringWithUTF8String", 20, v46);
      v50 = (__int64 *)(*(_QWORD *)v27 + 8 * v49);
      if ( !*v50 )
        goto LABEL_52;
      if ( *v50 == -8 )
      {
        --*(_DWORD *)(v27 + 16);
LABEL_52:
        v70 = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 104) += 37LL;
        v71 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v27 + 32) >= v71 + 37 && v70 )
          *(_QWORD *)(v27 + 24) = v71 + 37;
        else
          v71 = sub_986170(v27 + 24, 37, 37, 3, v47, v48);
        v72 = _mm_load_si128((const __m128i *)&xmmword_23A8F70);
        strcpy((char *)(v71 + 32), "ring");
        *(__m128i *)(v71 + 16) = v72;
        *(_QWORD *)v71 = 20;
        *(_QWORD *)(v71 + 8) = 0;
        *v50 = v71;
        ++*(_DWORD *)(v27 + 12);
        v73 = sub_22450D0(v27, (unsigned int)v49);
        sub_989490(v105, (__int64 *)(*(_QWORD *)v27 + 8LL * v73), 0);
        v51 = v105[0];
      }
      else
      {
        sub_989490(v105, v50, 0);
        v51 = v105[0];
      }
      v36 = *v51;
      v37 = *(_QWORD *)(*v51 + 8);
      if ( !v37 )
      {
        v52 = *(_QWORD *)(v27 + 120);
        if ( !v52 )
          goto LABEL_41;
        v37 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v52 + 16LL))(
                v52,
                "stringWithUTF8String",
                20);
        *(_QWORD *)(v36 + 8) = v37;
        if ( !v37 )
          goto LABEL_41;
      }
      goto LABEL_49;
    case 2LL:
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v6 = sub_2244B30("stringWithCString", 17);
      v9 = sub_2244CB0(v5, "stringWithCString", 17, v6);
      v10 = (__int64 *)(*(_QWORD *)v5 + 8LL * v9);
      if ( !*v10 )
        goto LABEL_62;
      if ( *v10 == -8 )
      {
        --*(_DWORD *)(v5 + 16);
LABEL_62:
        v78 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v5 + 104) += 34LL;
        v79 = (v78 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v5 + 32) >= v79 + 34 && v78 )
          *(_QWORD *)(v5 + 24) = v79 + 34;
        else
          v79 = sub_986170(v5 + 24, 34, 34, 3, v7, v8);
        v80 = _mm_load_si128((const __m128i *)&xmmword_23A8F90);
        *(_BYTE *)(v79 + 32) = 103;
        *(_BYTE *)(v79 + 33) = 0;
        *(__m128i *)(v79 + 16) = v80;
        *(_QWORD *)v79 = 17;
        *(_QWORD *)(v79 + 8) = 0;
        *v10 = v79;
        ++*(_DWORD *)(v5 + 12);
        v81 = sub_22450D0(v5, v9);
        sub_989490(v105, (__int64 *)(*(_QWORD *)v5 + 8LL * v81), 0);
        v13 = v105[0];
      }
      else
      {
        sub_989490(v105, v10, 0);
        v13 = v105[0];
      }
      v14 = *v13;
      v15 = *(__int64 **)(*v13 + 8);
      if ( !v15 )
      {
        v100 = *(_QWORD *)(v5 + 120);
        if ( !v100
          || (v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v100 + 16LL))(
                                 v100,
                                 "stringWithCString",
                                 17),
              (*(_QWORD *)(v14 + 8) = v15) == 0) )
        {
          v101 = *(_QWORD *)(v5 + 24);
          *(_QWORD *)(v5 + 104) += 24LL;
          v15 = (__int64 *)((v101 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)(v15 + 3) && v101 )
            *(_QWORD *)(v5 + 24) = v15 + 3;
          else
            v15 = (__int64 *)sub_986170(v5 + 24, 24, 24, 3, v11, v12);
          v102 = *v15 & 0xFFFFF80000000000LL;
          v15[1] = 0;
          *v15 = v102 | 0x1FFFC05;
          *(_QWORD *)(v14 + 8) = v15;
          v15[2] = v14;
        }
      }
      v105[0] = v15;
      v16 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v17 = sub_2244B30("encoding", 8);
      v18 = (unsigned int)sub_2244CB0(v16, "encoding", 8, v17);
      v20 = (__int64 *)(*(_QWORD *)v16 + 8 * v18);
      if ( !*v20 )
        goto LABEL_82;
      if ( *v20 == -8 )
      {
        --*(_DWORD *)(v16 + 16);
LABEL_82:
        v93 = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 104) += 25LL;
        v94 = (v93 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v16 + 32) >= v94 + 25 && v93 )
        {
          *(_QWORD *)(v16 + 24) = v94 + 25;
        }
        else
        {
          v103 = v18;
          v94 = sub_986170(v16 + 24, 25, 25, 3, v18, v19);
          LODWORD(v18) = v103;
        }
        strcpy((char *)(v94 + 16), "encoding");
        *(_QWORD *)v94 = 8;
        *(_QWORD *)(v94 + 8) = 0;
        *v20 = v94;
        ++*(_DWORD *)(v16 + 12);
        v95 = sub_22450D0(v16, (unsigned int)v18);
        sub_989490(&v104, (__int64 *)(*(_QWORD *)v16 + 8LL * v95), 0);
        v23 = v104;
      }
      else
      {
        sub_989490(&v104, v20, 0);
        v23 = v104;
      }
      v24 = *v23;
      v25 = *(__int64 **)(*v23 + 8);
      if ( !v25 )
      {
        v97 = *(_QWORD *)(v16 + 120);
        if ( !v97
          || (v25 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v97 + 16LL))(
                                 v97,
                                 "encoding",
                                 8),
              (*(_QWORD *)(v24 + 8) = v25) == 0) )
        {
          v98 = *(_QWORD *)(v16 + 24);
          *(_QWORD *)(v16 + 104) += 24LL;
          v25 = (__int64 *)((v98 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v16 + 32) >= (unsigned __int64)(v25 + 3) && v98 )
            *(_QWORD *)(v16 + 24) = v25 + 3;
          else
            v25 = (__int64 *)sub_986170(v16 + 24, 24, 24, 3, v21, v22);
          v99 = *v25 & 0xFFFFF80000000000LL;
          v25[1] = 0;
          *v25 = v99 | 0x1FFFC05;
          *(_QWORD *)(v24 + 8) = v25;
          v25[2] = v24;
        }
      }
      v105[1] = v25;
      v3 = sub_FE3230(*(_QWORD *)(*(_QWORD *)a1 + 17512LL), 2, v105);
      break;
    case 3LL:
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v39 = sub_2244B30("stringWithCString", 17);
      v42 = (unsigned int)sub_2244CB0(v27, "stringWithCString", 17, v39);
      v43 = (__int64 *)(*(_QWORD *)v27 + 8 * v42);
      if ( !*v43 )
        goto LABEL_67;
      if ( *v43 == -8 )
      {
        --*(_DWORD *)(v27 + 16);
LABEL_67:
        v82 = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 104) += 34LL;
        v83 = (v82 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v27 + 32) >= v83 + 34 && v82 )
          *(_QWORD *)(v27 + 24) = v83 + 34;
        else
          v83 = sub_986170(v27 + 24, 34, 34, 3, v40, v41);
        v84 = _mm_load_si128((const __m128i *)&xmmword_23A8F90);
        *(_BYTE *)(v83 + 32) = 103;
        *(_BYTE *)(v83 + 33) = 0;
        *(__m128i *)(v83 + 16) = v84;
        *(_QWORD *)v83 = 17;
        *(_QWORD *)(v83 + 8) = 0;
        *v43 = v83;
        ++*(_DWORD *)(v27 + 12);
        v85 = sub_22450D0(v27, (unsigned int)v42);
        sub_989490(v105, (__int64 *)(*(_QWORD *)v27 + 8LL * v85), 0);
        v44 = v105[0];
      }
      else
      {
        sub_989490(v105, v43, 0);
        v44 = v105[0];
      }
      v36 = *v44;
      v37 = *(_QWORD *)(*v44 + 8);
      if ( !v37 )
      {
        v45 = *(_QWORD *)(v27 + 120);
        if ( !v45 )
          goto LABEL_41;
        v37 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v45 + 16LL))(
                v45,
                "stringWithCString",
                17);
        *(_QWORD *)(v36 + 8) = v37;
        if ( !v37 )
          goto LABEL_41;
      }
      goto LABEL_49;
    case 4LL:
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v28 = sub_2244B30("initWithString", 14);
      v31 = (unsigned int)sub_2244CB0(v27, "initWithString", 14, v28);
      v32 = (__int64 *)(*(_QWORD *)v27 + 8 * v31);
      if ( !*v32 )
        goto LABEL_77;
      if ( *v32 == -8 )
      {
        --*(_DWORD *)(v27 + 16);
LABEL_77:
        v90 = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 104) += 31LL;
        v91 = (v90 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v27 + 32) >= v91 + 31 && v90 )
          *(_QWORD *)(v27 + 24) = v91 + 31;
        else
          v91 = sub_986170(v27 + 24, 31, 31, 3, v29, v30);
        strcpy((char *)(v91 + 16), "initWithString");
        *(_QWORD *)v91 = 14;
        *(_QWORD *)(v91 + 8) = 0;
        *v32 = v91;
        ++*(_DWORD *)(v27 + 12);
        v92 = sub_22450D0(v27, (unsigned int)v31);
        sub_989490(v105, (__int64 *)(*(_QWORD *)v27 + 8LL * v92), 0);
        v35 = v105[0];
      }
      else
      {
        sub_989490(v105, v32, 0);
        v35 = v105[0];
      }
      v36 = *v35;
      v37 = *(_QWORD *)(*v35 + 8);
      if ( !v37 )
      {
        v38 = *(_QWORD *)(v27 + 120);
        if ( !v38 )
          goto LABEL_41;
        v37 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v38 + 16LL))(
                v38,
                "initWithString",
                14);
        *(_QWORD *)(v36 + 8) = v37;
        if ( !v37 )
          goto LABEL_41;
      }
      goto LABEL_49;
    case 5LL:
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v64 = sub_2244B30("initWithUTF8String", 18);
      v67 = (unsigned int)sub_2244CB0(v27, "initWithUTF8String", 18, v64);
      v68 = (__int64 *)(*(_QWORD *)v27 + 8 * v67);
      if ( !*v68 )
        goto LABEL_72;
      if ( *v68 == -8 )
      {
        --*(_DWORD *)(v27 + 16);
LABEL_72:
        v86 = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 104) += 35LL;
        v87 = (v86 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v27 + 32) >= v87 + 35 && v86 )
          *(_QWORD *)(v27 + 24) = v87 + 35;
        else
          v87 = sub_986170(v27 + 24, 35, 35, 3, v65, v66);
        v88 = _mm_load_si128((const __m128i *)&xmmword_23A8F80);
        strcpy((char *)(v87 + 32), "ng");
        *(_QWORD *)v87 = 18;
        *(__m128i *)(v87 + 16) = v88;
        *(_QWORD *)(v87 + 8) = 0;
        *v68 = v87;
        ++*(_DWORD *)(v27 + 12);
        v89 = sub_22450D0(v27, (unsigned int)v67);
        sub_989490(v105, (__int64 *)(*(_QWORD *)v27 + 8LL * v89), 0);
        v69 = v105[0];
      }
      else
      {
        sub_989490(v105, v68, 0);
        v69 = v105[0];
      }
      v36 = *v69;
      v37 = *(_QWORD *)(*v69 + 8);
      if ( v37
        || (v96 = *(_QWORD *)(v27 + 120)) != 0
        && (v37 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v96 + 16LL))(
                    v96,
                    "initWithUTF8String",
                    18),
            (*(_QWORD *)(v36 + 8) = v37) != 0) )
      {
LABEL_49:
        v61 = v37 & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
LABEL_41:
        v60 = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 104) += 24LL;
        v61 = (v60 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v27 + 32) >= v61 + 24 && v60 )
        {
          *(_QWORD *)(v27 + 24) = v61 + 24;
          v62 = (v60 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v62 = sub_986170(v27 + 24, 24, 24, 3, v33, v34);
          v61 = v62 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v63 = *(_QWORD *)v62 & 0xFFFFF80000000000LL;
        *(_QWORD *)(v62 + 8) = 0;
        *(_QWORD *)v62 = v63 | 0x1FFFC05;
        *(_QWORD *)(v36 + 8) = v62;
        *(_QWORD *)(v62 + 16) = v36;
      }
      v3 = v61 | 2;
      break;
    default:
      break;
  }
  *v2 = v3;
  return *(_QWORD *)(a1 + 8LL * (int)a2 + 88);
}
