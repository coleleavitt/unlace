__int64 __fastcall sub_12872E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  const char *v11; // r14
  _QWORD *j; // rax
  __int64 v13; // r12
  const char **v14; // rax
  const char *v15; // r15
  size_t v16; // r14
  int v17; // edx
  __int64 v18; // rbp
  __int64 v19; // rbx
  const char *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // r8
  __int64 v35; // rax
  const char **v36; // rax
  char *v37; // rbp
  size_t v38; // rax
  size_t v39; // rbx
  _BYTE *v40; // rax
  unsigned __int64 v41; // r15
  _BYTE *v42; // rax
  __int64 *v44; // r15
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  const char **v53; // rax
  const char *v54; // r13
  size_t v55; // rax
  __int64 i; // rdx
  char v57; // cl
  void *v58; // rbx
  void *v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  char *v71; // r8
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r12
  __int64 v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rdx
  _QWORD *v88; // [rsp+0h] [rbp-A8h]
  __int64 v89; // [rsp+8h] [rbp-A0h]
  __int64 *v90; // [rsp+10h] [rbp-98h]
  _QWORD *v91; // [rsp+18h] [rbp-90h]
  const char *v92; // [rsp+20h] [rbp-88h]
  int v93; // [rsp+30h] [rbp-78h]
  __int64 v95; // [rsp+38h] [rbp-70h]
  __int64 v96; // [rsp+40h] [rbp-68h]
  __int64 v97; // [rsp+48h] [rbp-60h]
  void *v98[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v99[72]; // [rsp+60h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 176);
  v89 = operator new(0x148u);
  sub_21B6CD0(v89, v5);
  v90 = sub_1105E80();
  v6 = *(_DWORD *)(a1 + 48);
  LODWORD(v98[0]) = 3115;
  v93 = v6;
  v7 = sub_21B6DA0(a2, v98, 1);
  v8 = *(_QWORD **)(a2 + 8);
  v9 = &v8[(unsigned int)v7];
  v10 = &v8[HIDWORD(v7)];
  if ( v9 == v10 )
  {
LABEL_6:
    v11 = nullptr;
  }
  else
  {
    while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 3115) )
    {
      if ( v10 == ++v9 )
      {
        v8 = *(_QWORD **)(a2 + 8);
        goto LABEL_6;
      }
    }
    v11 = nullptr;
    while ( v10 != v9 )
    {
      v53 = *(const char ***)(*v9 + 48LL);
      v54 = *v53;
      if ( *v53 )
      {
        v55 = strlen(*v53);
        if ( v55 )
        {
          for ( i = 0; i != v55; ++i )
          {
            v57 = v54[i];
            if ( (!i || v54[i - 1] != 98) && (v57 == 100 || v57 == 120 || (unsigned __int8)(v57 - 49) <= 1u) )
              v11 = &v54[i];
          }
        }
      }
      if ( ++v9 == v10 )
        break;
      while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 3115) )
      {
        if ( v10 == ++v9 )
          goto LABEL_85;
      }
    }
