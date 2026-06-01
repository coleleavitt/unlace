__int64 *__fastcall sub_CD2CC0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 (*v15)(void); // rdx
  __int64 v16; // rdx
  unsigned int v17; // r14d
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r15
  unsigned int *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 *result; // rax
  __int64 v32; // rax
  int v33; // edi
  __int64 *v34; // rcx
  unsigned int v35; // edx
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rax
  int v50; // edi
  __int64 *v51; // rcx
  unsigned int v52; // edx
  __int64 *v53; // rsi
  __int64 v54; // rdx
  __int64 *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // edi
  __int64 *v59; // rcx
  unsigned int v60; // edx
  __int64 *v61; // rsi
  __int64 v62; // rdx
  __int64 *v63; // r8
  __int64 v64; // rdx
  _QWORD *v65; // rdi
  __int64 v66; // rax
  __int64 (*v67)(void); // rdx
  __int64 v68; // rdx
  unsigned int v69; // r14d
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rbp
  __int64 v73; // r15
  unsigned int *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // r8
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // r8
  __int64 v82; // rsi
  __int64 v83; // rsi
  __int64 v84; // rdi
  unsigned __int64 v85; // rsi
  __int64 v86; // rdi
  int v87; // eax
  unsigned int v88; // edx
  __int64 (*v89)(void); // rdx
  unsigned int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 (*v95)(void); // rdx
  unsigned int v96; // eax
  _QWORD *v97; // [rsp+8h] [rbp-D0h]
  _QWORD *v98; // [rsp+8h] [rbp-D0h]
  _QWORD *v99; // [rsp+8h] [rbp-D0h]
  _QWORD *v100; // [rsp+8h] [rbp-D0h]
  _QWORD *v102; // [rsp+18h] [rbp-C0h]
  _QWORD *v103; // [rsp+18h] [rbp-C0h]
  unsigned int v104; // [rsp+20h] [rbp-B8h]
  unsigned int v105; // [rsp+20h] [rbp-B8h]
  unsigned int v106; // [rsp+24h] [rbp-B4h]
  unsigned int v107; // [rsp+24h] [rbp-B4h]
  unsigned int *v108; // [rsp+28h] [rbp-B0h]
  unsigned int *v109; // [rsp+30h] [rbp-A8h]
  int v110; // [rsp+38h] [rbp-A0h]
  _QWORD *v111; // [rsp+38h] [rbp-A0h]
  unsigned int *v112; // [rsp+40h] [rbp-98h]
  _QWORD *v113; // [rsp+48h] [rbp-90h]
  unsigned __int64 v114; // [rsp+50h] [rbp-88h] BYREF
  __int64 v115; // [rsp+58h] [rbp-80h]
  unsigned __int64 v116; // [rsp+60h] [rbp-78h] BYREF
  __int64 v117; // [rsp+68h] [rbp-70h]
  unsigned int *v118; // [rsp+70h] [rbp-68h] BYREF
  __int64 v119; // [rsp+78h] [rbp-60h]
  __m128i v120; // [rsp+80h] [rbp-58h] BYREF
  __int64 v121; // [rsp+90h] [rbp-48h]

  v108 = *(unsigned int **)(a2 + 32);
  v5 = *(unsigned int **)(a2 + 40);
  v114 = 0;
  v109 = v5;
  v112 = *(unsigned int **)(a2 + 48);
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD **)(a1 + 8);
  v115 = v6;
  v8 = *(__int64 (**)(void))(*v7 + 56LL);
  if ( (char *)v8 == (char *)sub_CD0230 )
  {
    v9 = v7[8];
    if ( v9 )
      v110 = *(_DWORD *)(v9 - 4);
    else
      v110 = 0;
  }
  else
  {
    v110 = v8();
  }
  sub_CD2680(a1, v108, (__int64 *)&v114);
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 856LL) == v114 )
  {
    result = (__int64 *)sub_CD2680(a1, v109, a3);
LABEL_75:
    if ( *(_DWORD *)(a2 + 8) <= 1u )
      goto LABEL_83;
    v57 = *(unsigned int *)(a1 + 584);
    v58 = *(_DWORD *)(a2 + 12);
    v59 = *(__int64 **)(a1 + 576);
    v60 = v57 - 1;
    result = (__int64 *)(16 * v57);
    v61 = (__int64 *)((char *)result + (_QWORD)v59);
    v62 = 16LL * (v58 & v60);
    v63 = &v59[(unsigned __int64)v62 / 8];
    if ( (__int64 *)v62 != result )
    {
      result = &v59[(unsigned __int64)v62 / 8];
      do
      {
        v64 = *result;
        if ( (unsigned __int64)*result > 1 )
        {
          if ( *(_DWORD *)(v64 + 12) == v58 && a2 == v64 )
            goto LABEL_87;
        }
        else if ( !v64 )
        {
          goto LABEL_83;
        }
        result += 2;
      }
      while ( v61 != result );
    }
    while ( v63 != v59 )
    {
      result = (__int64 *)*v59;
      if ( (unsigned __int64)*v59 > 1 )
      {
        if ( *((_DWORD *)result + 3) == v58 && (__int64 *)a2 == result )
        {
          result = v59;
LABEL_87:
          if ( *((_DWORD *)result + 2) > 1u )
            result = (__int64 *)sub_CD0860((_QWORD *)a1, (unsigned int *)a2, *a3);
          break;
        }
      }
      else if ( !result )
      {
        break;
      }
      v59 += 2;
    }
LABEL_83:
    v44 = v114;
    if ( !v114 )
      return result;
    v45 = v115;
    v27 = (*(_DWORD *)(v114 + 8))-- == 1;
    if ( !v27 )
      return result;
    return (__int64 *)sub_15D7BC0(v45, v44);
  }
  if ( *(_QWORD *)(v10 + 864) == v114 )
  {
    result = (__int64 *)sub_CD2680(a1, v112, a3);
    goto LABEL_75;
  }
  v11 = *(__int64 **)(a1 + 8);
  v117 = *(_QWORD *)a1;
  v119 = v10;
  v116 = 0;
  v12 = *v11;
  v118 = nullptr;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(v12 + 16))(v11, v114, 0) )
  {
    result = (__int64 *)sub_CD2680(a1, v112, a3);
    if ( *(_DWORD *)(a2 + 8) <= 1u )
      goto LABEL_34;
    v32 = *(unsigned int *)(a1 + 584);
    v33 = *(_DWORD *)(a2 + 12);
    v34 = *(__int64 **)(a1 + 576);
    v35 = v32 - 1;
    result = (__int64 *)(16 * v32);
    v36 = (__int64 *)((char *)result + (_QWORD)v34);
    v37 = 16LL * (v33 & v35);
    v38 = &v34[(unsigned __int64)v37 / 8];
    if ( (__int64 *)v37 != result )
    {
      result = &v34[(unsigned __int64)v37 / 8];
      do
      {
        v39 = *result;
        if ( (unsigned __int64)*result > 1 )
        {
          if ( *(_DWORD *)(v39 + 12) == v33 && a2 == v39 )
          {
LABEL_138:
            if ( *((_DWORD *)result + 2) > 1u )
              result = (__int64 *)sub_CD0860((_QWORD *)a1, (unsigned int *)a2, *a3);
            goto LABEL_34;
          }
        }
        else if ( !v39 )
        {
          goto LABEL_34;
        }
        result += 2;
      }
      while ( v36 != result );
    }
    if ( v34 == v38 )
      goto LABEL_34;
    while ( 1 )
    {
      result = (__int64 *)*v34;
      if ( (unsigned __int64)*v34 > 1 )
      {
        if ( *((_DWORD *)result + 3) == v33 && (__int64 *)a2 == result )
        {
          result = v34;
          goto LABEL_138;
        }
      }
      else if ( !result )
      {
        goto LABEL_34;
      }
      v34 += 2;
      if ( v38 == v34 )
        goto LABEL_34;
    }
  }
  sub_CD2680(a1, v109, (__int64 *)&v116);
  v13 = *(_QWORD **)(a1 + 8);
  v14 = *v13;
  v15 = *(__int64 (**)(void))(*v13 + 56LL);
  if ( (char *)v15 == (char *)sub_CD0230 )
  {
    v16 = v13[8];
    if ( v16 )
    {
      v104 = *(_DWORD *)(v16 - 4) - v110;
      if ( !v104 )
        goto LABEL_45;
      goto LABEL_10;
    }
    if ( !v110 )
      goto LABEL_45;
    v106 = 0;
    v104 = -v110;
  }
  else
  {
    v87 = v15();
    v13 = *(_QWORD **)(a1 + 8);
    v27 = v87 == v110;
    v88 = v87 - v110;
    v14 = *v13;
    v104 = v88;
    if ( v27 )
      goto LABEL_45;
    v89 = *(__int64 (**)(void))(v14 + 56);
    if ( (char *)v89 == (char *)sub_CD0230 )
    {
      v16 = v13[8];
      if ( v16 )
      {
LABEL_10:
        v106 = *(_DWORD *)(v16 - 4);
        goto LABEL_11;
      }
      v106 = 0;
    }
    else
    {
      v90 = v89();
      v13 = *(_QWORD **)(a1 + 8);
      v106 = v90;
      v14 = *v13;
    }
  }
