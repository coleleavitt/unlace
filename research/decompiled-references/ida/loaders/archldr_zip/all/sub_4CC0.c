__int64 __fastcall sub_4CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, char *a6, __int64 *a7)
{
  int v7; // r14d
  _UNKNOWN **v8; // r13
  const char *v9; // rbx
  __int64 v10; // rsi
  __m128i si128; // xmm0
  unsigned int v12; // ebx
  _UNKNOWN **v14; // r15
  size_t v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  const char *v18; // rax
  const char *v19; // rdx
  __int64 v20; // rsi
  const char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  size_t v24; // r8
  const char *v25; // r15
  size_t v26; // rax
  void *v27; // r13
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r15
  const char *v36; // rax
  const char *v37; // r13
  size_t v38; // rax
  size_t v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  const char *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  size_t v46; // r8
  const char *v47; // r15
  size_t v48; // rax
  void *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r15
  void *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  const char *errdesc; // rax
  const char *v59; // r13
  size_t v60; // rax
  size_t v61; // rbx
  size_t v62; // r14
  void *v63; // rdi
  size_t v64; // rdx
  void *v65; // rdi
  size_t v66; // rdx
  const char *v67; // rax
  const char *v68; // r13
  size_t v69; // rax
  size_t v70; // rbx
  size_t v71; // r14
  size_t v72; // r14
  __int64 v73; // [rsp-8h] [rbp-F8h]
  __int64 v74; // [rsp+0h] [rbp-F0h]
  size_t v75; // [rsp+0h] [rbp-F0h]
  size_t v76; // [rsp+0h] [rbp-F0h]
  __int64 v79; // [rsp+10h] [rbp-E0h]
  size_t v80; // [rsp+10h] [rbp-E0h]
  size_t v81; // [rsp+10h] [rbp-E0h]
  size_t v82; // [rsp+10h] [rbp-E0h]
  size_t v83; // [rsp+10h] [rbp-E0h]
  int s1a; // [rsp+28h] [rbp-C8h]
  int v88; // [rsp+3Ch] [rbp-B4h] BYREF
  __int64 v89; // [rsp+40h] [rbp-B0h] BYREF
  int v90; // [rsp+48h] [rbp-A8h]
  void *dest; // [rsp+50h] [rbp-A0h] BYREF
  __int128 v92; // [rsp+58h] [rbp-98h]
  void *v93; // [rsp+70h] [rbp-80h] BYREF
  __int128 v94; // [rsp+78h] [rbp-78h]
  __int128 v95; // [rsp+90h] [rbp-60h] BYREF
  __int128 v96; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v97; // [rsp+B0h] [rbp-40h]
  unsigned __int64 v98; // [rsp+B8h] [rbp-38h]

  v7 = 0;
  v8 = &off_7CA0;
  v98 = __readfsqword(0x28u);
  while ( 1 )
  {
    v9 = (const char *)v8[3];
    if ( !strcmp(a5, v9) )
      break;
    ++v7;
    v8 += 5;
    if ( v7 == 4 )
    {
      if ( a7 )
      {
        v10 = *a7;
        if ( (unsigned __int64)a7[2] <= 0x16 )
        {
          v17 = qvector_reserve(a7, v10, 23, 1);
          *a7 = v17;
          v10 = v17;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_6350);
        a7[1] = 23;
        *(__m128i *)v10 = si128;
        *(_QWORD *)(v10 + 14) = 0x656D616E2074616DLL;
        *(_BYTE *)(*a7 + 22) = 0;
      }
      return 0;
    }
  }
  qlseek(a2, 0, 0);
  v90 = 0;
  v89 = 0;
  sub_2B70((__int64)"HIDECANCEL\nBuilding list of the modules");
  v14 = &off_7CA0 + 5 * v7;
  s1a = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, __int64, int, __int64, __int64, char, __int64)))v14[2])(
          a2,
          sub_2DD0);
  callui(24, 10, 0);
  if ( s1a )
  {
    v18 = (const char *)strarray(*v14, v14[1], (unsigned int)s1a);
    if ( a7 )
    {
      v19 = (const char *)&unk_6308;
      if ( *(_QWORD *)(a3 + 8) )
        v19 = *(const char **)a3;
      sub_4570(a7, (__int64)"%s: %s", v19, v18);
    }
    return 0;
  }
  dest = nullptr;
  v93 = nullptr;
  v15 = *(_QWORD *)(a3 + 8);
  v92 = 0;
  v94 = 0;
  if ( v15 )
  {
    v93 = (void *)qalloc_or_throw(v15);
    *((_QWORD *)&v94 + 1) = v15;
    memcpy(v93, *(const void **)a3, v15);
    *(_QWORD *)&v94 = v15;
  }
  v97 = 0;
  v95 = 0;
  v96 = 0;
  v12 = sub_4720(&v88, &v95, (__int64 *)&v93, a2, (__int64)&v89, v9, a6, a7);
  if ( v12 == 1 )
  {
    v20 = 0;
    if ( !v88 )
    {
      v21 = (const char *)qtmpnam(0, 0);
      v25 = v21;
      if ( v21 && (v26 = strlen(v21), (v24 = v26) != 0) )
      {
        v65 = dest;
        v66 = v26 + 1;
        if ( *((_QWORD *)&v92 + 1) < v26 + 1 )
        {
          v76 = v26;
          v83 = v26 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v66, 1);
          v24 = v76;
          v65 = dest;
          v66 = v83;
        }
        *(_QWORD *)&v92 = v66;
        v20 = (__int64)v25;
        v81 = v24;
        memmove(v65, v25, v24);
        v24 = v81;
        *((_BYTE *)dest + v81) = 0;
        if ( (_QWORD)v92 )
        {
          v27 = dest;
          goto LABEL_31;
        }
      }
      else
      {
        *(_QWORD *)&v92 = 0;
      }
      v27 = &unk_6308;
LABEL_31:
      v74 = fopenWB(v27, v20, v22, v23, v24);
      if ( v74 )
      {
        v28 = v97;
        v29 = v97;
        v79 = qalloc(0x40000);
        if ( !v79 )
          sub_2D10((__int64)"copy", v20, v30, v31, v32, v33, v74);
        if ( v28 )
        {
          while ( 1 )
          {
            v34 = 0x40000;
            if ( v29 <= 0x40000 )
              v34 = v29;
            v35 = v34;
            show_auto(v29, 0);
            v20 = v79;
            if ( v35 != qlread(a2, v79, v35) )
              break;
            v20 = v79;
            if ( v35 != qfwrite(v74, v79, v35) )
            {
              if ( a7 )
              {
                v20 = 0xFFFFFFFFLL;
                errdesc = (const char *)get_errdesc(v27, 0xFFFFFFFFLL);
                v59 = errdesc;
                if ( errdesc )
                {
                  v60 = strlen(errdesc);
                  v61 = v60;
                  if ( v60 )
                  {
                    v62 = v60 + 1;
                    if ( a7[2] < v60 + 1 )
                      *a7 = qvector_reserve(a7, *a7, v60 + 1, 1);
                    a7[1] = v62;
                    v20 = (__int64)v59;
                    memmove((void *)*a7, v59, v61);
                    *(_BYTE *)(*a7 + v61) = 0;
                    goto LABEL_44;
                  }
                }
LABEL_43:
                a7[1] = 0;
              }
LABEL_44:
              qfree(v79);
              goto LABEL_45;
            }
            v29 -= v35;
            if ( !v29 )
              goto LABEL_60;
          }
          if ( !a7 )
            goto LABEL_44;
          v20 = 0xFFFFFFFFLL;
          v36 = (const char *)get_errdesc(0, 0xFFFFFFFFLL);
          v37 = v36;
          if ( !v36 )
            goto LABEL_43;
          v38 = strlen(v36);
          v39 = v38;
          if ( !v38 )
            goto LABEL_43;
          v72 = v38 + 1;
          if ( a7[2] < v38 + 1 )
            *a7 = qvector_reserve(a7, *a7, v38 + 1, 1);
          a7[1] = v72;
          v20 = (__int64)v37;
          memmove((void *)*a7, v37, v39);
          *(_BYTE *)(*a7 + v39) = 0;
          qfree(v79);
LABEL_45:
          v12 = 0;
          qfclose(v74, v20, v40, v41, v42);
          goto LABEL_14;
        }
LABEL_60:
        qfree(v79);
        qfclose(v74, v20, v55, v56, v57);
        goto LABEL_56;
      }
      v67 = (const char *)get_errdesc(v27, 0xFFFFFFFFLL);
      goto LABEL_76;
    }
    v43 = (const char *)qtmpnam(0, 0);
    v47 = v43;
    if ( v43 && (v48 = strlen(v43), (v46 = v48) != 0) )
    {
      v63 = dest;
      v64 = v48 + 1;
      if ( *((_QWORD *)&v92 + 1) < v48 + 1 )
      {
        v75 = v48;
        v82 = v48 + 1;
        dest = (void *)qvector_reserve(&dest, dest, v64, 1);
        v46 = v75;
        v63 = dest;
        v64 = v82;
      }
      *(_QWORD *)&v92 = v64;
      v20 = (__int64)v47;
      v80 = v46;
      memmove(v63, v47, v46);
      v46 = v80;
      *((_BYTE *)dest + v80) = 0;
      if ( (_QWORD)v92 )
      {
        v49 = dest;
        goto LABEL_50;
      }
    }
    else
    {
      *(_QWORD *)&v92 = 0;
    }
    v49 = &unk_6308;
