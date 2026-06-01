__int64 __fastcall sub_E34380(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // r13
  __int64 (__fastcall *v5)(); // rax
  _QWORD *v6; // r14
  __int64 (__fastcall *v7)(); // rdx
  _QWORD *v8; // rbp
  __int64 (__fastcall *v9)(); // rax
  _QWORD *v10; // r8
  __int64 (__fastcall *v11)(); // rdx
  _QWORD **v12; // r9
  __int64 (__fastcall *v13)(); // rax
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // rdx
  unsigned int v20; // r10d
  __int64 v21; // rdi
  _QWORD *v22; // rcx
  __int64 v23; // rsi
  bool v24; // zf
  __int64 *v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  unsigned int v30; // r15d
  __int64 v31; // rdx
  unsigned int v32; // r9d
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  __int64 *v36; // r15
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rcx
  unsigned int v41; // r15d
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 *v44; // r8
  __int64 v45; // rsi
  unsigned __int64 v46; // r15
  __int64 *v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdx
  unsigned int v51; // ebp
  __int64 v52; // r15
  __int64 v53; // rdi
  __int64 *v54; // rcx
  __int64 v55; // rsi
  unsigned __int64 v56; // r14
  __int64 *v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // r15
  unsigned int v61; // ebp
  __int64 v62; // r14
  unsigned int v63; // ecx
  __int64 v64; // rdi
  __int64 *v65; // r15
  __int64 v66; // rsi
  unsigned __int64 v67; // r13
  __int64 *v68; // rbp
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned int v71; // ebp
  __int64 v72; // r14
  __int64 v73; // r13
  unsigned int v74; // r15d
  __int64 v75; // rdi
  __int64 *v76; // r14
  __int64 v77; // rsi
  unsigned __int64 v78; // r12
  __int64 *v79; // rbp
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // [rsp+8h] [rbp-60h]
  __int64 v83; // [rsp+8h] [rbp-60h]
  unsigned __int64 v84; // [rsp+8h] [rbp-60h]
  int v85; // [rsp+8h] [rbp-60h]
  int v86; // [rsp+8h] [rbp-60h]
  unsigned int v87; // [rsp+8h] [rbp-60h]
  unsigned int v88; // [rsp+8h] [rbp-60h]
  unsigned int v89; // [rsp+8h] [rbp-60h]
  __int64 v90; // [rsp+8h] [rbp-60h]
  __int64 v91; // [rsp+8h] [rbp-60h]
  __int64 v92; // [rsp+8h] [rbp-60h]
  __int64 v93; // [rsp+10h] [rbp-58h]
  unsigned __int64 v94; // [rsp+10h] [rbp-58h]
  int v95; // [rsp+10h] [rbp-58h]
  _QWORD *v96; // [rsp+10h] [rbp-58h]
  _QWORD *v97; // [rsp+10h] [rbp-58h]
  unsigned int v98; // [rsp+10h] [rbp-58h]
  __int64 v99; // [rsp+10h] [rbp-58h]
  int v100; // [rsp+18h] [rbp-50h]
  __int64 v101; // [rsp+18h] [rbp-50h]
  _QWORD *v102; // [rsp+18h] [rbp-50h]
  unsigned int v103; // [rsp+18h] [rbp-50h]
  __int64 v104; // [rsp+20h] [rbp-48h]
  _QWORD *v105; // [rsp+20h] [rbp-48h]
  __int64 v106; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 160);
  v5 = *(__int64 (__fastcall **)())(*v4 + 24LL);
  if ( v5 != sub_E34380 )
  {
    ((void (__fastcall *)(_QWORD))v5)(*(_QWORD *)(a1 + 160));
    result = a2[1];
    if ( !result )
      return result;
    goto LABEL_87;
  }
  v6 = (_QWORD *)v4[20];
  v7 = *(__int64 (__fastcall **)())(*v6 + 24LL);
  if ( v7 == v5 )
  {
    v8 = (_QWORD *)v6[20];
    v9 = *(__int64 (__fastcall **)())(*v8 + 24LL);
    if ( v9 == v7 )
    {
      v10 = (_QWORD *)v8[20];
      v11 = *(__int64 (__fastcall **)())(*v10 + 24LL);
      if ( v11 == v9 )
      {
        v12 = (_QWORD **)v10[20];
        v13 = (__int64 (__fastcall *)())(*v12)[3];
        if ( v13 == v11 )
        {
          v93 = v8[20];
          v82 = v10[20];
          (*(void (__fastcall **)(_QWORD *))(*v12[20] + 24LL))(v12[20]);
          result = a2[1];
          if ( !result )
            return result;
          v15 = v82;
          v16 = v93;
          v17 = 0;
          v18 = 0;
LABEL_8:
          while ( v18 < *(_DWORD *)(result - 4) )
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(result + 8LL * v18);
              if ( *(_QWORD *)(v15 + 128) == v19 )
              {
                ++v18;
                goto LABEL_8;
              }
              v20 = v17 + 1;
              v21 = *a2;
              v22 = (_QWORD *)(result + 8 * v17);
              if ( v19 )
                ++*(_DWORD *)(v19 + 8);
              v23 = *v22;
              if ( *v22 )
              {
                v24 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v24 )
                  break;
              }
              *v22 = v19;
              ++v18;
              v17 = v20;
              if ( v18 >= *(_DWORD *)(result - 4) )
                goto LABEL_15;
            }
            v106 = v19;
            v105 = v22;
            v103 = v20;
            v99 = v15;
            v91 = v16;
            sub_15D7BC0(v21, v23);
            result = a2[1];
            v16 = v91;
            v15 = v99;
            *v105 = v106;
            if ( !result )
              return result;
            ++v18;
            v17 = v103;
          }
LABEL_15:
          v25 = (__int64 *)(result + 8LL * (unsigned int)v17);
          v26 = result + 8LL * *(unsigned int *)(result - 4);
          if ( (unsigned __int64)v25 < v26 )
          {
            do
            {
              while ( 1 )
              {
                v27 = *v25;
                if ( *v25 )
                {
                  v28 = *a2;
                  v24 = (*(_DWORD *)(v27 + 8))-- == 1;
                  if ( v24 )
                    break;
                }
                if ( (unsigned __int64)++v25 >= v26 )
                  goto LABEL_21;
              }
              v100 = v17;
              ++v25;
              v94 = v26;
              v83 = v16;
              sub_15D7BC0(v28, v27);
              v26 = v94;
              LODWORD(v17) = v100;
              v16 = v83;
            }
            while ( (unsigned __int64)v25 < v94 );
LABEL_21:
            result = a2[1];
            if ( !result )
              return result;
          }
          *(_DWORD *)(result - 4) = v17;
        }
        else
        {
          v92 = v8[20];
          ((void (__fastcall *)(_QWORD **))v13)(v12);
          result = a2[1];
          v16 = v92;
          if ( !result )
            return result;
        }
        v29 = 0;
        v30 = 0;
