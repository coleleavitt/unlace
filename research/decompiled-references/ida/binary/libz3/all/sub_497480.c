__int64 __fastcall sub_497480(char *src, char *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  char *v5; // r13
  char *v6; // r15
  char *v9; // r14
  char *v10; // r15
  size_t v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  _DWORD *v14; // r12
  __int16 v15; // dx
  __int64 v16; // rsi
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  _DWORD *v19; // rcx
  _DWORD *v20; // rdx
  bool v21; // dl
  __int64 v22; // rax
  char *v23; // rcx
  _DWORD *v24; // rdi
  char *v25; // rdx
  _DWORD *v26; // rcx
  _DWORD *v27; // rsi
  _DWORD *v28; // r8
  bool v29; // r8
  __int16 v30; // cx
  char *v31; // r9
  _DWORD *v32; // rdx
  char *v33; // rcx
  __int64 v34; // r14
  char *v35; // rbx
  char *v36; // r13
  _DWORD *v37; // rax
  _DWORD *v38; // r12
  __int16 v39; // dx
  __int64 v40; // rdi
  _DWORD *v41; // rcx
  _DWORD *v42; // rdx
  _DWORD *v43; // rcx
  _DWORD *v44; // rdx
  __int64 v45; // rax
  char *v46; // rdx
  _DWORD *v47; // r8
  bool v48; // cl
  _DWORD *v49; // rcx
  _DWORD *v50; // rdi
  _DWORD *v51; // rsi
  _DWORD *v52; // rsi
  __int64 v53; // r12
  __int64 v54; // r13
  _QWORD *v55; // r8
  __int64 v56; // rdx
  char *v57; // r14
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rbx
  __int64 v61; // r15
  char *v62; // rdi
  __int64 v63; // rax
  _QWORD *v64; // r8
  char *v65; // r14
  char *v66; // rdi
  __int64 v67; // rax
  char *v68; // rsi
  _DWORD *v69; // r10
  _DWORD *v70; // rdx
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  _DWORD *v73; // rdi
  _DWORD *v74; // rdx
  _DWORD *v75; // rcx
  __int64 v76; // r12
  _DWORD *v77; // r8
  _DWORD *v78; // rdx
  _DWORD *v79; // rcx
  bool v80; // cf
  _DWORD *v81; // rdx
  _DWORD *v82; // rdx
  __int64 v83; // [rsp+8h] [rbp-60h]
  __int64 v86; // [rsp+20h] [rbp-48h]
  __int64 v87; // [rsp+20h] [rbp-48h]
  char *v88; // [rsp+20h] [rbp-48h]
  char *v89; // [rsp+28h] [rbp-40h]
  __int64 v90; // [rsp+28h] [rbp-40h]

  result = a2 - src;
  v5 = src;
  v6 = (char *)a3 + a2 - src;
  v83 = (a2 - src) >> 3;
  if ( a2 - src > 48 )
  {
    v86 = a2 - src;
    v89 = (char *)a3 + a2 - src;
    while ( 1 )
    {
      v9 = v5;
      v5 += 56;
      v10 = v5 - 48;
      do
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v5 - 7);
          v14 = *(_DWORD **)v10;
          if ( v13 == *(_QWORD *)v10 )
          {
LABEL_17:
            v22 = *((_QWORD *)v10 - 1);
            v23 = v10 - 8;
            if ( v14 == (_DWORD *)v22 )
              goto LABEL_137;
            if ( *((_WORD *)v14 + 2) )
            {
              while ( 1 )
              {
                if ( !*(_WORD *)(v22 + 4)
                  && (v32 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL)) != nullptr
                  && *v32 == 5
                  && v32[1] == 9
                  && *(_DWORD *)(v22 + 24) == 2 )
                {
                  v70 = *(_DWORD **)(v22 + 40);
                  if ( v14 != v70 && *v14 >= *v70 )
                  {
LABEL_106:
                    v31 = v23 + 8;
LABEL_111:
                    *(_QWORD *)v31 = v14;
                    goto LABEL_44;
                  }
                }
                else if ( v14 != (_DWORD *)v22 && *v14 >= *(_DWORD *)v22 )
                {
                  goto LABEL_106;
                }
                *((_QWORD *)v23 + 1) = v22;
                v22 = *((_QWORD *)v23 - 1);
                if ( v14 == (_DWORD *)v22 )
                {
LABEL_43:
                  *(_QWORD *)v23 = v14;
                  goto LABEL_44;
                }
                v23 -= 8;
              }
            }
            v16 = *((_QWORD *)v14 + 2);
            goto LABEL_20;
          }
          v15 = *(_WORD *)(v13 + 4);
          if ( !*((_WORD *)v14 + 2) )
          {
            v16 = *((_QWORD *)v14 + 2);
            v17 = *(_DWORD **)(v16 + 24);
            if ( v17 )
            {
              if ( *v17 == 5 && v17[1] == 9 && v14[6] == 2 )
                break;
            }
          }
          if ( v15
            || (v18 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) == nullptr
            || *v18 != 5
            || v18[1] != 9
            || *(_DWORD *)(v13 + 24) != 2 )
          {
            v19 = *(_DWORD **)v10;
            v20 = *((_DWORD **)v5 - 7);
            goto LABEL_15;
          }
          v20 = *(_DWORD **)(v13 + 40);
          v19 = *(_DWORD **)v10;
          if ( v14 != v20 )
            goto LABEL_15;
          v11 = v10 - v9;
          v12 = v10 - v9 == 8;
          if ( v10 - v9 <= 8 )
          {
LABEL_128:
            if ( v12 )
              *(_QWORD *)v10 = v13;
            goto LABEL_6;
          }
LABEL_5:
          memmove(&v10[8 - v11], v9, v11);
LABEL_6:
          v10 += 8;
          *((_QWORD *)v5 - 7) = v14;
          if ( v5 == v10 )
            goto LABEL_45;
        }
        v73 = *((_DWORD **)v14 + 4);
        v19 = *((_DWORD **)v14 + 5);
        if ( !v15 )
        {
          v74 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( !v74 )
          {
            if ( (_DWORD *)v13 != v19 )
              goto LABEL_197;
            goto LABEL_135;
          }
          if ( *v74 == 5 )
          {
            if ( v74[1] == 9 )
            {
              if ( *(_DWORD *)(v13 + 24) != 2 )
              {
                v20 = *((_DWORD **)v5 - 7);
                if ( (_DWORD *)v13 == v19 )
                  goto LABEL_195;
                goto LABEL_15;
              }
              v20 = *(_DWORD **)(v13 + 40);
              if ( v19 != v20 )
                goto LABEL_15;
              if ( !v73 )
                goto LABEL_4;
              v82 = *(_DWORD **)(v13 + 32);
              if ( !v82 )
                goto LABEL_17;
              v21 = *v73 < *v82;
            }
            else
            {
              if ( (_DWORD *)v13 == v19 )
              {
LABEL_195:
                if ( v73 )
                  goto LABEL_17;
LABEL_4:
                v11 = v10 - v9;
                v12 = v10 - v9 == 8;
                if ( v10 - v9 <= 8 )
                  goto LABEL_128;
                goto LABEL_5;
              }
LABEL_197:
              v20 = *((_DWORD **)v5 - 7);
LABEL_15:
              v21 = *v19 < *v20;
            }
            if ( !v21 )
              goto LABEL_17;
            goto LABEL_4;
          }
        }
        v20 = *((_DWORD **)v5 - 7);
        if ( (_DWORD *)v13 != v19 )
          goto LABEL_15;
