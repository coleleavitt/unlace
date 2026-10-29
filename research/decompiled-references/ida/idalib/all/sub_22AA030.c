std::_V2 *__fastcall sub_22AA030(std::_V2 *a1, _DWORD *a2)
{
  _DWORD *v2; // r13
  _DWORD *v3; // r15
  __int64 v4; // rbp
  __m128i *v5; // rbx
  bool v6; // r12
  size_t v7; // rbx
  size_t v8; // rax
  size_t v10; // rbx
  size_t v11; // rax
  char **v12; // r12
  char *v13; // rax
  __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const __m128i *v19; // rdx
  const __m128i *v20; // rsi
  const __m128i *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const __m128i *v28; // rdx
  size_t v29; // rbx
  size_t v30; // rax
  size_t v31; // rbp
  size_t v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  const char *v38; // rax
  size_t v39; // rbx
  size_t v40; // rax
  size_t v41; // rbx
  size_t v42; // rax
  char **v43; // r12
  char *v44; // r13
  __int64 v45; // rbp
  size_t v46; // rbx
  size_t v47; // rax
  __int64 v48; // [rsp+8h] [rbp-230h]
  __int64 v49; // [rsp+8h] [rbp-230h]
  bool v50; // [rsp+10h] [rbp-228h]
  __int64 v51; // [rsp+10h] [rbp-228h]
  _DWORD *v52; // [rsp+10h] [rbp-228h]
  int v53; // [rsp+18h] [rbp-220h]
  __int64 v54; // [rsp+18h] [rbp-220h]
  __int64 v55; // [rsp+20h] [rbp-218h]
  __int64 v56; // [rsp+28h] [rbp-210h]
  __int64 v57; // [rsp+30h] [rbp-208h]
  __int64 v58; // [rsp+38h] [rbp-200h]
  __int64 v59; // [rsp+40h] [rbp-1F8h]
  __int64 v60; // [rsp+48h] [rbp-1F0h]
  __m128i v61[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int16 v62; // [rsp+70h] [rbp-1C8h]
  __m128i v63; // [rsp+80h] [rbp-1B8h] BYREF
  __int16 v64; // [rsp+A0h] [rbp-198h]
  __m128i v65[2]; // [rsp+B0h] [rbp-188h] BYREF
  __int16 v66; // [rsp+D0h] [rbp-168h]
  _QWORD v67[4]; // [rsp+E0h] [rbp-158h] BYREF
  __int16 v68; // [rsp+100h] [rbp-138h]
  __m128i v69[3]; // [rsp+110h] [rbp-128h] BYREF
  __m128i v70[2]; // [rsp+140h] [rbp-F8h] BYREF
  __int16 v71; // [rsp+160h] [rbp-D8h]
  __m128i v72[3]; // [rsp+170h] [rbp-C8h] BYREF
  __m128i v73[2]; // [rsp+1A0h] [rbp-98h] BYREF
  __int16 v74; // [rsp+1C0h] [rbp-78h]
  __m128i v75; // [rsp+1D0h] [rbp-68h] BYREF
  _QWORD v76[2]; // [rsp+1E0h] [rbp-58h] BYREF
  __int16 v77; // [rsp+1F0h] [rbp-48h]

  v2 = a2;
  v3 = a2 + 8;
  v4 = (__int64)(a2 + 6);
  v5 = &v75;
  sub_22A8B90(&v75, "e");
  v50 = a2 + 8 != (_DWORD *)sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "i");
  v6 = v3 != (_DWORD *)sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "c");
  v58 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "f");
  v55 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, (char *)"d");
  v56 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "zfinx");
  v48 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "zve32x");
  v57 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  v53 = a2[2];
  sub_22A8B90(&v75, "zcmp");
  v59 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "xqccmp");
  v60 = sub_22A98A0((__int64)(a2 + 6), (__int64)&v75);
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  if ( v6 && v50 )
  {
    v10 = j__strlen("e");
    v11 = j__strlen("i");
    sub_22A8DB0(a1, (__int64)"i", v11, (__int64)"e", v10);
    return a1;
  }
  if ( (_DWORD *)v48 != v3 && (_DWORD *)v55 != v3 )
  {
    v7 = j__strlen("zfinx");
    v8 = j__strlen("f");
    sub_22A8DB0(a1, (__int64)"f", v8, (__int64)"zfinx", v7);
    return a1;
  }
  if ( v53 && (_DWORD *)v57 == v3 )
  {
    v31 = j__strlen("v' or 'zve*");
    v32 = j__strlen("zvl*b");
    v68 = 259;
    v67[0] = "' extension to also be specified";
    v70[0].m128i_i64[0] = (__int64)"v' or 'zve*";
    v5 = v65;
    v73[0].m128i_i64[0] = (__int64)"' requires '";
    v70[0].m128i_i64[1] = v31;
    v21 = v69;
    v77 = 1283;
    v75.m128i_i64[0] = (__int64)"'";
    v76[0] = "zvl*b";
    v76[1] = v32;
    v71 = 261;
    v74 = 259;
    sub_A41580(v72, &v75, v73, (__int64)"zvl*b", v33, v34);
    sub_A41580(v69, v72, v70, v35, v36, v37);
    v28 = (const __m128i *)v67;
    goto LABEL_55;
  }
  if ( (_DWORD *)v56 != v3 )
  {
    if ( (_DWORD *)v58 != v3 )
      goto LABEL_30;
    sub_22A8B90(&v75, "zcd");
    if ( v3 != (_DWORD *)sub_22A98A0((__int64)(a2 + 6), (__int64)&v75) )
    {
      if ( (_QWORD *)v75.m128i_i64[0] != v76 )
        operator delete((void *)v75.m128i_i64[0]);
LABEL_30:
      v12 = &off_2BF3B00;
      while ( 1 )
      {
        v13 = *v12;
        v54 = (__int64)*v12;
        v51 = (__int64)v12[1];
        if ( *v12 )
        {
          v75.m128i_i64[0] = (__int64)v76;
          sub_22A8AD0(&v75, v13, (__int64)&v13[v51]);
        }
        else
        {
          v75.m128i_i64[0] = (__int64)v76;
          v75.m128i_i64[1] = 0;
          LOBYTE(v76[0]) = 0;
        }
        if ( v3 != (_DWORD *)sub_22A98A0((__int64)(a2 + 6), (__int64)&v75) )
          break;
        if ( (_QWORD *)v75.m128i_i64[0] != v76 )
          operator delete((void *)v75.m128i_i64[0]);
        v12 += 2;
        if ( v12 == (char **)&unk_2BF3B50 )
        {
          v4 = (__int64)(a2 + 6);
          v2 = a2;
          goto LABEL_44;
        }
      }
      if ( (_QWORD *)v75.m128i_i64[0] != v76 )
        operator delete((void *)v75.m128i_i64[0]);
      v62 = 259;
      v73[0].m128i_i64[0] = (__int64)"' extension when 'd' extension is enabled";
      v15 = "c";
      if ( (_DWORD *)v58 == v3 )
        v15 = "zcd";
      v74 = 259;
      v71 = 259;
      v70[0].m128i_i64[0] = (__int64)v15;
      v67[0] = "' extension is incompatible with '";
      v68 = 259;
      v63.m128i_i64[0] = v54;
      v64 = 262;
      v63.m128i_i64[1] = v51;
      v61[0].m128i_i64[0] = (__int64)"'";
      sub_A41580(v65, v61, &v63, v14, 259, 259);
      v19 = (const __m128i *)v67;
      v20 = v65;
      goto LABEL_39;
    }
    if ( (_QWORD *)v75.m128i_i64[0] != v76 )
      operator delete((void *)v75.m128i_i64[0]);
  }
