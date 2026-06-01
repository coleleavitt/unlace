__int64 __fastcall sub_E23B40(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rax
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  unsigned int v13; // eax
  _QWORD *v14; // r13
  void (__fastcall *v15)(_QWORD *, _QWORD); // r15
  __int64 (__fastcall *v16)(__int64); // rax
  _QWORD *v17; // rdi
  int v18; // esi
  _QWORD *v19; // rdi
  __int64 v20; // r12
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r15
  __int64 v26; // rdx
  __int64 *v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  bool v30; // zf
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // r11
  __int64 v34; // r12
  int v35; // edx
  unsigned int v36; // r14d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 *v39; // r9
  __int64 *v40; // r10
  __int64 v41; // r13
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // esi
  unsigned int v45; // edx
  __int64 *v46; // rcx
  __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 *i; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 result; // rax
  __int64 v53; // r10
  int v54; // edx
  unsigned int v55; // r14d
  unsigned int v56; // esi
  unsigned int v57; // ecx
  __int64 v58; // r12
  unsigned __int64 v59; // r13
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 *v62; // r9
  int v63; // esi
  unsigned int v64; // edx
  __int64 *v65; // rcx
  __int64 v66; // rdx
  __int64 *v67; // rdi
  __int64 *j; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rsi
  unsigned int v73; // edx
  int v74; // eax
  unsigned int v75; // eax
  _QWORD *v76; // rax
  _QWORD *v77; // rbx
  __int64 v78; // rax
  char *v79; // r15
  __int64 v80; // r10
  unsigned int v81; // r11d
  char *v82; // r9
  _QWORD *v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // rdx
  _QWORD *v86; // rax
  unsigned int v87; // edx
  unsigned __int64 v88; // [rsp+8h] [rbp-60h]
  unsigned int v89; // [rsp+8h] [rbp-60h]
  unsigned int v91; // [rsp+18h] [rbp-50h]

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 112);
    v5 = *(_DWORD *)(v3 - 4) - a2;
    if ( !v4 )
    {
      *(_DWORD *)(v3 - 4) = v5;
      goto LABEL_37;
    }
    v6 = *(_DWORD *)(v4 - 4);
    v91 = *(_DWORD *)(v3 + 4LL * (unsigned int)(*(_DWORD *)(v3 - 4) - a2));
    v7 = v6 - 1;
    if ( v91 >= v6 )
    {
      *(_DWORD *)(v3 - 4) = v5;
      goto LABEL_25;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 112);
    if ( !v4 )
      goto LABEL_37;
    v23 = *(unsigned int *)(v4 - 4);
    v91 = *(_DWORD *)(4LL * (unsigned int)-a2);
    v7 = v23 - 1;
    if ( v91 >= (unsigned int)v23 )
    {
LABEL_26:
      v24 = 40 * v23;
      v25 = (__int64 *)(v4 + v24);
      v26 = 40LL * v91;
      v27 = (__int64 *)(v4 + v26);
      if ( v26 != v24 )
      {
        do
        {
          while ( 1 )
          {
            v31 = v27[2];
            if ( v31 )
            {
              v32 = v27[3];
              v30 = (*(_DWORD *)(v31 + 8))-- == 1;
              if ( v30 )
                sub_15D7BC0(v32, v31);
            }
            v28 = *v27;
            if ( *v27 )
            {
              v29 = v27[1];
              v30 = (*(_DWORD *)(v28 + 8))-- == 1;
              if ( v30 )
                break;
            }
            v27 += 5;
            if ( v25 == v27 )
              goto LABEL_35;
          }
          sub_15D7BC0(v29, v28);
          v27 += 5;
        }
        while ( v25 != v27 );
LABEL_35:
        v4 = *(_QWORD *)(a1 + 112);
      }
      *(_DWORD *)(v4 - 4) = v91;
      goto LABEL_37;
    }
  }
  v8 = 40LL * v7;
  v88 = 40 * (v7 - (unsigned __int64)(v7 - v91));
  while ( 1 )
  {
    v19 = *(_QWORD **)(a1 + 104);
    v20 = v8 + v4;
    v21 = *(_DWORD *)(v20 + 36);
    v10 = *(__int64 (**)(void))(*v19 + 208LL);
    if ( (char *)v10 == (char *)sub_E23640
      && (v9 = (_QWORD *)v19[13], v10 = *(__int64 (**)(void))(*v9 + 208LL), (char *)v10 == (char *)sub_E23640)
      && (v11 = (_QWORD *)v9[13], v10 = *(__int64 (**)(void))(*v11 + 208LL), (char *)v10 == (char *)sub_E23640)
      && (v12 = (_QWORD **)v11[13], v10 = (__int64 (*)(void))(*v12)[26], (char *)v10 == (char *)sub_E23640) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[13] + 208LL))(v12[13]);
    }
    else
    {
      v13 = v10();
    }
    if ( v21 < v13 )
    {
      v14 = *(_QWORD **)(a1 + 104);
      v15 = *(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 200LL);
      v16 = *(__int64 (__fastcall **)(__int64))(*v14 + 208LL);
      if ( v16 == sub_E23640 )
      {
        v17 = (_QWORD *)v14[13];
        v16 = *(__int64 (__fastcall **)(__int64))(*v17 + 208LL);
        if ( v16 == sub_E23640 )
        {
          v17 = (_QWORD *)v17[13];
          v16 = *(__int64 (__fastcall **)(__int64))(*v17 + 208LL);
          if ( v16 == sub_E23640 )
          {
            v17 = (_QWORD *)v17[13];
            v16 = *(__int64 (__fastcall **)(__int64))(*v17 + 208LL);
            if ( v16 == sub_E23640 )
            {
              v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17[13] + 208LL))(v17[13]);
LABEL_15:
              v15(v14, (unsigned int)(v18 - *(_DWORD *)(v20 + 36)));
              goto LABEL_16;
            }
          }
        }
      }
      else
      {
        v17 = *(_QWORD **)(a1 + 104);
      }
      v18 = v16((__int64)v17);
      goto LABEL_15;
    }
