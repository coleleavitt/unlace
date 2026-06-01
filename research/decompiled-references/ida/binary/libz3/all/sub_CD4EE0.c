__int64 __fastcall sub_CD4EE0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // al
  unsigned int v10; // r13d
  __int64 v11; // r12
  unsigned int i; // r15d
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edi
  _QWORD *v18; // rdx
  int v19; // edx
  __int64 v20; // rsi
  unsigned int *v21; // rsi
  __int64 v22; // rax
  int v23; // edx
  unsigned int **v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 (*v31)(void); // rdx
  __int64 v32; // rdx
  unsigned int v33; // r14d
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r12
  __int64 v37; // r15
  unsigned int *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 *v46; // rsi
  __int64 v47; // rdx
  char v48; // al
  unsigned int v49; // r12d
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  int v54; // ecx
  _QWORD *v55; // rdx
  int v56; // edx
  __int64 v57; // rsi
  unsigned int *v58; // rsi
  __int64 v59; // rax
  int v60; // edx
  unsigned int **v61; // rax
  __int64 v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 *v65; // rdi
  __int64 result; // rax
  __int64 (__fastcall *v67)(__int64); // rdx
  __int64 v68; // rdx
  unsigned int v69; // r13d
  __int64 *v70; // r14
  __int64 v71; // rbp
  __int64 v72; // r15
  unsigned int *v73; // rax
  _QWORD *v74; // rax
  __int64 *v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 (*v83)(void); // rdx
  int v84; // eax
  __int64 (*v85)(void); // rdx
  int v86; // eax
  int v87; // [rsp+0h] [rbp-78h]
  _QWORD *v88; // [rsp+8h] [rbp-70h]
  _QWORD *v89; // [rsp+8h] [rbp-70h]
  _QWORD *v90; // [rsp+8h] [rbp-70h]
  _QWORD *v91; // [rsp+10h] [rbp-68h]
  unsigned int v92; // [rsp+10h] [rbp-68h]
  int v93; // [rsp+18h] [rbp-60h]
  int v94[2]; // [rsp+18h] [rbp-60h]
  _QWORD *v95; // [rsp+20h] [rbp-58h]
  unsigned int v96; // [rsp+28h] [rbp-50h]
  int v97; // [rsp+28h] [rbp-50h]
  int v98; // [rsp+2Ch] [rbp-4Ch]
  int v99; // [rsp+2Ch] [rbp-4Ch]
  int v100[2]; // [rsp+30h] [rbp-48h] BYREF
  int v101[2]; // [rsp+38h] [rbp-40h]
  int v102; // [rsp+40h] [rbp-38h]
  void *v103; // [rsp+48h] [rbp-30h]
  int v104; // [rsp+50h] [rbp-28h]

  v4 = *(_QWORD **)(a1 + 8);
  v5 = *(__int64 (**)(void))(*v4 + 56LL);
  if ( (char *)v5 == (char *)sub_CD0230 )
  {
    v6 = v4[8];
    if ( v6 )
      v98 = *(_DWORD *)(v6 - 4);
    else
      v98 = 0;
  }
  else
  {
    v98 = v5();
  }
  v7 = a2[9];
  v8 = *(_QWORD *)a1;
  if ( !v7 )
  {
    *(_QWORD *)v100 = 0;
    *(_QWORD *)v101 = v8;
    goto LABEL_52;
  }
  v9 = *(_BYTE *)(v7 + 3) >> 6;
  if ( !v9 )
  {
    do
    {
      v7 = *(_QWORD *)(v7 + 16);
      v9 = *(_BYTE *)(v7 + 3) >> 6;
    }
    while ( !v9 );
    if ( v9 != 1 )
      goto LABEL_7;
LABEL_146:
    v10 = *(_DWORD *)(v7 + 4) + 1;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_146;
LABEL_7:
  if ( v9 == 2 )
    v10 = *(_DWORD *)(v7 + 4) - 1;
  else
    v10 = *(_DWORD *)(v7 + 4);
LABEL_9:
  *(_QWORD *)v100 = 0;
  *(_QWORD *)v101 = v8;
  if ( (*((_BYTE *)a2 + 123) & 0x20) == 0 && v10 )
  {
    v11 = 0;
    for ( i = 0; (*((_BYTE *)a2 + 123) & 0x20) == 0 && i < v10; ++i )
    {
      *(_DWORD *)(a1 + 552) = 0;
      v20 = *a2;
      if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
      {
        v21 = *(unsigned int **)(v20 + 864);
        goto LABEL_27;
      }
      v22 = a2[9];
      v23 = 17;
      while ( 1 )
      {
        if ( *(char *)(v22 + 3) < 0 )
        {
          if ( *(_BYTE *)(v22 + 3) >> 6 != 2 )
          {
            v24 = (unsigned int **)(v11 + *(_QWORD *)(v22 + 16));
            goto LABEL_38;
          }
          goto LABEL_40;
        }
        if ( i == *(_DWORD *)(v22 + 4) )
          break;
LABEL_40:
        v22 = *(_QWORD *)(v22 + 16);
        if ( !--v23 )
        {
          sub_233F80((__int64 *)(v20 + 616), (_DWORD *)a2 + 18);
          v24 = (unsigned int **)(v11 + *(_QWORD *)(a2[9] + 16));
          goto LABEL_38;
        }
      }
      v24 = (unsigned int **)(v22 + 8);
LABEL_38:
      v21 = *v24;
LABEL_27:
      sub_CD2680(a1, v21, (__int64 *)v100);
      if ( i >= v10 - 1 )
        goto LABEL_28;
      v13 = *(_QWORD *)v100;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 856LL) == *(_QWORD *)v100
        || *(_QWORD *)(*(_QWORD *)a1 + 864LL) == *(_QWORD *)v100 )
      {
        goto LABEL_28;
      }
      if ( (*((_BYTE *)a2 + 123) & 0x10) == 0 )
        goto LABEL_45;
      v14 = a2[13];
      v15 = *a2;
      v16 = v14;
      v17 = 17;
      while ( 2 )
      {
        if ( *(char *)(v16 + 3) >= 0 )
        {
          if ( i == *(_DWORD *)(v16 + 4) )
          {
            v18 = (_QWORD *)(v16 + 8);
LABEL_19:
            if ( !*v18 )
              goto LABEL_45;
            goto LABEL_20;
          }
        }
        else if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
        {
          v18 = (_QWORD *)(v11 + *(_QWORD *)(v16 + 16));
          goto LABEL_19;
        }
        v16 = *(_QWORD *)(v16 + 16);
        if ( --v17 )
          continue;
        break;
      }
      sub_236900((_QWORD *)(v15 + 672), a2 + 13);
      v13 = *(_QWORD *)v100;
      if ( *(_QWORD *)(*(_QWORD *)(a2[13] + 16) + v11) )
        goto LABEL_28;
LABEL_45:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
              *(_QWORD *)(a1 + 8),
              v13,
              0) )
      {
        v25 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v26 = *(_QWORD *)v100;
        if ( *(_QWORD *)v100
          && (v27 = *(_QWORD *)v101,
              v28 = *(_DWORD *)(*(_QWORD *)v100 + 8LL) == 1,
              --*(_DWORD *)(*(_QWORD *)v100 + 8LL),
              v28) )
        {
          v88 = (_QWORD *)v25;
          sub_15D7BC0(v27, v26);
          *(_QWORD *)v100 = v88;
        }
        else
        {
          *(_QWORD *)v100 = v25;
        }
      }
