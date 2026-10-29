__int64 *__fastcall sub_A7DA00(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 v7; // r12
  int *v8; // r14
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17; // dl
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbp
  void *v23; // rbp
  void *v24; // rbp
  void *v25; // rbp
  void *v27; // rdi
  int v28; // edx
  __int64 v29; // rdx
  char v30; // cl
  __int64 v31; // rax
  char v32; // si
  char v33; // cl
  _DWORD *v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  bool v38; // dl
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  void *v42; // [rsp+10h] [rbp-C8h]
  void *v43; // [rsp+10h] [rbp-C8h]
  bool v44; // [rsp+10h] [rbp-C8h]
  bool v45; // [rsp+10h] [rbp-C8h]
  __int64 v46; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-B0h]
  __int64 v48; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-A0h]
  int v50; // [rsp+40h] [rbp-98h] BYREF
  char v51; // [rsp+44h] [rbp-94h]
  __int64 v52; // [rsp+48h] [rbp-90h]
  int v53; // [rsp+50h] [rbp-88h] BYREF
  char v54; // [rsp+54h] [rbp-84h]
  __int64 v55; // [rsp+58h] [rbp-80h]
  _QWORD v56[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v57[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v58[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v59[9]; // [rsp+90h] [rbp-48h] BYREF

  v3 = 0x3FFFFFFFC0LL;
  v4 = a3;
  v7 = a2[63];
  if ( a3 != -1 )
    v3 = (unsigned __int64)(unsigned int)sub_FF9FB0(v7, a3) << 6;
  v56[0] = 0;
  v56[1] = 0;
  v8 = (int *)(*(_QWORD *)(sub_FF9B20(v7) + 48) + v3);
  v57[0] = 1;
  v57[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v56, v8);
  v58[0] = 0;
  v58[1] = 0;
  v59[0] = 1;
  v59[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v58, v8 + 8);
  v9 = qword_1C7F2C0;
  v10 = **(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8 * v4);
  v46 = 0;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  if ( (v56[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v46, v56);
  else
    LODWORD(v46) = v56[0];
  if ( (v57[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v9, &v48, v57);
  }
  else
  {
    BYTE4(v48) &= ~1u;
    LODWORD(v48) = v57[0];
  }
  v11 = a2[1];
  *a1 = 0;
  a1[1] = v11;
  v12 = *(_DWORD **)(sub_15D1F10(v10) + 24);
  if ( v12 && *v12 == 5 && v12[1] == 1 )
  {
    v27 = qword_1C7F2C0;
    if ( (v48 & 0x100000000LL) == 0 && (_DWORD)v48 == 1 )
    {
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v46, (__int64)&qword_1C7F280, (__int64)&v46);
    }
    else
    {
      v51 &= 0xFCu;
      v54 &= 0xFCu;
      v50 = 0;
      v52 = 0;
      v53 = 1;
      v55 = 0;
      sub_1849700(qword_1C7F2C0, &v46, &v50);
      sub_182CBA0(v27, &v53);
      v28 = v50;
      v50 = v46;
      LODWORD(v46) = v28;
      v29 = v52;
      v52 = v47;
      v47 = v29;
      v30 = v51 & 1;
      LOBYTE(v29) = BYTE4(v46) & 0xFC | v51 & 2;
      v51 = BYTE4(v46) & 1 | v51 & 0xFC | BYTE4(v46) & 2;
      BYTE4(v46) = v30 | v29;
      v53 = v48;
      v31 = v49;
      v49 = v55;
      v55 = v31;
      LODWORD(v48) = 1;
      v32 = BYTE4(v48) & 2;
      v33 = BYTE4(v48) & 1;
      BYTE4(v48) = BYTE4(v48) & 0xFC | v54 & 2;
      v54 = v33 | v32 | v54 & 0xFC;
      sub_25A130((char *)&v50);
    }
    v34 = *(_DWORD **)(sub_15D1F10(v10) + 24);
    v38 = 0;
    if ( v34 && *v34 == 5 )
      v38 = v34[1] == 1;
    v39 = a2[3];
    if ( !v39 )
    {
      v45 = v38;
      sub_16669E0(a2 + 2);
      v39 = a2[3];
      v38 = v45;
    }
    v40 = sub_166A700(v39, (unsigned int)&v46, v38, v35, v36, v37);
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    v43 = (void *)v40;
    sub_A72BE0(*a1, a1[1]);
    v41 = a2[2];
    *a1 = (__int64)v43;
    v21 = sub_15E1B70(v41);
  }
  else
  {
    v13 = *(_DWORD **)(sub_15D1F10(v10) + 24);
    if ( v13 )
    {
      v17 = 0;
      if ( *v13 == 5 )
        v17 = v13[1] == 1;
    }
    else
    {
      v17 = 0;
    }
    v18 = a2[3];
    if ( !v18 )
    {
      v44 = v17;
      sub_16669E0(a2 + 2);
      v18 = a2[3];
      v17 = v44;
    }
    v19 = sub_166A700(v18, (unsigned int)&v46, v17, v14, v15, v16);
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v42 = (void *)v19;
    sub_A72BE0(*a1, a1[1]);
    v20 = a2[2];
    *a1 = (__int64)v42;
    v21 = sub_15E1B70(v20);
  }
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_A72BE0(*a1, a1[1]);
  *a1 = v22;
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v46);
  sub_182CBA0(v23, &v48);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v58);
  sub_182CBA0(v24, v59);
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v56);
  sub_182CBA0(v25, v57);
  return a1;
}