LABEL_16:
    v4 = *(_QWORD *)(a1 + 112);
    if ( v88 == v8 )
      break;
    v8 -= 40;
  }
  v22 = *(_QWORD *)(a1 + 120);
  if ( v22 )
    *(_DWORD *)(v22 - 4) -= a2;
  if ( v4 )
  {
LABEL_25:
    v23 = *(unsigned int *)(v4 - 4);
    goto LABEL_26;
  }
LABEL_37:
  v33 = *(_QWORD *)(a1 + 160);
  if ( v33 )
  {
    v34 = *(_QWORD *)(a1 + 152);
    v35 = *(_DWORD *)(v33 - 4) - a2;
    if ( !v34 )
    {
      *(_DWORD *)(v33 - 4) = v35;
      goto LABEL_61;
    }
    v36 = *(_DWORD *)(v33 + 4LL * (unsigned int)(*(_DWORD *)(v33 - 4) - a2));
    v37 = *(_DWORD *)(v34 - 4);
    v38 = v37 - 1;
    if ( v36 >= v37 )
    {
      *(_DWORD *)(v33 - 4) = v35;
      goto LABEL_60;
    }
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 152);
    if ( !v34 )
      goto LABEL_61;
    v36 = *(_DWORD *)(4LL * (unsigned int)-a2);
    v87 = *(_DWORD *)(v34 - 4);
    v38 = v87 - 1;
    if ( v36 >= v87 )
      goto LABEL_60;
  }
  v39 = *(__int64 **)(a1 + 128);
  v40 = (__int64 *)(v34 + 8LL * v38);
  v41 = (__int64)&v40[-(v38 - v36) - 1];
  while ( 2 )
  {
    v42 = *v40;
    v43 = *(unsigned int *)(a1 + 136);
    v44 = *(_DWORD *)(*v40 + 12);
    v45 = v43 - 1;
    v43 *= 16;
    v46 = (__int64 *)((char *)v39 + v43);
    v47 = 16LL * (v44 & v45);
    v48 = &v39[(unsigned __int64)v47 / 8];
    if ( v47 == v43 )
    {
LABEL_49:
      if ( v39 != v48 )
      {
        for ( i = v39; v48 != i; i += 2 )
        {
          v51 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v51 + 12) == v44 && v42 == v51 )
              goto LABEL_57;
          }
          else if ( !v51 )
          {
            break;
          }
        }
      }
LABEL_48:
      BUG();
    }
    i = &v39[(unsigned __int64)v47 / 8];
    while ( 2 )
    {
      v50 = *i;
      if ( (unsigned __int64)*i <= 1 )
      {
        if ( !v50 )
          goto LABEL_48;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(v50 + 12) != v44 || v42 != v50 )
      {
LABEL_45:
        i += 2;
        if ( v46 == i )
          goto LABEL_49;
        continue;
      }
      break;
    }
LABEL_57:
    --v40;
    --*(_DWORD *)(i[1] - 4);
    if ( (__int64 *)v41 != v40 )
      continue;
    break;
  }
  if ( v33 )
    *(_DWORD *)(v33 - 4) -= a2;
LABEL_60:
  *(_DWORD *)(v34 - 4) = v36;
