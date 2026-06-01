__int64 __fastcall sub_3AF960(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v13; // rsi
  __int64 tinfo_property4; // rax
  __int64 v15; // rdx
  _QWORD *func; // r13
  unsigned int v17; // ebp
  __m128 v19; // xmm0
  size_t v20; // r15
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  char *v26; // r15
  __int64 v27; // rcx
  char *v28; // rdi
  signed __int64 v29; // r8
  char *v30; // rdx
  char *v31; // rax
  unsigned __int64 v32; // r9
  char *v33; // rsi
  double v34; // xmm4_8
  double v35; // xmm5_8
  const char *v36; // rsi
  __int64 v37; // rdi
  signed int v38; // eax
  __int64 v39; // rdx
  const char *v40; // r8
  char *v41; // r14
  int v42; // eax
  char *v43; // rcx
  const char *v44; // rdi
  __int64 v45; // r14
  __int64 v46; // r13
  const char *v47; // r15
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned __int8 v50; // al
  char *v51; // rax
  int v52; // eax
  char *v53; // r14
  size_t v54; // rax
  size_t v55; // r9
  size_t v56; // rdx
  __int64 v57; // rsi
  const char *v58; // rdi
  __int64 v59; // rax
  int v60; // eax
  char v61; // [rsp+0h] [rbp-1A8h]
  unsigned __int64 v62; // [rsp+8h] [rbp-1A0h]
  __int64 *v63; // [rsp+8h] [rbp-1A0h]
  const char *v64; // [rsp+8h] [rbp-1A0h]
  const char *v65; // [rsp+8h] [rbp-1A0h]
  const char *v66; // [rsp+8h] [rbp-1A0h]
  size_t v67; // [rsp+8h] [rbp-1A0h]
  size_t v68; // [rsp+8h] [rbp-1A0h]
  unsigned int v69; // [rsp+10h] [rbp-198h]
  __int64 v70; // [rsp+10h] [rbp-198h]
  unsigned __int64 v71; // [rsp+10h] [rbp-198h]
  signed __int64 v72; // [rsp+10h] [rbp-198h]
  signed __int64 v73; // [rsp+18h] [rbp-190h]
  signed __int64 v74; // [rsp+18h] [rbp-190h]
  __int64 v75; // [rsp+20h] [rbp-188h]
  const char *v76; // [rsp+20h] [rbp-188h]
  const char *v77; // [rsp+20h] [rbp-188h]
  size_t v78; // [rsp+28h] [rbp-180h]
  const char *v79; // [rsp+38h] [rbp-170h] BYREF
  __int64 v80; // [rsp+40h] [rbp-168h] BYREF
  __int64 v81; // [rsp+48h] [rbp-160h] BYREF
  char *s1; // [rsp+50h] [rbp-158h] BYREF
  __int128 v83; // [rsp+58h] [rbp-150h]
  const char *v84; // [rsp+70h] [rbp-138h] BYREF
  __int128 v85; // [rsp+78h] [rbp-130h]
  __int64 v86; // [rsp+88h] [rbp-120h]
  __int64 v87; // [rsp+90h] [rbp-118h] BYREF
  __int64 v88; // [rsp+98h] [rbp-110h] BYREF
  __int128 v89; // [rsp+A0h] [rbp-108h]
  __int64 v90; // [rsp+B0h] [rbp-F8h]
  __int128 v91; // [rsp+B8h] [rbp-F0h]
  char v92; // [rsp+C8h] [rbp-E0h]
  _QWORD v93[2]; // [rsp+D0h] [rbp-D8h] BYREF
  void *src; // [rsp+E0h] [rbp-C8h]
  size_t n[2]; // [rsp+E8h] [rbp-C0h]
  __int64 v96; // [rsp+F8h] [rbp-B0h]
  __int128 v97; // [rsp+100h] [rbp-A8h]
  __int128 v98[3]; // [rsp+110h] [rbp-98h] BYREF
  __int64 v99; // [rsp+140h] [rbp-68h]
  int v100; // [rsp+148h] [rbp-60h]
  __int64 v101; // [rsp+150h] [rbp-58h]
  char v102; // [rsp+158h] [rbp-50h]
  unsigned __int64 v103; // [rsp+168h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  v79 = nullptr;
  copy_tinfo_t(&v79, a2, a3);
  if ( a3 == -1 || get_tinfo_property4(v79, 300, 0, 0, 0, 0) == -1 )
  {
    v17 = 0;
    goto LABEL_12;
  }
  v13 = v79;
  v93[1] = 0;
  src = nullptr;
  v96 = 0;
  v99 = 1;
  v100 = -1;
  v101 = 0;
  v102 = 0;
  v93[0] = a3;
  *(_OWORD *)n = 0;
  v97 = 0;
  v98[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member(v93, v79, 1) != -1 )
  {
    v13 = (_BYTE *)(&qword_128 + 4);
    tinfo_property4 = get_tinfo_property4(v79, 300, 0, 0, 0, 0);
    func = (_QWORD *)get_func(tinfo_property4);
    if ( func )
    {
      if ( (v101 & 0x300000000000LL) == 0 )
      {
        v19 = 0;
        v20 = n[0];
        s1 = nullptr;
        v83 = 0;
        v62 = v93[0];
        if ( n[0] )
        {
          v51 = (char *)qalloc_or_throw(n[0]);
          v13 = (const char *)src;
          s1 = v51;
          *((_QWORD *)&v83 + 1) = v20;
          memcpy(v51, src, v20);
          *(_QWORD *)&v83 = v20;
        }
        v21 = itext(1175, v13, v15);
        v13 = &byte_4;
        if ( !(unsigned __int8)sub_196F50(
                                 (int)&s1,
                                 4,
                                 (int)"%s",
                                 v21,
                                 v22,
                                 v23,
                                 (__m128)0LL,
                                 a5,
                                 a6,
                                 a7,
                                 v24,
                                 v25,
                                 a10,
                                 a11,
                                 v61) )
          goto LABEL_16;
        v27 = v83;
        if ( (unsigned __int64)v83 <= 1 )
        {
LABEL_36:
          v63 = (__int64 *)(v62 >> 3);
          sub_28EA90((__int64 *)&s1, v63, (__int64)func, *(double *)v19.m128_u64);
          if ( n[0] )
          {
            v13 = (const char *)src;
            if ( !(_QWORD)v83 )
            {
              if ( *(_BYTE *)src )
              {
                v26 = (char *)&::s1;
                goto LABEL_40;
              }
LABEL_16:
              v26 = s1;
              v17 = 1;
              goto LABEL_17;
            }
          }
          else
          {
            v13 = &::s1;
            if ( !(_QWORD)v83 )
              goto LABEL_16;
          }
          v26 = s1;
          if ( !strcmp(s1, v13) )
          {
            v17 = 1;
LABEL_17:
            if ( v26 )
            {
              *(_QWORD *)&v83 = 0;
              qfree(v26, v13);
            }
            goto LABEL_7;
          }
LABEL_40:
          v69 = set_tinfo_property4(&v79, 11, a3, v26, 0, 0);
          if ( v69 )
          {
LABEL_64:
            v13 = (const char *)v69;
            v50 = sub_3AC490(a1, v69, (__int64)"Failed to rename frame member", v19, a5, a6, a7, v34, v35, a10, a11);
            v26 = s1;
            v17 = v50;
            goto LABEL_17;
          }
          v80 = 0;
          get_tinfo(&v80, *func);
          v19 = 0;
          v36 = byte_9 + 3;
          v84 = nullptr;
          v86 = 0;
          v87 = 0;
          v88 = 0;
          v90 = 0;
          v92 = 16;
          v85 = 0;
          v89 = 0;
          v91 = 0;
          if ( !(unsigned __int8)get_tinfo_details(v80, 12, &v84)
            || (v75 = func[4] + *((unsigned __int16 *)func + 20), v37 = v75 + (int)get_frame_retsize(func), !(_QWORD)v85) )
          {
LABEL_53:
            if ( v90 )
            {
              *(_QWORD *)&v91 = 0;
              *(double *)v19.m128_u64 = qfree(v90, v36);
            }
            cleanup_argloc(&v88);
            clear_tinfo_t(&v87);
            v44 = v84;
            if ( v84 )
            {
              v45 = v85;
              v46 = 0;
              if ( (_QWORD)v85 )
              {
                do
                {
                  v47 = &v44[80 * v46];
                  clear_tinfo_t(v47 + 64);
                  v48 = *((_QWORD *)v47 + 5);
                  if ( v48 )
                  {
                    *((_QWORD *)v47 + 6) = 0;
                    qfree(v48, v36);
                  }
                  v49 = *((_QWORD *)v47 + 2);
                  if ( v49 )
                  {
                    *((_QWORD *)v47 + 3) = 0;
                    qfree(v49, v36);
                  }
                  ++v46;
                  cleanup_argloc(v47);
                  v44 = v84;
                }
                while ( v45 != v46 );
              }
              *(_QWORD *)&v85 = 0;
              *(double *)v19.m128_u64 = qfree(v44, v36);
            }
            clear_tinfo_t(&v80);
            goto LABEL_64;
          }
          v36 = v84;
          v38 = v69;
          v39 = 0;
          while ( 1 )
          {
            v40 = &v84[80 * v39];
            if ( *(_DWORD *)v40 == 1 && (__int64 *)(v37 + *((_QWORD *)v40 + 1)) == v63 )
              break;
            v39 = ++v38;
            if ( v38 >= (unsigned __int64)v85 )
              goto LABEL_53;
          }
          if ( (_QWORD)v83 )
          {
            v41 = s1;
            if ( !s1 )
              goto LABEL_51;
            v36 = "arg_";
            v64 = &v84[80 * v39];
            v42 = strncmp(s1, "arg_", 4u);
            v40 = v64;
            v43 = v41;
            if ( !v42 || (v36 = "var_", v60 = strncmp(v41, "var_", 4u), v40 = v64, v43 = v41, !v60) )
            {
LABEL_50:
              v65 = v40;
              *(_QWORD *)&v83 = 0;
              *(double *)v19.m128_u64 = qfree(v43, v36);
              v40 = v65;
              s1 = nullptr;
              *((_QWORD *)&v83 + 1) = 0;
              goto LABEL_51;
            }
          }
          else
          {
            if ( !&::s1 )
              goto LABEL_76;
            v41 = (char *)&::s1;
          }
          v36 = "anonymous";
          v66 = v40;
          v52 = strncmp(v41, "anonymous", 9u);
          v40 = v66;
          if ( !v52 )
          {
LABEL_76:
            v43 = s1;
            if ( !s1 )
              goto LABEL_51;
            goto LABEL_50;
          }
          if ( (_QWORD)v83 )
          {
            v53 = s1;
            if ( s1 )
            {
              v54 = strlen(s1);
              v40 = v66;
              v55 = v54;
              if ( v54 )
              {
                v56 = v54 + 1;
                if ( *((_QWORD *)v66 + 4) < v54 + 1 )
                {
                  v57 = *((_QWORD *)v66 + 2);
                  v58 = v66 + 16;
                  v78 = v54;
                  v77 = v66;
                  v68 = v54 + 1;
                  v59 = qvector_reserve(v58, v57, v56, 1);
                  v40 = v77;
                  v55 = v78;
                  v56 = v68;
                  *((_QWORD *)v77 + 2) = v59;
                }
                *((_QWORD *)v40 + 3) = v56;
                v76 = v40;
                v67 = v55;
                memmove(*((void **)v40 + 2), v53, v55);
                *(_BYTE *)(*((_QWORD *)v76 + 2) + v67) = 0;
                goto LABEL_52;
              }
            }
          }
LABEL_51:
          *((_QWORD *)v40 + 3) = 0;
LABEL_52:
          v81 = 0;
          create_tinfo(&v81, 12, 12, &v84);
          v36 = (const char *)&v81;
          apply_tinfo(*func, &v81, 0);
          clear_tinfo_t(&v81);
          goto LABEL_53;
        }
        v28 = s1;
        v29 = v83 - 1;
        v30 = &s1[v83 - 1];
        v31 = v30;
        if ( s1 < v30 )
        {
          while ( *(v31 - 1) == 32 )
          {
            if ( s1 == --v31 )
              goto LABEL_68;
          }
          v29 = v31 - s1;
          if ( v31 != s1 )
            goto LABEL_25;
LABEL_68:
          if ( !s1 )
          {
LABEL_31:
            v33 = v28;
            do
            {
              if ( *v33 != 32 )
                break;
              ++v33;
            }
            while ( v30 != v33 );
            if ( v28 < v33 )
            {
              v70 = v30 - v33;
              memmove(v28, v33, v30 - v33 + 1);
              sub_3AF8C0((__int64 *)&s1, v70);
            }
            goto LABEL_36;
          }
          *(_QWORD *)&v83 = 0;
          *(double *)v19.m128_u64 = qfree(s1, &byte_4);
          s1 = nullptr;
          *((_QWORD *)&v83 + 1) = 0;
        }
        else
        {
LABEL_25:
          v32 = v29 + 1;
          if ( (unsigned __int64)v83 < v29 + 1 )
          {
            if ( *((_QWORD *)&v83 + 1) < v32 )
            {
              v74 = v29;
              v72 = v29 + 1;
              s1 = (char *)qvector_reserve(&s1, s1, v29 + 1, 1);
              v27 = v83;
              v28 = s1;
              v29 = v74;
              v32 = v72;
            }
            v71 = v32;
            v73 = v29;
            memset(&v28[v27], 0, v32 - v27);
            v31 = &s1[v73];
            *(_QWORD *)&v83 = v71;
          }
          else if ( (_QWORD)v83 != v29 + 1 )
          {
            *(_QWORD *)&v83 = v29 + 1;
          }
          *v31 = 0;
        }
        if ( (unsigned __int64)v83 <= 1 )
          goto LABEL_36;
        v28 = s1;
        v30 = &s1[v83 - 1];
        if ( s1 >= v30 )
          goto LABEL_36;
        goto LABEL_31;
      }
    }
  }
  v17 = 0;
LABEL_7:
  clear_tinfo_t(v98);
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(v96, v13);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v13);
  }
LABEL_12:
  clear_tinfo_t(&v79);
  return v17;
}