LABEL_24:
        while ( v30 < *(_DWORD *)(result - 4) )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(result + 8LL * v30);
            if ( *(_QWORD *)(v16 + 128) == v31 )
            {
              ++v30;
              goto LABEL_24;
            }
            v32 = v29 + 1;
            v33 = *a2;
            v34 = (_QWORD *)(result + 8 * v29);
            if ( v31 )
              ++*(_DWORD *)(v31 + 8);
            v35 = *v34;
            if ( *v34 )
            {
              v24 = (*(_DWORD *)(v35 + 8))-- == 1;
              if ( v24 )
                break;
            }
            *v34 = v31;
            ++v30;
            v29 = v32;
            if ( v30 >= *(_DWORD *)(result - 4) )
              goto LABEL_31;
          }
          v104 = v31;
          v102 = v34;
          v98 = v32;
          v90 = v16;
          sub_15D7BC0(v33, v35);
          result = a2[1];
          v16 = v90;
          *v102 = v104;
          if ( !result )
            return result;
          ++v30;
          v29 = v98;
        }
LABEL_31:
        v36 = (__int64 *)(result + 8LL * (unsigned int)v29);
        v37 = result + 8LL * *(unsigned int *)(result - 4);
        if ( (unsigned __int64)v36 < v37 )
        {
          do
          {
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 )
              {
                v39 = *a2;
                v24 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v24 )
                  break;
              }
              if ( (unsigned __int64)++v36 >= v37 )
                goto LABEL_37;
            }
            v95 = v29;
            ++v36;
            v84 = v37;
            sub_15D7BC0(v39, v38);
            v37 = v84;
            LODWORD(v29) = v95;
          }
          while ( (unsigned __int64)v36 < v84 );
