__int64 __fastcall sub_11E4DE0(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD *v8; // r14
  __int64 *v9; // rbp
  _QWORD *v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r15
  unsigned int v18; // eax
  const char **v20; // rax
  size_t v21; // r9
  const char *v22; // r8
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r13
  __int64 v36; // rdx
  __int64 v37; // r14
  size_t v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char *v41; // r8
  size_t v42; // r9
  __int64 v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  size_t v57; // r15
  int v58; // eax
  int v59; // eax
  size_t v60; // rbp
  size_t v61; // rax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  size_t v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  const char *v74; // [rsp+0h] [rbp-58h]
  const char *v75; // [rsp+0h] [rbp-58h]
  __int64 v76; // [rsp+0h] [rbp-58h]
  size_t v77; // [rsp+0h] [rbp-58h]
  __int64 v78; // [rsp+8h] [rbp-50h]
  size_t v80; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 176);
  v6 = operator new(0x148u);
  sub_21B6CD0(v6, v5);
  v7 = sub_1105E80();
  v8 = *(_QWORD **)(a2 + 8);
  v9 = v7;
  v10 = &v8[*(unsigned int *)(a2 + 16)];
  if ( v10 == v8 )
    goto LABEL_19;
  v11 = v8 + 1;
  if ( *v8 )
    goto LABEL_12;
  do
  {
    v8 = v11;
    if ( v10 == v11 )
      goto LABEL_19;
    ++v11;
  }
  while ( !*(v11 - 1) );
  while ( 1 )
  {
LABEL_12:
    v17 = *v8;
    v18 = *(_DWORD *)(*(_QWORD *)*v8 + 40LL);
    if ( v18 == 2014 )
    {
      v31 = sub_21BB380(v9, 2097);
      v33 = sub_21B9090(v6, v17, v31, v32);
      sub_21B80F0(v6, v33);
      v12 = 1116;
      goto LABEL_8;
    }
    if ( v18 > 0x7DE )
    {
      if ( v18 == 3264 )
      {
        v12 = 322;
        goto LABEL_8;
      }
      if ( v18 <= 0xCC0 )
      {
        if ( v18 == 2082 )
        {
          v27 = sub_21BB380(v9, 2097);
          v29 = sub_21B9090(v6, v17, v27, v28);
          sub_21B80F0(v6, v29);
          v12 = 647;
        }
        else
        {
          if ( v18 != 2450 )
            goto LABEL_18;
LABEL_28:
          sub_21B80F0(v6, *v8);
          v12 = 3299;
        }
LABEL_8:
        v13 = sub_21BB380(v9, v12);
        v15 = sub_21B9090(v6, v17, v13, v14);
        sub_21B80F0(v6, v15);
        goto LABEL_9;
      }
      if ( v18 == 3451 )
      {
        v12 = 2763;
        goto LABEL_8;
      }
      v12 = 2965;
      if ( v18 == 3457 )
        goto LABEL_8;
    }
    else
    {
      if ( v18 == 428 )
        goto LABEL_28;
      if ( v18 <= 0x1AC )
      {
        if ( v18 != 277 )
          goto LABEL_18;
        v20 = *(const char ***)(v17 + 48);
        v21 = 0;
        v22 = *v20;
        if ( *v20 )
        {
          v74 = *v20;
          v23 = j__strlen(*v20);
          v22 = v74;
          v21 = v23;
        }
        v80 = v21;
        v75 = v22;
        v24 = sub_21BB380(v9, 2392);
        v26 = sub_21B9430(v6, v17, v24, v25, v75, v80);
        sub_21B80F0(v6, v26);
LABEL_9:
        v16 = v8 + 1;
        if ( v10 == v8 + 1 )
          goto LABEL_19;
        goto LABEL_10;
      }
      if ( v18 == 516 )
      {
        v12 = 2320;
        goto LABEL_8;
      }
      v12 = 2569;
      if ( v18 == 1059 )
        goto LABEL_8;
    }
LABEL_18:
    sub_21B80F0(v6, *v8);
    v16 = v8 + 1;
    if ( v10 == v8 + 1 )
      goto LABEL_19;
LABEL_10:
    if ( !v8[1] )
      break;
LABEL_11:
    v8 = v16;
  }
  v30 = v8 + 2;
  while ( 1 )
  {
    v16 = v30;
    if ( v10 == v30 )
      break;
    if ( *v30++ )
      goto LABEL_11;
  }
