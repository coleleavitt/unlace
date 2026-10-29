__int64 __fastcall sub_6E7B40(
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
  char *v34; // rcx
  char *v35; // rdx
  char *v36; // rsi
  char *v37; // rdi
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  __m128 v41; // xmm0
  char *v42; // r8
  char *v43; // rcx
  __int64 v44; // rdx
  char *v45; // r8
  char *v46; // rcx
  __int64 v47; // r15
  char *v48; // r14
  const char *v49; // rdi
  const char *v50; // rdi
  int v51; // eax
  __int64 *v52; // [rsp+8h] [rbp-170h]
  char *v53; // [rsp+10h] [rbp-168h]
  const char *v54; // [rsp+10h] [rbp-168h]
  char *v55; // [rsp+18h] [rbp-160h]
  char *v56; // [rsp+18h] [rbp-160h]
  unsigned __int64 v57; // [rsp+20h] [rbp-158h]
  int v58; // [rsp+28h] [rbp-150h]
  int v59; // [rsp+2Ch] [rbp-14Ch]
  unsigned __int8 v60; // [rsp+3Fh] [rbp-139h] BYREF
  __int64 v61; // [rsp+40h] [rbp-138h] BYREF
  char v62[8]; // [rsp+48h] [rbp-130h] BYREF
  char *s1; // [rsp+50h] [rbp-128h] BYREF
  __m128 v64; // [rsp+58h] [rbp-120h]
  void *v65; // [rsp+70h] [rbp-108h] BYREF
  __int64 v66; // [rsp+78h] [rbp-100h]
  char *s2; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v69; // [rsp+A0h] [rbp-D8h] BYREF
  void *v70; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v71; // [rsp+B8h] [rbp-C0h]
  __int64 v72; // [rsp+C8h] [rbp-B0h]
  __int64 v73; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-A0h] BYREF
  __int128 v75; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+F0h] [rbp-88h]
  __int128 v77; // [rsp+F8h] [rbp-80h]
  char v78; // [rsp+108h] [rbp-70h]
  void *v79; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v80[11]; // [rsp+120h] [rbp-58h] BYREF

  v13 = *(__int64 **)(a1 + 8);
  v80[3] = __readfsqword(0x28u);
  v15 = *v13;
  if ( (v15 & 0x100) != 0 )
  {
    v16 = 1;
    if ( (v15 & 0x200) == 0 )
      return v16;
  }
  sub_6D80F0((__int64)&s1, a1, a3, 1);
  v16 = sub_6DAAE0(a1, a3);
  if ( !(_BYTE)v16 && !(unsigned int)sub_B778D0(a3) )
  {
    v20 = *(_WORD *)(a3 + 30);
    if ( (v20 & 0x180) == 0 || (v20 & 0x22) != 0 )
    {
      v21 = *(_QWORD *)(a3 + 48);
      v22 = 0;
      v60 = 12;
      v70 = nullptr;
      v72 = 0;
      v73 = 0;
      v74 = 0;
      ptr = nullptr;
      v78 = 16;
      v71 = 0;
      v75 = 0;
      v77 = 0;
      if ( !(unsigned __int8)sub_6E6E70(
                               (_QWORD *)a1,
                               (__int64)&v70,
                               &v60,
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
      if ( (unsigned __int8)sub_B74ED0(a3) )
        LODWORD(v72) = v72 | 2;
      v23 = (char *)haystack;
      if ( v64.m128_u64[0] )
        v23 = s1;
      sub_6DDAA0(a1, (__int64)&v70, a3, v23);
      v52 = *(__int64 **)(a3 + 120);
      *(double *)v22.m128_u64 = sub_B76070(a3);
      if ( !(unsigned __int8)sub_6E7770(a1, (__int64 *)&v70, v52, v24, a3, v22, a5, a6, a7, v25, v26, a10, a11) )
        goto LABEL_17;
      v61 = 0;
      v16 = create_tinfo(&v61, v60, 12, &v70);
      if ( !(_BYTE)v16 )
      {
        sub_6DB090((_QWORD *)a1, (_BYTE *)a3, v21);
LABEL_53:
        clear_tinfo_t(&v61);
LABEL_17:
        if ( ptr )
        {
          *(_QWORD *)&v77 = 0;
          qfree(ptr);
        }
        cleanup_argloc(&v74);
        clear_tinfo_t(&v73);
        v27 = (char *)v70;
        if ( v70 )
        {
          v28 = v71;
          if ( (_QWORD)v71 )
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
              v27 = (char *)v70;
            }
            while ( v28 != v29 );
          }
          *(_QWORD *)&v71 = 0;
          qfree(v27);
        }
        goto LABEL_5;
      }
      sub_6D7650((__int64)&v65, a1, a3);
      v33 = **(_QWORD **)(a1 + 8);
      if ( (v33 & 0x100) == 0 )
      {
        v45 = (char *)haystack;
        if ( v66 )
          v45 = (char *)v65;
        v46 = (char *)haystack;
        if ( v64.m128_u64[0] )
          v46 = s1;
        sub_6DF2F0(a1, &v61, 0, v46, v45, a3, 0);
        goto LABEL_49;
      }
      v59 = *(_DWORD *)(a1 + 120) & 0x1000000;
      v58 = ((**(_QWORD **)(a1 + 8) & 0xFLL) != 2) << 11;
      if ( (v33 & 0x1000) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 120) & 0x1000000) != 0 )
        {
LABEL_43:
          v57 = v64.m128_u64[0];
LABEL_44:
          v42 = (char *)haystack;
          if ( v66 )
            v42 = (char *)v65;
          v43 = (char *)haystack;
          if ( v57 )
            v43 = s1;
          sub_6DF2F0(a1, &v61, 0, v43, v42, a3, v58);
LABEL_49:
          if ( a2 )
          {
            v44 = v61;
            v61 = *a2;
            *a2 = v44;
          }
          if ( v65 )
          {
            v66 = 0;
            qfree(v65);
          }
          goto LABEL_53;
        }
