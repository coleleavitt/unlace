__int64 __fastcall sub_322D80(
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
  int v10; // r12d
  int v11; // eax
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ebx
  __int64 eah; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // rbp
  int v21; // r13d
  __int64 v22; // r14
  char *v23; // rdi
  __int64 v24; // rsi
  int v25; // r9d
  unsigned int v26; // r12d
  __int64 default_radix; // rcx
  const char *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  const void **v36; // rbp
  __int64 v37; // r15
  int v38; // ebx
  __int64 v39; // rax
  char v40; // cl
  __int64 v41; // r13
  __int64 v42; // rbx
  const void **v43; // rbp
  const void *v44; // rdi
  const void *v45; // rdi
  const void *v46; // rdi
  __int64 v47; // rdx
  unsigned int v48; // eax
  const char *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  _QWORD *v57; // r13
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 *v60; // r13
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rbp
  __int64 *v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  char v70; // r11
  char v71; // al
  unsigned __int8 *v72; // rsi
  _BYTE *v73; // rdi
  int v74; // r10d
  __int64 v75; // rsi
  int v76; // eax
  char v77; // al
  __int64 v78; // r8
  char v79; // [rsp+0h] [rbp-528h]
  char fixups; // [rsp+14h] [rbp-514h]
  int v81; // [rsp+14h] [rbp-514h]
  int v82; // [rsp+20h] [rbp-508h]
  _BYTE *v83; // [rsp+28h] [rbp-500h]
  unsigned int v84; // [rsp+28h] [rbp-500h]
  unsigned __int8 *v85; // [rsp+30h] [rbp-4F8h]
  char v86; // [rsp+30h] [rbp-4F8h]
  unsigned int v87; // [rsp+3Ch] [rbp-4ECh]
  __int64 v88; // [rsp+40h] [rbp-4E8h]
  __int64 v89[2]; // [rsp+48h] [rbp-4E0h] BYREF
  __int64 fileregion_offset; // [rsp+58h] [rbp-4D0h] BYREF
  const char *v91; // [rsp+60h] [rbp-4C8h] BYREF
  __int128 v92; // [rsp+68h] [rbp-4C0h]
  const char *v93; // [rsp+80h] [rbp-4A8h] BYREF
  __int128 v94; // [rsp+88h] [rbp-4A0h]
  __int64 v95; // [rsp+A0h] [rbp-488h] BYREF
  __int128 v96; // [rsp+A8h] [rbp-480h]
  _QWORD *v97; // [rsp+C0h] [rbp-468h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-460h]
  _BYTE v99[1024]; // [rsp+E0h] [rbp-448h] BYREF
  char v100; // [rsp+4E0h] [rbp-48h] BYREF
  unsigned __int64 v101; // [rsp+4E8h] [rbp-40h]

  v89[0] = a1;
  v101 = __readfsqword(0x28u);
  v9 = nbits(a1);
  v10 = v9 + 14;
  v11 = v9 + 7;
  if ( v11 >= 0 )
    v10 = v11;
  v12 = v10 >> 3;
  v13 = 1024 / (int)(b2a_width((unsigned int)v12, 0) + 1);
  v14 = 16;
  if ( v13 <= 16 )
    v14 = (unsigned int)v13;
  v15 = v14;
  eah = get_eah((unsigned int)v12, 0, v14);
  v17 = -1;
  if ( *(_DWORD *)(eah + 24) != 8 )
    v17 = 0x100000000LL;
  v18 = v17 - v89[0];
  v19 = v15;
  v20 = v99;
  if ( v18 < v15 )
    v15 = v18;
  v21 = 0;
  v22 = xmmword_8CC810 - (_QWORD)v99;
  if ( v15 > 0 )
  {
    do
    {
      v23 = &v20[v22];
      ++v21;
      *v20++ = get_wide_byte(v23, 0, v19);
    }
    while ( v15 > v21 && v20 < &v100 );
  }
  v92 = 0;
  v91 = nullptr;
  sub_322C10((__int64 *)&v91, v15, (__int64 (__fastcall *)(__int64))&get_wide_byte);
  v94 = 0;
  v93 = nullptr;
  sub_322C10((__int64 *)&v93, v15, (__int64 (__fastcall *)(__int64))&get_original_byte);
  fileregion_offset = get_fileregion_offset(v89[0]);
  v24 = (__int64)v89;
  if ( !(unsigned int)sub_507F10(
                        986,
                        (unsigned int)v89,
                        (unsigned int)&fileregion_offset,
                        (unsigned int)&v93,
                        (unsigned int)&v91,
                        v25) )
    goto LABEL_13;
  v95 = 0;
  v96 = 0;
  default_radix = (unsigned int)get_default_radix();
  v29 = &s1;
  if ( (_QWORD)v92 )
    v29 = v91;
  v24 = v89[0];
  parse_binpat_str(&v95, v89[0], v29, default_radix, 0, 0);
  if ( (_QWORD)v96 )
  {
    if ( (_QWORD)v96 != 1 )
    {
      if ( !under_debugger )
        interr(40574, v24, v30, v31, 0.0);
      goto LABEL_100;
    }
    v36 = (const void **)v95;
    v37 = *(_QWORD *)(v95 + 32);
    if ( !v37 )
    {
      v38 = v12 * v15;
      if ( v38 > *(_DWORD *)(v95 + 8) )
        v38 = *(_DWORD *)(v95 + 8);
      v39 = v38 - 1;
      while ( v38 > 0 )
      {
        v24 = *(_QWORD *)v95;
        v40 = *(_BYTE *)(*(_QWORD *)v95 + v39--);
        if ( v99[v38 - 1] != v40 )
          goto LABEL_43;
        --v38;
      }
      if ( !v38 )
      {
        if ( v95 )
        {
          v41 = 1;
          v26 = 1;
          goto LABEL_33;
        }
LABEL_13:
        v26 = 1;
        goto LABEL_14;
      }
      v24 = *(_QWORD *)v95;
LABEL_43:
      patch_bytes(v89[0], v24, v38);
      fixups = get_fixups(0, v89[0], v38);
      if ( !fixups )
      {
LABEL_61:
        v24 = (unsigned int)v38;
        sub_31AFE0(v89[0], (unsigned int)v38, v47);
        v64 = v95;
        if ( v95 )
        {
          v65 = v96;
          if ( (_QWORD)v96 )
          {
            do
            {
              v66 = (__int64 *)(v64 + 80 * v37);
              v67 = v66[6];
              if ( v67 )
              {
                v66[7] = 0;
                qfree(v67, (const char *)v24);
              }
              v68 = v66[3];
              if ( v68 )
              {
                v66[4] = 0;
                qfree(v68, (const char *)v24);
              }
              v69 = *v66;
              if ( *v66 )
              {
                v66[1] = 0;
                qfree(v69, (const char *)v24);
              }
              ++v37;
              v64 = v95;
            }
            while ( v65 != v37 );
          }
          *(_QWORD *)&v96 = 0;
          qfree(v64, (const char *)v24);
        }
        goto LABEL_13;
      }
      v97 = nullptr;
      v98 = 0;
      v48 = get_default_radix();
      v49 = &s1;
      if ( (_QWORD)v94 )
        v49 = v93;
      v50 = v89[0];
      parse_binpat_str(&v97, v89[0], v49, v48, 0, 0);
      if ( (_QWORD)v98 == 1 )
      {
        v57 = v97;
        v47 = v38;
        if ( v97[1] >= (unsigned __int64)v38 )
        {
          v52 = v97[4];
          if ( !v52 )
          {
            v50 = (__int64)*v36;
            v85 = (unsigned __int8 *)*v36;
            v83 = (_BYTE *)*v97;
            if ( !memcmp((const void *)*v97, *v36, v38) || v38 <= 0 )
            {
              if ( !v57 )
                goto LABEL_61;
              v58 = v98;
LABEL_52:
              v59 = 0;
              do
              {
                v60 = &v57[10 * v59];
                v61 = v60[6];
                if ( v61 )
                {
                  v60[7] = 0;
                  qfree(v61, (const char *)v50);
                }
                v62 = v60[3];
                if ( v62 )
                {
                  v60[4] = 0;
                  qfree(v62, (const char *)v50);
                }
                v63 = *v60;
                if ( *v60 )
                {
                  v60[1] = 0;
                  qfree(v63, (const char *)v50);
                }
                ++v59;
                v57 = v97;
              }
              while ( v58 != v59 );
LABEL_60:
              *(_QWORD *)&v98 = 0;
              qfree(v57, (const char *)v50);
              goto LABEL_61;
            }
            v70 = fixups;
            v53 = 0;
            v71 = 0;
            v72 = v85;
            v73 = v83;
            v52 = 0;
            while ( 1 )
            {
              v50 = v72[v52];
              v74 = v52;
              if ( v73[v52] == (_BYTE)v50 )
              {
                if ( v71 )
                {
                  v88 = v52;
                  v87 = v52;
                  v86 = v70;
                  v84 = v53;
                  v82 = v52;
                  v75 = (int)v53 / v12;
                  v81 = v12 - 1;
                  v76 = ((int)v52 + v12 - 1) / v12 - v75;
                  v50 = v89[0] + v75;
                  v77 = get_fixups(0, v50, v76);
                  v74 = v82;
                  v53 = v84;
                  v70 = v86;
                  v54 = v87;
                  v52 = v88;
                  if ( v77 )
                  {
                    if ( v38 != v87 )
                      goto LABEL_88;
LABEL_86:
                    v78 = (int)v53 / v12;
                    v50 = v78 + v89[0];
                    v71 = get_fixups(0, v78 + v89[0], ((int)v54 + v81) / v12 - (int)v78);
                    goto LABEL_87;
                  }
                }
                v71 = 0;
              }
              else if ( !v71 )
              {
                v53 = (unsigned int)v52;
                v71 = v70;
              }
              if ( v38 == ++v52 )
                break;
              v73 = (_BYTE *)*v57;
              v72 = (unsigned __int8 *)*v36;
            }
            v54 = (unsigned int)(v74 + 1);
            if ( v38 == (_DWORD)v54 )
            {
              if ( !v71 )
                goto LABEL_89;
              v81 = v12 - 1;
              goto LABEL_86;
            }
LABEL_87:
            if ( !v71 )
              goto LABEL_89;
          }
        }
LABEL_88:
        sub_300630(999, v50, v47, v52, v53, v54, (__m128)0LL, a3, a4, a5, v55, v56, a8, a9, v79);
LABEL_89:
        v57 = v97;
        if ( !v97 )
          goto LABEL_61;
        v58 = v98;
        if ( !(_QWORD)v98 )
          goto LABEL_60;
        goto LABEL_52;
      }
      if ( !under_debugger )
        interr(40575, v50, v51, v52, 0.0);
LABEL_100:
      BUG();
    }
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\nThe variable bytes are not accepted in PatchByte command",
      v24,
      v30,
      v31,
      v32,
      v33,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v34,
      v35,
      a8,
      a9,
      v79);
    v36 = (const void **)v95;
    v26 = 0;
  }
  else
  {
    v24 = (__int64)&s1;
    sub_169700((int)"%s\n", (__int64)&s1, v30, v31, v32, v33, (__m128)0LL, a3, a4, a5, v34, v35, a8, a9, v79);
    v36 = (const void **)v95;
    v26 = 1;
  }
  if ( v36 )
  {
    v41 = v96;
    if ( !(_QWORD)v96 )
    {
LABEL_41:
      *(_QWORD *)&v96 = 0;
      qfree(v36, (const char *)v24);
      goto LABEL_14;
    }
LABEL_33:
    v42 = 0;
    do
    {
      v43 = &v36[10 * v42];
      v44 = v43[6];
      if ( v44 )
      {
        v43[7] = nullptr;
        qfree(v44, (const char *)v24);
      }
      v45 = v43[3];
      if ( v45 )
      {
        v43[4] = nullptr;
        qfree(v45, (const char *)v24);
      }
      v46 = *v43;
      if ( *v43 )
      {
        v43[1] = nullptr;
        qfree(v46, (const char *)v24);
      }
      ++v42;
      v36 = (const void **)v95;
    }
    while ( v41 != v42 );
    goto LABEL_41;
  }
LABEL_14:
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree(v93, (const char *)v24);
  }
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    qfree(v91, (const char *)v24);
  }
  return v26;
}
