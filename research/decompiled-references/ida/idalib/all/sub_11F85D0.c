__int64 __fastcall sub_11F85D0(__int64 a1, __int64 a2, _DWORD *a3, size_t a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD *v8; // r15
  __int64 *v9; // rbp
  _QWORD *v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r10
  __int64 v18; // r14
  unsigned int v19; // eax
  const char **v21; // rax
  size_t v22; // r9
  const char *v23; // r8
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rdx
  int v38; // eax
  __int64 *v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 *v42; // rdx
  __int64 v43; // rsi
  int v44; // eax
  int v45; // eax
  int v46; // eax
  size_t v47; // rax
  char *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  size_t v51; // r9
  __int64 v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 *v59; // rdx
  __int64 *v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  size_t v68; // r12
  int v69; // eax
  int v70; // eax
  size_t v71; // rbp
  size_t v72; // r12
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  size_t v80; // rax
  size_t v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  size_t v84; // rax
  const char *v85; // [rsp+0h] [rbp-B8h]
  const char *v86; // [rsp+0h] [rbp-B8h]
  __int64 v87; // [rsp+0h] [rbp-B8h]
  __int64 v88; // [rsp+8h] [rbp-B0h]
  size_t v90; // [rsp+18h] [rbp-A0h]
  unsigned __int8 *v92[17]; // [rsp+30h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 176);
  v6 = operator new(0x148u);
  sub_21B6CD0(v6, v5);
  v7 = sub_1105E80();
  v8 = *(_QWORD **)(a2 + 8);
  v9 = v7;
  v10 = &v8[*(unsigned int *)(a2 + 16)];
  if ( v8 == v10 )
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
    v18 = *v8;
    v19 = *(_DWORD *)(*(_QWORD *)*v8 + 40LL);
    if ( v19 == 2014 )
    {
      v31 = sub_21BB380(v9, 2097);
      v33 = sub_21B9090(v6, v18, v31, v32);
      sub_21B80F0(v6, v33);
      v12 = 1116;
      goto LABEL_8;
    }
    if ( v19 > 0x7DE )
    {
      if ( v19 == 3264 )
      {
        v12 = 322;
      }
      else
      {
        if ( v19 > 0xCC0 )
        {
          if ( v19 == 3451 )
          {
            v12 = 2763;
            goto LABEL_8;
          }
          v12 = 2965;
          if ( v19 == 3457 )
            goto LABEL_8;
          goto LABEL_18;
        }
        if ( v19 == 2082 )
        {
          v28 = sub_21BB380(v9, 2097);
          v30 = sub_21B9090(v6, v18, v28, v29);
          sub_21B80F0(v6, v30);
          v12 = 647;
        }
        else
        {
          if ( v19 != 2450 )
            goto LABEL_18;
LABEL_31:
          sub_21B80F0(v6, *v8);
          v12 = 3299;
        }
      }
LABEL_8:
      v13 = sub_21BB380(v9, v12);
      v15 = sub_21B9090(v6, v18, v13, v14);
      sub_21B80F0(v6, v15);
      goto LABEL_9;
    }
    if ( v19 == 428 )
      goto LABEL_31;
    if ( v19 <= 0x1AC )
    {
      if ( v19 != 277 )
        goto LABEL_18;
      v21 = *(const char ***)(v18 + 48);
      v22 = 0;
      v23 = *v21;
      if ( *v21 )
      {
        v85 = *v21;
        v24 = j__strlen(*v21);
        v23 = v85;
        v22 = v24;
      }
      v90 = v22;
      v86 = v23;
      v25 = sub_21BB380(v9, 2392);
      v27 = sub_21B9430(v6, v18, v25, v26, v86, v90);
      sub_21B80F0(v6, v27);
LABEL_9:
      v16 = v8 + 1;
      if ( v10 == v8 + 1 )
        goto LABEL_19;
      goto LABEL_10;
    }
    if ( v19 == 516 )
    {
      v12 = 2320;
      goto LABEL_8;
    }
    v12 = 2569;
    if ( v19 == 1059 )
      goto LABEL_8;
LABEL_18:
    sub_21B80F0(v6, *v8);
    v16 = v8 + 1;
    if ( v10 == v8 + 1 )
      goto LABEL_19;
LABEL_10:
    v17 = v8 + 2;
    if ( !v8[1] )
      break;
LABEL_11:
    v8 = v16;
  }
  while ( 1 )
  {
    v16 = v17;
    if ( v10 == v17 )
      break;
    if ( *v17++ )
      goto LABEL_11;
  }