LABEL_50:
    v50 = fopenWB(v49, v20, v44, v45, v46);
    v51 = v50;
    if ( v50 )
    {
      v52 = &unk_6308;
      if ( (_QWORD)v96 )
        v52 = *((void **)&v95 + 1);
      if ( (unsigned int)zip_extract_archive_entry(a2, v52, 0, 1, v50, j__qfwrite, a7) )
      {
        qfclose(v51, v52, v53, v54, v73);
        v12 = 0;
        goto LABEL_14;
      }
      qfclose(v51, v52, v53, v54, v73);
LABEL_56:
      if ( (unsigned __int64)v92 > 1 )
        sub_4430(a1, dest, v92 - 1);
      else
        *(_QWORD *)(a1 + 8) = 0;
      if ( (unsigned __int64)v94 > 1 )
        sub_4430(a3, v93, v94 - 1);
      else
        *(_QWORD *)(a3 + 8) = 0;
      goto LABEL_14;
    }
    v67 = (const char *)get_errdesc(v49, 0xFFFFFFFFLL);
LABEL_76:
    v68 = v67;
    if ( v67 && (v69 = strlen(v67), (v70 = v69) != 0) )
    {
      v71 = v69 + 1;
      if ( a7[2] < v69 + 1 )
        *a7 = qvector_reserve(a7, *a7, v69 + 1, 1);
      a7[1] = v71;
      memmove((void *)*a7, v68, v70);
      *(_BYTE *)(*a7 + v70) = 0;
      v12 = 0;
    }
    else
    {
      a7[1] = 0;
      v12 = 0;
    }
  }
LABEL_14:
  v16 = 0;
  if ( v90 > 0 )
  {
    do
    {
      qfree(*(_QWORD *)(v89 + v16 + 24));
      ++s1a;
      v16 += 40;
    }
    while ( v90 > s1a );
  }
  qfree(v89);
  v89 = 0;
  if ( *((_QWORD *)&v95 + 1) )
  {
    *(_QWORD *)&v96 = 0;
    qfree(*((_QWORD *)&v95 + 1));
  }
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree(v93);
  }
  if ( dest )
  {
    *(_QWORD *)&v92 = 0;
    qfree(dest);
  }
  return v12;
}

