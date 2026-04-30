unsigned __int64 __fastcall sub_1BAEB0(
        const char **a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  const char *v10; // rsi
  __int64 v11; // r13
  const char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  int i; // eax
  const char *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  char *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  size_t v40; // rax
  size_t v41; // r14
  size_t v42; // r15
  void *v43; // rax
  size_t v44; // r15
  __int64 v45; // rdi
  __int64 v46; // r14
  const char *v47; // r13
  void *v48; // rbx
  const char *v49; // rsi
  const char *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rdi
  void *v57; // rdx
  const char *v58; // rbx
  __int64 *v59; // rax
  __int64 v60; // rdx
  char *v61; // rax
  __int64 *v62; // r14
  __int64 v63; // rax
  const char *v64; // rbx
  _BYTE *v65; // [rsp+0h] [rbp-7108h]
  const char *v67; // [rsp+10h] [rbp-70F8h]
  __int64 v68; // [rsp+18h] [rbp-70F0h]
  __int64 v69; // [rsp+20h] [rbp-70E8h]
  __int64 v70; // [rsp+30h] [rbp-70D8h]
  __int64 v71; // [rsp+40h] [rbp-70C8h] BYREF
  __int128 v72; // [rsp+48h] [rbp-70C0h]
  void *src; // [rsp+60h] [rbp-70A8h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-70A0h]
  _BYTE v75[4]; // [rsp+80h] [rbp-7088h] BYREF
  char v76[8228]; // [rsp+84h] [rbp-7084h] BYREF
  __int64 v77; // [rsp+20A8h] [rbp-5060h]
  int v78; // [rsp+20B4h] [rbp-5054h]
  _BYTE v79[4096]; // [rsp+40C0h] [rbp-3048h] BYREF
  _BYTE v80[4096]; // [rsp+50C0h] [rbp-2048h] BYREF
  _BYTE v81[4104]; // [rsp+60C0h] [rbp-1048h] BYREF
  unsigned __int64 v82; // [rsp+70C8h] [rbp-40h]

  v9 = 0;
  v10 = "themes";
  v82 = __readfsqword(0x28u);
  v71 = 0;
  v72 = 0;
  get_ida_subdirs(&v71, "themes", 0);
  v11 = v71;
  v70 = v71 + 24 * v72;
  if ( v71 != v70 )
  {
    while ( 1 )
    {
      v12 = &s1;
      if ( *(_QWORD *)(v11 + 8) )
        v12 = *(const char **)v11;
      qmakepath(v79, 4096, v12, "*", 0);
      if ( (debug[3] & 1) != 0 )
        sub_16B860(
          (int)"Themes: Searching using pattern \"%s\"\n",
          (__int64)v79,
          v13,
          v14,
          v15,
          v16,
          v9,
          a3,
          a4,
          a5,
          v17,
          v18,
          a8,
          a9,
          (char)v65);
      v77 = 0;
      v10 = v75;
      v65 = v75;
      v78 = 0;
      for ( i = qfindfirst(v79, v75, 0x4000); !i; i = qfindnext(v65) )
      {
        v20 = &s1;
        if ( *(_QWORD *)(v11 + 8) )
          v20 = *(const char **)v11;
        qmakepath(v80, 4096, v20, v76, 0);
        if ( (debug[3] & 1) != 0 )
          sub_16B860(
            (int)"Themes: \tfound directory \"%s\"\n",
            (__int64)v80,
            v21,
            v22,
            v23,
            v24,
            v9,
            a3,
            a4,
            a5,
            v25,
            v26,
            a8,
            a9,
            (char)v65);
        v10 = (_BYTE *)&stru_1000;
        qmakepath(v81, 4096, v80, "theme.css", 0);
        if ( !(unsigned __int8)qfileexist(v81) )
          continue;
        if ( (debug[3] & 1) != 0 )
          sub_16B860(
            (int)"Themes: \t\tfound theme \"%s\"\n",
            (__int64)v81,
            v27,
            v28,
            v29,
            v30,
            v9,
            a3,
            a4,
            a5,
            v31,
            v32,
            a8,
            a9,
            (char)v65);
        v10 = "_base";
        v33 = (char *)qbasename(v80);
        if ( !strcmp(v33, "_base") )
        {
          if ( (debug[3] & 1) != 0 )
            sub_16B860(
              (int)"Themes: \t\tignoring \"_base\" theme\n",
              (__int64)"_base",
              v34,
              v35,
              v36,
              v37,
              v9,
              a3,
              a4,
              a5,
              v38,
              v39,
              a8,
              a9,
              (char)v65);
          continue;
        }
        src = nullptr;
        v9 = 0;
        *(_OWORD *)n = 0;
        if ( v33 )
        {
          v40 = strlen(v33);
          v41 = v40 + 1;
          v42 = v40;
          v43 = (void *)qvector_reserve(&src, 0, v40 + 1, 1);
          n[0] = v41;
          src = v43;
          memmove(v43, v33, v42);
          *((_BYTE *)src + v42) = 0;
          v44 = n[0];
          v45 = (__int64)a1[1];
          v10 = *a1;
          v46 = (__int64)&(*a1)[24 * v45];
          if ( *a1 == (const char *)v46 )
            goto LABEL_47;
        }
        else
        {
          v44 = 0;
          v45 = (__int64)a1[1];
          v10 = *a1;
          v46 = (__int64)&(*a1)[24 * v45];
          if ( *a1 == (const char *)v46 )
            goto LABEL_44;
        }
        v69 = v11;
        v47 = v10;
        v67 = v10;
        v68 = v45;
        v48 = src;
        while ( 1 )
        {
          if ( *((_QWORD *)v47 + 1) )
          {
            v49 = *(const char **)v47;
            v50 = &s1;
            if ( !v44 )
              goto LABEL_23;
          }
          else
          {
            if ( !v44 )
            {
              v57 = v48;
              v58 = v47;
              v10 = v67;
              v45 = v68;
              v11 = v69;
              if ( v58 == (const char *)v46 )
                goto LABEL_50;
              goto LABEL_41;
            }
            v49 = &s1;
          }
          v50 = (const char *)v48;
LABEL_23:
          if ( !strcmp(v50, v49) )
            break;
          v47 += 24;
          if ( v47 == (const char *)v46 )
          {
            v10 = v67;
            v45 = v68;
            v11 = v69;
            goto LABEL_47;
          }
        }
        v57 = v48;
        v64 = v47;
        v10 = v67;
        v45 = v68;
        v11 = v69;
        if ( v64 != (const char *)v46 )
          goto LABEL_41;
LABEL_47:
        if ( !v44 )
        {
LABEL_50:
          v33 = nullptr;
LABEL_44:
          v59 = (__int64 *)a1;
          v60 = v45 + 1;
          if ( (unsigned __int64)a1[2] < v45 + 1 )
            goto LABEL_49;
          goto LABEL_45;
        }
        v33 = (char *)qalloc_or_throw(v44);
        memcpy(v33, src, v44);
        v45 = (__int64)a1[1];
        v10 = *a1;
        v59 = (__int64 *)a1;
        v60 = v45 + 1;
        if ( (unsigned __int64)a1[2] < v45 + 1 )
        {
LABEL_49:
          v62 = v59;
          v63 = qvector_reserve(v59, v10, v60, 24);
          *v62 = v63;
          v45 = v62[1];
          v10 = (const char *)v63;
        }
LABEL_45:
        v61 = (char *)&v10[24 * v45];
        v9 = (__m128)_mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
        *(_QWORD *)v61 = v33;
        v57 = src;
        *(__m128 *)(v61 + 8) = v9;
        ++a1[1];
LABEL_41:
        if ( v57 )
        {
          n[0] = 0;
          qfree(v57, v10);
        }
      }
      v11 += 24;
      qfindclose(v65);
      if ( v70 == v11 )
      {
        v70 = v71;
        v11 = v71;
        break;
      }
    }
  }
  v51 = v70;
  if ( v70 )
  {
    v52 = v72;
    if ( (_QWORD)v72 )
    {
      v53 = 0;
      do
      {
        v54 = (__int64 *)(v51 + 24 * v53);
        v55 = *v54;
        if ( *v54 )
        {
          v54[1] = 0;
          qfree(v55, v10);
          v11 = v71;
        }
        ++v53;
        v51 = v11;
      }
      while ( v52 != v53 );
      v70 = v11;
    }
    *(_QWORD *)&v72 = 0;
    qfree(v70, v10);
  }
  return v82 - __readfsqword(0x28u);
}