LABEL_135:
        if ( !v73 )
          goto LABEL_4;
        v22 = *((_QWORD *)v10 - 1);
        v23 = v10 - 8;
        if ( v14 == (_DWORD *)v22 )
        {
LABEL_137:
          *(_QWORD *)v10 = v14;
          goto LABEL_44;
        }
LABEL_20:
        v24 = *(_DWORD **)(v16 + 24);
        v25 = v23;
        while ( 1 )
        {
          v30 = *(_WORD *)(v22 + 4);
          v31 = v25 + 8;
          if ( v24 )
            break;
          while ( 1 )
          {
            if ( !v30 )
            {
              v26 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
              if ( v26 )
                break;
            }
            if ( v14 != (_DWORD *)v22 )
              goto LABEL_26;
            v22 = *((_QWORD *)v25 - 1);
            *((_QWORD *)v25 + 1) = v14;
            if ( v14 == (_DWORD *)v22 )
              goto LABEL_143;
            v31 = v25;
            v30 = *(_WORD *)(v22 + 4);
            v25 -= 8;
          }
LABEL_24:
          if ( *v26 != 5 )
          {
            v23 = v25;
            v27 = v14;
            if ( v14 != (_DWORD *)v22 )
              goto LABEL_26;
            goto LABEL_29;
          }
          v28 = v14;
          v69 = nullptr;
LABEL_113:
          if ( v26[1] != 9 || *(_DWORD *)(v22 + 24) != 2 )
          {
            v23 = v25;
            v27 = (_DWORD *)v22;
            if ( (_DWORD *)v22 != v28 )
              goto LABEL_27;
            goto LABEL_110;
          }
          if ( *(_DWORD **)(v22 + 40) != v28 )
          {
            v27 = (_DWORD *)v22;
            v23 = v25;
            v22 = *(_QWORD *)(v22 + 40);
            goto LABEL_27;
          }
          if ( v69 )
          {
            v79 = *(_DWORD **)(v22 + 32);
            if ( !v79 )
              goto LABEL_111;
            v80 = *v69 < *v79;
            v23 = v25;
            v27 = (_DWORD *)v22;
            v29 = v80;
            goto LABEL_28;
          }
          v23 = v25;
          v27 = (_DWORD *)v22;
LABEL_29:
          *((_QWORD *)v25 + 1) = v27;
          v22 = *((_QWORD *)v25 - 1);
          v25 -= 8;
          if ( v14 == (_DWORD *)v22 )
            goto LABEL_43;
        }
        if ( *v24 != 5 )
        {
LABEL_22:
          if ( v30 || (v26 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL)) == nullptr )
          {
            if ( v14 == (_DWORD *)v22 )
            {
              v22 = *((_QWORD *)v25 - 1);
              *((_QWORD *)v25 + 1) = v14;
              v68 = v25 - 8;
              if ( v14 == (_DWORD *)v22 )
                goto LABEL_143;
              goto LABEL_96;
            }
LABEL_26:
            v23 = v25;
            v27 = (_DWORD *)v22;
            v28 = v14;
LABEL_27:
            v29 = *v28 < *(_DWORD *)v22;
LABEL_28:
            if ( !v29 )
              goto LABEL_111;
            goto LABEL_29;
          }
          goto LABEL_24;
        }
        while ( 1 )
        {
          if ( v24[1] != 9 || v14[6] != 2 )
            goto LABEL_22;
          v69 = *((_DWORD **)v14 + 4);
          v28 = *((_DWORD **)v14 + 5);
          if ( !v30 )
          {
            v26 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
            if ( v26 )
            {
              if ( *v26 != 5 )
              {
                v23 = v25;
                v27 = (_DWORD *)v22;
                if ( v28 != (_DWORD *)v22 )
                  goto LABEL_27;
LABEL_110:
                if ( v69 )
                  goto LABEL_111;
                goto LABEL_29;
              }
              goto LABEL_113;
            }
          }
          if ( v28 != (_DWORD *)v22 )
          {
            v23 = v25;
            v27 = (_DWORD *)v22;
            goto LABEL_27;
          }
          if ( v69 )
            goto LABEL_111;
          *((_QWORD *)v25 + 1) = v22;
          v22 = *((_QWORD *)v25 - 1);
          v68 = v25 - 8;
          if ( v14 == (_DWORD *)v22 )
            break;
LABEL_96:
          v31 = v25;
          v30 = *(_WORD *)(v22 + 4);
          v25 = v68;
          if ( *v24 != 5 )
            goto LABEL_22;
        }
