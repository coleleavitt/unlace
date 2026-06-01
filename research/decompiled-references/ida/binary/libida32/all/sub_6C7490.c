__int64 __fastcall sub_6C7490(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 *v13; // rax
  __int64 v15; // rax
  unsigned int v16; // r12d
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int16 v20; // ax
  __int64 v21; // r15
  __m128 v22; // xmm0
  char *v23; // rcx
  unsigned int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  char *v27; // rdi
  __int64 v28; // r13
  __int64 v29; // rbp
  char *v30; // rbx
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rax
  char *v34; // r8
  size_t v35; // r15
  char *v36; // rcx
  char *v37; // rdx
  char *v38; // rsi
  char *v39; // rdi
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  __m128 v43; // xmm0
  char *v44; // r8
  char *v45; // rcx
  __int64 v46; // rdx
  char *v47; // r8
  char *v48; // rcx
  __int64 v49; // r15
  char *v50; // r14
  const char *v51; // rdi
  const char *v52; // rdi
  int v53; // eax
  __int64 *v54; // [rsp+8h] [rbp-170h]
  char *v55; // [rsp+10h] [rbp-168h]
  const char *v56; // [rsp+10h] [rbp-168h]
  char *srca; // [rsp+18h] [rbp-160h]
  char *srcb; // [rsp+18h] [rbp-160h]
  char *src; // [rsp+18h] [rbp-160h]
  unsigned __int64 v60; // [rsp+20h] [rbp-158h]
  int v61; // [rsp+28h] [rbp-150h]
  int v62; // [rsp+2Ch] [rbp-14Ch]
  unsigned __int8 v63; // [rsp+3Fh] [rbp-139h] BYREF
  __int64 v64; // [rsp+40h] [rbp-138h] BYREF
  char v65[8]; // [rsp+48h] [rbp-130h] BYREF
  char *s1; // [rsp+50h] [rbp-128h] BYREF
  __m128 v67; // [rsp+58h] [rbp-120h]
  void *v68; // [rsp+70h] [rbp-108h] BYREF
  __int64 v69; // [rsp+78h] [rbp-100h]
  char *s2; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+98h] [rbp-E0h] BYREF
  void *v72; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-C0h]
  __int64 v74; // [rsp+C8h] [rbp-B0h]
  __int64 v75; // [rsp+D0h] [rbp-A8h] BYREF
  _QWORD v76[2]; // [rsp+D8h] [rbp-A0h] BYREF
  int v77; // [rsp+E8h] [rbp-90h]
  void *ptr; // [rsp+F0h] [rbp-88h]
  __int128 v79; // [rsp+F8h] [rbp-80h]
  char v80; // [rsp+108h] [rbp-70h]
  char *s; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v82[11]; // [rsp+120h] [rbp-58h] BYREF

  v13 = *(__int64 **)(a1 + 8);
  v82[3] = __readfsqword(0x28u);
  v15 = *v13;
  if ( (v15 & 0x100) != 0 )
  {
    v16 = 1;
    if ( (v15 & 0x200) == 0 )
      return v16;
  }
  sub_6B7B10((__int64)&s1, a1, a3, 1);
  v16 = sub_6BA500(a1, a3);
  if ( !(_BYTE)v16 && !(unsigned int)sub_B53B90(a3) )
  {
    v20 = *(_WORD *)(a3 + 30);
    if ( (v20 & 0x180) == 0 || (v20 & 0x22) != 0 )
    {
      v21 = *(_QWORD *)(a3 + 48);
      v22 = 0;
      v63 = 12;
      v72 = nullptr;
      v74 = 0;
      v75 = 0;
      v76[0] = 0;
      v76[1] = 0;
      v77 = 0;
      ptr = nullptr;
      v80 = 16;
      v73 = 0;
      v79 = 0;
      if ( !(unsigned __int8)sub_6C67C0(
                               (_QWORD *)a1,
                               (__int64)&v72,
                               &v63,
                               v21,
                               0,
                               a3,
                               0.0,
                               a5,
                               a6,
                               a7,
                               v18,
                               v19,
                               a10,
                               a11) )
        goto LABEL_17;
      if ( (unsigned __int8)sub_B51190(a3) )
        LODWORD(v74) = v74 | 2;
      v23 = (char *)haystack;
      if ( v67.m128_u64[0] )
        v23 = s1;
      sub_6BD4E0(a1, (__int64)&v72, a3, v23);
      v54 = *(__int64 **)(a3 + 120);
      *(double *)v22.m128_u64 = sub_B52330(a3);
      if ( !(unsigned __int8)sub_6C70C0(a1, (__int64 *)&v72, v54, v24, a3, v22, a5, a6, a7, v25, v26, a10, a11) )
        goto LABEL_17;
      v64 = 0;
      v16 = create_tinfo(&v64, v63, 12, &v72);
      if ( !(_BYTE)v16 )
      {
        sub_6BAAB0((_QWORD *)a1, (_BYTE *)a3, v21);
LABEL_54:
        clear_tinfo_t(&v64);
LABEL_17:
        if ( ptr )
        {
          *(_QWORD *)&v79 = 0;
          qfree(ptr);
        }
        cleanup_argloc(v76);
        clear_tinfo_t(&v75);
        v27 = (char *)v72;
        if ( v72 )
        {
          v28 = v73;
          if ( (_QWORD)v73 )
          {
            v29 = 0;
            do
            {
              v30 = &v27[80 * v29];
              clear_tinfo_t(v30 + 64);
              v31 = *((void **)v30 + 5);
              if ( v31 )
              {
                *((_QWORD *)v30 + 6) = 0;
                qfree(v31);
              }
              v32 = *((void **)v30 + 2);
              if ( v32 )
              {
                *((_QWORD *)v30 + 3) = 0;
                qfree(v32);
              }
              ++v29;
              cleanup_argloc(v30);
              v27 = (char *)v72;
            }
            while ( v28 != v29 );
          }
          *(_QWORD *)&v73 = 0;
          qfree(v27);
        }
        goto LABEL_5;
      }
      sub_6B7070((__int64)&v68, a1, a3);
      v33 = **(_QWORD **)(a1 + 8);
      if ( (v33 & 0x100) == 0 )
      {
        v47 = (char *)haystack;
        if ( v69 )
          v47 = (char *)v68;
        v48 = (char *)haystack;
        if ( v67.m128_u64[0] )
          v48 = s1;
        sub_6BED00(a1, &v64, 0, v48, v47, a3, 0);
        goto LABEL_50;
      }
      v62 = *(_DWORD *)(a1 + 120) & 0x1000000;
      v61 = ((**(_QWORD **)(a1 + 8) & 0xFLL) != 2) << 11;
      if ( (v33 & 0x1000) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 120) & 0x1000000) != 0 )
        {
LABEL_44:
          v60 = v67.m128_u64[0];
LABEL_45:
          v44 = (char *)haystack;
          if ( v69 )
            v44 = (char *)v68;
          v45 = (char *)haystack;
          if ( v60 )
            v45 = s1;
          sub_6BED00(a1, &v64, 0, v45, v44, a3, v61);
LABEL_50:
          if ( a2 )
          {
            v46 = v64;
            v64 = *a2;
            *a2 = v46;
          }
          if ( v68 )
          {
            v69 = 0;
            qfree(v68);
          }
          goto LABEL_54;
        }
