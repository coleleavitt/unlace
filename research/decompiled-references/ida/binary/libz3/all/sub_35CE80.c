__int64 __fastcall sub_35CE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // edi
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r10
  _QWORD *i; // rdx
  _QWORD *v23; // rbp
  void *v24; // r15
  __int64 v25; // rdx
  int v26; // r10d
  _QWORD *v27; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // r11
  _QWORD *j; // rcx
  _QWORD *v33; // r15
  _QWORD *v34; // rsi
  unsigned int v35; // eax
  __int64 v36; // rbp
  _QWORD *v37; // r11
  __int64 v38; // r10
  __int64 v39; // r14
  __int64 k; // rax
  _QWORD *v41; // rbp
  __int64 v42; // rax
  int v43; // esi
  _QWORD *v44; // rdx
  __int64 v45; // r10
  unsigned int v46; // ecx
  __int64 v47; // r11
  _QWORD *v48; // rcx
  __int64 v49; // r11
  _QWORD *v50; // rdi
  _QWORD *m; // rax
  _QWORD *v52; // rbx
  __int64 v53; // rax
  _QWORD *v54; // rcx
  int v55; // edi
  unsigned int v56; // edx
  _QWORD *v57; // rsi
  __int64 v58; // rdx
  _QWORD *v59; // r11
  _QWORD *n; // rdx
  _QWORD *v61; // rax
  _QWORD *v62; // rsi
  _QWORD *v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // r10
  __int64 v66; // rax
  __int64 v68; // [rsp+18h] [rbp-A0h]
  __int64 v69; // [rsp+18h] [rbp-A0h]
  __int64 v70; // [rsp+20h] [rbp-98h]
  void *v71; // [rsp+20h] [rbp-98h]
  void *v72; // [rsp+20h] [rbp-98h]
  void *v73; // [rsp+20h] [rbp-98h]
  __int64 v74; // [rsp+28h] [rbp-90h]
  __int64 v75; // [rsp+28h] [rbp-90h]
  _QWORD *v76; // [rsp+28h] [rbp-90h]
  __int64 v78; // [rsp+38h] [rbp-80h]
  __int64 v79; // [rsp+40h] [rbp-78h]
  __int64 v81; // [rsp+58h] [rbp-60h] BYREF
  __int64 v82; // [rsp+60h] [rbp-58h]
  __int64 v83; // [rsp+68h] [rbp-50h] BYREF
  __int64 v84; // [rsp+70h] [rbp-48h]

  v5 = a4;
  v7 = a3 - 1;
  result = v7 / 2;
  if ( a2 >= v7 / 2 )
  {
    v37 = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_91;
    v38 = a2;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_91;
  }
  else
  {
    v78 = a3 & 1;
    v10 = a2;
    v74 = v7 / 2;
    v79 = a3;
    while ( 1 )
    {
      v81 = 0;
      v83 = 1;
      v12 = 16 * (v10 + 1);
      v13 = *(_QWORD **)(a5 + 72);
      v14 = *(_QWORD *)(a1 + v12 - 8);
      v15 = *(_QWORD *)(a1 + v12);
      v82 = 0;
      v16 = *(unsigned int *)(a5 + 80);
      v17 = *(_DWORD *)(v14 + 12);
      v84 = 0;
      v18 = v16 - 1;
      v19 = 40 * v16;
      v20 = 40LL * (v17 & v18);
      v21 = &v13[(unsigned __int64)v20 / 8];
      if ( v20 != v19 )
      {
        for ( i = &v13[(unsigned __int64)v20 / 8]; &v13[(unsigned __int64)v19 / 8] != i; i += 5 )
        {
          v23 = (_QWORD *)*i;
          if ( *i > 1u )
          {
            if ( *((_DWORD *)v23 + 3) == v17 && (_QWORD *)v14 == v23 )
            {
              v23 = i;
              goto LABEL_10;
            }
          }
          else if ( !v23 )
          {
            goto LABEL_10;
          }
        }
      }
      if ( v13 == v21 )
      {
LABEL_39:
        v23 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v23 = (_QWORD *)*v13;
            if ( *v13 > 1u )
              break;
            if ( !v23 )
              goto LABEL_10;
            v13 += 5;
            if ( v21 == v13 )
              goto LABEL_39;
          }
          if ( *((_DWORD *)v23 + 3) == v17 && (_QWORD *)v14 == v23 )
            break;
          v13 += 5;
          if ( v21 == v13 )
            goto LABEL_39;
        }
        v23 = v13;
      }