LABEL_37:
          result = a2[1];
          if ( !result )
            return result;
        }
        *(_DWORD *)(result - 4) = v29;
      }
      else
      {
        ((void (__fastcall *)(_QWORD))v11)(v8[20]);
        result = a2[1];
        if ( !result )
          return result;
      }
      v40 = 0;
      v41 = 0;
LABEL_40:
      while ( v41 < *(_DWORD *)(result - 4) )
      {
        while ( 1 )
        {
          v42 = *(_QWORD *)(result + 8LL * v41);
          if ( v42 == v8[16] )
          {
            ++v41;
            goto LABEL_40;
          }
          v43 = *a2;
          v44 = (__int64 *)(result + 8 * v40);
          if ( v42 )
            ++*(_DWORD *)(v42 + 8);
          v45 = *v44;
          if ( *v44 )
          {
            v24 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v24 )
              break;
          }
          *v44 = v42;
          ++v41;
          v40 = (unsigned int)(v40 + 1);
          if ( v41 >= *(_DWORD *)(result - 4) )
            goto LABEL_47;
        }
        v101 = v42;
        v97 = (_QWORD *)(result + 8 * v40);
        v89 = v40 + 1;
        sub_15D7BC0(v43, v45);
        result = a2[1];
        *v97 = v101;
        if ( !result )
          return result;
        ++v41;
        v40 = v89;
      }
LABEL_47:
      v46 = result + 8LL * *(unsigned int *)(result - 4);
      v47 = (__int64 *)(result + 8LL * (unsigned int)v40);
      if ( (unsigned __int64)v47 < v46 )
      {
        do
        {
          while ( 1 )
          {
            v48 = *v47;
            if ( *v47 )
            {
              v49 = *a2;
              v24 = (*(_DWORD *)(v48 + 8))-- == 1;
              if ( v24 )
                break;
            }
            if ( (unsigned __int64)++v47 >= v46 )
              goto LABEL_53;
          }
          ++v47;
          v85 = v40;
          sub_15D7BC0(v49, v48);
          LODWORD(v40) = v85;
        }
        while ( (unsigned __int64)v47 < v46 );
LABEL_53:
        result = a2[1];
        if ( !result )
          return result;
      }
      *(_DWORD *)(result - 4) = v40;
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v9)(v6[20]);
      result = a2[1];
      if ( !result )
        return result;
    }
    v50 = 0;
    v51 = 0;
LABEL_56:
    while ( v51 < *(_DWORD *)(result - 4) )
    {
      while ( 1 )
      {
        v52 = *(_QWORD *)(result + 8LL * v51);
        if ( v52 == v6[16] )
        {
          ++v51;
          goto LABEL_56;
        }
        v53 = *a2;
        v54 = (__int64 *)(result + 8 * v50);
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        v55 = *v54;
        if ( *v54 )
        {
          v24 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v24 )
            break;
        }
        *v54 = v52;
        ++v51;
        v50 = (unsigned int)(v50 + 1);
        if ( v51 >= *(_DWORD *)(result - 4) )
          goto LABEL_63;
      }
      v96 = (_QWORD *)(result + 8 * v50);
      v88 = v50 + 1;
      sub_15D7BC0(v53, v55);
      result = a2[1];
      *v96 = v52;
      if ( !result )
        return result;
      ++v51;
      v50 = v88;
    }
