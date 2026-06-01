__int64 __fastcall sub_E51A50(_QWORD *a1, unsigned int a2)
{
  _QWORD *v4; // r12
  __int64 (__fastcall *v5)(); // rax
  _QWORD *v6; // r13
  __int64 (__fastcall *v7)(); // rdx
  _QWORD *v8; // r14
  __int64 (__fastcall *v9)(); // rax
  _QWORD **v10; // rcx
  _QWORD **v11; // r15
  __int64 (__fastcall *v12)(); // rdx
  void (__fastcall ***v13)(void *); // r15
  bool v14; // zf
  __int64 *v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // r15d
  void (__fastcall ***v27)(void *); // r15
  __int64 result; // rax
  __int64 *v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rdi
  _QWORD *v39; // r14
  int v40; // r15d
  void (__fastcall ***v41)(void *); // r14
  __int64 *v42; // r14
  __int64 *v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // r14
  __int64 v51; // rdi
  __int64 v52; // r15
  __int64 v53; // rdi
  _QWORD *v54; // r13
  int v55; // r14d
  _DWORD *v56; // r13
  __int64 *v57; // r13
  __int64 *v58; // r14
  __int64 v59; // rdi
  __int64 v60; // rcx
  int v61; // r14d
  unsigned int v62; // r14d
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r13
  __int64 v66; // rdi
  __int64 v67; // r15
  __int64 v68; // rdi
  _QWORD *v69; // r12
  int v70; // r13d
  _DWORD *v71; // r12
  __int64 *v72; // r12
  __int64 *i; // r13
  __int64 v74; // rdi
  __int64 v75; // rdx
  int v76; // r14d
  unsigned int v77; // r14d
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 v80; // rcx
  __int64 v81; // r13
  __int64 v82; // rsi
  __int64 v83; // r12
  __int64 v84; // rdi
  _QWORD *v85; // rbp
  int v86; // r12d
  __int64 *v87; // [rsp+8h] [rbp-50h]
  __int64 v88; // [rsp+8h] [rbp-50h]
  __int64 *v89; // [rsp+8h] [rbp-50h]
  __int64 v90; // [rsp+8h] [rbp-50h]
  int v91; // [rsp+8h] [rbp-50h]
  unsigned int v92; // [rsp+8h] [rbp-50h]
  _QWORD *v93; // [rsp+10h] [rbp-48h]
  int v94; // [rsp+10h] [rbp-48h]
  unsigned int v95; // [rsp+10h] [rbp-48h]
  int v96; // [rsp+18h] [rbp-40h]
  unsigned int v97; // [rsp+18h] [rbp-40h]
  unsigned int v98; // [rsp+1Ch] [rbp-3Ch]

  v4 = (_QWORD *)a1[13];
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 == sub_E51A50 )
  {
    v6 = (_QWORD *)v4[13];
    v7 = *(__int64 (__fastcall **)())(*v6 + 200LL);
    if ( v7 != v5 )
    {
      result = ((__int64 (__fastcall *)(_QWORD))v7)(v4[13]);
      v56 = (_DWORD *)v4[78];
      if ( !v56 || (v14 = v56[4] == 1, --v56[4], !v14) )
      {
LABEL_63:
        v57 = (__int64 *)v4[54];
        v4[78] = 0;
        if ( !v57 || (result = *((unsigned int *)v57 - 1), v58 = &v57[result], v57 == v58) )
        {
LABEL_66:
          if ( a2 )
          {
LABEL_67:
            v60 = v4[29];
            if ( v60 )
              v61 = *(_DWORD *)(v60 - 4);
            else
              v61 = 0;
            v62 = v61 - a2;
            v63 = v4[28];
            v92 = *(_DWORD *)(v60 + 4LL * v62);
            v64 = 8LL * v92;
            v65 = v63 + v64;
            if ( v63 )
            {
              v66 = 8LL * *(unsigned int *)(v63 - 4);
              v67 = v63 + v66;
              if ( v66 == v64 )
              {
LABEL_73:
                *(_DWORD *)(v63 - 4) = v92;
                goto LABEL_74;
              }
            }
            else
            {
              v67 = 0;
              if ( !v64 )
                goto LABEL_74;
            }
            do
            {
              v68 = *(_QWORD *)(v67 - 8);
              v67 -= 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
            }
            while ( v65 != v67 );
            v63 = v4[28];
            v60 = v4[29];
            if ( v63 )
              goto LABEL_73;
LABEL_74:
            if ( v60 )
              *(_DWORD *)(v60 - 4) = v62;
            v69 = v4 + 30;
            v70 = 0;
            do
            {
              ++v70;
              result = sub_180C2E0(v69);
            }
            while ( a2 != v70 );
            v71 = (_DWORD *)a1[78];
            if ( !v71 )
            {
              v72 = (__int64 *)a1[54];
              a1[78] = 0;
              if ( !v72 )
                goto LABEL_84;
              i = &v72[*((unsigned int *)v72 - 1)];
              if ( i == v72 )
                goto LABEL_84;
              goto LABEL_82;
            }
            goto LABEL_79;
          }
LABEL_104:
          v71 = (_DWORD *)a1[78];
          if ( !v71 )
          {
            v72 = (__int64 *)a1[54];
            a1[78] = 0;
            if ( !v72 )
              return result;
            result = *((unsigned int *)v72 - 1);
            i = &v72[result];
            if ( v72 == i )
              return result;
            goto LABEL_82;
          }
LABEL_79:
          v14 = v71[4]-- == 1;
          if ( !v14 )
            goto LABEL_80;
LABEL_110:
          (**(void (__fastcall ***)(_DWORD *))v71)(v71);
          result = sub_186B220(v71);
          goto LABEL_80;
        }
        do
        {
LABEL_65:
          v59 = *v57++;
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v59 + 32LL))(v59, a2);
        }
        while ( v58 != v57 );
        goto LABEL_66;
      }