LABEL_28:
      if ( (*((_BYTE *)a2 + 123) & 0x10) != 0 )
      {
        v15 = *a2;
        v14 = a2[13];
LABEL_20:
        v19 = 17;
        do
        {
          if ( *(char *)(v14 + 3) >= 0 )
          {
            if ( i == *(_DWORD *)(v14 + 4) )
              goto LABEL_23;
          }
          else if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
          {
            goto LABEL_23;
          }
          v14 = *(_QWORD *)(v14 + 16);
          --v19;
        }
        while ( v19 );
        sub_236900((_QWORD *)(v15 + 672), a2 + 13);
      }
LABEL_23:
      sub_EDBFA0((int)a2);
      v11 += 8;
    }
  }
LABEL_52:
  v29 = *(_QWORD **)(a1 + 8);
  v30 = *v29;
  v31 = *(__int64 (**)(void))(*v29 + 56LL);
  if ( (char *)v31 == (char *)sub_CD0230 )
  {
    v32 = v29[8];
    if ( v32 )
    {
      v96 = *(_DWORD *)(v32 - 4) - v98;
      if ( !v96 )
        goto LABEL_72;
      goto LABEL_55;
    }
    if ( !v98 )
      goto LABEL_72;
    v93 = 0;
    v96 = -v98;
  }
  else
  {
    v96 = v31() - v98;
    if ( !v96 )
      goto LABEL_72;
    v29 = *(_QWORD **)(a1 + 8);
    v30 = *v29;
    v85 = *(__int64 (**)(void))(*v29 + 56LL);
    if ( (char *)v85 == (char *)sub_CD0230 )
    {
      v32 = v29[8];
      if ( v32 )
      {
LABEL_55:
        v93 = *(_DWORD *)(v32 - 4);
        goto LABEL_56;
      }
      v93 = 0;
    }
    else
    {
      v86 = v85();
      v29 = *(_QWORD **)(a1 + 8);
      v93 = v86;
      v30 = *v29;
    }
  }
