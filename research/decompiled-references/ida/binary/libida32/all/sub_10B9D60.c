__int64 __fastcall sub_10B9D60(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rbp
  char v10; // r13
  __int64 v11; // rax
  size_t v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  const char **v15; // rax
  const char *v16; // r13
  size_t v17; // r14
  _QWORD *v18; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  size_t v24; // rdx
  const char **v25; // rax
  const char *v26; // r13
  size_t v27; // rax
  size_t v28; // r14
  size_t v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // r14
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  const char **v42; // rbx
  const char *v43; // r12
  size_t v44; // r13
  int v45; // eax
  int v46; // edx
  int v47; // r14d
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  const char **v55; // r13
  const char **v56; // r14
  size_t v57; // rax
  size_t v58; // rbp
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  const char *v62; // r12
  size_t v63; // rax
  size_t v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  char v68; // [rsp+7h] [rbp-A1h]
  _QWORD *v69; // [rsp+8h] [rbp-A0h]
  __int64 v70; // [rsp+10h] [rbp-98h]
  size_t v71; // [rsp+18h] [rbp-90h]
  int v72; // [rsp+18h] [rbp-90h]
  __int64 v73; // [rsp+18h] [rbp-90h]
  int v74; // [rsp+20h] [rbp-88h]
  _QWORD *v75; // [rsp+20h] [rbp-88h]
  const char **v76; // [rsp+28h] [rbp-80h]
  _QWORD *v77; // [rsp+28h] [rbp-80h]
  __int64 v80; // [rsp+48h] [rbp-60h]
  _QWORD *v81; // [rsp+50h] [rbp-58h]
  _QWORD *v82; // [rsp+58h] [rbp-50h]
  _QWORD v83[9]; // [rsp+60h] [rbp-48h] BYREF

  v70 = sub_10E2140();
  v2 = operator new(0x148u);
  sub_2192F90(v2, a2);
  v3 = sub_10B8FF0(a2, 0xBF0u);
  v4 = sub_10B8FF0(a2, 0xBEEu);
  v5 = sub_10B8FF0(a2, 0xBDDu);
  v6 = *(_QWORD **)(a2 + 8);
  v69 = &v6[*(unsigned int *)(a2 + 16)];
  if ( v69 == v6 )
    goto LABEL_37;
  v7 = v6 + 1;
  if ( !*v6 )
  {
    do
    {
      v6 = v7;
      if ( v69 == v7 )
        goto LABEL_37;
      ++v7;
    }
    while ( !*(v7 - 1) );
  }
  v68 = 0;
  v80 = v4 | v3 | v5;
  while ( 1 )
  {
    v8 = *v6;
    if ( v68 )
      goto LABEL_9;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v6 + 1;
        v10 = sub_2195AD0(v8, 3287);
        if ( !v10 )
          break;
        if ( v69 == v9 )
          goto LABEL_37;
        if ( !*v9 )
          goto LABEL_33;
        v8 = *v9;
        ++v6;
LABEL_9:
        v11 = *(_QWORD *)(v8 + 16);
        v68 = 1;
        if ( !v11 )
          v11 = v8;
        *(_BYTE *)(v11 + 44) |= 1u;
      }
      if ( !(unsigned __int8)sub_2195AD0(v8, 362) )
        break;
      if ( v69 == v9 )
        goto LABEL_37;
      if ( !*v9 )
        goto LABEL_33;
      v8 = *v9;
      v68 = 0;
      ++v6;
    }
    if ( (unsigned __int8)sub_2195AD0(v8, 3441) || (unsigned __int8)sub_2195AD0(v8, 3496) )
    {
      v12 = j__strlen("--no-demangle");
      v13 = *(_QWORD *)(v8 + 48);
      v83[1] = v12;
      v14 = *(unsigned int *)(v8 + 56);
      v83[0] = "--no-demangle";
      if ( v13 + 8 * v14 != sub_10B5D60(v13, v13 + 8 * v14, (__int64)v83) )
      {
        v52 = sub_2197640(v70, 3519);
        v54 = sub_2195350(v2, v8, v52, v53);
        sub_21943B0(v2, v54);
        v55 = *(const char ***)(v8 + 48);
        if ( v55 == &v55[*(unsigned int *)(v8 + 56)] )
          goto LABEL_29;
        v56 = &v55[*(unsigned int *)(v8 + 56)];
        v73 = v8;
        v75 = v6;
        v77 = v6 + 1;
        while ( 1 )
        {
          v62 = *v55;
          v63 = j__strlen("--no-demangle");
          v64 = v63;
          if ( v62 )
          {
            v57 = j__strlen(v62);
            v58 = v57;
            if ( v57 == v64 && (!v57 || !memcmp(v62, "--no-demangle", v57)) )
              goto LABEL_71;
          }
          else
          {
            if ( !v63 )
              goto LABEL_71;
            v58 = 0;
          }
          v59 = sub_2197640(v70, 3496);
          v61 = sub_21956F0(v2, v73, v59, v60, v62, v58);
          sub_21943B0(v2, v61);
LABEL_71:
          if ( v56 == ++v55 )
          {
            v6 = v75;
            v9 = v77;
            goto LABEL_29;
          }
        }
      }
    }
    if ( !(unsigned __int8)sub_2195AD0(v8, 3460) || !*(_DWORD *)(v8 + 56) )
    {
LABEL_21:
      if ( !(unsigned __int8)sub_2195AD0(v8, 2205) )
        goto LABEL_27;
      v15 = *(const char ***)(v8 + 48);
      v16 = *v15;
      if ( *v15 )
      {
        v17 = j__strlen(*v15);
        if ( !v80 && v17 == j__strlen("stdc++") )
        {
          if ( !v17 || !memcmp(v16, "stdc++", v17) )
            goto LABEL_94;
          if ( v17 != j__strlen("cc_kext") )
            goto LABEL_27;
          goto LABEL_26;
        }
        if ( v17 == j__strlen("cc_kext") )
        {
          if ( !v17 )
            goto LABEL_43;
LABEL_26:
          if ( !memcmp(v16, "cc_kext", v17) )
            goto LABEL_43;
        }
LABEL_27:
        if ( (unsigned __int8)sub_2195AD0(v8, 3567) )
        {
          v40 = *(_QWORD *)(v8 + 16);
          if ( !v40 )
            v40 = v8;
          *(_BYTE *)(v40 + 44) |= 1u;
          v41 = *(unsigned int *)(v8 + 56);
          v42 = *(const char ***)(v8 + 48);
          v76 = &v42[v41];
          if ( v42 != v76 )
          {
            v81 = v6;
            v82 = v6 + 1;
            do
            {
              v43 = *v42;
              v44 = 0;
              if ( *v42 )
                v44 = j__strlen(*v42);
              ++v42;
              v45 = sub_2197640(v70, 70);
              v72 = v46;
              v47 = v45;
              v74 = sub_2192BD0(*(_QWORD *)(v2 + 176), v43, v44);
              v48 = operator new(0x58u);
              sub_2191BD0(v48, v47, v72, (_DWORD)v43, v44, v74, (__int64)v43, 0);
              sub_2195260(v2, v48);
              sub_21943B0(v2, v48);
            }
            while ( v76 != v42 );
            v6 = v81;
            v9 = v82;
          }
        }
        else
        {
          sub_21943B0(v2, v8);
        }
        goto LABEL_29;
      }
      if ( v80 || j__strlen("stdc++") )
      {
        if ( j__strlen("cc_kext") )
          goto LABEL_27;
LABEL_43:
        v20 = 3517;
      }
      else
      {
LABEL_94:
        v20 = 3518;
      }
      v21 = sub_2197640(v70, v20);
      v23 = sub_2195350(v2, v8, v21, v22);
      sub_21943B0(v2, v23);
      goto LABEL_29;
    }
    v24 = j__strlen("-MD");
    v25 = *(const char ***)(v8 + 48);
    v26 = *v25;
    if ( *v25 )
    {
      v71 = v24;
      v27 = j__strlen(*v25);
      v28 = v27;
      if ( v27 == v71 )
      {
        if ( !v27 || !memcmp(v26, "-MD", v27) )
          goto LABEL_51;
        if ( v28 != j__strlen("-MMD") )
          goto LABEL_21;
      }
      else
      {
        if ( v27 != j__strlen("-MMD") )
          goto LABEL_21;
        if ( !v28 )
        {
LABEL_51:
          v29 = j__strlen("-MD");
          if ( j__strlen(v26) != v29 || v29 && memcmp(v26, "-MD", v29) )
            goto LABEL_52;
          goto LABEL_92;
        }
      }
      if ( memcmp(v26, "-MMD", v28) )
        goto LABEL_21;
      goto LABEL_51;
    }
    if ( v24 && j__strlen("-MMD") )
      goto LABEL_21;
    if ( j__strlen("-MD") )
    {
LABEL_52:
      v30 = 2484;
      goto LABEL_53;
    }