LABEL_118:
      (**(void (__fastcall ***)(_DWORD *))v56)(v56);
      result = sub_186B220(v56);
      goto LABEL_63;
    }
    v8 = (_QWORD *)v6[13];
    v9 = *(__int64 (__fastcall **)())(*v8 + 200LL);
    if ( v9 != v7 )
    {
      result = ((__int64 (__fastcall *)(_QWORD))v9)(v6[13]);
      v41 = (void (__fastcall ***)(void *))v6[78];
      if ( !v41 )
        goto LABEL_46;
      goto LABEL_44;
    }
    v10 = (_QWORD **)v8[13];
    v93 = v10;
    v11 = v10;
    v12 = (__int64 (__fastcall *)())(*v10)[25];
    if ( v12 != v9 )
    {
      ((void (__fastcall *)(_QWORD **))v12)(v10);
      v27 = (void (__fastcall ***)(void *))v8[78];
      if ( !v27 )
        goto LABEL_27;
      goto LABEL_25;
    }
    (*(void (__fastcall **)(_QWORD *))(*v10[13] + 200LL))(v10[13]);
    v13 = (void (__fastcall ***)(void *))v11[78];
    if ( v13 )
    {
      v14 = (*((_DWORD *)v13 + 4))-- == 1;
      if ( v14 )
      {
        (**v13)(v13);
        sub_186B220(v13);
      }
    }
    v93[78] = 0;
    v15 = (__int64 *)v93[54];
    if ( v15 )
    {
      v87 = &v15[*((unsigned int *)v15 - 1)];
      if ( v15 != v87 )
      {
        v16 = (__int64 *)v93[54];
        do
        {
          v17 = *v16++;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, a2);
        }
        while ( v87 != v16 );
      }
    }
    if ( !a2 )
    {
      v27 = (void (__fastcall ***)(void *))v8[78];
      if ( !v27 )
      {
        result = v8[54];
        v8[78] = 0;
        if ( !result )
        {
          v41 = (void (__fastcall ***)(void *))v6[78];
          if ( !v41 )
          {
            v42 = (__int64 *)v6[54];
            v6[78] = 0;
            if ( !v42 )
              goto LABEL_101;
            goto LABEL_47;
          }
          goto LABEL_44;
        }
        v89 = (__int64 *)(result + 8LL * *(unsigned int *)(result - 4));
        if ( (__int64 *)result == v89 )
          goto LABEL_99;
        goto LABEL_29;
      }
LABEL_25:
      v14 = (*((_DWORD *)v27 + 4))-- == 1;
      if ( v14 )
      {
        (**v27)(v27);
        sub_186B220(v27);
      }
LABEL_27:
      result = v8[54];
      v8[78] = 0;
      if ( !result || (v89 = (__int64 *)(result + 8LL * *(unsigned int *)(result - 4)), (__int64 *)result == v89) )
      {
LABEL_31:
        if ( a2 )
        {
LABEL_32:
          v31 = v8[29];
          if ( v31 )
            v32 = *(_DWORD *)(v31 - 4);
          else
            v32 = 0;
          v33 = v32 - a2;
          v34 = v8[28];
          v94 = v33;
          v97 = *(_DWORD *)(v31 + 4 * v33);
          v35 = 8LL * v97;
          v90 = v34 + v35;
          if ( v34 )
          {
            v36 = 8LL * *(unsigned int *)(v34 - 4);
            v37 = v34 + v36;
            if ( v35 == v36 )
            {
LABEL_38:
              *(_DWORD *)(v34 - 4) = v97;
LABEL_39:
              if ( v31 )
                *(_DWORD *)(v31 - 4) = v94;
              v39 = v8 + 30;
              v40 = 0;
              do
              {
                ++v40;
                result = sub_180C2E0(v39);
              }
              while ( a2 != v40 );
              v41 = (void (__fastcall ***)(void *))v6[78];
              if ( v41 )
                goto LABEL_44;
              v42 = (__int64 *)v6[54];
              v6[78] = 0;
              if ( !v42 )
                goto LABEL_50;
              v43 = &v42[*((unsigned int *)v42 - 1)];
              if ( v43 == v42 )
                goto LABEL_50;
              goto LABEL_48;
            }
          }
          else
          {
            v37 = 0;
            if ( !v35 )
              goto LABEL_39;
          }
          do
          {
            v38 = *(_QWORD *)(v37 - 8);
            v37 -= 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          }
          while ( v90 != v37 );
          v34 = v8[28];
          v31 = v8[29];
          if ( !v34 )
            goto LABEL_39;
          goto LABEL_38;
        }
LABEL_99:
        v41 = (void (__fastcall ***)(void *))v6[78];
        if ( v41 )
        {
LABEL_44:
          v14 = (*((_DWORD *)v41 + 4))-- == 1;
          if ( v14 )
          {
            (**v41)(v41);
            result = sub_186B220(v41);
          }
LABEL_46:
          v42 = (__int64 *)v6[54];
          v6[78] = 0;
          if ( !v42 )
            goto LABEL_49;
LABEL_47:
          result = *((unsigned int *)v42 - 1);
          v43 = &v42[result];
          if ( v43 == v42 )
            goto LABEL_49;
          goto LABEL_48;
        }
        v42 = (__int64 *)v6[54];
        v6[78] = 0;
        if ( !v42 )
          goto LABEL_101;
        result = *((unsigned int *)v42 - 1);
        v43 = &v42[result];
        if ( v43 == v42 )
          goto LABEL_101;
        do
        {
LABEL_48:
          v44 = *v42++;
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 32LL))(v44, a2);
        }
        while ( v43 != v42 );