LABEL_11:
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v14 + 40))(v13, v104);
  v17 = v106;
  v18 = *(_QWORD *)(a1 + 544);
  while ( v18 )
  {
    if ( v17 >= *(_DWORD *)(v18 - 4) )
    {
      --v17;
      if ( v106 - v17 >= v104 )
        break;
    }
    else
    {
      v19 = (_QWORD *)(v18 + 8LL * v17);
      v20 = *v19;
      v102 = v19;
      if ( *v19 )
      {
        v21 = v20 + 8LL * *(unsigned int *)(v20 - 4);
        while ( v20 != v21 )
        {
          v22 = *(unsigned int **)(v21 - 8);
          v21 -= 8;
          v23 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v22);
          v24 = (_QWORD *)v23[1];
          v25 = *v24;
          if ( *v24 )
          {
            v26 = *(_QWORD *)a1;
            v27 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v27 )
            {
              v97 = v23;
              sub_15D7BC0(v26, v25);
              v23 = v97;
              v24 = (_QWORD *)v97[1];
            }
          }
          v28 = v24[2];
          v23[1] = v28;
          if ( !v28 )
          {
            v29 = *v23;
            if ( *v23 )
            {
              v30 = *(_QWORD *)a1;
              v27 = (*(_DWORD *)(v29 + 8))-- == 1;
              if ( v27 )
              {
                v113 = v24;
                v98 = v23;
                sub_15D7BC0(v30, v29);
                v24 = v113;
                v23 = v98;
              }
            }
            *v23 = 0;
          }
          sub_17E9C40(a1 + 16, 24, v24);
        }
        if ( *v102 )
          *(_DWORD *)(*v102 - 4LL) = 0;
      }
      --v17;
      if ( v106 - v17 >= v104 )
        break;
      v18 = *(_QWORD *)(a1 + 544);
    }
  }
  v13 = *(_QWORD **)(a1 + 8);
  v14 = *v13;
