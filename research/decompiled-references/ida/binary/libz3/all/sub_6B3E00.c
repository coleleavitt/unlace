void __fastcall sub_6B3E00(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned int v5; // r12d
  __int64 (__fastcall *v6)(__int64, unsigned int); // rax
  __int64 v7; // rdi
  int *v8; // rdx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, unsigned int); // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 (__fastcall *v16)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v17)(__int64, unsigned int); // rax
  __int64 v18; // r10
  __int64 v19; // rax
  int v20; // edi
  unsigned int v21; // esi
  int *v22; // rbx
  __int64 v23; // rsi
  int *v24; // r11
  int *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64, unsigned int); // rax
  __int64 v31; // r12
  int *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int *v35; // rax
  __int64 v36; // rax
  int v37; // r10d
  _QWORD *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // edx
  _QWORD *v42; // rsi
  __int64 v43; // rdx
  _QWORD *v44; // r11
  _QWORD *i; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rbx
  unsigned int v48; // ecx
  __int64 *v49; // rdi
  __int64 *v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rdi
  bool v53; // zf
  int v54; // eax
  void *v55; // rbp
  unsigned int v56; // eax
  __int64 v57; // rax
  _QWORD *v58; // rbp
  _QWORD *v59; // r14
  int v60; // r13d
  _QWORD *v61; // rdi
  _QWORD *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // r8d
  _QWORD *v67; // rcx
  unsigned int v68; // edx
  _QWORD *v69; // rsi
  __int64 v70; // rdx
  _QWORD *v71; // rdi
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // r14
  int *v75; // rax
  unsigned int v76; // eax
  void *v77; // r13
  void *v78; // rbp
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // rax
  __int64 v83; // r14
  __int64 v84; // rax
  int v85; // [rsp+8h] [rbp-C0h]
  unsigned int v86; // [rsp+8h] [rbp-C0h]
  __int64 v87; // [rsp+8h] [rbp-C0h]
  unsigned int v88; // [rsp+10h] [rbp-B8h]
  __int64 v89; // [rsp+18h] [rbp-B0h]
  __int64 v90; // [rsp+18h] [rbp-B0h]
  unsigned int v91; // [rsp+18h] [rbp-B0h]
  __int64 (__fastcall *v92)(__int64, unsigned int); // [rsp+20h] [rbp-A8h]
  __int64 (__fastcall *v93)(__int64, unsigned int); // [rsp+20h] [rbp-A8h]
  __int64 v94; // [rsp+28h] [rbp-A0h]
  _QWORD v95[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v96[2]; // [rsp+40h] [rbp-88h] BYREF
  int v97; // [rsp+50h] [rbp-78h] BYREF
  char v98; // [rsp+54h] [rbp-74h]
  __int64 v99; // [rsp+58h] [rbp-70h]
  int v100; // [rsp+60h] [rbp-68h]
  char v101; // [rsp+64h] [rbp-64h]
  __int64 v102; // [rsp+68h] [rbp-60h]
  _QWORD v103[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v104[9]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 728);
  v96[0] = 1;
  v95[0] = 0;
  v3 = *(_QWORD *)(v2 + 16);
  v95[1] = 0;
  v96[1] = 0;
  if ( !v3 )
    goto LABEL_68;
  while ( 1 )
  {
    v85 = *(_DWORD *)(v3 - 4);
    if ( !v85 )
      goto LABEL_68;
LABEL_3:
    v88 = 0;
    v4 = 0;
    v5 = 0;
    v94 = *(_QWORD *)(v2 + 72);
LABEL_4:
    v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 48LL);
    if ( v6 == sub_6AFDD0 )
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + v4);
    else
      v7 = v6(a1, v5);
    v8 = *(int **)(sub_15D1F10(v7) + 24);
    v9 = *(_QWORD *)a1;
    v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 48LL);
    if ( v8 )
    {
      v8 = (int *)*v8;
      if ( (int)v8 >= 0 )
      {
        v11 = *(_QWORD *)(a1 + 40);
        if ( v11 )
        {
          if ( (int)v8 < *(_DWORD *)(v11 - 4) && *(_QWORD *)(v11 + 8LL * (_QWORD)v8) )
          {
            if ( v10 == sub_6AFDD0 )
              v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + v4);
            else
              v12 = v10(a1, v5);
            v13 = *(unsigned int **)(sub_15D1F10(v12) + 24);
            if ( v13 )
              v14 = 8LL * *v13;
            else
              v14 = 0x7FFFFFFF8LL;
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v14);
            v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 56LL);
            v16 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 72LL);
            if ( v16 != sub_6B0060 )
            {
              v92 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 56LL);
              v89 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v14);
              v28 = v16(a1, v5);
              v10 = v92;
              v15 = v89;
              v29 = v28;
              goto LABEL_36;
            }
            v17 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 48LL);
            if ( v17 == sub_6AFDD0 )
            {
              v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + v4);
            }
            else
            {
              v93 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 56LL);
              v90 = v15;
              v57 = v17(a1, v5);
              v10 = v93;
              v15 = v90;
              v18 = v57;
            }
            v19 = *(unsigned int *)(a1 + 456);
            v20 = *(_DWORD *)(v18 + 12);
            v8 = *(int **)(a1 + 448);
            v21 = v19 - 1;
            v19 *= 16;
            v22 = (int *)((char *)v8 + v19);
            v23 = 16LL * (v20 & v21);
            v24 = &v8[(unsigned __int64)v23 / 4];
            if ( v23 == v19 )
            {
LABEL_26:
              while ( v24 != v8 )
              {
                v27 = *(_QWORD *)v8;
                if ( *(_QWORD *)v8 > 1u )
                {
                  if ( *(_DWORD *)(v27 + 12) == v20 && v18 == v27 )
                  {
                    v25 = v8;
                    goto LABEL_75;
                  }
                }
                else if ( !v27 )
                {
                  break;
                }
                v8 += 4;
              }
LABEL_25:
              BUG();
            }
            v25 = &v8[(unsigned __int64)v23 / 4];
            while ( 1 )
            {
              v26 = *(_QWORD *)v25;
              if ( *(_QWORD *)v25 > 1u )
              {
                if ( *(_DWORD *)(v26 + 12) == v20 && v18 == v26 )
                {
LABEL_75:
                  v29 = *((_QWORD *)v25 + 1);
LABEL_36:
                  if ( (char *)v10 != (char *)sub_6AFD40 )
                  {
                    v53 = ((unsigned int (__fastcall *)(__int64, __int64, __int64))v10)(v15, v29, v94) == -1;
                    v56 = v88;
                    if ( !v53 )
                      v56 = v5;
                    v88 = v56;
                  }
                  ++v5;
                  v4 += 8;
                  if ( v5 == v85 )
                  {
                    v9 = *(_QWORD *)a1;
                    break;
                  }
                  goto LABEL_4;
                }
              }
              else if ( !v26 )
              {
                goto LABEL_25;
              }
              v25 += 4;
              if ( v22 == v25 )
                goto LABEL_26;
            }
          }
        }
      }
    }
    v30 = *(__int64 (__fastcall **)(__int64, unsigned int))(v9 + 48);
    v31 = v30 == sub_6AFDD0
        ? *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + 8LL * v88)
        : ((__int64 (__fastcall *)(__int64, _QWORD, int *, __int64 (__fastcall *)(__int64, unsigned int)))v30)(
            a1,
            v88,
            v8,
            v10);
    v32 = *(int **)(sub_15D1F10(v31) + 24);
    if ( v32 )
    {
      v33 = *v32;
      if ( (int)v33 >= 0 )
      {
        v34 = *(_QWORD *)(a1 + 40);
        if ( v34 )
        {
          if ( (int)v33 < *(_DWORD *)(v34 - 4) && *(_QWORD *)(v34 + 8 * v33) )
            break;
        }
      }
    }
    v103[0] = v31;
    if ( v31 )
