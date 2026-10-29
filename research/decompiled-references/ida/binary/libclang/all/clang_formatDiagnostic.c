__int64 __fastcall clang_formatDiagnostic(__int64 a1, char a2, double a3)
{
  char v3; // bp
  unsigned int v5; // r15d
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r14
  const char *v12; // rax
  size_t v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // r14d
  int v18; // r15d
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r14
  char *v22; // rdx
  __int64 v23; // rdx
  const char *v24; // rax
  const char *v25; // rbx
  size_t v26; // rax
  size_t v27; // r15
  __int64 v28; // r14
  __m128i v30; // xmm0
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // r14
  const char *CString; // rax
  _BYTE *v36; // r9
  _BYTE *v37; // r8
  __int64 **v38; // rcx
  size_t v39; // rax
  const char *v40; // rsi
  __int64 v41; // rdi
  _BYTE *v42; // rax
  int v43; // edx
  const char *v44; // rsi
  unsigned int v45; // r14d
  int v46; // ebp
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  int v51; // r8d
  int v52; // r9d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __m128i v57; // xmm0
  int v58; // r8d
  int v59; // r9d
  __int64 **v60; // rdi
  __int64 v61; // rdi
  _BYTE *v62; // rax
  __int64 v63; // rdi
  _BYTE *v64; // rax
  __int64 v65; // rdi
  _BYTE *v66; // rax
  __int64 v67; // rdi
  _BYTE *v68; // rax
  _OWORD *v69; // rdx
  __m128i v70; // xmm0
  _WORD *v71; // rdx
  char *v72; // rdx
  __int64 v73; // r15
  __int64 v74; // rdx
  __int64 v75; // r14
  const char *v76; // rax
  int v77; // ecx
  const char *v78; // r8
  _BYTE *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdi
  _BYTE *v82; // rax
  __int64 **v83; // r10
  char *v84; // r9
  size_t v85; // rdx
  int v86; // ecx
  __int64 v87; // rax
  const char *v88; // rsi
  __m128i v89; // [rsp+0h] [rbp-2B8h]
  __m128i v90; // [rsp+0h] [rbp-2B8h]
  __m128i v91; // [rsp+0h] [rbp-2B8h]
  const char *srcc; // [rsp+20h] [rbp-298h]
  void *srcd; // [rsp+20h] [rbp-298h]
  void *src; // [rsp+20h] [rbp-298h]
  int srca; // [rsp+20h] [rbp-298h]
  const char *srcb; // [rsp+20h] [rbp-298h]
  int srcf; // [rsp+20h] [rbp-298h]
  const char *srcg; // [rsp+20h] [rbp-298h]
  size_t srce; // [rsp+20h] [rbp-298h]
  const char *v100; // [rsp+28h] [rbp-290h]
  char *v101; // [rsp+28h] [rbp-290h]
  __int64 **v102; // [rsp+28h] [rbp-290h]
  void *v103; // [rsp+30h] [rbp-288h]
  _BYTE *v104; // [rsp+38h] [rbp-280h]
  int v105; // [rsp+38h] [rbp-280h]
  _BYTE *v106; // [rsp+40h] [rbp-278h]
  char v107; // [rsp+57h] [rbp-261h]
  char v108; // [rsp+64h] [rbp-254h]
  unsigned int v109; // [rsp+70h] [rbp-248h] BYREF
  unsigned int v110; // [rsp+74h] [rbp-244h] BYREF
  unsigned int v111; // [rsp+78h] [rbp-240h] BYREF
  unsigned int v112; // [rsp+7Ch] [rbp-23Ch] BYREF
  unsigned int v113; // [rsp+80h] [rbp-238h] BYREF
  unsigned int v114; // [rsp+84h] [rbp-234h] BYREF
  __int64 v115; // [rsp+88h] [rbp-230h] BYREF
  __int64 v116; // [rsp+90h] [rbp-228h] BYREF
  __int64 v117; // [rsp+98h] [rbp-220h] BYREF
  __m128i v118; // [rsp+A0h] [rbp-218h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-208h]
  __m128i v120; // [rsp+C0h] [rbp-1F8h] BYREF
  __int64 v121; // [rsp+D0h] [rbp-1E8h]
  __m128i v122; // [rsp+E0h] [rbp-1D8h] BYREF
  __int64 v123; // [rsp+F0h] [rbp-1C8h]
  __m128i v124; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v125; // [rsp+110h] [rbp-1A8h]
  __int64 *v126; // [rsp+120h] [rbp-198h] BYREF
  int v127; // [rsp+128h] [rbp-190h]
  __int128 v128; // [rsp+130h] [rbp-188h]
  void *dest; // [rsp+140h] [rbp-178h]
  char v130; // [rsp+148h] [rbp-170h]
  int v131; // [rsp+14Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+150h] [rbp-168h]
  void *ptr; // [rsp+160h] [rbp-158h] BYREF
  __m128i si128; // [rsp+168h] [rbp-150h]
  _BYTE v135[320]; // [rsp+178h] [rbp-140h] BYREF

  if ( !a1 )
    return sub_690460(a3);
  v3 = a2;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  ptr = v135;
  v126 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  v127 = 2;
  v130 = 0;
  v131 = 1;
  dest = nullptr;
  p_ptr = &ptr;
  v128 = 0;
  sub_2623850(&v126, 0, 0, 0, v6, v7);
  if ( (a2 & 1) != 0 )
  {
    (*(void (__fastcall **)(__m128i *, __int64))(*(_QWORD *)a1 + 24LL))(&v120, a1);
    v30 = _mm_load_si128(&v120);
    clang_getSpellingLocation((int)&v115, (int)&v109, (int)&v110, 0, v31, v32, v30.m128i_i64[0], v30.m128i_i32[2], v121);
    if ( v115 )
    {
      src = (void *)clang_getFileName();
      v34 = v33;
      CString = (const char *)clang_getCString(src, v33);
      v36 = *((_BYTE **)&v128 + 1);
      v37 = dest;
      v38 = &v126;
      if ( CString )
      {
        v106 = *((_BYTE **)&v128 + 1);
        v104 = dest;
        v100 = CString;
        v39 = strlen(CString);
        v36 = v106;
        v37 = v104;
        v38 = &v126;
        v40 = v100;
        if ( v106 - v104 < v39 )
        {
          v80 = sub_26240F0(&v126, v100, v39);
          v36 = *(_BYTE **)(v80 + 24);
          v37 = *(_BYTE **)(v80 + 32);
          v38 = (__int64 **)v80;
        }
        else if ( v39 )
        {
          v101 = (char *)v39;
          memcpy(v104, v40, v39);
          v38 = &v126;
          v36 = *((_BYTE **)&v128 + 1);
          dest = &v101[(_QWORD)dest];
          v37 = dest;
        }
      }
      if ( v37 == v36 )
      {
        v38 = (__int64 **)sub_26240F0(v38, ":", 1);
      }
      else
      {
        *v37 = 58;
        v38[4] = (__int64 *)((char *)v38[4] + 1);
      }
      v41 = sub_26238A0(v38, v109);
      v42 = *(_BYTE **)(v41 + 32);
      if ( *(_BYTE **)(v41 + 24) == v42 )
      {
        sub_26240F0(v41, ":", 1);
      }
      else
      {
        *v42 = 58;
        ++*(_QWORD *)(v41 + 32);
      }
      clang_disposeString(src, v34);
      if ( (v3 & 2) != 0 )
      {
        v81 = sub_26238A0(&v126, v110);
        v82 = *(_BYTE **)(v81 + 32);
        if ( *(_BYTE **)(v81 + 24) == v82 )
        {
          sub_26240F0(v81, ":", 1);
        }
        else
        {
          *v82 = 58;
          ++*(_QWORD *)(v81 + 32);
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
        if ( v43 )
        {
          v108 = v3;
          v44 = (const char *)&v111;
          v45 = 0;
          v46 = v43;
          v107 = 0;
          do
          {
            if ( v45 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
            {
              clang_getNullRange(&v118);
            }
            else
            {
              LODWORD(v44) = a1;
              (*(void (__fastcall **)(__m128i *, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(&v118, a1, v45);
            }
            v89 = _mm_load_si128(&v118);
            clang_getRangeStart((int)&v122, (int)v44, v47, v48, v49, v50, v89.m128i_i64[0], v89.m128i_i64[1], v119);
            v90 = _mm_load_si128(&v122);
            clang_getSpellingLocation(
              (int)&v116,
              (int)&v111,
              (int)&v112,
              0,
              v51,
              v52,
              v90.m128i_i64[0],
              v90.m128i_i32[2],
              v123);
            v91 = _mm_load_si128(&v118);
            clang_getRangeEnd((int)&v124, (int)&v111, v53, v54, v55, v56, v91.m128i_i64[0], v91.m128i_i64[1], v119);
            v57 = _mm_load_si128(&v124);
            v44 = (const char *)&v113;
            clang_getSpellingLocation(
              (int)&v117,
              (int)&v113,
              (int)&v114,
              0,
              v58,
              v59,
              v57.m128i_i64[0],
              v57.m128i_i32[2],
              v125);
            if ( v116 == v117 && v116 == v115 )
            {
              if ( *((void **)&v128 + 1) == dest )
              {
                v60 = (__int64 **)sub_26240F0(&v126, "{", 1);
              }
              else
              {
                *(_BYTE *)dest = 123;
                v60 = &v126;
                dest = (char *)dest + 1;
              }
              v61 = sub_26238A0(v60, v111);
              v62 = *(_BYTE **)(v61 + 32);
              if ( *(_BYTE **)(v61 + 24) == v62 )
              {
                v61 = sub_26240F0(v61, ":", 1);
              }
              else
              {
                *v62 = 58;
                ++*(_QWORD *)(v61 + 32);
              }
              v63 = sub_26238A0(v61, v112);
              v64 = *(_BYTE **)(v63 + 32);
              if ( *(_BYTE **)(v63 + 24) == v64 )
              {
                v63 = sub_26240F0(v63, "-", 1);
              }
              else
              {
                *v64 = 45;
                ++*(_QWORD *)(v63 + 32);
              }
              v65 = sub_26238A0(v63, v113);
              v66 = *(_BYTE **)(v65 + 32);
              if ( *(_BYTE **)(v65 + 24) == v66 )
              {
                v65 = sub_26240F0(v65, ":", 1);
              }
              else
              {
                *v66 = 58;
                ++*(_QWORD *)(v65 + 32);
              }
              LODWORD(v44) = v114;
              v67 = sub_26238A0(v65, v114);
              v68 = *(_BYTE **)(v67 + 32);
              if ( *(_BYTE **)(v67 + 24) == v68 )
              {
                v44 = "}";
                sub_26240F0(v67, "}", 1);
              }
              else
              {
                *v68 = 125;
                ++*(_QWORD *)(v67 + 32);
              }
              v107 = 1;
            }
            ++v45;
          }
          while ( v45 != v46 );
          v3 = v108;
          v79 = dest;
          if ( !v107 )
            goto LABEL_85;
          if ( dest != *((void **)&v128 + 1) )
          {
            *(_BYTE *)dest = 58;
            v79 = (char *)dest + 1;
            dest = (char *)dest + 1;
LABEL_85:
            if ( *((_BYTE **)&v128 + 1) == v79 )
            {
              sub_26240F0(&v126, " ", 1);
            }
            else
            {
              *v79 = 32;
              dest = (char *)dest + 1;
            }
            goto LABEL_3;
          }
          sub_26240F0(&v126, ":", 1);
        }
      }
      v79 = dest;
      goto LABEL_85;
    }
  }
LABEL_3:
  if ( v5 == 3 )
  {
    v72 = (char *)dest;
    if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 6u )
    {
      sub_26240F0(&v126, "error: ", 7);
    }
    else
    {
      *(_DWORD *)dest = 1869771365;
      *(_DWORD *)(v72 + 3) = 540701295;
      dest = (char *)dest + 7;
    }
  }
  else if ( v5 > 3 )
  {
    if ( v5 == 4 )
    {
      v22 = (char *)dest;
      if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 0xCu )
      {
        sub_26240F0(&v126, "fatal error: ", 13);
      }
      else
      {
        *(_QWORD *)dest = 0x7265206C61746166LL;
        *(_QWORD *)(v22 + 5) = 0x203A726F72726520LL;
        dest = (char *)dest + 13;
      }
    }
  }
  else if ( v5 == 1 )
  {
    v71 = dest;
    if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 5u )
    {
      sub_26240F0(&v126, "note: ", 6);
    }
    else
    {
      *(_DWORD *)dest = 1702129518;
      v71[2] = 8250;
      dest = (char *)dest + 6;
    }
  }
  else if ( v5 == 2 )
  {
    v8 = dest;
    if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 8u )
    {
      sub_26240F0(&v126, "warning: ", 9);
    }
    else
    {
      *((_BYTE *)dest + 8) = 32;
      *v8 = 0x3A676E696E726177LL;
      dest = (char *)dest + 9;
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v11 = v10;
  if ( !clang_getCString(v9, v10) )
  {
    v69 = dest;
    if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest > 0x13u )
    {
      v70 = _mm_load_si128((const __m128i *)&xmmword_3C7E480);
      *((_DWORD *)dest + 4) = 1047820389;
      *v69 = v70;
      dest = (char *)dest + 20;
      goto LABEL_14;
    }
    v15 = 20;
    v14 = "<no diagnostic text>";
LABEL_71:
    sub_26240F0(&v126, v14, v15);
    goto LABEL_14;
  }
  v12 = (const char *)clang_getCString(v9, v11);
  if ( !v12 )
    goto LABEL_14;
  srcc = v12;
  v13 = strlen(v12);
  v14 = srcc;
  v15 = v13;
  if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest < v13 )
    goto LABEL_71;
  if ( v13 )
  {
    srcd = (void *)v13;
    memcpy(dest, v14, v13);
    dest = (char *)dest + (_QWORD)srcd;
  }
LABEL_14:
  clang_disposeString(v9, v11);
  if ( (v3 & 0x38) == 0 )
    goto LABEL_37;
  v16 = v3 & 0x30;
  if ( (v3 & 8) != 0 )
  {
    srca = v3 & 0x30;
    v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 0);
    v75 = v74;
    v76 = (const char *)clang_getCString(v73, v74);
    v77 = srca;
    v78 = v76;
    if ( v76 )
    {
      if ( *v76 )
      {
        if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 1u )
        {
          srcg = v76;
          v87 = sub_26240F0(&v126, " [", 2);
          v78 = srcg;
          v77 = v3 & 0x30;
          v84 = *(char **)(v87 + 32);
          v83 = (__int64 **)v87;
        }
        else
        {
          v83 = &v126;
          *(_WORD *)dest = 23328;
          v84 = (char *)dest + 2;
          dest = (char *)dest + 2;
        }
        v105 = v77;
        v103 = v84;
        v102 = v83;
        srcb = v78;
        v85 = strlen(v78);
        v86 = v105;
        if ( (char *)v102[3] - (_BYTE *)v103 < v85 )
        {
          sub_26240F0(v102, srcb, v85);
          v86 = v105;
        }
        else if ( v85 )
        {
          v88 = srcb;
          srce = v85;
          memcpy(v103, v88, v85);
          v86 = v105;
          v102[4] = (__int64 *)((char *)v102[4] + srce);
        }
        srcf = v86;
        clang_disposeString(v73, v75);
        if ( !srcf )
          goto LABEL_35;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
        if ( !v17 )
          goto LABEL_35;
        v18 = v3 & 0x20;
        if ( (v3 & 0x10) == 0 )
        {
          if ( (v3 & 0x20) != 0 )
          {
LABEL_22:
            v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
            v21 = v20;
            if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 1u )
            {
              sub_26240F0(&v126, ", ", 2);
            }
            else
            {
              *(_WORD *)dest = 8236;
              dest = (char *)dest + 2;
            }
LABEL_30:
            v24 = (const char *)clang_getCString(v19, v21);
            v25 = v24;
            if ( v24 )
            {
              v26 = strlen(v24);
              v27 = v26;
              if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest < v26 )
              {
                sub_26240F0(&v126, v25, v26);
              }
              else if ( v26 )
              {
                memcpy(dest, v25, v26);
                dest = (char *)dest + v27;
              }
            }
            clang_disposeString(v19, v21);
          }
LABEL_35:
          if ( *((void **)&v128 + 1) == dest )
          {
            sub_26240F0(&v126, "]", 1);
          }
          else
          {
            *(_BYTE *)dest = 93;
            dest = (char *)dest + 1;
          }
          goto LABEL_37;
        }
        if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 1u )
        {
          sub_26240F0(&v126, ", ", 2);
        }
        else
        {
          *(_WORD *)dest = 8236;
          dest = (char *)dest + 2;
        }