LABEL_61:
  result = *(_QWORD *)(a1 + 200);
  if ( result )
  {
    v53 = *(_QWORD *)(a1 + 192);
    v54 = *(_DWORD *)(result - 4) - a2;
    if ( !v53 )
    {
      *(_DWORD *)(result - 4) = v54;
      goto LABEL_86;
    }
    v55 = *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4) - a2));
    v56 = *(_DWORD *)(v53 - 4);
    v57 = v56 - 1;
    if ( v55 >= v56 )
    {
      *(_DWORD *)(result - 4) = v54;
      goto LABEL_85;
    }
  }
  else
  {
    v53 = *(_QWORD *)(a1 + 192);
    result = (unsigned int)-a2;
    if ( !v53 )
      goto LABEL_86;
    v55 = *(_DWORD *)(4 * result);
    result = *(unsigned int *)(v53 - 4);
    v57 = result - 1;
    if ( v55 >= (unsigned int)result )
      goto LABEL_85;
  }
  v58 = 8LL * v57;
  v59 = 8 * (v57 - (unsigned __int64)(v57 - v55));
  while ( 2 )
  {
    v60 = *(_QWORD *)(v53 + v58);
    v61 = *(unsigned int *)(a1 + 176);
    v62 = *(__int64 **)(a1 + 168);
    v63 = *(_DWORD *)(v60 + 12);
    v64 = v61 - 1;
    v61 *= 8;
    v65 = (__int64 *)((char *)v62 + v61);
    v66 = 8LL * (v63 & v64);
    v67 = &v62[(unsigned __int64)v66 / 8];
    if ( v66 != v61 )
    {
      for ( j = &v62[(unsigned __int64)v66 / 8]; v65 != j; ++j )
      {
        v69 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v69 + 12) == v63 && v60 == v69 )
          {
LABEL_87:
            v72 = j + 1;
            if ( v65 == j + 1 )
              v72 = *(_QWORD **)(a1 + 168);
            v73 = *(_DWORD *)(a1 + 180) - 1;
            if ( *v72 )
            {
              *j = 1;
              v74 = *(_DWORD *)(a1 + 184);
              *(_DWORD *)(a1 + 180) = v73;
              v75 = v74 + 1;
              if ( v73 < 0x40 )
                v73 = 64;
              *(_DWORD *)(a1 + 184) = v75;
              if ( v73 < v75 )
              {
                if ( !(unsigned __int8)sub_186AF10(v67) )
                {
                  v89 = *(_DWORD *)(a1 + 176);
                  v76 = (_QWORD *)sub_186B270(8LL * v89);
                  v77 = v76;
                  if ( v89 )
                    memset(v76, 0, 8LL * v89);
                  v78 = *(unsigned int *)(a1 + 176);
                  v79 = *(char **)(a1 + 168);
                  v80 = 8 * v78;
                  v81 = v78 - 1;
                  v82 = &v79[8 * v78];
                  v83 = &v77[v78];
                  if ( v79 != v82 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v79 > 1u )
                      {
                        v84 = 8LL * (*(_DWORD *)(*(_QWORD *)v79 + 12LL) & v81);
                        v85 = &v77[(unsigned __int64)v84 / 8];
                        if ( v80 == v84 )
                        {
LABEL_123:
                          if ( v77 == v85 )
                          {
LABEL_129:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v86 = v77;
                          while ( *v86 )
                          {
                            if ( v85 == ++v86 )
                              goto LABEL_129;
                          }
                        }
                        else
                        {
                          v86 = &v77[(unsigned __int64)v84 / 8];
                          while ( *v86 )
                          {
                            if ( v83 == ++v86 )
                              goto LABEL_123;
                          }
                        }
                        *v86 = *(_QWORD *)v79;
                      }
                      v79 += 8;
                    }
                    while ( v82 != v79 );
                    v82 = *(char **)(a1 + 168);
                  }
                  if ( v82 )
                    sub_186B220(v82);
                  *(_QWORD *)(a1 + 168) = v77;
                  *(_DWORD *)(a1 + 184) = 0;
                }
                v53 = *(_QWORD *)(a1 + 192);
              }
            }
            else
            {
              *j = 0;
              *(_DWORD *)(a1 + 180) = v73;
            }
            goto LABEL_72;
          }
        }
        else if ( !v69 )
        {
          goto LABEL_72;
        }
      }
    }
    if ( v62 == v67 )
    {
LABEL_72:
      v70 = v58 - 8;
      if ( v58 == v59 )
        break;
      goto LABEL_73;
    }
    j = *(__int64 **)(a1 + 168);
    while ( 2 )
    {
      v71 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v71 + 12) == v63 && v60 == v71 )
          goto LABEL_87;
        goto LABEL_78;
      }
      if ( v71 )
      {
LABEL_78:
        if ( v67 == ++j )
          goto LABEL_72;
        continue;
      }
      break;
    }
    v70 = v58 - 8;
    if ( v58 != v59 )
    {
LABEL_73:
      v58 = v70;
      continue;
    }
    break;
  }
  result = *(_QWORD *)(a1 + 200);
  if ( result )
    *(_DWORD *)(result - 4) -= a2;
  if ( v53 )
LABEL_85:
    *(_DWORD *)(v53 - 4) = v55;
LABEL_86:
  *(_DWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 208) = 0;
  return result;
}