LABEL_45:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v14 + 16))(v13, v114, 1) )
  {
    sub_CD2680(a1, v112, (__int64 *)&v118);
    v65 = *(_QWORD **)(a1 + 8);
    v66 = *v65;
    v67 = *(__int64 (**)(void))(*v65 + 56LL);
    if ( (char *)v67 == (char *)sub_CD0230 )
    {
      v68 = v65[8];
      if ( v68 )
      {
        v105 = *(_DWORD *)(v68 - 4) - v110;
        if ( v105 )
        {
LABEL_100:
          v107 = *(_DWORD *)(v68 - 4);
          goto LABEL_101;
        }
LABEL_120:
        result = (__int64 *)v116;
        v82 = (__int64)v118;
        if ( v108 == (unsigned int *)v114 && v109 == (unsigned int *)v116 && v112 == v118 )
        {
          ++*(_DWORD *)(a2 + 8);
          v93 = *a3;
          if ( *a3 )
          {
            v94 = a3[1];
            v27 = (*(_DWORD *)(v93 + 8))-- == 1;
            if ( v27 )
            {
              sub_15D7BC0(v94, v93);
              v82 = (__int64)v118;
            }
          }
          result = a3;
          *a3 = a2;
        }
        else if ( (unsigned int *)v116 == v118 )
        {
          v91 = *a3;
          if ( *a3 != v116 )
          {
            if ( v91 )
            {
              v92 = a3[1];
              v27 = (*(_DWORD *)(v91 + 8))-- == 1;
              if ( v27 )
              {
                sub_15D7BC0(v92, v91);
                result = (__int64 *)v116;
                v82 = (__int64)v118;
              }
            }
            *a3 = (__int64)result;
            if ( result )
              ++*((_DWORD *)result + 2);
          }
        }
        else
        {
          v121 = (__int64)v118;
          v83 = *(_QWORD *)(a2 + 16);
          v120 = _mm_unpacklo_epi64((__m128i)v114, (__m128i)v116);
          result = (__int64 *)sub_1447B20(a1 + 616, v83, 3, &v120, a3);
          v82 = (__int64)v118;
        }
        if ( v82 )
        {
          v84 = v119;
          v27 = (*(_DWORD *)(v82 + 8))-- == 1;
          if ( v27 )
            result = (__int64 *)sub_15D7BC0(v84, v82);
        }
        v85 = v116;
        if ( v116 )
        {
          v86 = v117;
          v27 = (*(_DWORD *)(v116 + 8))-- == 1;
          if ( v27 )
            result = (__int64 *)sub_15D7BC0(v86, v85);
        }
        goto LABEL_75;
      }
      if ( !v110 )
        goto LABEL_120;
      v107 = 0;
      v105 = -v110;
    }
    else
    {
      v105 = v67() - v110;
      if ( !v105 )
        goto LABEL_120;
      v65 = *(_QWORD **)(a1 + 8);
      v66 = *v65;
      v95 = *(__int64 (**)(void))(*v65 + 56LL);
      if ( (char *)v95 == (char *)sub_CD0230 )
      {
        v68 = v65[8];
        v107 = 0;
        if ( v68 )
          goto LABEL_100;
      }
      else
      {
        v96 = v95();
        v65 = *(_QWORD **)(a1 + 8);
        v107 = v96;
        v66 = *v65;
      }
    }
LABEL_101:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(v66 + 40))(v65, v105);
    v69 = v107;
    v70 = *(_QWORD *)(a1 + 544);
    do
    {
      if ( !v70 )
        break;
      while ( v69 < *(_DWORD *)(v70 - 4) )
      {
        v71 = (_QWORD *)(v70 + 8LL * v69);
        v72 = *v71;
        v103 = v71;
        if ( *v71 )
        {
          v73 = v72 + 8LL * *(unsigned int *)(v72 - 4);
          while ( v72 != v73 )
          {
            v74 = *(unsigned int **)(v73 - 8);
            v73 -= 8;
            v75 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v74);
            v76 = (_QWORD *)v75[1];
            v77 = *v76;
            if ( *v76 )
            {
              v78 = *(_QWORD *)a1;
              v27 = (*(_DWORD *)(v77 + 8))-- == 1;
              if ( v27 )
              {
                v99 = v75;
                sub_15D7BC0(v78, v77);
                v75 = v99;
                v76 = (_QWORD *)v99[1];
              }
            }
            v79 = v76[2];
            v75[1] = v79;
            if ( !v79 )
            {
              v80 = *v75;
              if ( *v75 )
              {
                v81 = *(_QWORD *)a1;
                v27 = (*(_DWORD *)(v80 + 8))-- == 1;
                if ( v27 )
                {
                  v111 = v76;
                  v100 = v75;
                  sub_15D7BC0(v81, v80);
                  v76 = v111;
                  v75 = v100;
                }
              }
              *v75 = 0;
            }
            sub_17E9C40(a1 + 16, 24, v76);
          }
          if ( *v103 )
            *(_DWORD *)(*v103 - 4LL) = 0;
        }
        --v69;
        if ( v107 - v69 < v105 )
        {
          v70 = *(_QWORD *)(a1 + 544);
          if ( v70 )
            continue;
        }
        goto LABEL_120;
      }
      --v69;
    }
    while ( v107 - v69 < v105 );
    goto LABEL_120;
  }
  result = a3;
  v46 = v116;
  v47 = *a3;
  if ( *a3 != v116 )
  {
    if ( v47 )
    {
      v48 = a3[1];
      v27 = (*(_DWORD *)(v47 + 8))-- == 1;
      if ( v27 )
      {
        sub_15D7BC0(v48, v47);
        v46 = v116;
      }
    }
    result = a3;
    *a3 = v46;
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u )
    goto LABEL_34;
  v49 = *(unsigned int *)(a1 + 584);
  v50 = *(_DWORD *)(a2 + 12);
  v51 = *(__int64 **)(a1 + 576);
  v52 = v49 - 1;
  result = (__int64 *)(16 * v49);
  v53 = (__int64 *)((char *)result + (_QWORD)v51);
  v54 = 16LL * (v50 & v52);
  v55 = &v51[(unsigned __int64)v54 / 8];
  if ( (__int64 *)v54 != result )
  {
    result = &v51[(unsigned __int64)v54 / 8];
    do
    {
      while ( 1 )
      {
        v56 = *result;
        if ( (unsigned __int64)*result <= 1 )
          break;
        if ( *(_DWORD *)(v56 + 12) == v50 && a2 == v56 )
          goto LABEL_134;
        result += 2;
        if ( v53 == result )
          goto LABEL_61;
      }
      if ( !v56 )
        goto LABEL_34;
      result += 2;
    }
    while ( v53 != result );
  }