LABEL_85:
    v8 = *(_QWORD **)(a2 + 8);
  }
  v88 = v8;
  v91 = &v8[*(unsigned int *)(a2 + 16)];
  if ( v8 != v91 )
  {
    if ( *v8 )
    {
LABEL_9:
      v92 = v11;
      for ( j = v88; ; v88 = j )
      {
        v13 = *j;
        if ( (unsigned __int8)sub_21B9810(*j, 3115) )
        {
          v14 = *(const char ***)(v13 + 48);
          v15 = *v14;
          if ( *v14 )
          {
            v16 = strlen(*v14);
            if ( v16 )
            {
              LOBYTE(v17) = *v15;
              v18 = 0;
              while ( 1 )
              {
                v19 = v18 + 1;
                switch ( (char)v17 )
                {
                  case '1':
                  case '2':
                  case 'd':
                  case 'x':
                    v20 = &v15[v18];
                    if ( v20 != v92 )
                      goto LABEL_16;
                    v28 = 3060;
                    switch ( (_BYTE)v17 )
                    {
                      case 'd':
                        goto LABEL_34;
                      case '1':
                        v69 = sub_21BB380(v90, 3114);
                        v71 = (char *)"s";
                        break;
                      case 'x':
                      case '2':
                        v66 = sub_21BB380(v90, 476);
                        v68 = sub_21B9090(v89, v13, v66, v67);
                        sub_21B80F0(v89, v68);
                        v69 = sub_21BB380(v90, 3114);
                        v71 = "3";
                        break;
                      default:
                        if ( v93 == 38 )
                          goto LABEL_46;
LABEL_93:
                        LODWORD(v98[0]) = 1254;
                        v73 = sub_21B6DA0(v89, v98, 1);
                        v74 = *(_QWORD *)(v89 + 8);
                        v75 = v74 + 8LL * (unsigned int)v73;
                        v76 = v74 + 8 * HIDWORD(v73);
                        v97 = v75;
                        if ( v76 == v75 )
                          goto LABEL_99;
                        v95 = v13;
                        v77 = v75;
                        v96 = v19;
                        v78 = v76;
                        while ( 1 )
                        {
                          v79 = *(_QWORD *)(v78 - 8);
                          if ( v79 )
                          {
                            if ( (unsigned __int8)sub_21B9810(v79, 1254) )
                              break;
                          }
                          v78 -= 8;
                          if ( v77 == v78 )
                          {
                            v13 = v95;
                            v19 = v96;
                            goto LABEL_99;
                          }
                        }
                        v86 = v78;
                        v13 = v95;
                        v19 = v96;
                        if ( v86 == v97 || !*(_QWORD *)(v86 - 8) )
                        {
LABEL_99:
                          v80 = sub_21BB380(v90, 1534);
                          v82 = sub_21B9090(v89, v13, v80, v81);
                          sub_21B80F0(v89, v82);
                        }
LABEL_46:
                        v28 = 804;
                        if ( (unsigned __int8)(*v20 - 49) > 1u )
                          goto LABEL_19;
                        goto LABEL_34;
                    }
                    v72 = sub_21B8AA0(v89, v13, v69, v70, v71, 1);
                    sub_21B80F0(v89, v72);
                    if ( v93 != 38 )
                      goto LABEL_93;
                    goto LABEL_46;
                  case 'b':
                    if ( v19 == v16 )
                      goto LABEL_28;
                    v22 = v18 + 2;
                    v17 = v15[v19];
                    if ( (unsigned int)(v17 - 48) > 9 )
                    {
                      v18 = v19;
                    }
                    else
                    {
                      if ( (_BYTE)v17 == 49 )
                      {
                        v23 = 863;
                        goto LABEL_26;
                      }
                      if ( (char)v17 <= 49 )
                      {
                        v23 = 1187;
LABEL_26:
                        v24 = sub_21BB380(v90, v23);
                        v26 = sub_21B9090(v89, v13, v24, v25);
                        sub_21B80F0(v89, v26);
                        v19 = v22;
                        if ( v22 == v16 )
                          goto LABEL_28;
                        goto LABEL_20;
                      }
                      v19 = v22;
                      v28 = 862;
                      if ( (char)v17 <= 51 )
                      {
LABEL_34:
                        v29 = sub_21BB380(v90, v28);
                        v31 = sub_21B9090(v89, v13, v29, v30);
                        sub_21B80F0(v89, v31);
                      }
LABEL_19:
                      if ( v19 == v16 )
                        goto LABEL_28;
LABEL_20:
                      LOBYTE(v17) = v15[v19];
                      v18 = v19;
                    }
                    break;
                  case 'g':
                    goto LABEL_16;
                  case 'i':
                    if ( v19 == v16 || v15[v19] != 45 )
                    {
                      v28 = 476;
                      goto LABEL_34;
                    }
                    v63 = sub_21BB380(v90, 1047);
                    v65 = sub_21B9090(v89, v13, v63, v64);
                    v19 = v18 + 2;
                    sub_21B80F0(v89, v65);
                    goto LABEL_19;
                  case 's':
                    v32 = sub_21BB380(v90, 3114);
                    v34 = (char *)"s";
                    goto LABEL_36;
                  case 't':
                    v32 = sub_21BB380(v90, 3114);
                    v34 = "3";
LABEL_36:
                    v35 = sub_21B8AA0(v89, v13, v32, v33, v34, 1);
                    sub_21B80F0(v89, v35);
                    goto LABEL_19;
                  case 'y':
                    if ( v19 != v16 && v15[v19] == 45 )
                    {
                      v19 = v18 + 2;
                      if ( v93 != 38 )
                      {
                        v28 = 1254;
                        goto LABEL_34;
                      }
                    }
                    else
                    {
                      v28 = 1534;
                      if ( v93 != 38 )
                        goto LABEL_34;
                    }
LABEL_16:
                    v21 = *(_QWORD *)(v13 + 16);
                    if ( !v21 )
                      v21 = v13;
                    *(_BYTE *)(v21 + 44) |= 1u;
                    goto LABEL_19;
                  default:
                    goto LABEL_19;
                }
              }
            }
          }
          goto LABEL_28;
        }
        if ( (unsigned __int8)sub_21B9810(v13, 324) )
        {
          v36 = *(const char ***)(v13 + 48);
          v37 = (char *)*v36;
          if ( *v36 )
          {
            v38 = strlen(*v36);
            v39 = v38;
            if ( v38 )
            {
              v40 = memchr(v37, 35, v38);
              if ( v40 )
              {
                v41 = v40 - v37;
                if ( v40 - v37 != -1 )
                {
                  v42 = memchr(v37, 61, v39);
                  if ( !v42 || v41 <= v42 - v37 )
                  {
                    v98[0] = v99;
                    sub_1287050(v98, v37, (__int64)&v37[v39]);
                    *((_BYTE *)v98[0] + v41) = 61;
                    v58 = v98[1];
                    v59 = v98[0];
                    v60 = sub_21BB380(v90, 324);
                    v62 = sub_21B8AA0(v89, v13, v60, v61, v59, v58);
                    sub_21B80F0(v89, v62);
                    if ( v98[0] != v99 )
                      operator delete(v98[0]);
LABEL_28:
                    v27 = v88;
                    j = v88 + 1;
                    if ( v91 == v88 + 1 )
                      return v89;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( (unsigned __int8)sub_21B9810(v13, 3128) )
          {
            v44 = v90;
            v45 = sub_21BB380(v90, 3544);
            v46 = v89;
            v48 = sub_21B9090(v89, v13, v45, v47);
            sub_21B80F0(v89, v48);
            v49 = 1266;
LABEL_62:
            v50 = sub_21BB380(v44, v49);
            v52 = sub_21B9090(v46, v13, v50, v51);
            sub_21B80F0(v46, v52);
            goto LABEL_28;
          }
          if ( (unsigned __int8)sub_21B9810(v13, 3127) )
          {
            v44 = v90;
            v83 = sub_21BB380(v90, 3545);
            v46 = v89;
            v85 = sub_21B9090(v89, v13, v83, v84);
            sub_21B80F0(v89, v85);
            v49 = 1565;
            goto LABEL_62;
          }
          if ( a5 == 8 )
            goto LABEL_28;
        }
        sub_21B80F0(v89, v13);
        v27 = v88;
        j = v88 + 1;
        if ( v91 == v88 + 1 )
          return v89;
LABEL_29:
        if ( !v27[1] )
        {
          do
          {
            if ( v91 == ++j )
              return v89;
          }
          while ( !*j );
        }
      }
    }
    v87 = v8 + 1;
    while ( 1 )
    {
      v88 = v87;
      if ( v91 == v87 )
        break;
      if ( *v87++ )
        goto LABEL_9;
    }
  }
  return v89;
}