LABEL_10:
      v24 = qword_1C7F2C0;
      v70 = v15;
      sub_182CBA0(qword_1C7F2C0, &v81);
      sub_182CBA0(v24, &v83);
      v81 = 0;
      v83 = 1;
      v25 = *(unsigned int *)(a5 + 80);
      v26 = *(_DWORD *)(v70 + 12);
      v27 = *(_QWORD **)(a5 + 72);
      v82 = 0;
      v28 = v25 - 1;
      v84 = 0;
      v29 = 40 * v25;
      v30 = 40LL * (v26 & v28);
      v31 = &v27[(unsigned __int64)v30 / 8];
      if ( v30 != v29 )
      {
        for ( j = &v27[(unsigned __int64)v30 / 8]; &v27[(unsigned __int64)v29 / 8] != j; j += 5 )
        {
          v33 = (_QWORD *)*j;
          if ( *j > 1u )
          {
            if ( *((_DWORD *)v33 + 3) == v26 && (_QWORD *)v70 == v33 )
            {
              v33 = j;
              goto LABEL_17;
            }
          }
          else if ( !v33 )
          {
            goto LABEL_17;
          }
        }
      }
      if ( v27 == v31 )
      {
LABEL_30:
        v33 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = (_QWORD *)*v27;
            if ( *v27 > 1u )
              break;
            if ( !v33 )
              goto LABEL_17;
            v27 += 5;
            if ( v31 == v27 )
              goto LABEL_30;
          }
          if ( *((_DWORD *)v33 + 3) == v26 && (_QWORD *)v70 == v33 )
            break;
          v27 += 5;
          if ( v31 == v27 )
            goto LABEL_30;
        }
        v33 = v27;
      }
LABEL_17:
      v71 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v81);
      sub_182CBA0(v71, &v83);
      v34 = v23 + 1;
      if ( (*((_BYTE *)v23 + 28) & 1) != 0
        || *((_DWORD *)v23 + 6) != 1
        || (*((_BYTE *)v33 + 28) & 1) != 0
        || *((_DWORD *)v33 + 6) != 1 )
      {
        LOBYTE(v35) = sub_1848D40(qword_1C7F2C0, v34, v33 + 1);
      }
      else if ( (*((_BYTE *)v23 + 12) & 1) != 0 || (*((_BYTE *)v33 + 12) & 1) != 0 )
      {
        v35 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v34, v33 + 1) >> 31;
      }
      else
      {
        LOBYTE(v35) = *((_DWORD *)v23 + 2) < *((_DWORD *)v33 + 2);
      }
      v68 = 2 * (v10 + 1);
      v36 = v68 - (unsigned __int8)v35;
      v37 = (_QWORD *)(a1 + 8 * v36);
      *(_QWORD *)(a1 + 8 * v10) = *v37;
      if ( v74 <= v36 )
        break;
      v10 = v68 - (unsigned __int8)v35;
    }
    v38 = v68 - (unsigned __int8)v35;
    v5 = a4;
    if ( v78 || (v79 - 2) / 2 != v38 )
      goto LABEL_46;
  }
  v65 = 2 * v38 + 2;
  v66 = *(_QWORD *)(a1 + 8 * v65 - 8);
  v38 = v65 - 1;
  *v37 = v66;
  v37 = (_QWORD *)(a1 + 8 * v38);