LABEL_19:
  if ( !a4 )
    return v6;
  v76 = sub_21BB380(v9, 2323);
  v78 = v34;
  v35 = sub_21BB380(v9, 2260);
  v37 = v36;
  if ( j__strlen("ppc") == a4 && !memcmp(a3, "ppc", a4) )
    return v6;
  if ( j__strlen("ppc601") == a4 && !memcmp(a3, "ppc601", a4) )
  {
    v44 = j__strlen("601");
    v41 = "601";
    v39 = v76;
    v40 = v78;
    v42 = v44;
    goto LABEL_51;
  }
  if ( j__strlen("ppc603") == a4 && !memcmp(a3, "ppc603", a4) )
  {
    v45 = j__strlen("603");
    v41 = "603";
    v39 = v76;
    v40 = v78;
    v42 = v45;
    goto LABEL_51;
  }
  if ( j__strlen("ppc604") == a4 && !memcmp(a3, "ppc604", a4) )
  {
    v69 = j__strlen("604");
    v41 = "604";
    v39 = v76;
    v40 = v78;
    v42 = v69;
    goto LABEL_51;
  }
  if ( j__strlen("ppc604e") == a4 && !memcmp(a3, "ppc604e", a4) )
  {
    v50 = j__strlen("604e");
    v41 = (char *)"604e";
    v39 = v76;
    v40 = v78;
    v42 = v50;
LABEL_51:
    v43 = sub_21B8AA0(v6, 0, v39, v40, v41, v42);
    sub_21B80F0(v6, v43);
    return v6;
  }
  if ( j__strlen("ppc750") == a4 && !memcmp(a3, "ppc750", a4) )
  {
    v51 = j__strlen("750");
    v41 = (char *)"750";
    v39 = v76;
    v40 = v78;
    v42 = v51;
    goto LABEL_51;
  }
  if ( j__strlen("ppc7400") == a4 && !memcmp(a3, "ppc7400", a4) )
  {
    v52 = j__strlen("7400");
    v41 = (char *)"7400";
    v39 = v76;
    v40 = v78;
    v42 = v52;
    goto LABEL_51;
  }
  if ( j__strlen("ppc7450") == a4 && !memcmp(a3, "ppc7450", a4) )
  {
    v38 = j__strlen("7450");
    v39 = v76;
    v40 = v78;
    v41 = (char *)"7450";
    v42 = v38;
    goto LABEL_51;
  }
  if ( j__strlen("ppc970") == a4 && !memcmp(a3, "ppc970", a4) )
  {
    v46 = j__strlen("970");
    v41 = "970";
    v39 = v76;
    v40 = v78;
    v42 = v46;
    goto LABEL_51;
  }
  if ( j__strlen("ppc64") == a4 && !memcmp(a3, "ppc64", a4) || j__strlen("ppc64le") == a4 && !memcmp(a3, "ppc64le", a4) )
  {
LABEL_67:
    v47 = sub_21BB380(v9, 2210);
    v49 = sub_21B9090(v6, 0, v47, v48);
    sub_21B80F0(v6, v49);
    return v6;
  }
  if ( j__strlen("i386") == a4 && !memcmp(a3, "i386", a4) )
    return v6;
  if ( j__strlen("i486") == a4 )
  {
    v53 = memcmp(a3, "i486", a4);
    v41 = "i486";
    if ( !v53 )
      goto LABEL_116;
  }
  if ( j__strlen("i586") == a4 )
  {
    v54 = memcmp(a3, "i586", a4);
    v41 = "i586";
    if ( !v54 )
      goto LABEL_116;
  }
  if ( j__strlen("i686") == a4 )
  {
    v55 = memcmp(a3, "i686", a4);
    v41 = "i686";
    if ( !v55 )
      goto LABEL_116;
  }
  if ( j__strlen("pentium") == a4 )
  {
    v56 = memcmp(a3, "pentium", a4);
    v41 = "pentium";
    if ( !v56 )
      goto LABEL_116;
  }
  v57 = j__strlen("pentium2");
  if ( v57 == a4 )
  {
    v58 = memcmp(a3, "pentium2", a4);
    v41 = "pentium2";
    if ( !v58 )
      goto LABEL_116;
  }
  if ( j__strlen("pentpro") == a4 && !memcmp(a3, "pentpro", a4) )
  {
    v70 = j__strlen("pentiumpro");
    v41 = "pentiumpro";
    v42 = v70;
    goto LABEL_117;
  }
  if ( j__strlen("pentIIm3") == a4 )
  {
    v59 = memcmp(a3, "pentIIm3", a4);
    v41 = "pentium2";
    v42 = v57;
    if ( !v59 )
      goto LABEL_117;
  }
  if ( j__strlen("x86_64") == a4 && !memcmp(a3, "x86_64", a4)
    || j__strlen("x86_64h") == a4 && !memcmp(a3, "x86_64h", a4) )
  {
    goto LABEL_67;
  }
  v60 = j__strlen("arm");
  v61 = j__strlen("armv4t");
  v42 = v61;
  if ( v60 == a4 )
  {
    v77 = v61;
    v62 = memcmp(a3, "arm", a4);
    v41 = "armv4t";
    v42 = v77;
    if ( !v62 )
      goto LABEL_117;
  }
  if ( a4 == v42 )
  {
    v63 = memcmp(a3, "armv4t", a4);
    v41 = "armv4t";
    if ( !v63 )
      goto LABEL_116;
  }
  if ( j__strlen("armv5") == a4 && !memcmp(a3, "armv5", a4) )
  {
    v72 = j__strlen("armv5tej");
    v41 = "armv5tej";
    v42 = v72;
    goto LABEL_117;
  }
  if ( j__strlen("xscale") == a4 )
  {
    v64 = memcmp(a3, "xscale", a4);
    v41 = "xscale";
    if ( !v64 )
      goto LABEL_116;
  }
  if ( j__strlen("armv6") == a4 && !memcmp(a3, "armv6", a4) )
  {
    v73 = j__strlen("armv6k");
    v41 = "armv6k";
    v42 = v73;
    goto LABEL_117;
  }
  if ( j__strlen("armv6m") == a4 )
  {
    v65 = memcmp(a3, "armv6m", a4);
    v41 = "armv6m";
    if ( !v65 )
      goto LABEL_116;
  }
  if ( j__strlen("armv7") == a4 && !memcmp(a3, "armv7", a4) )
  {
    v71 = j__strlen("armv7a");
    v41 = "armv7a";
    v42 = v71;
    goto LABEL_117;
  }
  if ( j__strlen("armv7em") == a4 && (v66 = memcmp(a3, "armv7em", a4), v41 = "armv7em", !v66)
    || j__strlen("armv7k") == a4 && (v67 = memcmp(a3, "armv7k", a4), v41 = "armv7k", !v67)
    || j__strlen("armv7m") == a4 && (v68 = memcmp(a3, "armv7m", a4), v41 = "armv7m", !v68) )
  {
LABEL_116:
    v42 = a4;
LABEL_117:
    v39 = v35;
    v40 = v37;
    goto LABEL_51;
  }
  if ( a4 == j__strlen("armv7s") && !memcmp(a3, "armv7s", a4) )
  {
    v41 = "armv7s";
    goto LABEL_116;
  }
  return v6;
}