LABEL_32:
        sub_E4C640(v65, *(_QWORD *)(a1 + 48));
        sub_E4C6F0(&s, v65, a3);
        v34 = s;
        s2 = nullptr;
        v71 = 0;
        if ( !s
          || (srca = s,
              v35 = strlen(s),
              s2 = (char *)qvector_reserve(&s2, 0, v35 + 1, 1),
              *(_QWORD *)&v71 = v35 + 1,
              memmove(s2, srca, v35),
              s2[v35] = 0,
              v34 = s,
              s != (char *)v82) )
        {
          operator delete(v34, v82[0] + 1LL);
        }
        v36 = s2;
        v37 = s1;
        if ( (_QWORD)v71 )
        {
          v38 = s2;
          v39 = (char *)haystack;
          if ( !v67.m128_u64[0] )
          {
LABEL_38:
            srcb = s1;
            v55 = s2;
            v40 = strcmp(v39, v38);
            v37 = srcb;
            v36 = v55;
            v41 = v40 == 0;
            v42 = 2048;
            if ( v41 )
              v42 = v61;
            v61 = v42;
            goto LABEL_41;
          }
        }
        else
        {
          v38 = (char *)haystack;
          if ( !v67.m128_u64[0] )
          {
LABEL_41:
            s1 = v36;
            v43 = _mm_loadh_ps((const double *)&v71 + 1);
            s2 = v37;
            *((_QWORD *)&v71 + 1) = v67.m128_u64[1];
            v67 = v43;
            if ( v37 )
            {
              *(_QWORD *)&v71 = 0;
              qfree(v37);
            }
            sub_E4C6B0(v65, v38, v37);
            goto LABEL_44;
          }
        }
        v39 = s1;
        goto LABEL_38;
      }
      v60 = v67.m128_u64[0];
      if ( v67.m128_u64[0] )
      {
        v56 = s1;
        if ( !s1 )
        {
          v52 = nullptr;
LABEL_71:
          v53 = strcmp(v52, v56);
          goto LABEL_72;
        }
      }
      else
      {
        if ( !haystack )
        {
          v53 = strcmp(nullptr, nullptr);
LABEL_72:
          if ( v62 | v53 )
            goto LABEL_45;
          goto LABEL_32;
        }
        v56 = haystack;
      }
      src = *(char **)(a1 + 568);
      if ( src )
      {
        v49 = *(_QWORD *)(a1 + 560);
        v50 = nullptr;
        while ( 1 )
        {
          v51 = haystack;
          if ( *(_QWORD *)(v49 + 32) )
            v51 = *(const char **)(v49 + 24);
          if ( !strcmp(v51, v56) )
            break;
          ++v50;
          v49 += 56;
          if ( v50 == src )
            goto LABEL_76;
        }
        v52 = *(const char **)v49;
      }
      else
      {
LABEL_76:
        v52 = v56;
      }
      goto LABEL_71;
    }
  }
  v16 = 1;
LABEL_5:
  if ( s1 )
  {
    v67.m128_u64[0] = 0;
    qfree(s1);
  }
  return v16;
}

