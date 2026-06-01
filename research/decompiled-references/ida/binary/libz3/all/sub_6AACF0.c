__int64 __fastcall sub_6AACF0(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 *v5; // rbp
  __int64 v6; // rbx
  unsigned int v7; // r9d
  int v8; // r12d
  size_t v9; // r13
  __int64 *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 *v21; // rbx
  __int64 v22; // r11
  __int64 v23; // r15
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // r10
  __int64 *v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // r10
  __int64 v34; // rsi
  __int64 v35; // rdi
  bool v36; // zf
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 *v45; // rax
  int v46; // r9d
  __int64 *v47; // r14
  __int64 *v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rsi
  __int64 *v52; // rdx
  __int64 v53; // rsi
  __int64 *i; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 *v58; // rdx
  char *v59; // r14
  unsigned int v60; // r8d
  __int64 *j; // r15
  __int64 v62; // rax
  char *v63; // rdx
  char *v64; // rax
  unsigned int v65; // [rsp+8h] [rbp-70h]
  __int64 *v66; // [rsp+8h] [rbp-70h]
  unsigned int v67; // [rsp+14h] [rbp-64h]
  __int64 v69; // [rsp+20h] [rbp-58h]
  unsigned int v70; // [rsp+28h] [rbp-50h]
  int v71; // [rsp+28h] [rbp-50h]
  unsigned int v72; // [rsp+28h] [rbp-50h]
  unsigned int v73; // [rsp+28h] [rbp-50h]
  unsigned int v74; // [rsp+28h] [rbp-50h]
  unsigned int v75; // [rsp+28h] [rbp-50h]
  unsigned int v76; // [rsp+28h] [rbp-50h]
  __int64 v77; // [rsp+30h] [rbp-48h]
  __int64 v78; // [rsp+30h] [rbp-48h]

  v4 = a2;
  v5 = (__int64 *)sub_186B270(0x40u);
  *(_OWORD *)v5 = 0;
  *((_OWORD *)v5 + 1) = 0;
  *((_OWORD *)v5 + 2) = 0;
  *((_OWORD *)v5 + 3) = 0;
  if ( a2 )
  {
    v67 = 0;
    v4 = 0;
    v69 = a3 + 8LL * a2;
    v65 = 8;
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
      v7 = 2 * v65;
      if ( 3 * v65 >= 4 * (v4 + v67) )
      {
        v8 = v65 - 1;
        v9 = 8LL * v65;
        v10 = &v5[v9 / 8];
        goto LABEL_5;
      }
      v44 = v7;
      v9 = 8LL * v7;
      v45 = (__int64 *)sub_186B270(v9);
      v46 = 2 * v65;
      v47 = v45;
      if ( 2 * v65 )
        break;
      v10 = v45;
      v8 = -1;
      v48 = &v5[v65];
      if ( v5 != v48 )
        goto LABEL_60;
LABEL_68:
      if ( v5 )
      {
        v71 = v46;
        v66 = v10;
        sub_186B220(v5);
        v46 = v71;
        v10 = v66;
      }
      v5 = v47;
      v65 = v46;
      v4 = 0;
LABEL_5:
      v11 = *(_DWORD *)(v6 + 12);
      v12 = 8LL * (v8 & v11);
      v13 = &v5[(unsigned __int64)v12 / 8];
      if ( v12 == v9 )
      {
        v15 = nullptr;
LABEL_13:
        if ( v5 != v13 )
        {
          v14 = v5;
          do
          {
            while ( 1 )
            {
              v17 = *v14;
              if ( (unsigned __int64)*v14 <= 1 )
                break;
              if ( *(_DWORD *)(v17 + 12) == v11 && v6 == v17 )
                goto LABEL_101;
              if ( v13 == ++v14 )
                goto LABEL_21;
            }
            if ( !v17 )
              goto LABEL_53;
            v15 = v14++;
          }
          while ( v13 != v14 );
        }
LABEL_21:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v14 = &v5[(unsigned __int64)v12 / 8];
      v15 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( (unsigned __int64)*v14 <= 1 )
            break;
          if ( *(_DWORD *)(v16 + 12) == v11 && v6 == v16 )
          {
LABEL_101:
            *v14 = v6;
            goto LABEL_56;
          }
          if ( ++v14 == v10 )
            goto LABEL_13;
        }
        if ( !v16 )
          break;
        v15 = v14++;
        if ( v14 == v10 )
          goto LABEL_13;
      }
LABEL_53:
      if ( v15 )
        --v4;
      else
        v15 = v14;
      *v15 = v6;
      ++v67;
LABEL_56:
      a3 += 8;
      if ( a3 == v69 )
      {
        result = (__int64)a1;
        v19 = a1[3];
        if ( !v19 )
          goto LABEL_50;
        goto LABEL_23;
      }
    }
    memset(v45, 0, 8 * v44);
    v46 = 2 * v65;
    v10 = &v47[v9 / 8];
    v8 = 2 * v65 - 1;
    v48 = &v5[v65];
