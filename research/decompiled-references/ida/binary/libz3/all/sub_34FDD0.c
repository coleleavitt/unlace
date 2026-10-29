__int64 __fastcall sub_34FDD0(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rdx
  int v9; // esi
  unsigned int v10; // ecx
  __int64 v11; // r9
  char *v12; // rcx
  __int64 v13; // r9
  char *v14; // rdi
  char *i; // r14
  __int64 v16; // rax
  void *v17; // rbx
  __int64 v18; // rax
  void *v19; // r15
  void *v20; // r15
  int v21; // eax
  void *v22; // r15
  char v23; // al
  char v24; // al
  void *v25; // rdi
  void *v26; // r12
  int v28; // eax
  __int64 *v30; // [rsp+18h] [rbp-D0h]
  void *v31; // [rsp+20h] [rbp-C8h]
  void *v32; // [rsp+20h] [rbp-C8h]
  int v33; // [rsp+40h] [rbp-A8h] BYREF
  char v34; // [rsp+44h] [rbp-A4h]
  __int64 v35; // [rsp+48h] [rbp-A0h]
  int v36; // [rsp+50h] [rbp-98h] BYREF
  char v37; // [rsp+54h] [rbp-94h]
  __int64 v38; // [rsp+58h] [rbp-90h]
  int v39; // [rsp+60h] [rbp-88h] BYREF
  char v40; // [rsp+64h] [rbp-84h]
  __int64 v41; // [rsp+68h] [rbp-80h]
  int v42; // [rsp+70h] [rbp-78h] BYREF
  char v43; // [rsp+74h] [rbp-74h]
  __int64 v44; // [rsp+78h] [rbp-70h]
  __int64 v45; // [rsp+80h] [rbp-68h] BYREF
  __int64 v46; // [rsp+88h] [rbp-60h] BYREF
  __int64 v47; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v48[10]; // [rsp+98h] [rbp-50h] BYREF

  sub_34B090(a1, a2, a3);
  v5 = *a3;
  if ( !*a3 )
    return a1;
  v30 = &v5[*((unsigned int *)v5 - 1)];
  if ( v30 == v5 )
    return a1;
  do
  {
    v6 = *v5;
    v7 = *(unsigned int *)(a2 + 224);
    v46 = 0;
    v48[0] = 1;
    v8 = *(char **)(a2 + 216);
    v9 = *(_DWORD *)(v6 + 12);
    v10 = v7 - 1;
    v45 = v6;
    v47 = 0;
    v7 *= 40;
    v48[1] = 0;
    v11 = 5LL * (v9 & v10);
    v12 = &v8[v7];
    v13 = 8 * v11;
    v14 = &v8[v13];
    if ( v13 != v7 )
    {
      for ( i = &v8[v13]; v12 != i; i += 40 )
      {
        v16 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v16 + 12) == v9 && v6 == v16 )
            goto LABEL_20;
        }
        else if ( !v16 )
        {
          goto LABEL_10;
        }
      }
    }
    if ( v8 == v14 )
    {
LABEL_10:
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v46);
      sub_182CBA0(v17, v48);
      v34 &= 0xFCu;
      v37 &= 0xFCu;
      v33 = 0;
      v35 = 0;
      v36 = 1;
      v38 = 0;
      BUG();
    }
    while ( 1 )
    {
      v18 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 > 1u )
        break;
      if ( !v18 )
        goto LABEL_10;
LABEL_15:
      v8 += 40;
      if ( v14 == v8 )
        goto LABEL_10;
    }
    if ( *(_DWORD *)(v18 + 12) != v9 || v6 != v18 )
      goto LABEL_15;
    i = v8;
LABEL_20:
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v19, v48);
    v34 &= 0xFCu;
    v20 = qword_1C7F2C0;
    v37 &= 0xFCu;
    v33 = 0;
    v35 = 0;
    v36 = 1;
    v38 = 0;
    if ( (i[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v33, i + 8);
    else
      v33 = *((_DWORD *)i + 2);
    if ( (i[28] & 1) != 0 )
    {
      sub_182C690(v20, &v36, i + 24);
    }
    else
    {
      v21 = *((_DWORD *)i + 6);
      v37 &= ~1u;
      v36 = v21;
    }
    v22 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || *(_DWORD *)(a1 + 16) != 1 || (v24 = v37, (v37 & 1) != 0) || v36 != 1 )
    {
      v23 = sub_1848D40(qword_1C7F2C0, a1, &v33);
      v22 = qword_1C7F2C0;
      if ( !v23 )
        goto LABEL_40;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 && (v34 & 1) == 0 )
      {
        if ( *(_DWORD *)a1 < v33 )
        {
          v45 = 0;
          v46 = 0;
          v47 = 1;
          v48[0] = 0;
LABEL_29:
          LODWORD(v45) = v33;
          goto LABEL_30;
        }
        goto LABEL_40;
      }
      v28 = sub_182C7B0(qword_1C7F2C0, a1, &v33);
      v22 = qword_1C7F2C0;
      if ( v28 >= 0 )
        goto LABEL_40;
    }
    v45 = 0;
    v46 = 0;
    v47 = 1;
    v48[0] = 0;
    if ( (v34 & 1) == 0 )
    {
      v24 = v37;
      goto LABEL_29;
    }
    sub_182C690(v22, &v45, &v33);
    v24 = v37;
LABEL_30:
    if ( (v24 & 1) != 0 )
    {
      sub_182C690(v22, &v47, &v36);
    }
    else
    {
      BYTE4(v47) &= ~1u;
      LODWORD(v47) = v36;
    }
    if ( (v47 & 0x100000000LL) != 0 || (_DWORD)v47 != 1 || (*(_BYTE *)(a1 + 20) & 1) != 0 || *(_DWORD *)(a1 + 16) != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v45, a1);
    }
    else
    {
      v32 = qword_1C7F2C0;
      sub_1832A70(qword_1C7F2C0, &v45, a1);
      sub_182CBA0(v32, &v47);
      BYTE4(v47) &= ~1u;
      LODWORD(v47) = 1;
    }
    v40 &= 0xFCu;
    v25 = qword_1C7F2C0;
    v43 &= 0xFCu;
    v39 = 0;
    v41 = 0;
    v42 = 1;
    v44 = 0;
    if ( (v45 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v39, &v45);
    else
      v39 = v45;
    if ( (v47 & 0x100000000LL) != 0 )
    {
      sub_182C690(v25, &v42, &v47);
    }
    else
    {
      v43 &= ~1u;
      v42 = v47;
    }
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(v31, &v47);
    sub_34FB60(a2, v6, (__int64)&v39);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v39);
    sub_182CBA0(v26, &v42);
    v22 = qword_1C7F2C0;
LABEL_40:
    ++v5;
    sub_182CBA0(v22, &v33);
    sub_182CBA0(v22, &v36);
  }
  while ( v30 != v5 );
  return a1;
}