LABEL_32:
        sub_E70380(v62, *(_QWORD *)(a1 + 48));
        sub_E70430(&v79, v62, a3);
        sub_472300((__int64)&s2, (const char *)v79);
        if ( v79 != v80 )
          operator delete(v79, v80[0] + 1LL);
        v34 = s2;
        v35 = s1;
        if ( v68 )
        {
          v36 = s2;
          v37 = (char *)haystack;
          if ( !v64.m128_u64[0] )
          {
LABEL_37:
            v55 = s1;
            v53 = s2;
            v38 = strcmp(v37, v36);
            v35 = v55;
            v34 = v53;
            v39 = v38 == 0;
            v40 = 2048;
            if ( v39 )
              v40 = v58;
            v58 = v40;
            goto LABEL_40;
          }
        }
        else
        {
          v36 = (char *)haystack;
          if ( !v64.m128_u64[0] )
          {
LABEL_40:
            s1 = v34;
            v41 = _mm_loadh_ps((const double *)&v69);
            s2 = v35;
            v69 = v64.m128_u64[1];
            v64 = v41;
            if ( v35 )
            {
              v68 = 0;
              qfree(v35);
            }
            sub_E703F0(v62, v36, v35);
            goto LABEL_43;
          }
        }
        v37 = s1;
        goto LABEL_37;
      }
      v57 = v64.m128_u64[0];
      if ( v64.m128_u64[0] )
      {
        v54 = s1;
        if ( !s1 )
        {
          v50 = nullptr;
LABEL_70:
          v51 = strcmp(v50, v54);
          goto LABEL_71;
        }
      }
      else
      {
        if ( !haystack )
        {
          v51 = strcmp(nullptr, nullptr);
LABEL_71:
          if ( v59 | v51 )
            goto LABEL_44;
          goto LABEL_32;
        }
        v54 = haystack;
      }
      v56 = *(char **)(a1 + 568);
      if ( v56 )
      {
        v47 = *(_QWORD *)(a1 + 560);
        v48 = nullptr;
        while ( 1 )
        {
          v49 = haystack;
          if ( *(_QWORD *)(v47 + 32) )
            v49 = *(const char **)(v47 + 24);
          if ( !strcmp(v49, v54) )
            break;
          ++v48;
          v47 += 56;
          if ( v48 == v56 )
            goto LABEL_75;
        }
        v50 = *(const char **)v47;
      }
      else
      {
LABEL_75:
        v50 = v54;
      }
      goto LABEL_70;
    }
  }
  v16 = 1;
LABEL_5:
  if ( s1 )
  {
    v64.m128_u64[0] = 0;
    qfree(s1);
  }
  return v16;
}
