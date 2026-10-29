__int64 __fastcall sub_462CA0(__int64 *a1, char *a2)
{
  __int64 v3; // r14
  _DWORD *v4; // rax
  unsigned int v5; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _DWORD *v11; // rax
  __int16 v12; // ax
  void *v13; // r13
  bool v14; // al
  int v15; // eax
  bool v16; // r13
  _DWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  void *v21; // r15
  void *v22; // r15
  bool v23; // al
  _DWORD *v24; // rdx
  int v25; // eax
  void *v26; // r15
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  char v30; // r15
  bool v31; // r12
  _DWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r12
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdi
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rdi
  int v49; // eax
  _DWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  _DWORD *v53; // rax
  _DWORD *v54; // rdx
  int v55; // eax
  __int16 v56; // dx
  void *v57; // r15
  __int64 v58; // rax
  _DWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rsi
  __int64 v64; // rdi
  _DWORD *v65; // rax
  int v66; // eax
  int v67; // eax
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  bool v71; // r15
  _DWORD *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rsi
  __int64 v77; // rdi
  void *v78; // rbp
  int v79; // eax
  int v80; // [rsp+0h] [rbp-C8h]
  int v81; // [rsp+8h] [rbp-C0h]
  __int64 v82; // [rsp+8h] [rbp-C0h]
  int v83[2]; // [rsp+10h] [rbp-B8h]
  void *v84; // [rsp+18h] [rbp-B0h]
  void *v85; // [rsp+20h] [rbp-A8h]
  __int64 v86; // [rsp+28h] [rbp-A0h]
  __int64 *v87; // [rsp+30h] [rbp-98h]
  char v88; // [rsp+3Eh] [rbp-8Ah]
  char v89; // [rsp+3Fh] [rbp-89h]
  _BYTE v90[16]; // [rsp+40h] [rbp-88h] BYREF
  int v91; // [rsp+50h] [rbp-78h] BYREF
  char v92; // [rsp+54h] [rbp-74h]
  __int64 v93; // [rsp+58h] [rbp-70h]
  int v94; // [rsp+60h] [rbp-68h] BYREF
  char v95; // [rsp+64h] [rbp-64h]
  __int64 v96; // [rsp+68h] [rbp-60h]
  __int64 v97; // [rsp+70h] [rbp-58h] BYREF
  __int64 v98; // [rsp+78h] [rbp-50h]
  __int64 v99; // [rsp+80h] [rbp-48h] BYREF
  __int64 v100; // [rsp+88h] [rbp-40h]

  sub_16669D0(v90, *a1);
  v3 = *((_QWORD *)a2 + 1);
  if ( *(_WORD *)(v3 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( !v4 )
    return 0;
  v88 = *a2;
  if ( !*v4 )
  {
    if ( v4[1] != 8 )
    {
LABEL_9:
      v5 = 0;
      if ( v4[1] != 2 )
        return v5;
      goto LABEL_10;
    }
    v3 = *(_QWORD *)(v3 + 32);
    v88 ^= 1u;
    if ( *(_WORD *)(v3 + 4) )
      return 0;
    v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( !v4 )
      return 0;
  }
  if ( *v4 != 5 )
  {
    if ( *v4 )
      return 0;
    goto LABEL_9;
  }
  v49 = v4[1];
  if ( v49 != 2 && v49 != 4 && v49 != 3 && v49 != 5 )
    return 0;
LABEL_10:
  *(_QWORD *)v83 = sub_15D1F10(*(_QWORD *)(v3 + 32));
  v11 = *(_DWORD **)(*(_QWORD *)v83 + 24LL);
  if ( v11 && *v11 == 5 && v11[1] == 1 )
  {
    v56 = *(_WORD *)(v3 + 4);
    v87 = a1 + 3;
LABEL_110:
    v89 = 1;
    v86 = *a1;
    v13 = qword_1C7F2C0;
    v14 = (a2[20] & 1) == 0;
    if ( v56 )
      goto LABEL_16;
    v52 = *(_QWORD *)(v3 + 16);
    goto LABEL_94;
  }
  v87 = a1 + 3;
  v89 = sub_16666A0((int)a1 + 24, *(_QWORD *)(v3 + 32), v7, v8, v9, v10, v80, v81, v83[0], v84);
  if ( v89 )
  {
    v58 = sub_15D2CD0(a1[3], 5, 1, 0, 0);
    v56 = *(_WORD *)(v3 + 4);
    *(_QWORD *)v83 = v58;
    goto LABEL_110;
  }
  v12 = *(_WORD *)(v3 + 4);
  if ( v88 )
  {
    if ( v12 )
    {
LABEL_15:
      v86 = *a1;
      v13 = qword_1C7F2C0;
      v14 = (a2[20] & 1) == 0;
      goto LABEL_16;
    }
    v52 = *(_QWORD *)(v3 + 16);
    v65 = *(_DWORD **)(v52 + 24);
    if ( v65 )
    {
      if ( *v65 == 5 )
      {
        v66 = v65[1];
        if ( v66 == 5 || v66 == 4 )
          goto LABEL_127;
      }
    }
  }
  else
  {
    if ( v12 )
      goto LABEL_15;
    v52 = *(_QWORD *)(v3 + 16);
    v53 = *(_DWORD **)(v52 + 24);
    if ( v53 )
    {
      if ( *v53 == 5 )
      {
        v79 = v53[1];
        if ( v79 == 3 || v79 == 2 )
LABEL_127:
          *((_BYTE *)a1 + 56) = 1;
      }
    }
  }
  v86 = *a1;
  v13 = qword_1C7F2C0;
  v14 = (a2[20] & 1) == 0;
LABEL_94:
  v54 = *(_DWORD **)(v52 + 24);
  if ( v54 && !*v54 && v54[1] == 2 )
  {
    v97 = 0;
    v98 = 0;
    v99 = 1;
    v100 = 0;
    if ( v14 )
      LODWORD(v97) = *((_DWORD *)a2 + 4);
    else
      sub_182C690(v13, &v97, a2 + 16);
    if ( (a2[36] & 1) != 0 )
    {
      sub_182C690(v13, &v99, a2 + 32);
    }
    else
    {
      v55 = *((_DWORD *)a2 + 8);
      BYTE4(v99) &= ~1u;
      LODWORD(v99) = v55;
    }
    goto LABEL_21;
  }
LABEL_16:
  BYTE4(v97) &= 0xFCu;
  BYTE4(v99) &= 0xFCu;
  LODWORD(v97) = 0;
  v98 = 0;
  LODWORD(v99) = 1;
  v100 = 0;
  if ( v14 )
    LODWORD(v97) = *((_DWORD *)a2 + 4);
  else
    sub_182C690(v13, &v97, a2 + 16);
  if ( (a2[36] & 1) != 0 )
  {
    sub_182C690(v13, &v99, a2 + 32);
  }
  else
  {
    v15 = *((_DWORD *)a2 + 8);
    BYTE4(v99) &= ~1u;
    LODWORD(v99) = v15;
  }
  sub_1831690(qword_1C7F2C0, &v97);
LABEL_21:
  v16 = 0;
  v17 = *(_DWORD **)(*(_QWORD *)v83 + 24LL);
  if ( v17 && *v17 == 5 )
    v16 = v17[1] == 1;
  v18 = a1[4];
  if ( !v18 )
  {
    sub_16669E0(v87);
    v18 = a1[4];
  }
  v19 = sub_166A700(v18, (unsigned int)&v97, v16, v8, v9, v10);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  sub_182CBA0(v21, &v99);
  v22 = qword_1C7F2C0;
  v23 = (a2[20] & 1) == 0;
  if ( *(_WORD *)(v3 + 4) || (v24 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL)) == nullptr || *v24 || v24[1] != 2 )
  {
    v92 &= 0xFCu;
    v95 &= 0xFCu;
    v91 = 0;
    v93 = 0;
    v94 = 1;
    v96 = 0;
    if ( v23 )
      v91 = *((_DWORD *)a2 + 4);
    else
      sub_182C690(qword_1C7F2C0, &v91, a2 + 16);
    if ( (a2[36] & 1) != 0 )
    {
      sub_182C690(v22, &v94, a2 + 32);
    }
    else
    {
      v25 = *((_DWORD *)a2 + 8);
      v95 &= ~1u;
      v94 = v25;
    }
    sub_1831690(qword_1C7F2C0, &v91);
    BYTE4(v97) &= 0xFCu;
    v26 = qword_1C7F2C0;
    BYTE4(v99) &= 0xFCu;
    LODWORD(v97) = 0;
    v98 = 0;
    LODWORD(v99) = 1;
    v100 = 0;
    if ( (v92 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v97, &v91);
    else
      LODWORD(v97) = v91;
    if ( (v95 & 1) != 0 )
    {
      sub_182C690(v26, &v99, &v94);
    }
    else
    {
      BYTE4(v99) &= ~1u;
      LODWORD(v99) = v94;
    }
    sub_1831620(qword_1C7F2C0, &v97);
    v30 = 1;
  }
  else
  {
    BYTE4(v97) &= 0xFCu;
    BYTE4(v99) &= 0xFCu;
    LODWORD(v97) = 0;
    v98 = 0;
    LODWORD(v99) = 1;
    v100 = 0;
    if ( v23 )
      LODWORD(v97) = *((_DWORD *)a2 + 4);
    else
      sub_182C690(qword_1C7F2C0, &v97, a2 + 16);
    if ( (a2[36] & 1) != 0 )
    {
      sub_182C690(v22, &v99, a2 + 32);
    }
    else
    {
      v67 = *((_DWORD *)a2 + 8);
      BYTE4(v99) &= ~1u;
      LODWORD(v99) = v67;
    }
    sub_1831620(qword_1C7F2C0, &v97);
    v30 = 0;
  }
  v31 = 0;
  v32 = *(_DWORD **)(*(_QWORD *)v83 + 24LL);
  if ( v32 && *v32 == 5 )
    v31 = v32[1] == 1;
  v33 = a1[4];
  if ( !v33 )
  {
    sub_16669E0(v87);
    v33 = a1[4];
  }
  v34 = sub_166A700(v33, (unsigned int)&v97, v31, v27, v28, v29);
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v85 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  sub_182CBA0(v85, &v99);
  if ( v30 )
  {
    v57 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v91);
    sub_182CBA0(v57, &v94);
  }
  if ( !a1[5] )
  {
    v97 = 0;
    v98 = 0;
    v99 = 1;
    v100 = 0;
    sub_182CBA0(qword_1C7F2C0, &v99);
    BYTE4(v99) &= ~1u;
    v71 = 0;
    LODWORD(v99) = 1;
    v72 = *(_DWORD **)(*(_QWORD *)v83 + 24LL);
    if ( v72 && *v72 == 5 )
      v71 = v72[1] == 1;
    v73 = a1[4];
    if ( !v73 )
    {
      sub_16669E0(v87);
      v73 = a1[4];
    }
    v74 = sub_166A700(v73, (unsigned int)&v97, v71, v68, v69, v70);
    v75 = v74;
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    v76 = a1[5];
    if ( v76 )
    {
      v77 = a1[6];
      v42 = (*(_DWORD *)(v76 + 8))-- == 1;
      if ( v42 )
        sub_15D7BC0(v77, v76);
    }
    v78 = qword_1C7F2C0;
    a1[5] = v75;
    sub_182CBA0(v78, &v97);
    sub_182CBA0(v78, &v99);
  }
  v36 = *(_WORD *)(v3 + 4);
  if ( v88 )
  {
    if ( !v36 )
    {
      v50 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( v50 )
      {
        if ( *v50 == 5 )
        {
          v51 = v50[1];
          if ( v51 == 5 || v51 == 4 )
          {
LABEL_116:
            if ( v89 )
            {
              v61 = sub_15E1B70(a1[3]);
              v62 = v61;
              if ( v61 )
                ++*(_DWORD *)(v61 + 8);
              v63 = a1[5];
              if ( v63 )
              {
                v64 = a1[6];
                v42 = (*(_DWORD *)(v63 + 8))-- == 1;
                if ( v42 )
                  sub_15D7BC0(v64, v63);
              }
              a1[5] = v62;
            }
          }
        }
      }
    }
  }
  else if ( !v36 )
  {
    v59 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v59 )
    {
      if ( *v59 == 5 )
      {
        v60 = v59[1];
        if ( v60 == 2 || v60 == 3 )
          goto LABEL_116;
      }
    }
  }
  v37 = sub_15E1B70(a1[3]);
  v38 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v39 = sub_15E1B70(a1[3]);
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = a1[5];
  if ( v40 )
  {
    v41 = a1[6];
    v42 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v42 )
    {
      v82 = v39;
      sub_15D7BC0(v41, v40);
      v39 = v82;
    }
  }
  a1[5] = v39;
  v43 = sub_15E1B70(a1[3]);
  v44 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  if ( v38 )
  {
    v42 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v86, v38);
  }
  v45 = sub_15E1B70(a1[3]);
  v46 = v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  v47 = a1[5];
  if ( v47 )
  {
    v48 = a1[6];
    v42 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v48, v47);
  }
  a1[5] = v46;
  sub_14B9B80(a1 + 1, a1 + 5);
  if ( v44 )
  {
    v42 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v86, v44);
  }
  if ( v35 )
  {
    v42 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v86, v35);
  }
  if ( v20 )
  {
    v42 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v86, v20);
  }
  return 1;
}

