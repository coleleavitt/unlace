__int64 __fastcall sub_4D4060(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r12
  char *v10; // rax
  char *v11; // r15
  __int64 *v12; // r12
  unsigned int v13; // r10d
  __int64 v14; // r8
  __int64 *i; // r13
  __int64 v16; // rdx
  char *v17; // rsi
  char *v18; // rdx
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12
  bool v30; // zf
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rbp
  unsigned int v38; // r13d
  __int64 v39; // rax
  __int64 v40; // rbp
  int v41; // eax
  __int64 (__fastcall *v42)(__int64, __int64); // rdx
  __int64 (__fastcall *v43)(__int64); // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  int v50; // eax
  char *v52; // rdi
  int v53; // ecx
  char *v54; // rdx
  char *v55; // rax
  unsigned int v56; // r12d
  __int64 v57; // r14
  void *v58; // rcx
  unsigned int v59; // esi
  __int64 v61; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v62[248]; // [rsp+38h] [rbp-150h] BYREF
  void *v63; // [rsp+130h] [rbp-58h] BYREF
  unsigned int v64; // [rsp+138h] [rbp-50h]
  int v65; // [rsp+13Ch] [rbp-4Ch]
  int v66; // [rsp+140h] [rbp-48h]
  int v67; // [rsp+148h] [rbp-40h]

  v3 = "doc";
  sub_180C5A0(&v61, "doc");
  v4 = sub_64B010(a1[6]);
  if ( v61 == v4 )
  {
    v3 = nullptr;
    sub_64B1D0(a1[6], 0);
  }
  v5 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
  if ( v5 == sub_4D0080 )
    v6 = (__int64)(a1 + 8);
  else
    v6 = v5((__int64)a1);
  if ( *(_DWORD *)(v6 + 156) )
  {
    v52 = *(char **)(v6 + 144);
    v53 = 0;
    v54 = &v52[8 * *(unsigned int *)(v6 + 152)];
    v3 = (const char *)*(unsigned int *)(v6 + 152);
    v55 = v52;
    if ( v52 == v54 )
      goto LABEL_78;
    do
    {
      while ( *(_QWORD *)v55 )
      {
        *(_QWORD *)v55 = 0;
        v55 += 8;
        if ( v54 == v55 )
          goto LABEL_72;
      }
      v55 += 8;
      ++v53;
    }
    while ( v54 != v55 );
LABEL_72:
    if ( (unsigned int)v3 <= 0x10 || 3 * (int)v3 >= (unsigned int)(4 * v53) )
      goto LABEL_78;
    if ( v52 )
    {
      sub_186B220(v52);
      v56 = *(_DWORD *)(v6 + 152);
      *(_QWORD *)(v6 + 144) = 0;
      v56 >>= 1;
      *(_DWORD *)(v6 + 152) = v56;
      v57 = v56;
      v58 = (void *)sub_186B270(8LL * v56);
      if ( !v56 )
      {
LABEL_77:
        *(_QWORD *)(v6 + 144) = v58;
LABEL_78:
        *(_QWORD *)(v6 + 156) = 0;
        goto LABEL_6;
      }
    }
    else
    {
      *(_QWORD *)(v6 + 144) = 0;
      v59 = (unsigned int)v3 >> 1;
      v57 = v59;
      *(_DWORD *)(v6 + 152) = v59;
      v58 = (void *)sub_186B270(8LL * v59);
    }
    v3 = nullptr;
    v58 = memset(v58, 0, 8 * v57);
    goto LABEL_77;
  }
LABEL_6:
  v61 = a1[6];
  v7 = v61;
  sub_654110(v61, v3);
  v8 = v7 + 2360;
  sub_643420(v62, v7 + 2360);
  v64 = *(_DWORD *)(v7 + 2296);
  v9 = v64;
  v10 = (char *)sub_186B270(8LL * v64);
  v11 = v10;
  if ( (_DWORD)v9 )
  {
    v8 = 0;
    memset(v10, 0, 8 * v9);
  }
  v12 = *(__int64 **)(v7 + 2288);
  v63 = v11;
  v13 = v64 - 1;
  v14 = 8LL * v64;
  for ( i = &v12[(unsigned __int64)v14 / 8]; i != v12; *(_QWORD *)v18 = v8 )
  {
    while ( (unsigned __int64)*v12 <= 1 )
    {
      if ( i == ++v12 )
        goto LABEL_17;
    }
    v16 = 8LL * (*(_DWORD *)(*v12 + 12) & v13);
    v17 = &v11[v16];
    if ( v14 == v16 )
    {
LABEL_58:
      if ( v11 == v17 )
      {
LABEL_63:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v18 = v11;
      while ( *(_QWORD *)v18 )
      {
        v18 += 8;
        if ( v17 == v18 )
          goto LABEL_63;
      }
    }
    else
    {
      v18 = &v11[v16];
      while ( *(_QWORD *)v18 )
      {
        v18 += 8;
        if ( &v11[v14] == v18 )
          goto LABEL_58;
      }
    }
    v8 = *v12++;
  }
LABEL_17:
  v19 = *(_DWORD *)(v7 + 2300);
  v66 = 0;
  v65 = v19;
  LOBYTE(v67) = *(_BYTE *)(v7 + 2984);
  if ( (_BYTE)v67 )
    sub_64C350(v7);
  v20 = a1[7];
  v21 = a1[6];
  sub_654110(v21, v8);
  v22 = a2;
  v23 = sub_632080(v21 + 656, a2, v21 + 2360);
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_64DCE0(a1[6]);
  sub_4D0AE0(a1, a2);
  if ( (unsigned __int8)sub_64B260(a1[6]) )
  {
    v25 = a1[6];
    v26 = sub_186B270(0x78u);
    sub_5474B0(v26, a1[6]);
    v22 = v26;
    sub_64C370(v25, v26);
  }
  v27 = a1[6];
  sub_654110(v27, v22);
  v28 = sub_63B4F0(v27 + 2360, v24);
  v29 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  if ( v24 )
  {
    v30 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v20, v24);
  }
  if ( (unsigned __int8)sub_64B2A0(a1[6]) )
  {
    v31 = a1[6];
    v32 = sub_186B270(0xB8u);
    sub_5B7310(v32, a1[6], v29);
    sub_64C370(v31, v32);
    v33 = a1[6];
    sub_654110(v33, v32);
    v34 = sub_63B4F0(v33 + 2360, v29);
    v35 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    if ( v29 )
    {
      v30 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v30 )
        sub_15D7BC0(v20, v29);
    }
    v29 = v35;
  }
  v36 = sub_4D2940((__int64)a1, &v61);
  v37 = a1[6];
  v38 = v36;
  sub_654110(v37, &v61);
  v39 = sub_63B4F0(v37 + 2360, v29);
  v40 = v39;
  if ( v39 )
  {
    v41 = *(_DWORD *)(v39 + 8);
    *(_DWORD *)(v40 + 8) = v41 + 1;
    if ( v29 )
    {
      v30 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v30 )
        sub_15D7BC0(v20, v29);
      if ( !v38 )
      {
LABEL_52:
        v50 = *(_DWORD *)(v40 + 8) - 1;
        *(_DWORD *)(v40 + 8) = v50;
        if ( v50 )
          goto LABEL_53;
LABEL_66:
        sub_15D7BC0(v20, v40);
        goto LABEL_53;
      }
    }
    else if ( !v38 )
    {
      *(_DWORD *)(v40 + 8) = v41;
      if ( v41 )
        goto LABEL_53;
      goto LABEL_66;
    }
  }
  else
  {
    if ( v29 )
    {
      v30 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v30 )
        sub_15D7BC0(v20, v29);
    }
    if ( !v38 )
    {
      v38 = 0;
      goto LABEL_53;
    }
  }
  v42 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 208LL);
  if ( v42 == sub_4D0440 )
  {
    v43 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
    if ( v43 == sub_4D0080 )
      v44 = (__int64)(a1 + 8);
    else
      v44 = v43((__int64)a1);
    v45 = sub_4C7190(v44, v40);
  }
  else
  {
    v45 = v42((__int64)a1, v40);
  }
  v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 72LL))(v45);
  a1[35] = v46;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v46 + 24LL))(v46) )
  {
    v47 = *(_QWORD *)(a1[7] + 864LL);
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    v48 = a1[33];
    if ( v48 )
    {
      v49 = a1[34];
      v30 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( v30 )
        sub_15D7BC0(v49, v48);
    }
    a1[33] = v47;
    v38 = -1;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[35] + 144LL))(a1[35], a1 + 33);
    v38 = 1;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)a1[35] + 152LL))(a1[35]) )
    {
      v38 = 0;
      *(_DWORD *)(a1[6] + 2988LL) = 4;
    }
  }
  if ( v40 )
    goto LABEL_52;
LABEL_53:
  sub_64C320(v61);
  sub_64B510(v61, &v63);
  sub_64C430(v61, v62);
  if ( (_BYTE)v67 )
    sub_64DCE0(v61);
  if ( v63 )
    sub_186B220(v63);
  sub_63D960(v62);
  return v38;
}