LABEL_44:
  if ( *v2 != 32 )
  {
    sub_22A8B90(&v75, "zcf");
    if ( v3 != (_DWORD *)sub_22A98A0(v4, (__int64)&v75) )
    {
      if ( (_QWORD *)v75.m128i_i64[0] != v76 )
        operator delete((void *)v75.m128i_i64[0]);
      v38 = "'zcf' is only supported for 'rv32'";
      goto LABEL_60;
    }
    if ( (_QWORD *)v75.m128i_i64[0] != v76 )
      operator delete((void *)v75.m128i_i64[0]);
  }
  sub_22A8B90(&v75, "xwchc");
  if ( v3 != (_DWORD *)sub_22A98A0(v4, (__int64)&v75) )
  {
    if ( (_QWORD *)v75.m128i_i64[0] != v76 )
      operator delete((void *)v75.m128i_i64[0]);
    if ( *v2 != 32 )
    {
      v38 = "'xwchc' is only supported for 'rv32'";
LABEL_60:
      v75.m128i_i64[0] = (__int64)v38;
      v77 = 259;
      sub_22A8430(a1, &v75);
      return a1;
    }
    if ( (_DWORD *)v56 != v3 )
    {
      v41 = j__strlen("xwchc");
      v42 = j__strlen("d");
      sub_22A8DB0(a1, (__int64)"d", v42, (__int64)"xwchc", v41);
      return a1;
    }
    sub_22A8B90(&v75, "zcb");
    if ( v56 != sub_22A98A0(v4, (__int64)&v75) )
    {
      if ( (_QWORD *)v75.m128i_i64[0] != v76 )
        operator delete((void *)v75.m128i_i64[0]);
      v29 = j__strlen("zcb");
      v30 = j__strlen("xwchc");
      sub_22A8DB0(a1, (__int64)"xwchc", v30, (__int64)"zcb", v29);
      return a1;
    }
  }
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  sub_22A8B90(&v75, "zclsd");
  if ( v3 == (_DWORD *)sub_22A98A0(v4, (__int64)&v75) )
    goto LABEL_73;
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  v38 = "'zclsd' is only supported for 'rv32'";
  if ( *v2 != 32 )
    goto LABEL_60;
  sub_22A8B90(&v75, "zcf");
  if ( v3 == (_DWORD *)sub_22A98A0(v4, (__int64)&v75) )
  {
LABEL_73:
    if ( (_QWORD *)v75.m128i_i64[0] != v76 )
      operator delete((void *)v75.m128i_i64[0]);
    if ( *v2 != 32 )
    {
      sub_22A8B90(&v75, "zilsd");
      if ( v3 != (_DWORD *)sub_22A98A0(v4, (__int64)&v75) )
      {
        if ( (_QWORD *)v75.m128i_i64[0] != v76 )
          operator delete((void *)v75.m128i_i64[0]);
        v38 = "'zilsd' is only supported for 'rv32'";
        goto LABEL_60;
      }
      if ( (_QWORD *)v75.m128i_i64[0] != v76 )
        operator delete((void *)v75.m128i_i64[0]);
    }
    v43 = &off_2BF3B60;
    v52 = v2;
    v49 = v4;
    while ( 1 )
    {
      v44 = *v43;
      v45 = (__int64)v43[1];
      v75.m128i_i64[0] = (__int64)v76;
      if ( v44 )
      {
        sub_22A8AD0(&v75, v44, (__int64)&v44[v45]);
      }
      else
      {
        v75.m128i_i64[1] = 0;
        LOBYTE(v76[0]) = 0;
      }
      if ( v3 != (_DWORD *)sub_22A98A0(v49, (__int64)&v75) && *v52 != 32 )
        break;
      if ( (_QWORD *)v75.m128i_i64[0] != v76 )
        operator delete((void *)v75.m128i_i64[0]);
      v43 += 2;
      if ( &off_2BF3C80 == v43 )
      {
        if ( (_DWORD *)v59 == v3 || (_DWORD *)v60 == v3 )
        {
          *(_QWORD *)a1 = 0;
        }
        else
        {
          v46 = j__strlen("xqccmp");
          v47 = j__strlen("zcmp");
          sub_22A8DB0(a1, (__int64)"zcmp", v47, (__int64)"xqccmp", v46);
        }
        return a1;
      }
    }
    if ( (_QWORD *)v75.m128i_i64[0] != v76 )
      operator delete((void *)v75.m128i_i64[0]);
    v16 = 262;
    v73[0].m128i_i64[0] = (__int64)" is only supported for 'rv32'";
    v74 = 259;
    v71 = 259;
    v19 = v65;
    v68 = 259;
    v20 = (const __m128i *)v67;
    v70[0].m128i_i64[0] = (__int64)"'";
    v66 = 262;
    v65[0].m128i_i64[0] = (__int64)v44;
    v65[0].m128i_i64[1] = v45;
    v67[0] = "'";
LABEL_39:
    v21 = v72;
    sub_A41580(v69, v20, v19, v16, v17, v18);
    sub_A41580(v72, v69, v70, v22, v23, v24);
    v28 = v73;
LABEL_55:
    sub_A41580(v5, v21, v28, v25, v26, v27);
    sub_22A8430(a1, v5);
    return a1;
  }
  if ( (_QWORD *)v75.m128i_i64[0] != v76 )
    operator delete((void *)v75.m128i_i64[0]);
  v39 = j__strlen("zcf");
  v40 = j__strlen("zclsd");
  sub_22A8DB0(a1, (__int64)"zclsd", v40, (__int64)"zcf", v39);
  return a1;
}