LABEL_63:
    v56 = result + 8LL * *(unsigned int *)(result - 4);
    v57 = (__int64 *)(result + 8LL * (unsigned int)v50);
    if ( (unsigned __int64)v57 < v56 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v57;
          if ( *v57 )
          {
            v59 = *a2;
            v24 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v57 >= v56 )
            goto LABEL_69;
        }
        ++v57;
        v86 = v50;
        sub_15D7BC0(v59, v58);
        LODWORD(v50) = v86;
      }
      while ( (unsigned __int64)v57 < v56 );
LABEL_69:
      result = a2[1];
      if ( !result )
        return result;
    }
    *(_DWORD *)(result - 4) = v50;
  }
  else
  {
    ((void (__fastcall *)(_QWORD))v7)(v4[20]);
    result = a2[1];
    if ( !result )
      return result;
  }
  v60 = 0;
  v61 = 0;
LABEL_72:
  while ( v61 < *(_DWORD *)(result - 4) )
  {
    while ( 1 )
    {
      v62 = *(_QWORD *)(result + 8LL * v61);
      if ( v4[16] == v62 )
      {
        ++v61;
        goto LABEL_72;
      }
      v63 = v60 + 1;
      v64 = *a2;
      v65 = (__int64 *)(result + 8 * v60);
      if ( v62 )
        ++*(_DWORD *)(v62 + 8);
      v66 = *v65;
      if ( *v65 )
      {
        v24 = (*(_DWORD *)(v66 + 8))-- == 1;
        if ( v24 )
          break;
      }
      *v65 = v62;
      ++v61;
      v60 = v63;
      if ( v61 >= *(_DWORD *)(result - 4) )
        goto LABEL_79;
    }
    v87 = v63;
    sub_15D7BC0(v64, v66);
    result = a2[1];
    *v65 = v62;
    if ( !result )
      return result;
    ++v61;
    v60 = v87;
  }
LABEL_79:
  v67 = result + 8LL * *(unsigned int *)(result - 4);
  v68 = (__int64 *)(result + 8LL * (unsigned int)v60);
  if ( (unsigned __int64)v68 >= v67 )
    goto LABEL_86;
  do
  {
    while ( 1 )
    {
      v69 = *v68;
      if ( *v68 )
      {
        v70 = *a2;
        v24 = (*(_DWORD *)(v69 + 8))-- == 1;
        if ( v24 )
          break;
      }
      if ( (unsigned __int64)++v68 >= v67 )
        goto LABEL_85;
    }
    sub_15D7BC0(v70, v69);
    ++v68;
  }
  while ( (unsigned __int64)v68 < v67 );
LABEL_85:
  result = a2[1];
  if ( result )
  {
LABEL_86:
    *(_DWORD *)(result - 4) = v60;
LABEL_87:
    v71 = 0;
    v72 = 0;
    while ( v71 < *(_DWORD *)(result - 4) )
    {
      v73 = *(_QWORD *)(result + 8LL * v71);
      if ( v73 != *(_QWORD *)(a1 + 128) )
      {
        v74 = v72 + 1;
        v75 = *a2;
        v76 = (__int64 *)(result + 8 * v72);
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        v77 = *v76;
        if ( *v76 )
        {
          v24 = (*(_DWORD *)(v77 + 8))-- == 1;
          if ( v24 )
          {
            sub_15D7BC0(v75, v77);
            result = a2[1];
          }
        }
        *v76 = v73;
        v72 = v74;
      }
      ++v71;
      if ( !result )
        return result;
    }
    v78 = result + 8LL * *(unsigned int *)(result - 4);
    v79 = (__int64 *)(result + 8LL * (unsigned int)v72);
    if ( (unsigned __int64)v79 < v78 )
    {
      do
      {
        while ( 1 )
        {
          v80 = *v79;
          if ( *v79 )
          {
            v81 = *a2;
            v24 = (*(_DWORD *)(v80 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v79 >= v78 )
            goto LABEL_109;
        }
        sub_15D7BC0(v81, v80);
        ++v79;
      }
      while ( (unsigned __int64)v79 < v78 );
LABEL_109:
      result = a2[1];
    }
    if ( result )
      *(_DWORD *)(result - 4) = v72;
  }
  return result;
}

