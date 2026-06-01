__int64 __fastcall sub_226AED0(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *i; // rdx
  const __m128i *v6; // r14
  _WORD *v7; // rcx
  int v8; // eax
  int v9; // esi
  bool v10; // zf
  __int16 v11; // ax
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rdx
  size_t v19; // rbx
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdx
  const char *v31; // rax
  const char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // r13
  __int64 *j; // rbp
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  const char *v42; // rax
  __int64 v43; // rax
  __int128 v45; // [rsp+30h] [rbp-1C8h] BYREF
  _QWORD *v46; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-1B0h]
  unsigned int v48; // [rsp+50h] [rbp-1A8h]
  __int128 v49; // [rsp+60h] [rbp-198h] BYREF
  __int64 v50; // [rsp+70h] [rbp-188h]
  void *ptr; // [rsp+80h] [rbp-178h] BYREF
  __m128i v52; // [rsp+88h] [rbp-170h]
  char v53; // [rsp+98h] [rbp-160h] BYREF
  void *v54; // [rsp+A0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-150h]
  _BYTE v56[24]; // [rsp+B8h] [rbp-140h] BYREF
  __m128i v57[2]; // [rsp+D0h] [rbp-128h] BYREF
  __int16 v58; // [rsp+F0h] [rbp-108h]
  _QWORD v59[2]; // [rsp+100h] [rbp-F8h] BYREF
  __int16 v60; // [rsp+110h] [rbp-E8h]
  const char *v61; // [rsp+118h] [rbp-E0h]
  size_t v62; // [rsp+120h] [rbp-D8h]
  __int16 v63; // [rsp+128h] [rbp-D0h]
  const char *v64; // [rsp+130h] [rbp-C8h]
  size_t v65; // [rsp+138h] [rbp-C0h]
  __int16 v66; // [rsp+140h] [rbp-B8h]
  const char *v67; // [rsp+148h] [rbp-B0h]
  size_t v68; // [rsp+150h] [rbp-A8h]
  __int16 v69; // [rsp+158h] [rbp-A0h]
  const char *v70; // [rsp+160h] [rbp-98h]
  size_t v71; // [rsp+168h] [rbp-90h]
  __int16 v72; // [rsp+170h] [rbp-88h]
  char *v73; // [rsp+178h] [rbp-80h]
  size_t v74; // [rsp+180h] [rbp-78h]
  __int16 v75; // [rsp+188h] [rbp-70h]
  const char *v76; // [rsp+190h] [rbp-68h]
  size_t v77; // [rsp+198h] [rbp-60h]
  __int16 v78; // [rsp+1A0h] [rbp-58h]
  const char *v79; // [rsp+1A8h] [rbp-50h]
  size_t v80; // [rsp+1B0h] [rbp-48h]
  __int16 v81; // [rsp+1B8h] [rbp-40h]
  char v82; // [rsp+1C0h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a2 + 32) != 4 )
  {
    v12 = *a1;
    v13 = 0;
    v59[0] = "expected mapping node";
    LOWORD(v62) = 259;
    sub_226EEF0(v12, a2, v59, 0);
    return v13;
  }
  v59[0] = "version";
  v60 = 1;
  v61 = "case-sensitive";
  v59[1] = j__strlen("version");
  v63 = 0;
  v64 = "use-external-names";
  v62 = j__strlen("case-sensitive");
  v66 = 0;
  v67 = "root-relative";
  v65 = j__strlen("use-external-names");
  v69 = 0;
  v70 = "overlay-relative";
  v68 = j__strlen("root-relative");
  v71 = j__strlen("overlay-relative");
  v73 = "fallthrough";
  v72 = 0;
  v75 = 0;
  v74 = j__strlen("fallthrough");
  v76 = "redirecting-with";
  v78 = 0;
  v79 = "roots";
  v77 = j__strlen("redirecting-with");
  v81 = 1;
  v80 = j__strlen("roots");
  v48 = 16;
  v4 = (_QWORD *)sub_22300B0(384, 8);
  v47 = 0;
  v46 = v4;
  for ( i = v4 + 48; i != v4; *(v4 - 2) = 0 )
  {
    *v4 = -1;
    v4 += 3;
  }
  v6 = (const __m128i *)v59;
  do
  {
    if ( (unsigned __int8)sub_22604A0((__int64 *)&v46, (__int64)v6, &v54) )
      goto LABEL_5;
    v7 = v54;
    v8 = v47 + 1;
    v9 = 2 * v48;
    v57[0].m128i_i64[0] = (__int64)v54;
    if ( 4 * ((int)v47 + 1) >= 3 * v48 )
      goto LABEL_73;
    if ( v48 - HIDWORD(v47) - v8 <= v48 >> 3 )
    {
      v9 = v48;
LABEL_73:
      sub_22694E0((__int64)&v46, v9);
      sub_22604A0((__int64 *)&v46, (__int64)v6, v57);
      v7 = (_WORD *)v57[0].m128i_i64[0];
      v8 = v47 + 1;
    }
    v10 = *(_QWORD *)v7 == -1;
    LODWORD(v47) = v8;
    if ( !v10 )
      --HIDWORD(v47);
    v11 = v6[1].m128i_i16[0];
    *(__m128i *)v7 = _mm_loadu_si128(v6);
    v7[8] = v11;
LABEL_5:
    v6 = (const __m128i *)((char *)v6 + 24);
  }
  while ( v6 != (const __m128i *)&v82 );
  *(_BYTE *)(a2 + 76) = 0;
  v49 = 0;
  v50 = 0;
  sub_22754C0(a2);
  v15 = *(_QWORD *)(a2 + 80);
  if ( v15 )
  {
    while ( 1 )
    {
      v54 = v56;
      si128 = _mm_load_si128(xmmword_23A8F10);
      v16 = sub_22751E0(v15);
      if ( *(_DWORD *)(v16 + 32) != 1 )
      {
        v57[0].m128i_i64[0] = (__int64)"expected string";
        v58 = 259;
        goto LABEL_48;
      }
      v17 = sub_2270420(v16, &v54);
      v19 = v18;
      v20 = (_QWORD *)v17;
      v21 = sub_22751E0(v15);
      if ( !(unsigned __int8)sub_225B910(a1, v21, v20, v19, (__int64 *)&v46) )
        goto LABEL_49;
      if ( j__strlen("roots") == v19 )
        break;
      if ( j__strlen("version") == v19 )
      {
        if ( !v19 )
          goto LABEL_34;
LABEL_29:
        if ( !memcmp(v20, "version", v19) )
        {
LABEL_34:
          v45 = 0u;
          ptr = &v53;
          v52 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
          v24 = sub_2275440(v15);
          if ( !(unsigned __int8)sub_225B380(a1, v24, &v45, (__int64)&ptr) )
            goto LABEL_70;
          if ( sub_2247A50(v45, 0xAu, v57[0].m128i_i64) || v57[0].m128i_i64[0] != v57[0].m128i_i32[0] )
          {
            v32 = "expected integer";
            goto LABEL_69;
          }
          if ( v57[0].m128i_i32[0] < 0 )
          {
            v32 = "invalid version number";
LABEL_69:
            v57[0].m128i_i64[0] = (__int64)v32;
            v58 = 259;
            v33 = sub_2275440(v15);
            sub_226EEF0(*a1, v33, v57, 0);
LABEL_70:
            if ( ptr != &v53 )
              free(ptr);
            goto LABEL_49;
          }
          if ( v57[0].m128i_i32[0] )
          {
            v32 = "version mismatch, expected 0";
            goto LABEL_69;
          }
          if ( ptr != &v53 )
            free(ptr);
          goto LABEL_41;
        }
        if ( j__strlen("case-sensitive") == v19 )
          goto LABEL_31;
        goto LABEL_22;
      }
      if ( j__strlen("case-sensitive") == v19 )
      {
        if ( !v19 )
        {
LABEL_60:
          v22 = sub_2275440(v15);
          v23 = (_BYTE *)(a3 + 112);
          goto LABEL_61;
        }
LABEL_31:
        if ( !memcmp(v20, "case-sensitive", v19) )
          goto LABEL_60;
        if ( j__strlen("overlay-relative") == v19 )
          goto LABEL_64;
        goto LABEL_23;
      }
LABEL_22:
      if ( j__strlen("overlay-relative") == v19 )
      {
        if ( !v19 )
          goto LABEL_65;
LABEL_64:
        if ( !memcmp(v20, "overlay-relative", v19) )
        {
LABEL_65:
          v22 = sub_2275440(v15);
          v23 = (_BYTE *)(a3 + 113);
LABEL_61:
          if ( !(unsigned __int8)sub_225B3E0(a1, v22, v23) )
            goto LABEL_49;
          goto LABEL_41;
        }
        if ( v19 == j__strlen("use-external-names") )
          goto LABEL_25;
        goto LABEL_75;
      }
LABEL_23:
      if ( j__strlen("use-external-names") == v19 )
      {
        if ( !v19 )
          goto LABEL_26;
LABEL_25:
        if ( !memcmp(v20, "use-external-names", v19) )
        {
LABEL_26:
          v22 = sub_2275440(v15);
          v23 = (_BYTE *)(a3 + 114);
          goto LABEL_61;
        }
        if ( v19 == j__strlen("fallthrough") )
          goto LABEL_87;
        goto LABEL_76;
      }
LABEL_75:
      if ( j__strlen("fallthrough") == v19 )
      {
        if ( !v19 )
          goto LABEL_93;
LABEL_87:
        if ( !memcmp(v20, "fallthrough", v19) )
        {
LABEL_93:
          v57[0].m128i_i64[0] = (__int64)"redirecting-with";
          v57[0].m128i_i64[1] = j__strlen("redirecting-with");
          if ( sub_2269670((__int64)&v46, v57)->m128i_i8[1] )
          {
LABEL_98:
            v42 = "'fallthrough' and 'redirecting-with' are mutually exclusive";
            goto LABEL_99;
          }
          v57[0].m128i_i8[0] = 0;
          v41 = sub_2275440(v15);
          if ( !(unsigned __int8)sub_225B3E0(a1, v41, v57) )
            goto LABEL_49;
          *(_DWORD *)(a3 + 120) = v57[0].m128i_i8[0] == 0 ? 2 : 0;
          goto LABEL_41;
        }
        if ( j__strlen("redirecting-with") == v19 )
          goto LABEL_78;
        goto LABEL_89;
      }
LABEL_76:
      if ( j__strlen("redirecting-with") == v19 )
      {
        if ( !v19 )
          goto LABEL_79;
LABEL_78:
        if ( !memcmp(v20, "redirecting-with", v19) )
        {
LABEL_79:
          v57[0].m128i_i64[0] = (__int64)"fallthrough";
          v57[0].m128i_i64[1] = j__strlen("fallthrough");
          if ( sub_2269670((__int64)&v46, v57)->m128i_i8[1] )
            goto LABEL_98;
          v34 = sub_2275440(v15);
          v35 = sub_225B690(a1, v34);
          if ( !BYTE4(v35) )
          {
            v42 = "expected valid redirect kind";
LABEL_99:
            v57[0].m128i_i64[0] = (__int64)v42;
            v58 = 259;
            v43 = sub_2275440(v15);
            sub_226EEF0(*a1, v43, v57, 0);
LABEL_49:
            if ( v54 != v56 )
              free(v54);
LABEL_45:
            v13 = 0;
            goto LABEL_46;
          }
          *(_DWORD *)(a3 + 120) = v35;
          goto LABEL_41;
        }
      }
LABEL_89:
      v39 = sub_2275440(v15);
      v40 = sub_225B7F0(a1, v39);
      if ( !BYTE4(v40) )
      {
        v31 = "expected valid root-relative kind";
LABEL_67:
        v57[0].m128i_i64[0] = (__int64)v31;
        v58 = 259;
        v16 = sub_2275440(v15);
LABEL_48:
        sub_226EEF0(*a1, v16, v57, 0);
        goto LABEL_49;
      }
      *(_DWORD *)(a3 + 124) = v40;
LABEL_41:
      if ( v54 != v56 )
        free(v54);
      sub_22754C0(a2);
      v15 = *(_QWORD *)(a2 + 80);
      if ( !v15 )
        goto LABEL_44;
    }
    if ( !v19 || !memcmp(v20, "roots", v19) )
    {
      v28 = sub_2275440(v15);
      v29 = v28;
      if ( *(_DWORD *)(v28 + 32) != 5 )
      {
        v31 = "expected array";
        goto LABEL_67;
      }
      *(_BYTE *)(v28 + 76) = 0;
      sub_2274D70(v28);
      v30 = *(_QWORD *)(v29 + 80);
      if ( v30 )
      {
        while ( 1 )
        {
          sub_2269B00(v57, a1, v30, (void **)a3, 1);
          if ( !v57[0].m128i_i64[0] )
            goto LABEL_49;
          sub_2261BB0((__int64)&v49, v57[0].m128i_i64);
          if ( v57[0].m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v57[0].m128i_i64[0] + 8LL))(v57[0].m128i_i64[0]);
          sub_2274D70(v29);
          v30 = *(_QWORD *)(v29 + 80);
          if ( !v30 )
            goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
    if ( v19 != j__strlen("version") )
    {
      if ( v19 == j__strlen("case-sensitive") )
        goto LABEL_31;
      goto LABEL_22;
    }
    goto LABEL_29;
  }
LABEL_44:
  if ( (unsigned __int8)sub_226EEE0(*a1) )
    goto LABEL_45;
  v13 = sub_225BBC0(a1, a2, (__int64 *)&v46, v25, v26, v27);
  if ( !(_BYTE)v13 )
    goto LABEL_45;
  v36 = *((__int64 **)&v49 + 1);
  for ( j = (__int64 *)v49; v36 != j; ++j )
  {
    v38 = *j;
    sub_2262000((__int64)a1, (double *)a3, v38, 0);
  }
LABEL_46:
  sub_225DA30((__int64 **)&v49);
  operator delete(v46, 24LL * v48, 8);
  return v13;
}