LABEL_143:
        *(_QWORD *)v25 = v14;
LABEL_44:
        v10 += 8;
      }
      while ( v5 != v10 );
LABEL_45:
      if ( a2 - v5 <= 48 )
      {
        result = v86;
        v6 = v89;
        if ( a2 == v5 )
          goto LABEL_80;
        v33 = v9 + 64;
        if ( a2 == v9 + 64 )
          goto LABEL_80;
        goto LABEL_48;
      }
    }
  }
  if ( a2 == src )
    return result;
  v33 = src + 8;
  if ( a2 == src + 8 )
    return result;
LABEL_48:
  v87 = a4;
  v34 = result;
  v35 = v5;
  v36 = v33;
  do
  {
    while ( 1 )
    {
      v37 = *(_DWORD **)v35;
      v38 = *(_DWORD **)v36;
      if ( *(_QWORD *)v35 == *(_QWORD *)v36 )
        goto LABEL_61;
      v39 = *((_WORD *)v37 + 2);
      if ( *((_WORD *)v38 + 2)
        || (v40 = *((_QWORD *)v38 + 2), (v41 = *(_DWORD **)(v40 + 24)) == nullptr)
        || *v41 != 5
        || v41[1] != 9
        || v38[6] != 2 )
      {
        if ( !v39 && (v42 = *(_DWORD **)(*((_QWORD *)v37 + 2) + 24LL)) != nullptr && *v42 == 5 && v42[1] == 9 )
        {
          v43 = *(_DWORD **)v36;
          v44 = *(_DWORD **)v35;
          if ( v37[6] == 2 )
          {
            v44 = *((_DWORD **)v37 + 5);
            if ( v38 == v44 )
              goto LABEL_49;
          }
        }
        else
        {
          v43 = *(_DWORD **)v36;
          v44 = *(_DWORD **)v35;
        }
        goto LABEL_60;
      }
      v77 = *((_DWORD **)v38 + 4);
      v43 = *((_DWORD **)v38 + 5);
      if ( !v39 )
      {
        v78 = *(_DWORD **)(*((_QWORD *)v37 + 2) + 24LL);
        if ( !v78 )
        {
          if ( v37 == v43 )
            goto LABEL_170;
LABEL_201:
          v44 = *(_DWORD **)v35;
          goto LABEL_60;
        }
        if ( *v78 == 5 )
          break;
      }
      v44 = *(_DWORD **)v35;
      if ( v37 != v43 )
        goto LABEL_60;
LABEL_170:
      if ( v77 )
      {
        v45 = *((_QWORD *)v36 - 1);
        v46 = v36 - 8;
        if ( v38 == (_DWORD *)v45 )
        {
LABEL_172:
          *(_QWORD *)v36 = v38;
          goto LABEL_78;
        }
        goto LABEL_64;
      }
LABEL_49:
      if ( v36 - v35 <= 8 )
      {
        if ( v36 - v35 == 8 )
          *(_QWORD *)v36 = v37;
      }
      else
      {
        memmove(v35 + 8, v35, v36 - v35);
      }
      v36 += 8;
      *(_QWORD *)v35 = v38;
      if ( a2 == v36 )
        goto LABEL_79;
    }
    if ( v78[1] != 9 )
    {
      if ( v37 == v43 )
        goto LABEL_190;
      goto LABEL_201;
    }
    if ( v37[6] == 2 )
    {
      v44 = *((_DWORD **)v37 + 5);
      if ( v43 == v44 )
      {
        if ( !v77 )
          goto LABEL_49;
        v81 = *((_DWORD **)v37 + 4);
        if ( v81 )
        {
          if ( *v77 < *v81 )
            goto LABEL_49;
        }
        goto LABEL_61;
      }
    }
    else
    {
      v44 = *(_DWORD **)v35;
      if ( v37 == v43 )
      {
LABEL_190:
        if ( !v77 )
          goto LABEL_49;
        goto LABEL_61;
      }
    }
LABEL_60:
    if ( *v43 < *v44 )
      goto LABEL_49;
LABEL_61:
    v45 = *((_QWORD *)v36 - 1);
    v46 = v36 - 8;
    if ( v38 == (_DWORD *)v45 )
      goto LABEL_172;
    if ( *((_WORD *)v38 + 2) )
    {
      while ( 1 )
      {
        if ( !*(_WORD *)(v45 + 4)
          && (v71 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL)) != nullptr
          && *v71 == 5
          && v71[1] == 9
          && *(_DWORD *)(v45 + 24) == 2 )
        {
          v72 = *(_DWORD **)(v45 + 40);
          if ( v38 == v72 )
            goto LABEL_122;
        }
        else
        {
          v72 = (_DWORD *)v45;
          if ( v38 == (_DWORD *)v45 )
            goto LABEL_122;
        }
        if ( *v38 >= *v72 )
        {
          *((_QWORD *)v46 + 1) = v38;
          goto LABEL_78;
        }
LABEL_122:
        *((_QWORD *)v46 + 1) = v45;
        v45 = *((_QWORD *)v46 - 1);
        if ( (_DWORD *)v45 == v38 )
        {
          *(_QWORD *)v46 = v38;
          goto LABEL_78;
        }
        v46 -= 8;
      }
    }
    v40 = *((_QWORD *)v38 + 2);
