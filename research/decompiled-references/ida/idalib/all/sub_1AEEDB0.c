void __fastcall sub_1AEEDB0(__int64 a1, __int64 a2, int a3, int a4)
{
  char v5; // al
  _BYTE *v6; // rbx
  int v7; // r12d
  char *v8; // r14
  char v9; // dl
  void *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  int v18; // r9d
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __m128i *v31; // rax
  __m128i *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __m128i si128; // xmm4
  __int64 v36; // rax
  __m128i v37; // xmm5
  char *v38; // [rsp+0h] [rbp-2A8h]
  __int64 v40; // [rsp+10h] [rbp-298h]
  __int64 v41; // [rsp+10h] [rbp-298h]
  __int64 v42; // [rsp+28h] [rbp-280h]
  __int64 v43; // [rsp+28h] [rbp-280h]
  __int64 v44; // [rsp+30h] [rbp-278h]
  __int64 v45; // [rsp+38h] [rbp-270h]
  char v47; // [rsp+47h] [rbp-261h]
  __int64 v48; // [rsp+58h] [rbp-250h] BYREF
  void *v49; // [rsp+60h] [rbp-248h] BYREF
  __int64 v50; // [rsp+68h] [rbp-240h]
  _BYTE v51[48]; // [rsp+70h] [rbp-238h] BYREF
  void *v52; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-200h]
  _BYTE v54[48]; // [rsp+B0h] [rbp-1F8h] BYREF
  const char *v55; // [rsp+E0h] [rbp-1C8h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-1C0h]
  int v57; // [rsp+F8h] [rbp-1B0h]
  __int64 v58; // [rsp+100h] [rbp-1A8h]
  __int64 v59; // [rsp+108h] [rbp-1A0h]
  __int64 v60; // [rsp+110h] [rbp-198h]
  __int64 v61; // [rsp+118h] [rbp-190h]
  __int64 v62; // [rsp+120h] [rbp-188h]
  __int64 v63; // [rsp+128h] [rbp-180h]
  int v64; // [rsp+130h] [rbp-178h]
  __int64 v65; // [rsp+138h] [rbp-170h]
  __int64 v66; // [rsp+140h] [rbp-168h]
  __int64 v67; // [rsp+148h] [rbp-160h]
  __int64 v68; // [rsp+150h] [rbp-158h]
  __m128i ptr; // [rsp+160h] [rbp-148h] BYREF
  __m128i v70; // [rsp+170h] [rbp-138h] BYREF
  __m128i v71; // [rsp+180h] [rbp-128h] BYREF
  __m128i v72; // [rsp+190h] [rbp-118h] BYREF
  __m128i v73; // [rsp+1A0h] [rbp-108h] BYREF
  __m128i v74; // [rsp+1B0h] [rbp-F8h] BYREF
  __m128i v75; // [rsp+1C0h] [rbp-E8h] BYREF
  __m128i v76; // [rsp+1D0h] [rbp-D8h] BYREF
  __m128i v77; // [rsp+1E0h] [rbp-C8h] BYREF
  char *v78; // [rsp+1F0h] [rbp-B8h]
  __int64 v79; // [rsp+1F8h] [rbp-B0h]
  __int64 v80; // [rsp+200h] [rbp-A8h]
  const char *v81; // [rsp+208h] [rbp-A0h]
  __int64 v82; // [rsp+210h] [rbp-98h]
  __int64 v83; // [rsp+218h] [rbp-90h]
  const char *v84; // [rsp+220h] [rbp-88h]
  __int64 v85; // [rsp+228h] [rbp-80h]
  __int64 v86; // [rsp+230h] [rbp-78h]
  const char *v87; // [rsp+238h] [rbp-70h]
  __int64 v88; // [rsp+240h] [rbp-68h]
  __int64 v89; // [rsp+248h] [rbp-60h]
  __int64 v90; // [rsp+250h] [rbp-58h]
  __int64 v91; // [rsp+258h] [rbp-50h]
  __int64 v92; // [rsp+260h] [rbp-48h]

  v49 = v51;
  v50 = 0xC00000000LL;
  sub_FFF220((__int64)&v49, a2);
  v5 = sub_FFF090(a2);
  v6 = v49;
  v47 = v5;
  v38 = (char *)v49 + 4 * (unsigned int)v50;
  if ( v38 != v49 )
  {
    v7 = 0;
    v8 = (char *)v49;
    do
    {
      switch ( *(_DWORD *)v8 )
      {
        case '0':
          v9 = v47;
          goto LABEL_5;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '@':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'Y':
        case '[':
        case '\\':
        case ']':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
          v56 = 0;
          ptr.m128i_i64[0] = (__int64)&v70;
          v55 = nullptr;
          si128 = _mm_load_si128((const __m128i *)&v55);
          v71.m128i_i64[0] = 0;
          v70 = si128;
          ptr.m128i_i64[1] = 0x200000001LL;
          sub_1C40660(a1, a4, a3, 2, (unsigned int)&v70, 1, 0);
          v10 = (void *)ptr.m128i_i64[0];
          if ( (__m128i *)ptr.m128i_i64[0] == &v70 )
            break;
          goto LABEL_7;
        case 'F':
          v32 = &v70;
          v33 = *(_QWORD *)(a1 + 248);
          ptr.m128i_i64[1] = 0x200000000LL;
          v34 = *(_QWORD *)(a1 + 232);
          ptr.m128i_i64[0] = (__int64)&v70;
          if ( (*(_BYTE *)(v34 + 68) & 8) != 0 )
          {
            v36 = *(_QWORD *)(v33 + 19056);
            *(_QWORD *)&v56 = 7;
            v55 = "dyn_ptr";
            v37 = _mm_load_si128((const __m128i *)&v55);
            v56 = 0;
            v71.m128i_i64[0] = v36 | 3;
            v32 = (__m128i *)&v71.m128i_u64[1];
            v70 = v37;
            ptr.m128i_i32[2] = 1;
            v55 = nullptr;
          }
          else
          {
            v55 = nullptr;
            v56 = 0;
          }
          *v32 = _mm_load_si128((const __m128i *)&v55);
          v32[1].m128i_i64[0] = *((_QWORD *)&v56 + 1);
          sub_1C40660(a1, a4, a3, 2, ptr.m128i_i32[0], ++ptr.m128i_i32[2], v7);
          goto LABEL_6;
        case 'X':
          v25 = *(_QWORD *)(a1 + 248);
          v43 = sub_A64980(v25, 32, 1) | 1;
          v26 = *(_QWORD *)(v25 + 19056) | 3LL;
          v27 = sub_A70010(v25, v43);
          v48 = v26;
          *(_QWORD *)&v56 = 0;
          v41 = v27 | 3;
          DWORD2(v56) = 0;
          v57 = 0;
          v58 = 0;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v67 = 0;
          v68 = 0;
          LODWORD(v55) = (unsigned int)v55 & 0xF0000000 | 0x10000;
          v28 = sub_A73610(v25, *(_QWORD *)(v25 + 18632), &v48, 1u, (const __m128i *)&v55, 0);
          v73.m128i_i64[0] = v26;
          ptr.m128i_i64[0] = (__int64)".global_tid.";
          v71.m128i_i64[1] = v41;
          v70.m128i_i64[0] = v43;
          v70.m128i_i64[1] = (__int64)".part_id.";
          v72.m128i_i64[0] = (__int64)".privates.";
          ptr.m128i_i64[1] = 12;
          v71.m128i_i64[0] = 9;
          v72.m128i_i64[1] = 10;
          v29 = sub_A70010(v25, v28);
          v73.m128i_i64[1] = (__int64)".copy_fn.";
          v74.m128i_i64[0] = 9;
          v74.m128i_i64[1] = v29 | 3;
          v30 = *(_QWORD *)(v25 + 19056);
          v75.m128i_i64[0] = (__int64)".task_t.";
          v75.m128i_i64[1] = 8;
          v76.m128i_i64[0] = v30 | 1;
          v53 = 0x200000000LL;
          v76.m128i_i64[1] = 0;
          v77 = 0u;
          v52 = v54;
          sub_2237220(&v52, v54, 6, 24);
          v31 = (__m128i *)((char *)v52 + 24 * (unsigned int)v53);
          *v31 = _mm_load_si128(&ptr);
          v31[1] = _mm_load_si128(&v70);
          v31[2] = _mm_load_si128(&v71);
          v31[3] = _mm_load_si128(&v72);
          v31[4] = _mm_load_si128(&v73);
          v31[5] = _mm_load_si128(&v74);
          v31[6] = _mm_load_si128(&v75);
          v31[7] = _mm_load_si128(&v76);
          v31[8] = _mm_load_si128(&v77);
          v18 = v53 + 6;
          goto LABEL_14;
        case 'Z':
          v11 = *(_QWORD *)(a1 + 248);
          v40 = sub_A64980(v11, 32, 1) | 1;
          v45 = sub_A64980(v11, 64, 0) | 1;
          v42 = sub_A64980(v11, 64, 1) | 1;
          v12 = *(_QWORD *)(v11 + 19056) | 3LL;
          v13 = sub_A70010(v11, v40);
          v48 = v12;
          *(_QWORD *)&v56 = 0;
          DWORD2(v56) = 0;
          v44 = v13 | 3;
          v57 = 0;
          v58 = 0;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v67 = 0;
          v68 = 0;
          LODWORD(v55) = (unsigned int)v55 & 0xF0000000 | 0x10000;
          v14 = sub_A73610(v11, *(_QWORD *)(v11 + 18632), &v48, 1u, (const __m128i *)&v55, 0);
          ptr.m128i_i64[1] = 12;
          v71.m128i_i64[1] = v44;
          ptr.m128i_i64[0] = (__int64)".global_tid.";
          v72.m128i_i64[0] = (__int64)".privates.";
          v70.m128i_i64[0] = v40;
          v70.m128i_i64[1] = (__int64)".part_id.";
          v71.m128i_i64[0] = 9;
          v72.m128i_i64[1] = 10;
          v73.m128i_i64[0] = v12;
          v15 = sub_A70010(v11, v14);
          v73.m128i_i64[1] = (__int64)".copy_fn.";
          v74.m128i_i64[1] = v15 | 3;
          v74.m128i_i64[0] = 9;
          v16 = *(_QWORD *)(v11 + 19056);
          v75.m128i_i64[0] = (__int64)".task_t.";
          v76.m128i_i64[1] = (__int64)".lb.";
          v76.m128i_i64[0] = v16 | 1;
          v78 = ".ub.";
          v83 = v42;
          v81 = ".st.";
          v84 = ".liter.";
          v86 = v40;
          v87 = ".reductions.";
          v53 = 0x200000000LL;
          v75.m128i_i64[1] = 8;
          v77.m128i_i64[0] = 4;
          v77.m128i_i64[1] = v45;
          v79 = 4;
          v80 = v45;
          v82 = 4;
          v85 = 7;
          v88 = 12;
          v89 = v12;
          v90 = 0;
          v91 = 0;
          v92 = 0;
          v52 = v54;
          sub_2237220(&v52, v54, 11, 24);
          v17 = (char *)v52 + 24 * (unsigned int)v53;
          *v17 = ptr.m128i_i64[0];
          v17[32] = v92;
          qmemcpy(
            (void *)((unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)((char *)&ptr - ((char *)v17 - ((unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * (((unsigned int)v17 - (((_DWORD)v17 + 8) & 0xFFFFFFF8) + 264) >> 3));
          v18 = v53 + 11;
LABEL_14:
          LODWORD(v53) = v18;
          sub_1C40660(a1, a4, a3, 2, (_DWORD)v52, v18, v7);
          if ( v52 != v54 )
            free(v52);
          v19 = *(_QWORD *)(sub_15F3040(a1) + 1528);
          v20 = sub_B32450(*(_QWORD *)(a1 + 248), 0, 5);
          sub_B8CC60(v19, v20, v21, v22, v23, v24);
          break;
        case '^':
          v9 = 0;
LABEL_5:
          sub_1AEEAA0(&ptr, a1, v9);
          sub_1C40660(a1, a4, a3, 2, ptr.m128i_i32[0], ptr.m128i_i32[2], v7);
LABEL_6:
          v10 = (void *)ptr.m128i_i64[0];
          if ( (__m128i *)ptr.m128i_i64[0] != &v70 )
LABEL_7:
            free(v10);
          break;
      }
      ++v7;
      v8 += 4;
    }
    while ( v38 != v8 );
    v6 = v49;
  }
  if ( v6 != v51 )
    free(v6);
}