LABEL_57:
      ++*(_DWORD *)(v31 + 8);
    sub_6ACAE0((_QWORD *)(a1 + 368), v103);
    v2 = *(_QWORD *)(a1 + 728);
    v47 = *(_QWORD *)(v2 + 16);
    if ( !v47 )
    {
      *(_BYTE *)(v2 + 224) = 0;
LABEL_68:
      v55 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v95);
      sub_182CBA0(v55, v96);
      return;
    }
    v48 = *(_DWORD *)(v47 - 4);
    if ( !v48 )
      goto LABEL_67;
    v49 = *(__int64 **)(v2 + 16);
    v50 = (__int64 *)(v47 + 8LL * v48);
    while ( 1 )
    {
      v51 = *v49;
      if ( v31 == *v49 )
        break;
      if ( ++v49 == v50 )
        goto LABEL_67;
    }
    if ( v49 + 1 != v50 )
    {
      v86 = *(_DWORD *)(v47 - 4);
      memmove(v49, v49 + 1, (char *)(v50 - 1) - (char *)v49);
      v48 = v86;
    }
    *(_DWORD *)(v47 - 4) = v48 - 1;
    if ( !v51 || (v52 = *(_QWORD *)(v2 + 8), v53 = *(_DWORD *)(v51 + 8) == 1, --*(_DWORD *)(v51 + 8), !v53) )
    {
LABEL_67:
      v54 = *(_DWORD *)(v47 - 4);
      *(_BYTE *)(v2 + 224) = 0;
      v85 = v54;
      if ( !v54 )
        goto LABEL_68;
      goto LABEL_3;
    }
    sub_15D7BC0(v52, v51);
    v84 = *(_QWORD *)(a1 + 728);
    v3 = *(_QWORD *)(v84 + 16);
    *(_BYTE *)(v2 + 224) = 0;
    if ( !v3 )
      goto LABEL_68;
    v2 = v84;
  }
  v35 = *(unsigned int **)(sub_15D1F10(v31) + 24);
  if ( v35 )
    v36 = 8LL * *v35;
  else
    v36 = 0x7FFFFFFF8LL;
  v37 = *(_DWORD *)(v31 + 12);
  v38 = *(_QWORD **)(a1 + 448);
  v39 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v36);
  v40 = *(unsigned int *)(a1 + 456);
  v41 = v40 - 1;
  v40 *= 16;
  v42 = (_QWORD *)((char *)v38 + v40);
  v43 = 16LL * (v37 & v41);
  v44 = &v38[(unsigned __int64)v43 / 8];
  if ( v43 != v40 )
  {
    for ( i = &v38[(unsigned __int64)v43 / 8]; v42 != i; i += 2 )
    {
      v46 = (_QWORD *)*i;
      if ( *i > 1u )
      {
        if ( *((_DWORD *)v46 + 3) == v37 && (_QWORD *)v31 == v46 )
        {
          v46 = i;
          goto LABEL_55;
        }
      }
      else if ( !v46 )
      {
        goto LABEL_55;
      }
    }
  }
  if ( v38 == v44 )
  {
LABEL_87:
    v46 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v46 = (_QWORD *)*v38;
        if ( *v38 > 1u )
          break;
        if ( !v46 )
          goto LABEL_55;
        v38 += 2;
        if ( v44 == v38 )
          goto LABEL_87;
      }
      if ( *((_DWORD *)v46 + 3) == v37 && (_QWORD *)v31 == v46 )
        break;
      v38 += 2;
      if ( v44 == v38 )
        goto LABEL_87;
    }
    v46 = v38;
  }
