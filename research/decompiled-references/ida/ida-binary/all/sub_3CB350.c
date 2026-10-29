__int64 __fastcall sub_3CB350(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v11; // ebp
  __int64 v13; // r13
  double v14; // xmm0_8
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char tinfo_details; // bl
  __int64 v20; // r8
  int *v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rax
  __int64 v25; // r12
  size_t v26; // r14
  const char *v27; // rsi
  size_t v28; // r8
  __m128 v29; // xmm0
  int *v30; // r9
  __int64 v31; // rcx
  size_t v32; // r14
  unsigned __int64 v33; // rdx
  __int64 v34; // r14
  size_t v35; // r11
  __int64 v36; // rsi
  const char *v37; // rdx
  const char *v38; // rsi
  int v39; // r9d
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  int v47; // r14d
  const char *v48; // rdi
  const char *v49; // rdi
  int v50; // r14d
  const char *v51; // rdi
  unsigned int v52; // eax
  double v53; // xmm4_8
  double v54; // xmm5_8
  __int64 v55; // rdi
  __int64 v56; // r13
  __int64 v57; // r12
  _QWORD *v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rdi
  void *v61; // rax
  void *v62; // rax
  const void *v63; // rsi
  __int64 v64; // r14
  char v65; // [rsp+0h] [rbp-2E8h]
  __int64 *v66; // [rsp+8h] [rbp-2E0h]
  int *v67; // [rsp+10h] [rbp-2D8h]
  int *v68; // [rsp+10h] [rbp-2D8h]
  int *v69; // [rsp+10h] [rbp-2D8h]
  int *v70; // [rsp+10h] [rbp-2D8h]
  int v71; // [rsp+10h] [rbp-2D8h]
  int v72; // [rsp+10h] [rbp-2D8h]
  int *v73; // [rsp+10h] [rbp-2D8h]
  unsigned __int64 v74; // [rsp+10h] [rbp-2D8h]
  int *v75; // [rsp+18h] [rbp-2D0h]
  size_t v76; // [rsp+20h] [rbp-2C8h]
  size_t v77; // [rsp+28h] [rbp-2C0h]
  __int64 v78; // [rsp+38h] [rbp-2B0h] BYREF
  int v79; // [rsp+40h] [rbp-2A8h] BYREF
  __int64 v80; // [rsp+48h] [rbp-2A0h]
  __int64 v81; // [rsp+50h] [rbp-298h] BYREF
  __int128 v82; // [rsp+58h] [rbp-290h]
  void *src; // [rsp+70h] [rbp-278h] BYREF
  __int128 v84; // [rsp+78h] [rbp-270h]
  __int64 v85; // [rsp+90h] [rbp-258h] BYREF
  __int128 v86; // [rsp+98h] [rbp-250h]
  __int64 v87; // [rsp+B0h] [rbp-238h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-230h]
  __int64 v89; // [rsp+C8h] [rbp-220h]
  __int64 v90; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-210h] BYREF
  __int128 v92; // [rsp+E0h] [rbp-208h]
  __int64 v93; // [rsp+F0h] [rbp-1F8h]
  __int128 v94; // [rsp+F8h] [rbp-1F0h]
  char v95; // [rsp+108h] [rbp-1E0h]
  void *v96; // [rsp+110h] [rbp-1D8h] BYREF
  size_t n[38]; // [rsp+118h] [rbp-1D0h]
  const char *v98; // [rsp+248h] [rbp-A0h]
  __int64 v99; // [rsp+250h] [rbp-98h]
  const char *v100; // [rsp+260h] [rbp-88h]
  __int64 v101; // [rsp+268h] [rbp-80h]
  __int64 v102; // [rsp+278h] [rbp-70h]
  char v103; // [rsp+2A1h] [rbp-47h]
  char v104; // [rsp+2A3h] [rbp-45h]
  char v105; // [rsp+2A4h] [rbp-44h]
  unsigned __int64 v106; // [rsp+2A8h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 8);
  v106 = __readfsqword(0x28u);
  if ( v9 == 58 || (v11 = 0, v9 == 25) )
  {
    if ( !*(_QWORD *)a1 )
      return 0;
    v13 = *(_QWORD *)(a1 + 208);
    v11 = 0;
    if ( *(_BYTE *)(v13 + 31) == 12 )
    {
      v14 = 0.0;
      v89 = 0;
      v15 = 12;
      v90 = 0;
      v91 = 0;
      v93 = 0;
      v95 = 16;
      v88 = 0;
      v92 = 0;
      v94 = 0;
      v16 = *(_QWORD *)(v13 + 8);
      v87 = 0;
      tinfo_details = get_tinfo_details(v16, 12, &v87);
      if ( tinfo_details )
      {
        v24 = *(_QWORD *)(a1 + 208);
        v25 = *(_QWORD *)(v24 + 296);
        if ( v25 )
        {
          v21 = *(int **)(v13 + 296);
          v66 = (__int64 *)(v21 + 16);
          if ( *v21 <= 4 && *v21 != 2 )
          {
            v26 = *(_QWORD *)(v25 + 24);
            v81 = 0;
            src = nullptr;
            v82 = 0;
            v84 = 0;
            if ( v26 )
            {
              v73 = v21;
              v62 = (void *)qalloc_or_throw(v26);
              *((_QWORD *)&v84 + 1) = v26;
              v63 = *(const void **)(v25 + 16);
              src = v62;
              memcpy(v62, v63, v26);
              *(_QWORD *)&v84 = v26;
              v21 = v73;
            }
LABEL_12:
            v27 = nullptr;
            v67 = v21;
            *(_OWORD *)n = 0;
            v96 = nullptr;
            v96 = (void *)qvector_reserve(&v96, 0, 16, 1);
            v29 = 0;
            v30 = v67;
            n[0] = 16;
            strcpy((char *)v96, "Edit location: ");
            v31 = 0x203A6E6F69746163LL;
            v85 = 0;
            v32 = n[0];
            v86 = 0;
            if ( n[0] )
            {
              v61 = (void *)qalloc_or_throw(n[0]);
              v27 = (const char *)v96;
              v85 = (__int64)v61;
              *((_QWORD *)&v86 + 1) = v32;
              memcpy(v61, v96, v32);
              *(_QWORD *)&v86 = v32;
              v30 = v67;
            }
            v33 = v84;
            if ( (_QWORD)v84 )
            {
              v28 = v84 - 1;
              if ( (_QWORD)v84 != 1 )
              {
                v34 = v86;
                v35 = v84 - 1;
                if ( (_QWORD)v86 )
                {
                  v34 = v86 - 1;
                  v35 = v28 + v86 - 1;
                  v33 = v84 + v86 - 1;
                }
                v36 = v85;
                if ( *((_QWORD *)&v86 + 1) < v33 )
                {
                  v77 = v84 - 1;
                  v76 = v35;
                  v75 = v30;
                  v74 = v33;
                  v85 = qvector_reserve(&v85, v85, v33, 1);
                  v28 = v77;
                  v36 = v85;
                  v35 = v76;
                  v30 = v75;
                  v33 = v74;
                }
                *(_QWORD *)&v86 = v33;
                *(_BYTE *)(v36 + v35) = 0;
                v27 = (const char *)src;
                v68 = v30;
                memcpy((void *)(v34 + v85), src, v28);
                v30 = v68;
              }
            }
            if ( v96 )
            {
              v69 = v30;
              n[0] = 0;
              qfree(v96, v27, v33, v31, v28);
              v30 = v69;
            }
            v70 = v30;
            v78 = 0;
            copy_tinfo_t(&v78, v66, v33);
            v79 = 0;
            copy_argloc(&v79, v70);
            v37 = &s1;
            if ( (_QWORD)v84 )
              v37 = (const char *)src;
            v38 = &s1;
            if ( (_QWORD)v86 )
              v38 = (const char *)v85;
            sub_3C7F60((__int64)&v96, v38, v37, (__int64)&v79, (__int64)&v78);
            cleanup_argloc(&v79);
            clear_tinfo_t(&v78);
            v15 = 0;
            *(double *)v29.m128_u64 = callui(203, 0, (unsigned int)&v96, (unsigned int)&v81, (unsigned int)&callui, v39);
            if ( v40 == -1 )
            {
              if ( (unsigned __int64)v82 > 1 )
              {
                v15 = v81;
                sub_169700(
                  (int)"Error setting argument location '%s'\n",
                  v81,
                  v41,
                  v42,
                  v43,
                  v44,
                  v29,
                  a3,
                  a4,
                  a5,
                  v45,
                  v46,
                  a8,
                  a9,
                  v65);
              }
              goto LABEL_67;
            }
            if ( v40 == 1 )
            {
              v79 = 0;
              v80 = 0;
              if ( v104 )
              {
                v47 = v102;
                v48 = &s1;
                if ( v99 )
                  v48 = v98;
                v71 = str2reg(v48);
                cleanup_argloc(&v79);
                v79 = 3;
                LODWORD(v80) = v71 | (v47 << 16);
              }
              if ( v105 )
              {
                v49 = &s1;
                if ( v101 )
                  v49 = v100;
                v50 = str2reg(v49);
                v51 = &s1;
                if ( v99 )
                  v51 = v98;
                v72 = str2reg(v51);
                cleanup_argloc(&v79);
                v79 = 4;
                LODWORD(v80) = v72 | (v50 << 16);
                goto LABEL_39;
              }
              if ( v103 )
              {
                v64 = v102;
                cleanup_argloc(&v79);
                v79 = 1;
                v80 = v64;
              }
              else if ( !v79 )
              {
                cleanup_argloc(&v79);
                goto LABEL_67;
              }
LABEL_39:
              LODWORD(v89) = v89 | 0x200;
              if ( tinfo_details )
                v52 = set_tinfo_property4(v13 + 8, 37, *(_QWORD *)(v13 + 32), &v79, 0, 0);
              else
                v52 = set_tinfo_property4(v13 + 8, 38, &v79, 0, 0, 0);
              v15 = v52;
              v11 = (unsigned __int8)sub_3AC490(
                                       (__int64 *)a1,
                                       v52,
                                       (__int64)"Failed to set argument location",
                                       v29,
                                       a3,
                                       a4,
                                       a5,
                                       v53,
                                       v54,
                                       a8,
                                       a9);
              cleanup_argloc(&v79);
              goto LABEL_42;
            }
LABEL_67:
            v11 = 1;
LABEL_42:
            v14 = edit_argloc_dialog_t__::vfunc_0(&v96, (const char *)v15);
            if ( v85 )
            {
              *(_QWORD *)&v86 = 0;
              v14 = qfree(v85, (const char *)v15, v14);
            }
            if ( src )
            {
              *(_QWORD *)&v84 = 0;
              v14 = qfree(src, (const char *)v15, v14);
            }
            if ( v81 )
            {
              *(_QWORD *)&v82 = 0;
              v14 = qfree(v81, (const char *)v15, v14);
            }
            goto LABEL_50;
          }
LABEL_49:
          sub_169700(
            (int)"Sorry, it is not yet possible to edit such an argument location in the prototype editor.\n"
                 "Please use the one-line input for this",
            12,
            v17,
            v18,
            v20,
            (__int64)v21,
            (__m128)0LL,
            a3,
            a4,
            a5,
            v22,
            v23,
            a8,
            a9,
            v65);
          v11 = 1;
LABEL_50:
          if ( v93 )
          {
            *(_QWORD *)&v94 = 0;
            v14 = qfree(v93, (const char *)v15, v14);
          }
          cleanup_argloc(&v91);
          clear_tinfo_t(&v90);
          v55 = v87;
          if ( v87 )
          {
            v56 = v88;
            if ( (_QWORD)v88 )
            {
              v57 = 0;
              do
              {
                v58 = (_QWORD *)(v55 + 80 * v57);
                clear_tinfo_t(v58 + 8);
                v59 = v58[5];
                if ( v59 )
                {
                  v58[6] = 0;
                  v14 = qfree(v59, (const char *)v15, v14);
                }
                v60 = v58[2];
                if ( v60 )
                {
                  v58[3] = 0;
                  v14 = qfree(v60, (const char *)v15, v14);
                }
                ++v57;
                cleanup_argloc(v58);
                v55 = v87;
              }
              while ( v56 != v57 );
            }
            *(_QWORD *)&v88 = 0;
            qfree(v55, (const char *)v15, v14);
          }
          return v11;
        }
        if ( *(_QWORD *)(v24 + 16) == -2 )
        {
          tinfo_details = (_DWORD)v91 == 2 || (int)v91 > 4;
          if ( !tinfo_details )
          {
            v82 = 0;
            v81 = 0;
            src = nullptr;
            v84 = 0;
            src = (void *)qvector_reserve(&src, 0, 13, 1);
            v21 = (int *)&v91;
            *(_QWORD *)&v84 = 13;
            strcpy((char *)src, "return value");
            v66 = &v90;
            goto LABEL_12;
          }
          goto LABEL_49;
        }
      }
      v11 = 0;
      goto LABEL_50;
    }
  }
  return v11;
}