LABEL_56:
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v30 + 40))(v29, v96);
  v33 = v93;
  v34 = *(_QWORD *)(a1 + 544);
  while ( v34 )
  {
    if ( v33 >= *(_DWORD *)(v34 - 4) )
    {
      --v33;
      if ( v93 - v33 >= v96 )
        break;
    }
    else
    {
      v35 = (_QWORD *)(v34 + 8LL * v33);
      v36 = *v35;
      v91 = v35;
      if ( *v35 )
      {
        v37 = v36 + 8LL * *(unsigned int *)(v36 - 4);
        while ( v36 != v37 )
        {
          v38 = *(unsigned int **)(v37 - 8);
          v37 -= 8;
          v39 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v38);
          v40 = (_QWORD *)v39[1];
          v41 = *v40;
          if ( *v40 )
          {
            v42 = *(_QWORD *)a1;
            v28 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v28 )
            {
              v88 = v39;
              sub_15D7BC0(v42, v41);
              v39 = v88;
              v40 = (_QWORD *)v88[1];
            }
          }
          v43 = v40[2];
          v39[1] = v43;
          if ( !v43 )
          {
            v44 = *v39;
            if ( *v39 )
            {
              v45 = *(_QWORD *)a1;
              v28 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v28 )
              {
                v95 = v40;
                v88 = v39;
                sub_15D7BC0(v45, v44);
                v40 = v95;
                v39 = v88;
              }
            }
            *v39 = 0;
          }
          sub_17E9C40(a1 + 16, 24, v40);
        }
        if ( *v91 )
          *(_DWORD *)(*v91 - 4LL) = 0;
      }
      --v33;
      if ( v93 - v33 >= v96 )
        break;
      v34 = *(_QWORD *)(a1 + 544);
    }
  }