LABEL_61:
  if ( v51 == v55 )
    goto LABEL_34;
  while ( 1 )
  {
    result = (__int64 *)*v51;
    if ( (unsigned __int64)*v51 > 1 )
      break;
    if ( !result )
      goto LABEL_34;
LABEL_65:
    v51 += 2;
    if ( v55 == v51 )
      goto LABEL_34;
  }
  if ( *((_DWORD *)result + 3) != v50 || (__int64 *)a2 != result )
    goto LABEL_65;
  result = v51;
LABEL_134:
  if ( *((_DWORD *)result + 2) > 1u )
    result = (__int64 *)sub_CD0860((_QWORD *)a1, (unsigned int *)a2, v46);
LABEL_34:
  v40 = (__int64)v118;
  if ( v118 )
  {
    v41 = v119;
    v27 = v118[2]-- == 1;
    if ( v27 )
      result = (__int64 *)sub_15D7BC0(v41, v40);
  }
  v42 = v116;
  if ( v116 )
  {
    v43 = v117;
    v27 = (*(_DWORD *)(v116 + 8))-- == 1;
    if ( v27 )
      result = (__int64 *)sub_15D7BC0(v43, v42);
  }
  v44 = v114;
  if ( v114 )
  {
    v45 = v115;
    v27 = (*(_DWORD *)(v114 + 8))-- == 1;
    if ( v27 )
      return (__int64 *)sub_15D7BC0(v45, v44);
  }
  return result;
}