LABEL_19:
  if ( a4 )
  {
    v34 = sub_21BB380(v9, 2323);
    v36 = v35;
    v87 = sub_21BB380(v9, 2260);
    v88 = v37;
    if ( j__strlen("ppc") == a4 && !memcmp(a3, "ppc", a4) )
      goto LABEL_38;
    if ( j__strlen("ppc601") == a4 && !memcmp(a3, "ppc601", a4) )
    {
      v53 = j__strlen("601");
      v48 = "601";
      v49 = v34;
      v50 = v36;
      v51 = v53;
      goto LABEL_66;
    }
    if ( j__strlen("ppc603") == a4 && !memcmp(a3, "ppc603", a4) )
    {
      v54 = j__strlen("603");
      v48 = "603";
      v49 = v34;
      v50 = v36;
      v51 = v54;
      goto LABEL_66;
    }
    if ( j__strlen("ppc604") == a4 && !memcmp(a3, "ppc604", a4) )
    {
      v80 = j__strlen("604");
      v48 = "604";
      v49 = v34;
      v50 = v36;
      v51 = v80;
      goto LABEL_66;
    }
    if ( j__strlen("ppc604e") == a4 && !memcmp(a3, "ppc604e", a4) )
    {
      v61 = j__strlen("604e");
      v48 = (char *)"604e";
      v49 = v34;
      v50 = v36;
      v51 = v61;
      goto LABEL_66;
    }
    if ( j__strlen("ppc750") == a4 && !memcmp(a3, "ppc750", a4) )
    {
      v62 = j__strlen("750");
      v48 = (char *)"750";
      v49 = v34;
      v50 = v36;
      v51 = v62;
      goto LABEL_66;
    }
    if ( j__strlen("ppc7400") == a4 && !memcmp(a3, "ppc7400", a4) )
    {
      v63 = j__strlen("7400");
      v48 = (char *)"7400";
      v49 = v34;
      v50 = v36;
      v51 = v63;
      goto LABEL_66;
    }
    if ( j__strlen("ppc7450") == a4 && !memcmp(a3, "ppc7450", a4) )
    {
      v47 = j__strlen("7450");
      v48 = (char *)"7450";
      v49 = v34;
      v50 = v36;
      v51 = v47;
LABEL_66:
      v52 = sub_21B8AA0(v6, 0, v49, v50, v48, v51);
      sub_21B80F0(v6, v52);
      goto LABEL_38;
    }
    if ( j__strlen("ppc970") == a4 && !memcmp(a3, "ppc970", a4) )
    {
      v55 = j__strlen("970");
      v48 = "970";
      v49 = v34;
      v50 = v36;
      v51 = v55;
      goto LABEL_66;
    }
    if ( j__strlen("ppc64") == a4 && !memcmp(a3, "ppc64", a4)
      || j__strlen("ppc64le") == a4 && !memcmp(a3, "ppc64le", a4) )
    {
LABEL_77:
      v56 = sub_21BB380(v9, 2210);
      v58 = sub_21B9090(v6, 0, v56, v57);
      sub_21B80F0(v6, v58);
LABEL_38:
      sub_11F4950(a1, v6);
      v38 = *(_DWORD *)(a1 + 3932);
      if ( (unsigned int)(v38 - 3) <= 2
        || (unsigned int)(v38 - 1) <= 1
        && *(_DWORD *)(a1 + 3936) <= 1u
        && (v92[0] = (unsigned __int8 *)0x8000000000000006LL,
            v92[1] = (unsigned __int8 *)0x80000000LL,
            !(unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)v92)) )
      {
        v39 = *(__int64 **)(v6 + 8);
        v40 = &v39[*(unsigned int *)(v6 + 16)];
        if ( v39 != v40 )
        {
          v41 = v39 + 1;
          if ( !*v39 )
          {
            do
            {
              v39 = v41;
              if ( v40 == v41 )
                break;
              ++v41;
            }
            while ( !*(v41 - 1) );
          }
        }
        while ( v40 != v39 )
        {
          v42 = v39 + 1;
          v43 = *v39;
          if ( v40 != v39 + 1 )
          {
            while ( v39[1] )
            {
LABEL_44:
              v44 = *(_DWORD *)(*(_QWORD *)v43 + 40LL);
              if ( v44 == 2450 || v44 == 428 )
                goto LABEL_84;
              v39 = v42++;
              v43 = *v39;
              if ( v40 == v42 )
                goto LABEL_47;
            }
            v60 = v39 + 2;
            while ( 1 )
            {
              v42 = v60;
              if ( v40 == v60 )
                break;
              if ( *v60++ )
                goto LABEL_44;
            }
          }
LABEL_47:
          v45 = *(_DWORD *)(*(_QWORD *)v43 + 40LL);
          if ( v45 != 2450 && v45 != 428 )
            break;
LABEL_84:
          v39 = v42 + 1;
          *v42 = 0;
          if ( v40 != v42 + 1 && !v42[1] )
          {
            v59 = v42 + 2;
            do
            {
              v39 = v59;
              if ( v40 == v59 )
                break;
              ++v59;
            }
            while ( !*(v59 - 1) );
          }
        }
      }
      v46 = sub_11EA4A0(a3, a4);
      if ( v46 == 1 || v46 == 35 )
      {
        if ( (unsigned __int8)sub_21B7850(a2, 1534, 1254, 0) )
        {
          sub_FC70B0((__int64)v92, **(_QWORD **)(a1 + 8), 0, 605);
          sub_AE9DF0(v92, (__int64)"-fomit-frame-pointer", 1u);
          sub_AEC220(v92, a3, a4);
          sub_AEA040((__int64)v92);
        }
      }
      return v6;
    }
    if ( j__strlen("i386") == a4 && !memcmp(a3, "i386", a4) )
      goto LABEL_38;
    if ( j__strlen("i486") != a4 || (v64 = memcmp(a3, "i486", a4), v48 = "i486", v64) )
    {
      if ( j__strlen("i586") != a4 || (v65 = memcmp(a3, "i586", a4), v48 = "i586", v65) )
      {
        if ( j__strlen("i686") != a4 || (v66 = memcmp(a3, "i686", a4), v48 = "i686", v66) )
        {
          if ( j__strlen("pentium") != a4 || (v67 = memcmp(a3, "pentium", a4), v48 = "pentium", v67) )
          {
            v68 = j__strlen("pentium2");
            if ( v68 != a4 || (v69 = memcmp(a3, "pentium2", a4), v48 = "pentium2", v69) )
            {
              if ( j__strlen("pentpro") == a4 && !memcmp(a3, "pentpro", a4) )
              {
                v81 = j__strlen("pentiumpro");
                v48 = "pentiumpro";
                v51 = v81;
                goto LABEL_147;
              }
              if ( j__strlen("pentIIm3") == a4 )
              {
                v70 = memcmp(a3, "pentIIm3", a4);
                v48 = "pentium2";
                v51 = v68;
                if ( !v70 )
                  goto LABEL_147;
              }
              if ( j__strlen("x86_64") == a4 && !memcmp(a3, "x86_64", a4)
                || j__strlen("x86_64h") == a4 && !memcmp(a3, "x86_64h", a4) )
              {
                goto LABEL_77;
              }
              v71 = j__strlen("arm");
              v72 = j__strlen("armv4t");
              if ( v71 == a4 )
              {
                v73 = memcmp(a3, "arm", a4);
                v48 = "armv4t";
                v51 = v72;
                if ( !v73 )
                {
LABEL_147:
                  v49 = v87;
                  v50 = v88;
                  goto LABEL_66;
                }
              }
              if ( v72 != a4 || (v74 = memcmp(a3, "armv4t", a4), v48 = "armv4t", v74) )
              {
                if ( j__strlen("armv5") == a4 && !memcmp(a3, "armv5", a4) )
                {
                  v83 = j__strlen("armv5tej");
                  v48 = "armv5tej";
                  v51 = v83;
                  goto LABEL_147;
                }
                if ( j__strlen("xscale") != a4 || (v75 = memcmp(a3, "xscale", a4), v48 = "xscale", v75) )
                {
                  if ( j__strlen("armv6") == a4 && !memcmp(a3, "armv6", a4) )
                  {
                    v84 = j__strlen("armv6k");
                    v48 = "armv6k";
                    v51 = v84;
                    goto LABEL_147;
                  }
                  if ( j__strlen("armv6m") != a4 || (v76 = memcmp(a3, "armv6m", a4), v48 = "armv6m", v76) )
                  {
                    if ( j__strlen("armv7") == a4 && !memcmp(a3, "armv7", a4) )
                    {
                      v82 = j__strlen("armv7a");
                      v48 = "armv7a";
                      v51 = v82;
                      goto LABEL_147;
                    }
                    if ( j__strlen("armv7em") != a4 || (v77 = memcmp(a3, "armv7em", a4), v48 = "armv7em", v77) )
                    {
                      if ( j__strlen("armv7k") != a4 || (v78 = memcmp(a3, "armv7k", a4), v48 = "armv7k", v78) )
                      {
                        if ( j__strlen("armv7m") != a4 || (v79 = memcmp(a3, "armv7m", a4), v48 = "armv7m", v79) )
                        {
                          if ( j__strlen("armv7s") != a4 || memcmp(a3, "armv7s", a4) )
                            goto LABEL_38;
                          v48 = "armv7s";
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v51 = a4;
    goto LABEL_147;
  }
  return v6;
}