LABEL_72:
  v46 = a2;
  sub_EE1A60(a1 + 560, v87, (int)v88, (__int64)v91, v93, (int)v95, v96, v100[0], v101[0], v102, v103, v104);
  v47 = a2[9];
  if ( v47 )
  {
    v48 = *(_BYTE *)(v47 + 3) >> 6;
    if ( v48 )
    {
      if ( v48 != 1 )
      {
LABEL_75:
        if ( v48 == 2 )
          v49 = *(_DWORD *)(v47 + 4) - 1;
        else
          v49 = *(_DWORD *)(v47 + 4);
        while ( 1 )
        {
LABEL_89:
          if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 || !v49 )
            goto LABEL_117;
          *(_DWORD *)(a1 + 552) = 0;
          v57 = *a2;
          --v49;
          if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
          {
            v58 = *(unsigned int **)(v57 + 864);
            goto LABEL_93;
          }
          v59 = a2[9];
          v60 = 17;
          while ( 1 )
          {
            if ( *(char *)(v59 + 3) < 0 )
            {
              if ( *(_BYTE *)(v59 + 3) >> 6 != 2 )
              {
                v61 = (unsigned int **)(*(_QWORD *)(v59 + 16) + 8LL * v49);
                goto LABEL_104;
              }
              goto LABEL_106;
            }
            if ( v49 == *(_DWORD *)(v59 + 4) )
              break;
LABEL_106:
            v59 = *(_QWORD *)(v59 + 16);
            if ( !--v60 )
            {
              sub_233F80((__int64 *)(v57 + 616), (_DWORD *)a2 + 18);
              v61 = (unsigned int **)(*(_QWORD *)(a2[9] + 16) + 8LL * v49);
              goto LABEL_104;
            }
          }
          v61 = (unsigned int **)(v59 + 8);
LABEL_104:
          v58 = *v61;
LABEL_93:
          sub_CD2680(a1, v58, (__int64 *)v100);
          if ( !v49 )
            goto LABEL_94;
          v50 = *(_QWORD *)v100;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 856LL) == *(_QWORD *)v100
            || *(_QWORD *)v100 == *(_QWORD *)(*(_QWORD *)a1 + 864LL) )
          {
            goto LABEL_94;
          }
          if ( (*((_BYTE *)a2 + 123) & 0x10) == 0 )
            goto LABEL_111;
          v51 = a2[13];
          v52 = *a2;
          v53 = v51;
          v54 = 17;
          while ( 2 )
          {
            if ( *(char *)(v53 + 3) >= 0 )
            {
              if ( v49 == *(_DWORD *)(v53 + 4) )
              {
                v55 = (_QWORD *)(v53 + 8);
LABEL_84:
                if ( !*v55 )
                  goto LABEL_111;
                goto LABEL_85;
              }
            }
            else if ( *(_BYTE *)(v53 + 3) >> 6 != 2 )
            {
              v55 = (_QWORD *)(*(_QWORD *)(v53 + 16) + 8LL * v49);
              goto LABEL_84;
            }
            v53 = *(_QWORD *)(v53 + 16);
            if ( --v54 )
              continue;
            break;
          }
          sub_236900((_QWORD *)(v52 + 672), a2 + 13);
          v50 = *(_QWORD *)v100;
          if ( *(_QWORD *)(*(_QWORD *)(a2[13] + 16) + 8LL * v49) )
            goto LABEL_94;
LABEL_111:
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
                  *(_QWORD *)(a1 + 8),
                  v50,
                  0) )
          {
            v62 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
            if ( v62 )
              ++*(_DWORD *)(v62 + 8);
            v63 = *(_QWORD *)v100;
            if ( *(_QWORD *)v100
              && (v64 = *(_QWORD *)v101,
                  v28 = *(_DWORD *)(*(_QWORD *)v100 + 8LL) == 1,
                  --*(_DWORD *)(*(_QWORD *)v100 + 8LL),
                  v28) )
            {
              sub_15D7BC0(v64, v63);
              *(_QWORD *)v100 = v62;
            }
            else
            {
              *(_QWORD *)v100 = v62;
            }
          }
LABEL_94:
          if ( (*((_BYTE *)a2 + 123) & 0x10) != 0 )
          {
            v52 = *a2;
            v51 = a2[13];
LABEL_85:
            v56 = 17;
            do
            {
              if ( *(char *)(v51 + 3) >= 0 )
              {
                if ( v49 == *(_DWORD *)(v51 + 4) )
                  goto LABEL_88;
              }
              else if ( *(_BYTE *)(v51 + 3) >> 6 != 2 )
              {
                goto LABEL_88;
              }
              v51 = *(_QWORD *)(v51 + 16);
              --v56;
            }
            while ( v56 );
            sub_236900((_QWORD *)(v52 + 672), a2 + 13);
          }
