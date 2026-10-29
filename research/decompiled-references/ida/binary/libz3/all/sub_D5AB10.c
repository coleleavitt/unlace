__int64 __fastcall sub_D5AB10(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  char *v8; // rdx
  unsigned int v9; // ecx
  char *v10; // rsi
  __int64 v11; // rcx
  char *v12; // rdi
  char *v13; // rax
  int v14; // ecx
  _QWORD *v15; // r12
  void *v16; // r13
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  void *v25; // rbp
  void *v26; // rbp
  void *v27; // rbx
  int v29; // eax
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v34; // [rsp+28h] [rbp-D0h]
  void *v35; // [rsp+28h] [rbp-D0h]
  void *v36; // [rsp+28h] [rbp-D0h]
  _QWORD v37[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-88h] BYREF
  int v41; // [rsp+80h] [rbp-78h] BYREF
  char v42; // [rsp+84h] [rbp-74h]
  __int64 v43; // [rsp+88h] [rbp-70h]
  int v44; // [rsp+90h] [rbp-68h] BYREF
  char v45; // [rsp+94h] [rbp-64h]
  __int64 v46; // [rsp+98h] [rbp-60h]
  __int64 v47; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD *v48; // [rsp+A8h] [rbp-50h]
  _QWORD v49[9]; // [rsp+B0h] [rbp-48h] BYREF

  v3 = a2 - 1;
  v6 = *(_QWORD *)(a1 + 496);
  v7 = *(unsigned int *)(v6 + 824);
  v8 = *(char **)(v6 + 816);
  v9 = v7 - 1;
  v7 *= 24;
  v10 = &v8[v7];
  v11 = 24LL * (v3 & v9);
  v12 = &v8[v11];
  if ( v11 != v7 )
  {
    v13 = &v8[v11];
    do
    {
      v14 = *((_DWORD *)v13 + 1);
      if ( v14 == 2 )
      {
        if ( v3 == *(_DWORD *)v13 && v3 == *((_DWORD *)v13 + 2) )
          goto LABEL_8;
      }
      else if ( !v14 )
      {
        goto LABEL_60;
      }
      v13 += 24;
    }
    while ( v10 != v13 );
  }
  if ( v8 == v12 )
    goto LABEL_60;
  while ( 1 )
  {
    v29 = *((_DWORD *)v8 + 1);
    if ( v29 != 2 )
    {
      if ( !v29 )
        goto LABEL_60;
      goto LABEL_38;
    }
    if ( v3 == *(_DWORD *)v8 && v3 == *((_DWORD *)v8 + 2) )
      break;
LABEL_38:
    v8 += 24;
    if ( v12 == v8 )
      goto LABEL_60;
  }
  v13 = v8;
LABEL_8:
  if ( v10 != v13 )
  {
    while ( *((_DWORD *)v13 + 1) != 2 )
    {
      v13 += 24;
      if ( v10 == v13 )
        goto LABEL_60;
    }
    if ( v10 != v13 )
    {
      v15 = *((_QWORD **)v13 + 2);
      goto LABEL_14;
    }
  }
LABEL_60:
  v30 = (_QWORD *)sub_186B270(0x10u);
  LODWORD(v47) = v3;
  *v30 = 0;
  v15 = v30;
  v30[1] = 0;
  v48 = v30;
  sub_D81F20(v6 + 816, &v47);
  v31 = *(_QWORD *)(v6 + 736);
  BYTE4(v47) &= 0xFCu;
  LODWORD(v47) = 2;
  v48 = nullptr;
  sub_18393F0(v31, &v47, v3, v15);
  v32 = *(_QWORD *)(v6 + 736);
  v47 = 0xFFFFFFFFLL;
  v48 = nullptr;
  sub_1839610(v32, v15, &v47);
  sub_1839100(*(_QWORD *)(v6 + 736), v15);
LABEL_14:
  v39[1] = 0;
  v40[0] = 1;
  v40[1] = 0;
  v39[0] = 1;
  sub_182CBA0(qword_1C7F2C0, v40);
  BYTE4(v40[0]) &= ~1u;
  v16 = qword_1C7F2C0;
  LODWORD(v40[0]) = 1;
  v37[0] = 0;
  v37[1] = 0;
  v38[0] = 1;
  v38[1] = 0;
  if ( (*((_BYTE *)v15 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v37, v15);
  else
    LODWORD(v37[0]) = *(_DWORD *)v15;
  sub_182CBA0(v16, v38);
  BYTE4(v38[0]) &= ~1u;
  v17 = qword_1C7F2C0;
  LODWORD(v38[0]) = 1;
  v47 = 0;
  v48 = nullptr;
  v49[0] = 1;
  v49[1] = 0;
  if ( (v37[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v47, v37);
  else
    LODWORD(v47) = v37[0];
  if ( (v38[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v17, v49, v38);
  }
  else
  {
    BYTE4(v49[0]) &= ~1u;
    LODWORD(v49[0]) = v38[0];
  }
  v18 = qword_1C7F2C0;
  if ( LODWORD(v39[0]) )
  {
    if ( (_DWORD)v47 )
    {
      if ( (v49[0] & 0x100000000LL) != 0
        || LODWORD(v49[0]) != 1
        || (v40[0] & 0x100000000LL) != 0
        || LODWORD(v40[0]) != 1 )
      {
        sub_1851D20(qword_1C7F2C0, &v47, v39, &v47);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, &v47, v39, &v47);
        sub_182CBA0(v18, v49);
        BYTE4(v49[0]) &= ~1u;
        LODWORD(v49[0]) = 1;
      }
    }
    else
    {
      if ( (v39[0] & 0x100000000LL) != 0 )
      {
        v35 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v47, v39);
        v18 = v35;
      }
      else
      {
        BYTE4(v47) &= ~1u;
        LODWORD(v47) = v39[0];
      }
      if ( (v40[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v18, v49, v40);
      }
      else
      {
        BYTE4(v49[0]) &= ~1u;
        LODWORD(v49[0]) = v40[0];
      }
    }
  }
  else
  {
    if ( (v47 & 0x100000000LL) != 0 )
    {
      v36 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v47, &v47);
      v18 = v36;
    }
    else
    {
      BYTE4(v47) &= ~1u;
    }
    if ( (v49[0] & 0x100000000LL) != 0 )
      sub_182C690(v18, v49, v49);
    else
      BYTE4(v49[0]) &= ~1u;
  }
  v42 &= 0xFCu;
  v19 = qword_1C7F2C0;
  v45 &= 0xFCu;
  v41 = 0;
  v43 = 0;
  v44 = 1;
  v46 = 0;
  if ( (v47 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v41, &v47);
  else
    v41 = v47;
  if ( (v49[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v19, &v44, v49);
  }
  else
  {
    v45 &= ~1u;
    v44 = v49[0];
  }
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v47);
  sub_182CBA0(v34, v49);
  v20 = sub_1674520(a1 + 232, &v41, a2);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v22 = *a3;
  if ( *a3 )
  {
    v23 = a3[1];
    if ( (*(_DWORD *)(v22 + 8))-- == 1 )
      sub_15D7BC0(v23, v22);
  }
  *a3 = v21;
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v41);
  sub_182CBA0(v25, &v44);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v37);
  sub_182CBA0(v26, v38);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v39);
  return sub_182CBA0(v27, v40);
}