LABEL_49:
        if ( a2 )
        {
LABEL_50:
          v45 = v6[29];
          if ( v45 )
            v46 = *(_DWORD *)(v45 - 4);
          else
            v46 = 0;
          v47 = v46 - a2;
          v48 = v6[28];
          v91 = v47;
          v95 = *(_DWORD *)(v45 + 4 * v47);
          v49 = 8LL * v95;
          v50 = v48 + v49;
          if ( v48 )
          {
            v51 = 8LL * *(unsigned int *)(v48 - 4);
            v52 = v48 + v51;
            if ( v51 == v49 )
            {
LABEL_56:
              *(_DWORD *)(v48 - 4) = v95;
              goto LABEL_57;
            }
          }
          else
          {
            v52 = 0;
            if ( !v49 )
              goto LABEL_57;
          }
          do
          {
            v53 = *(_QWORD *)(v52 - 8);
            v52 -= 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
          }
          while ( v50 != v52 );
          v48 = v6[28];
          v45 = v6[29];
          if ( v48 )
            goto LABEL_56;
LABEL_57:
          if ( v45 )
            *(_DWORD *)(v45 - 4) = v91;
          v54 = v6 + 30;
          v55 = 0;
          do
          {
            ++v55;
            result = sub_180C2E0(v54);
          }
          while ( a2 != v55 );
          v56 = (_DWORD *)v4[78];
          if ( !v56 )
          {
            v57 = (__int64 *)v4[54];
            v4[78] = 0;
            if ( !v57 )
              goto LABEL_67;
            v58 = &v57[*((unsigned int *)v57 - 1)];
            if ( v58 == v57 )
              goto LABEL_67;
            goto LABEL_65;
          }
LABEL_62:
          v14 = v56[4]-- == 1;
          if ( !v14 )
            goto LABEL_63;
          goto LABEL_118;
        }