LABEL_55:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v39 + 16LL))(
          v39,
          v46[1],
          v94,
          v95) )
  {
    v103[0] = v31;
    goto LABEL_57;
  }
  v58 = *(_QWORD **)(a1 + 728);
  ++*(_DWORD *)(v31 + 8);
  sub_6A99A0(v58[3], v58[4]);
  v59 = (_QWORD *)v58[2];
  v58[3] = v31;
  if ( v59 )
  {
    v60 = *((_DWORD *)v59 - 1);
    if ( v60 )
    {
      v61 = v59;
      v62 = &v59[v60];
      while ( v31 != *v61 )
      {
        if ( v62 == ++v61 )
          goto LABEL_97;
      }
      if ( v61 + 1 != v62 )
        memmove(v61, v61 + 1, (char *)(v62 - 1) - (char *)v61);
      v63 = v58[1];
      *((_DWORD *)v59 - 1) = v60 - 1;
      v53 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v53 )
        sub_15D7BC0(v63, v31);
    }
  }
LABEL_97:
  sub_27B950((__int64)qword_1C7F2C0, (__int64)(v58 + 14), (int *)v95);
  v64 = sub_15D1F10(v31);
  if ( (unsigned __int8)sub_1673B10(a1 + 88, v64) )
    goto LABEL_68;
  v65 = *(unsigned int *)(a1 + 432);
  v66 = *(_DWORD *)(v31 + 12);
  v67 = *(_QWORD **)(a1 + 424);
  v68 = v65 - 1;
  v65 *= 16;
  v69 = (_QWORD *)((char *)v67 + v65);
  v70 = 16LL * (v66 & v68);
  v71 = &v67[(unsigned __int64)v70 / 8];
  if ( v70 != v65 )
  {
    v72 = &v67[(unsigned __int64)v70 / 8];
    do
    {
      v73 = (_QWORD *)*v72;
      if ( *v72 > 1u )
      {
        if ( v66 == *((_DWORD *)v73 + 3) && (_QWORD *)v31 == v73 )
        {
          v73 = v72;
          goto LABEL_104;
        }
      }
      else if ( !v73 )
      {
        goto LABEL_104;
      }
      v72 += 2;
    }
    while ( v69 != v72 );
  }
  for ( ; v71 != v67; v67 += 2 )
  {
    v73 = (_QWORD *)*v67;
    if ( *v67 > 1u )
    {
      if ( v66 == *((_DWORD *)v73 + 3) && (_QWORD *)v31 == v73 )
      {
        v73 = v67;
        goto LABEL_104;
      }
    }
    else if ( !v73 )
    {
      goto LABEL_104;
    }
  }
  v73 = nullptr;