LABEL_21:
        sub_26238A0(&v126, v17);
        if ( v18 )
          goto LABEL_22;
        goto LABEL_35;
      }
      srca = v3 & 0x30;
    }
    clang_disposeString(v73, v75);
    v16 = srca;
  }
  if ( v16 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    if ( v17 )
    {
      v18 = v3 & 0x20;
      if ( (v3 & 0x10) == 0 )
      {
        if ( (v3 & 0x20) == 0 )
          goto LABEL_37;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
        v21 = v23;
        if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 1u )
        {
          sub_26240F0(&v126, " [", 2);
        }
        else
        {
          *(_WORD *)dest = 23328;
          dest = (char *)dest + 2;
        }
        goto LABEL_30;
      }
      if ( *((_QWORD *)&v128 + 1) - (_QWORD)dest <= 1u )
      {
        sub_26240F0(&v126, " [", 2);
      }
      else
      {
        *(_WORD *)dest = 23328;
        dest = (char *)dest + 2;
      }
      goto LABEL_21;
    }
  }
LABEL_37:
  v28 = sub_6905C0(*p_ptr, (size_t)p_ptr[1]);
  v126 = &qword_4A6EA70[2];
  sub_2623770(&v126);
  if ( ptr != v135 )
    free(ptr);
  return v28;
}