LABEL_101:
        v56 = (_DWORD *)v4[78];
        if ( !v56 )
        {
          v57 = (__int64 *)v4[54];
          v4[78] = 0;
          if ( !v57 )
            goto LABEL_104;
          result = *((unsigned int *)v57 - 1);
          v58 = &v57[result];
          if ( v57 == v58 )
            goto LABEL_104;
          goto LABEL_65;
        }
        goto LABEL_62;
      }
LABEL_29:
      v29 = (__int64 *)result;
      do
      {
        v30 = *v29++;
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 32LL))(v30, a2);
      }
      while ( v89 != v29 );
      goto LABEL_31;
    }
    v18 = v93[29];
    if ( v18 )
      v19 = *(_DWORD *)(v18 - 4);
    else
      v19 = 0;
    v20 = v19 - a2;
    v96 = v20;
    v21 = v93[28];
    v98 = *(_DWORD *)(v18 + 4 * v20);
    v22 = 8LL * v98;
    v23 = v21 + v22;
    if ( v21 )
    {
      v24 = 8LL * *(unsigned int *)(v21 - 4);
      v25 = v21 + v24;
      if ( v22 == v24 )
      {
LABEL_19:
        *(_DWORD *)(v21 - 4) = v98;
        goto LABEL_20;
      }
    }
    else
    {
      v25 = 0;
      if ( !v22 )
        goto LABEL_20;
    }
    do
    {
      v88 = v25 - 8;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v25 - 8) + 16LL))(*(_QWORD *)(v25 - 8));
      v25 = v88;
    }
    while ( v23 != v88 );
    v21 = v93[28];
    v18 = v93[29];
    if ( v21 )
      goto LABEL_19;
LABEL_20:
    if ( v18 )
      *(_DWORD *)(v18 - 4) = v96;
    v26 = 0;
    do
    {
      ++v26;
      sub_180C2E0(v93 + 30);
    }
    while ( a2 != v26 );
    v27 = (void (__fastcall ***)(void *))v8[78];
    if ( !v27 )
    {
      result = v8[54];
      v8[78] = 0;
      if ( !result )
        goto LABEL_32;
      v89 = (__int64 *)(result + 8LL * *(unsigned int *)(result - 4));
      if ( v89 == (__int64 *)result )
        goto LABEL_32;
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  result = ((__int64 (__fastcall *)(_QWORD))v5)(a1[13]);
  v71 = (_DWORD *)a1[78];
  if ( v71 )
  {
    v14 = v71[4]-- == 1;
    if ( v14 )
      goto LABEL_110;
  }
LABEL_80:
  v72 = (__int64 *)a1[54];
  a1[78] = 0;
  if ( v72 )
  {
    result = *((unsigned int *)v72 - 1);
    for ( i = &v72[result]; i != v72; result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v74 + 32LL))(
                                                 v74,
                                                 a2) )
LABEL_82:
      v74 = *v72++;
  }
  if ( !a2 )
    return result;
LABEL_84:
  v75 = a1[29];
  if ( v75 )
    v76 = *(_DWORD *)(v75 - 4);
  else
    v76 = 0;
  v77 = v76 - a2;
  v78 = a1[28];
  v79 = *(unsigned int *)(v75 + 4LL * v77);
  v80 = 8 * v79;
  v81 = v78 + 8 * v79;
  if ( v78 )
  {
    v82 = 8LL * *(unsigned int *)(v78 - 4);
    v83 = v78 + v82;
    if ( v82 == v80 )
    {
LABEL_90:
      *(_DWORD *)(v78 - 4) = v79;
      goto LABEL_91;
    }
  }
  else
  {
    v83 = 0;
    if ( !v80 )
      goto LABEL_91;
  }
  do
  {
    v84 = *(_QWORD *)(v83 - 8);
    v83 -= 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
  }
  while ( v81 != v83 );
  v78 = a1[28];
  v75 = a1[29];
  if ( v78 )
    goto LABEL_90;
LABEL_91:
  if ( v75 )
    *(_DWORD *)(v75 - 4) = v77;
  v85 = a1 + 30;
  v86 = 0;
  do
  {
    ++v86;
    result = sub_180C2E0(v85);
  }
  while ( a2 != v86 );
  return result;
}

