void __fastcall sub_C1D5A0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rax
  int v8; // esi
  char **v9; // r12
  char *v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  char *v13; // rcx
  __int64 v14; // r8
  char *v15; // rdi
  char *i; // rbp
  __int64 v17; // rax
  void *v18; // rbp
  void *v19; // rbx
  __int64 v20; // rax
  void *v21; // r15
  void *v22; // rdi
  int v23; // eax
  int v24; // eax
  int v25; // edx
  __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rax
  void *v29; // [rsp+0h] [rbp-90h]
  void *v30; // [rsp+0h] [rbp-90h]
  void *v31; // [rsp+0h] [rbp-90h]
  int v32[2]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v33; // [rsp+10h] [rbp-80h]
  __int64 v34; // [rsp+18h] [rbp-78h] BYREF
  __int64 v35; // [rsp+20h] [rbp-70h]
  __int64 v36; // [rsp+28h] [rbp-68h] BYREF
  __int64 v37; // [rsp+30h] [rbp-60h] BYREF
  __int64 v38; // [rsp+38h] [rbp-58h] BYREF
  _QWORD v39[10]; // [rsp+40h] [rbp-50h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return;
  if ( *(_DWORD *)(a2 + 24) )
    return;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v5 )
  {
    if ( *v5 != -1 )
      return;
  }
  v6 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v6 || *v6 != 5 || v6[1] )
    return;
  v7 = *(unsigned int *)(a1 + 32);
  v8 = *(_DWORD *)(a2 + 12);
  v36 = a2;
  v9 = (char **)(a1 + 24);
  *(_QWORD *)v32 = 0;
  v10 = *(char **)(a1 + 24);
  v33 = 0;
  v11 = v7 - 1;
  v34 = 1;
  v7 *= 40;
  v35 = 0;
  v12 = 5LL * (v8 & v11);
  v13 = &v10[v7];
  v37 = 0;
  v14 = 8 * v12;
  v38 = 0;
  v15 = &v10[v14];
  v39[0] = 1;
  v39[1] = 0;
  if ( v14 != v7 )
  {
    for ( i = &v10[v14]; v13 != i; i += 40 )
    {
      v17 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v17 + 12) == v8 && a2 == v17 )
          goto LABEL_28;
      }
      else if ( !v17 )
      {
        goto LABEL_17;
      }
    }
  }
  if ( v10 == v15 )
  {
LABEL_17:
    v18 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v37);
    sub_182CBA0(v18, v39);
    sub_C1CE00(v9, a2, a3);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 > 1u )
      break;
    if ( !v20 )
      goto LABEL_17;
LABEL_23:
    v10 += 40;
    if ( v15 == v10 )
      goto LABEL_17;
  }
  if ( *(_DWORD *)(v20 + 12) != v8 || a2 != v20 )
    goto LABEL_23;
  i = v10;
LABEL_28:
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v37);
  sub_182CBA0(v21, v39);
  v22 = qword_1C7F2C0;
  if ( (i[12] & 1) != 0 )
  {
    v31 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v32, i + 8);
    v22 = v31;
  }
  else
  {
    v23 = *((_DWORD *)i + 2);
    LOBYTE(v32[1]) &= ~1u;
    v32[0] = v23;
  }
  if ( (i[28] & 1) != 0 )
  {
    sub_182C690(v22, &v34, i + 24);
  }
  else
  {
    v24 = *((_DWORD *)i + 6);
    BYTE4(v34) &= ~1u;
    LODWORD(v34) = v24;
  }
  BYTE4(v36) &= 0xFCu;
  BYTE4(v38) &= 0xFCu;
  LODWORD(v36) = 0;
  v37 = 0;
  LODWORD(v38) = 1;
  v39[0] = 0;
  v29 = qword_1C7F2C0;
  sub_1832C70(qword_1C7F2C0, a3, v32, &v36);
  sub_182CBA0(v29, &v38);
  v25 = v36;
  LODWORD(v36) = v32[0];
  v32[0] = v25;
  v26 = v37;
  v37 = v33;
  v33 = v26;
  v30 = qword_1C7F2C0;
  v27 = BYTE4(v36) & 1;
  LOBYTE(v26) = v32[1] & 0xFC | BYTE4(v36) & 2;
  BYTE4(v36) = v32[1] & 1 | BYTE4(v36) & 0xFC | v32[1] & 2;
  LOBYTE(v32[1]) = v27 | v26;
  LODWORD(v38) = v34;
  v28 = v35;
  v35 = v39[0];
  v39[0] = v28;
  LODWORD(v34) = 1;
  LOBYTE(v28) = BYTE4(v34) & 1 | BYTE4(v34) & 2 | BYTE4(v38) & 0xFC;
  BYTE4(v34) = BYTE4(v34) & 0xFC | BYTE4(v38) & 2;
  BYTE4(v38) = v28;
  sub_182CBA0(qword_1C7F2C0, &v36);
  sub_182CBA0(v30, &v38);
  sub_C1CE00(v9, a2, (__int64)v32);
LABEL_18:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  sub_182CBA0(v19, &v34);
}