LABEL_64:
    v47 = *(_DWORD **)(v40 + 24);
    while ( 1 )
    {
      v49 = v38;
      v50 = nullptr;
      if ( v47 && *v47 == 5 && v47[1] == 9 && v38[6] == 2 )
      {
        v50 = *((_DWORD **)v38 + 4);
        v49 = *((_DWORD **)v38 + 5);
      }
      if ( !*(_WORD *)(v45 + 4) )
      {
        v51 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
        if ( v51 )
        {
          if ( *v51 == 5 && v51[1] == 9 && *(_DWORD *)(v45 + 24) == 2 )
            break;
        }
      }
      v52 = (_DWORD *)v45;
      if ( (_DWORD *)v45 != v49 )
        goto LABEL_65;
      if ( v50 )
        goto LABEL_76;
LABEL_67:
      *((_QWORD *)v46 + 1) = v45;
      v45 = *((_QWORD *)v46 - 1);
      if ( v38 == (_DWORD *)v45 )
        goto LABEL_77;
      v46 -= 8;
    }
    v52 = *(_DWORD **)(v45 + 40);
    if ( v52 != v49 )
    {
LABEL_65:
      v48 = *v49 < *v52;
      goto LABEL_66;
    }
    if ( !v50 )
      goto LABEL_67;
    v75 = *(_DWORD **)(v45 + 32);
    if ( v75 )
    {
      v48 = *v50 < *v75;
LABEL_66:
      if ( !v48 )
        goto LABEL_76;
      goto LABEL_67;
    }