LABEL_60:
    v49 = v5;
    do
    {
      while ( (unsigned __int64)*v49 <= 1 )
      {
        if ( ++v49 == v48 )
          goto LABEL_68;
      }
      v50 = 8LL * (*(_DWORD *)(*v49 + 12) & (unsigned int)v8);
      v51 = &v47[(unsigned __int64)v50 / 8];
      if ( v9 == v50 )
      {
LABEL_71:
        if ( v47 == v51 )
        {
LABEL_100:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v52 = v47;
        while ( *v52 )
        {
          if ( v51 == ++v52 )
            goto LABEL_100;
        }
      }
      else
      {
        v52 = &v47[(unsigned __int64)v50 / 8];
        while ( *v52 )
        {
          if ( ++v52 == v10 )
            goto LABEL_71;
        }
      }
      v53 = *v49++;
      *v52 = v53;
    }
    while ( v49 != v48 );
    goto LABEL_68;
  }
  v19 = a1[3];
  if ( !v19 )
    return sub_186B220(v5);
  v67 = 0;
  v8 = 7;
  v9 = 64;
  v65 = 8;
LABEL_23:
  v20 = 0;
  result = (__int64)(a1 + 2);
  do
  {
    if ( v20 >= *(_DWORD *)(v19 - 4) )
      break;
    v21 = &v5[v9 / 8];
    v22 = a1[1];
    v23 = 8LL * v20;
    v24 = *(_QWORD *)(v22 + v23);
    v25 = *(_DWORD *)(v24 + 12);
    v26 = 8LL * (v8 & v25);
    v27 = &v5[(unsigned __int64)v26 / 8];
    if ( v26 == v9 )
    {
LABEL_76:
      if ( v5 != v27 )
      {
        for ( i = v5; v27 != i; ++i )
        {
          v55 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v55 + 12) == v25 && v24 == v55 )
            {
              result = (__int64)&v5[(unsigned __int64)v26 / 8];
              if ( v26 != v9 )
                goto LABEL_89;
LABEL_92:
              result = (__int64)v5;
              if ( v5 != v27 )
              {
                do
                {
                  v57 = *(_QWORD *)result;
                  if ( *(_QWORD *)result > 1u )
                  {
                    if ( *(_DWORD *)(v57 + 12) == v25 && v24 == v57 )
                      goto LABEL_103;
                  }
                  else if ( !v57 )
                  {
                    ++v20;
                    goto LABEL_49;
                  }
                  result += 8;
                }
                while ( v27 != (__int64 *)result );
              }
LABEL_91:
              ++v20;
              goto LABEL_49;
            }
          }
          else if ( !v55 )
          {
            break;
          }
        }
      }