LABEL_88:
          v46 = (__int64 *)v49;
          sub_EDBFA0((int)a2);
        }
      }
    }
    else
    {
      do
      {
        v47 = *(_QWORD *)(v47 + 16);
        v48 = *(_BYTE *)(v47 + 3) >> 6;
      }
      while ( !v48 );
      if ( v48 != 1 )
        goto LABEL_75;
    }
    v49 = *(_DWORD *)(v47 + 4) + 1;
    goto LABEL_89;
  }
LABEL_117:
  v65 = *(__int64 **)(a1 + 8);
  result = *v65;
  v67 = *(__int64 (__fastcall **)(__int64))(*v65 + 56);
  if ( v67 == sub_CD0230 )
  {
    v68 = v65[8];
    if ( !v68 )
    {
      if ( !v99 )
        goto LABEL_137;
      v97 = 0;
      v92 = -v99;
      goto LABEL_121;
    }
    v92 = *(_DWORD *)(v68 - 4) - v99;
    if ( !v92 )
      goto LABEL_137;
    goto LABEL_120;
  }
  result = ((unsigned int (__fastcall *)(__int64 *, __int64 *))v67)(v65, v46) - v99;
  v92 = result;
  if ( !(_DWORD)result )
    goto LABEL_137;
  v65 = *(__int64 **)(a1 + 8);
  result = *v65;
  v83 = *(__int64 (**)(void))(*v65 + 56);
  if ( (char *)v83 == (char *)sub_CD0230 )
  {
    v68 = v65[8];
    v97 = 0;
    if ( v68 )
LABEL_120:
      v97 = *(_DWORD *)(v68 - 4);
  }
  else
  {
    v84 = v83();
    v65 = *(__int64 **)(a1 + 8);
    v97 = v84;
    result = *v65;
  }
LABEL_121:
  (*(void (__fastcall **)(__int64 *, _QWORD))(result + 40))(v65, v92);
  v69 = v97;
  result = *(_QWORD *)(a1 + 544);
  while ( result )
  {
    if ( v69 >= *(_DWORD *)(result - 4) )
    {
      --v69;
      if ( v97 - v69 >= v92 )
        break;
    }
    else
    {
      v70 = (__int64 *)(result + 8LL * v69);
      v71 = *v70;
      if ( *v70 )
      {
        v72 = v71 + 8LL * *(unsigned int *)(v71 - 4);
        while ( v71 != v72 )
        {
          v73 = *(unsigned int **)(v72 - 8);
          v72 -= 8;
          v74 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v73);
          v75 = (__int64 *)v74[1];
          v76 = *v75;
          if ( *v75 )
          {
            v77 = *(_QWORD *)a1;
            v28 = (*(_DWORD *)(v76 + 8))-- == 1;
            if ( v28 )
            {
              v89 = v74;
              sub_15D7BC0(v77, v76);
              v74 = v89;
              v75 = (__int64 *)v89[1];
            }
          }
          v78 = v75[2];
          v74[1] = v78;
          if ( !v78 )
          {
            v79 = *v74;
            if ( *v74 )
            {
              v80 = *(_QWORD *)a1;
              v28 = (*(_DWORD *)(v79 + 8))-- == 1;
              if ( v28 )
              {
                *(_QWORD *)v94 = v75;
                v90 = v74;
                sub_15D7BC0(v80, v79);
                v75 = *(__int64 **)v94;
                v74 = v90;
              }
            }
            *v74 = 0;
          }
          sub_17E9C40(a1 + 16, 24, v75);
        }
        if ( *v70 )
          *(_DWORD *)(*v70 - 4) = 0;
      }
      --v69;
      result = v97 - v69;
      if ( (unsigned int)result >= v92 )
        break;
      result = *(_QWORD *)(a1 + 544);
    }
  }
LABEL_137:
  v81 = *(_QWORD *)v100;
  if ( *(_QWORD *)v100 )
  {
    v82 = *(_QWORD *)v101;
    v28 = (*(_DWORD *)(*(_QWORD *)v100 + 8LL))-- == 1;
    if ( v28 )
      return sub_15D7BC0(v82, v81);
  }
  return result;
}