LABEL_104:
  v74 = v73[1];
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 48), v74) )
    goto LABEL_68;
  v87 = *(_QWORD *)(a1 + 48);
  v75 = *(int **)(*(_QWORD *)(sub_15D1F10(v74) + 24) + 8LL);
  if ( *((_BYTE *)v75 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v76 = *v75;
  v103[0] = 0;
  v91 = v76;
  v103[1] = 0;
  v104[0] = 1;
  v104[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v103, (int *)v95);
  v77 = qword_1C7F2C0;
  if ( (v104[0] & 0x100000000LL) != 0
    || LODWORD(v104[0]) != 1
    || (qword_1C7F290 & 0x100000000LL) != 0
    || (_DWORD)qword_1C7F290 != 1 )
  {
    sub_1852000(qword_1C7F2C0, v103, &qword_1C7F280);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, v103, &qword_1C7F280);
    sub_182CBA0(v77, v104);
    BYTE4(v104[0]) &= ~1u;
    LODWORD(v104[0]) = 1;
  }
  v98 &= 0xFCu;
  v101 &= 0xFCu;
  v97 = 0;
  v99 = 0;
  v100 = 1;
  v102 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v97, (int *)v103);
  v78 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v103);
  sub_182CBA0(v78, v104);
  v79 = sub_1674520(a1 + 88, &v97, v91);
  v80 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  sub_25A130((char *)&v97);
  v81 = *(_QWORD *)(a1 + 48);
  v82 = sub_15E1B70(*(_QWORD *)(a1 + 96));
  v83 = v82;
  if ( v82 )
    ++*(_DWORD *)(v82 + 8);
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 1, v82, 0, 0);
  sub_6A99C0(v83, v81);
  sub_6A99A0(v80, v87);
  sub_25A130((char *)v95);
}