LABEL_76:
    v46 += 8;
LABEL_77:
    *(_QWORD *)v46 = v38;
LABEL_78:
    v36 += 8;
  }
  while ( a2 != v36 );
LABEL_79:
  a4 = v87;
  result = v34;
LABEL_80:
  v53 = 7;
  if ( result > 56 )
  {
    while ( 1 )
    {
      v54 = 2 * v53;
      if ( v83 < 2 * v53 )
      {
        v63 = v83;
        v55 = a3;
        v57 = src;
      }
      else
      {
        v55 = a3;
        v88 = v6;
        v56 = 16 * v53;
        v57 = src;
        v90 = v53;
        v58 = -8 * v53;
        v59 = a4;
        v60 = v56;
        v61 = v58;
        do
        {
          v62 = v57;
          v57 += v60;
          v55 = (_QWORD *)sub_4972A0(v62, &v57[v61], &v57[v61], v57, v55);
          v63 = (a2 - v57) >> 3;
        }
        while ( v54 <= v63 );
        a4 = v59;
        v6 = v88;
        v53 = v90;
      }
      if ( v53 <= v63 )
        v63 = v53;
      v53 *= 4;
      sub_4972A0(v57, &v57[8 * v63], &v57[8 * v63], a2, v55);
      if ( v83 < v53 )
        break;
      v64 = src;
      v65 = (char *)a3;
      do
      {
        v66 = v65;
        v65 += 8 * v53;
        v64 = (_QWORD *)sub_4972A0(v66, &v65[8 * v54 - 8 * v53], &v65[8 * v54 - 8 * v53], v65, v64);
        v67 = (v6 - v65) >> 3;
      }
      while ( v53 <= v67 );
      if ( v67 > v54 )
        v67 = v54;
      result = sub_4972A0(v65, &v65[8 * v67], &v65[8 * v67], v6, v64);
      if ( v83 <= v53 )
        return result;
    }
    v76 = v83;
    if ( v83 > v54 )
      v76 = v54;
    return sub_4972A0(a3, &a3[v76], (char *)&a3[v76], v6, src);
  }
  return result;
}