LABEL_32:
      v30 = v20 + 1;
      do
      {
        if ( v30 >= *(_DWORD *)(v19 - 4) )
          break;
        v31 = v30;
        v32 = *(_QWORD *)(v22 + 8LL * v30);
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v33 = (_QWORD *)(v22 + v23);
        v34 = *(_QWORD *)(v22 + v23);
        if ( v34 )
        {
          v35 = *a1;
          v36 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v36 )
          {
            v78 = v32;
            v73 = v20;
            sub_15D7BC0(v35, v34);
            v31 = v30;
            v20 = v73;
            v22 = a1[1];
            v19 = a1[3];
            v32 = v78;
            v33 = (_QWORD *)(v22 + v23);
          }
        }
        *v33 = v32;
        v37 = *(_QWORD *)(v19 + 8 * v31);
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v38 = (_QWORD *)(v19 + v23);
        v39 = *(_QWORD *)(v19 + v23);
        if ( v39 )
        {
          v40 = a1[2];
          v36 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v36 )
          {
            v77 = v37;
            v72 = v20;
            sub_15D7BC0(v40, v39);
            v20 = v72;
            v19 = a1[3];
            v22 = a1[1];
            v37 = v77;
            v38 = (_QWORD *)(v19 + v23);
          }
        }
        *v38 = v37;
        ++v30;
        v23 += 8;
      }
      while ( v19 );
      v41 = *(_DWORD *)(v22 - 4) - 1;
      v42 = *(_QWORD *)(v22 + 8LL * v41);
      *(_DWORD *)(v22 - 4) = v41;
      if ( v42 )
      {
        v43 = *a1;
        v36 = (*(_DWORD *)(v42 + 8))-- == 1;
        if ( v36 )
        {
          v75 = v20;
          sub_15D7BC0(v43, v42);
          v20 = v75;
        }
      }
      v70 = v20;
      sub_39BF70(a1 + 2);
      result = (__int64)a1;
      v20 = v70;
      v19 = a1[3];
      continue;
    }
    v28 = &v5[(unsigned __int64)v26 / 8];
    while ( 1 )
    {
      v29 = *v28;
      if ( (unsigned __int64)*v28 > 1 )
        break;
      if ( !v29 )
        goto LABEL_32;
LABEL_29:
      if ( v21 == ++v28 )
        goto LABEL_76;
    }
    if ( *(_DWORD *)(v29 + 12) != v25 || v24 != v29 )
      goto LABEL_29;
    result = (__int64)&v5[(unsigned __int64)v26 / 8];
LABEL_89:
    while ( 1 )
    {
      v56 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
        break;
      if ( !v56 )
        goto LABEL_91;
LABEL_88:
      result += 8;
      if ( v21 == (__int64 *)result )
        goto LABEL_92;
    }
    if ( *(_DWORD *)(v56 + 12) != v25 || v24 != v56 )
      goto LABEL_88;
LABEL_103:
    v58 = (__int64 *)(result + 8);
    if ( v21 == (__int64 *)(result + 8) )
      v58 = v5;
    --v67;
    if ( *v58 )
    {
      *(_QWORD *)result = 1;
      result = 64;
      ++v4;
      if ( v67 >= 0x40 )
        result = v67;
      if ( (unsigned int)result >= v4 )
        goto LABEL_91;
      v74 = v20;
      if ( (unsigned __int8)sub_186AF10(v24) )
      {
        result = (__int64)a1;
        v20 = v74 + 1;
        v19 = a1[3];
      }
      else
      {
        v59 = (char *)sub_186B270(v9);
        v60 = v74;
        if ( v65 )
        {
          memset(v59, 0, 8LL * v65);
          v60 = v74;
        }
        for ( j = v5; v21 != j; ++j )
        {
          if ( (unsigned __int64)*j > 1 )
          {
            v62 = 8LL * (*(_DWORD *)(*j + 12) & (unsigned int)v8);
            v63 = &v59[v62];
            if ( v62 == v9 )
            {
LABEL_129:
              if ( v59 == v63 )
              {
LABEL_137:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v64 = v59;
              while ( *(_QWORD *)v64 )
              {
                v64 += 8;
                if ( v63 == v64 )
                  goto LABEL_137;
              }
            }
            else
            {
              v64 = &v59[v62];
              while ( *(_QWORD *)v64 )
              {
                v64 += 8;
                if ( &v59[v9] == v64 )
                  goto LABEL_129;
              }
            }
            *(_QWORD *)v64 = *j;
          }
        }
        if ( v5 )
        {
          v76 = v60;
          sub_186B220(v5);
          v60 = v76;
        }
        result = (__int64)a1;
        v5 = (__int64 *)v59;
        v20 = v60 + 1;
        v4 = 0;
        v19 = a1[3];
      }
    }
    else
    {
      *(_QWORD *)result = 0;
      ++v20;
    }
LABEL_49:
    ;
  }
  while ( v19 );
LABEL_50:
  if ( v5 )
    return sub_186B220(v5);
  return result;
}