LABEL_46:
  result = a2;
  v39 = (v38 - 1) / 2;
  if ( v38 > a2 )
  {
    v69 = v38;
    for ( k = a1; ; k = a1 )
    {
      v41 = (_QWORD *)(k + 8 * v39);
      v42 = *(unsigned int *)(a5 + 80);
      v43 = *(_DWORD *)(v5 + 12);
      v44 = *(_QWORD **)(a5 + 72);
      v45 = *v41;
      v81 = 0;
      v82 = 0;
      v46 = v42 - 1;
      v83 = 1;
      v42 *= 40;
      v84 = 0;
      v47 = 5LL * (v43 & v46);
      v48 = (_QWORD *)((char *)v44 + v42);
      v49 = 8 * v47;
      v50 = &v44[(unsigned __int64)v49 / 8];
      if ( v49 != v42 )
      {
        for ( m = &v44[(unsigned __int64)v49 / 8]; v48 != m; m += 5 )
        {
          v52 = (_QWORD *)*m;
          if ( *m > 1u )
          {
            if ( *((_DWORD *)v52 + 3) == v43 && (_QWORD *)v5 == v52 )
            {
              v52 = m;
              goto LABEL_55;
            }
          }
          else if ( !v52 )
          {
            goto LABEL_55;
          }
        }
      }
      if ( v44 == v50 )
      {
LABEL_75:
        v52 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v52 = (_QWORD *)*v44;
            if ( *v44 > 1u )
              break;
            if ( !v52 )
              goto LABEL_55;
            v44 += 5;
            if ( v50 == v44 )
              goto LABEL_75;
          }
          if ( *((_DWORD *)v52 + 3) == v43 && (_QWORD *)v5 == v52 )
            break;
          v44 += 5;
          if ( v50 == v44 )
            goto LABEL_75;
        }
        v52 = v44;
      }
LABEL_55:
      v75 = v45;
      v72 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v81);
      sub_182CBA0(v72, &v83);
      v53 = *(unsigned int *)(a5 + 80);
      v81 = 0;
      v83 = 1;
      v54 = *(_QWORD **)(a5 + 72);
      v55 = *(_DWORD *)(v75 + 12);
      v56 = v53 - 1;
      v82 = 0;
      v53 *= 40;
      v84 = 0;
      v57 = (_QWORD *)((char *)v54 + v53);
      v58 = 40LL * (v55 & v56);
      v59 = &v54[(unsigned __int64)v58 / 8];
      if ( v58 != v53 )
      {
        for ( n = &v54[(unsigned __int64)v58 / 8]; v57 != n; n += 5 )
        {
          v61 = (_QWORD *)*n;
          if ( *n > 1u )
          {
            if ( *((_DWORD *)v61 + 3) == v55 && (_QWORD *)v75 == v61 )
            {
              v61 = n;
              goto LABEL_62;
            }
          }
          else if ( !v61 )
          {
            goto LABEL_62;
          }
        }
      }
      if ( v54 == v59 )
      {
LABEL_84:
        v61 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v61 = (_QWORD *)*v54;
            if ( *v54 > 1u )
              break;
            if ( !v61 )
              goto LABEL_62;
            v54 += 5;
            if ( v59 == v54 )
              goto LABEL_84;
          }
          if ( *((_DWORD *)v61 + 3) == v55 && (_QWORD *)v75 == v61 )
            break;
          v54 += 5;
          if ( v59 == v54 )
            goto LABEL_84;
        }
        v61 = v54;
      }
LABEL_62:
      v76 = v61;
      v73 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v81);
      sub_182CBA0(v73, &v83);
      v62 = v52 + 1;
      v63 = v76 + 1;
      if ( (*((_BYTE *)v52 + 28) & 1) != 0
        || *((_DWORD *)v52 + 6) != 1
        || (*((_BYTE *)v76 + 28) & 1) != 0
        || *((_DWORD *)v76 + 6) != 1 )
      {
        if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v62, v63) )
        {
          result = a1;
          v37 = (_QWORD *)(a1 + 8 * v69);
          goto LABEL_91;
        }
      }
      else if ( (*((_BYTE *)v52 + 12) & 1) != 0 || (*((_BYTE *)v76 + 12) & 1) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, v62, v63) >= 0 )
        {
LABEL_90:
          result = a1;
          v37 = (_QWORD *)(a1 + 8 * v69);
          goto LABEL_91;
        }
      }
      else if ( *((_DWORD *)v52 + 2) >= *((_DWORD *)v76 + 2) )
      {
        goto LABEL_90;
      }
      v64 = v69;
      v69 = v39;
      *(_QWORD *)(a1 + 8 * v64) = *v41;
      result = (v39 - 1) / 2;
      if ( a2 >= v39 )
        break;
      v39 = (v39 - 1) / 2;
    }
    v37 = v41;
  }
LABEL_91:
  *v37 = v5;
  return result;
}