LABEL_92:
    v30 = 2343;
LABEL_53:
    v31 = sub_2197640(v70, v30);
    v33 = sub_2195350(v2, v8, v31, v32);
    sub_21943B0(v2, v33);
    if ( *(_DWORD *)(v8 + 56) == 2 )
    {
      v34 = *(_QWORD *)(v8 + 48);
      v35 = 0;
      v36 = *(_QWORD *)(v34 + 8);
      if ( v36 )
        v35 = j__strlen(*(const char **)(v34 + 8));
      v37 = sub_2197640(v70, 2392);
      v39 = sub_21956F0(v2, v8, v37, v38, v36, v35);
      sub_21943B0(v2, v39);
    }
LABEL_29:
    if ( v69 == v9 )
      goto LABEL_37;
    if ( !*v9 )
      break;
LABEL_31:
    v6 = v9;
  }
  v10 = v68;
LABEL_33:
  v18 = v6 + 2;
  while ( 1 )
  {
    v9 = v18;
    if ( v69 == v18 )
      break;
    ++v18;
    if ( *v9 )
    {
      v68 = v10;
      goto LABEL_31;
    }
  }
LABEL_37:
  if ( *(_DWORD *)(a1 + 16) == 5 && !sub_10B8FF0(a2, 0x62Bu) )
  {
    v65 = sub_2197640(v70, 3320);
    v67 = sub_2195350(v2, 0, v65, v66);
    sub_21943B0(v2, v67);
  }
  if ( (unsigned __int8)sub_2193B10(a2, 2416, 2618, 0) )
  {
    v49 = sub_2197640(v70, 3299);
    v51 = sub_2195350(v2, 0, v49, v50);
    sub_21943B0(v2, v51);
  }
  return v2;
}

