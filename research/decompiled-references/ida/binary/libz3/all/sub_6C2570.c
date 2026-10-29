__int64 __fastcall sub_6C2570(__int64 *a1, __int64 a2, int a3, int a4)
{
  void *v4; // r12
  int v5; // eax
  unsigned int v6; // r12d
  void *v7; // r15
  int v8; // edx
  void *v9; // r15
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rax
  _QWORD *v13; // r13
  int v14; // eax
  __int64 v15; // r12
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // r12
  void *v26; // rax
  void *v27; // r14
  void *v28; // rbx
  int v30; // [rsp-8h] [rbp-C8h]
  int v31; // [rsp+0h] [rbp-C0h]
  __int64 v32; // [rsp+0h] [rbp-C0h]
  int v34; // [rsp+8h] [rbp-B8h]
  __int64 *v35; // [rsp+8h] [rbp-B8h]
  int v36; // [rsp+10h] [rbp-B0h]
  int v37; // [rsp+10h] [rbp-B0h]
  int v39; // [rsp+18h] [rbp-A8h]
  __int64 *v40; // [rsp+18h] [rbp-A8h]
  int v41; // [rsp+20h] [rbp-A0h]
  void *v42; // [rsp+20h] [rbp-A0h]
  char v43; // [rsp+28h] [rbp-98h]
  __int64 v44; // [rsp+30h] [rbp-90h] BYREF
  __int64 v45; // [rsp+38h] [rbp-88h]
  __int64 v46; // [rsp+40h] [rbp-80h] BYREF
  void *v47; // [rsp+48h] [rbp-78h]
  __int64 v48; // [rsp+50h] [rbp-70h] BYREF
  __int64 v49; // [rsp+58h] [rbp-68h]
  __int64 v50; // [rsp+60h] [rbp-60h] BYREF
  __int64 v51; // [rsp+68h] [rbp-58h]
  int v52; // [rsp+70h] [rbp-50h] BYREF
  char v53; // [rsp+74h] [rbp-4Ch]
  __int64 v54; // [rsp+78h] [rbp-48h]
  int v55; // [rsp+80h] [rbp-40h] BYREF
  char v56; // [rsp+84h] [rbp-3Ch]
  __int64 v57; // [rsp+88h] [rbp-38h]
  int v58; // [rsp+90h] [rbp-30h]
  int v59; // [rsp+98h] [rbp-28h]
  int v60; // [rsp+A0h] [rbp-20h]
  void *v61; // [rsp+A8h] [rbp-18h]
  int v62; // [rsp+B0h] [rbp-10h]
  __int64 v63; // [rsp+B8h] [rbp-8h]

  v44 = 2;
  v45 = 0;
  v46 = 1;
  v47 = nullptr;
  sub_182CBA0(qword_1C7F2C0, &v46);
  BYTE4(v46) &= ~1u;
  v4 = qword_1C7F2C0;
  LODWORD(v46) = 1;
  v48 = 0;
  v49 = 0;
  v50 = 1;
  v51 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v48, a2);
  else
    LODWORD(v48) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v4, &v50, a2 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    BYTE4(v50) &= ~1u;
    LODWORD(v50) = v5;
  }
  v6 = 0;
  do
  {
    v7 = qword_1C7F2C0;
    v53 &= 0xFCu;
    ++v6;
    v52 = 0;
    v56 &= 0xFCu;
    v54 = 0;
    v55 = 1;
    v57 = 0;
    sub_1833EB0(qword_1C7F2C0, &v48, &v44, &v52);
    sub_182CBA0(v7, &v55);
    v8 = v52;
    v9 = qword_1C7F2C0;
    v52 = v48;
    LODWORD(v48) = v8;
    v10 = v54;
    v54 = v49;
    v49 = v10;
    v11 = v53 & 1;
    LOBYTE(v10) = BYTE4(v48) & 0xFC | v53 & 2;
    v53 = BYTE4(v48) & 1 | v53 & 0xFC | BYTE4(v48) & 2;
    BYTE4(v48) = v11 | v10;
    v55 = v50;
    v12 = v51;
    v51 = v57;
    v57 = v12;
    LODWORD(v50) = 1;
    LOBYTE(v12) = BYTE4(v50) & 1 | BYTE4(v50) & 2 | v56 & 0xFC;
    BYTE4(v50) = BYTE4(v50) & 0xFC | v56 & 2;
    v56 = v12;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v9, &v55);
  }
  while ( (int)v48 > 0 );
  v13 = a1 + 24;
  v14 = sub_1674700(a1 + 24, v6);
  v15 = *a1;
  v36 = v14;
  sub_180C5A0(&v52, "z");
  v16 = sub_15E3D10(
          v15,
          (int)&v52,
          (int)&qword_18D6CD0,
          0,
          0,
          v36,
          1,
          v30,
          (int)&v46,
          a4,
          v36,
          a3,
          (int)&v44,
          (int)&v52,
          v44,
          v45,
          v46,
          (int)v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v54,
          v55,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
  v19 = sub_15DC610(v15, v16, 0, 0, v17, v18, v31, v34, v37, v39, v41, v43, v44, v45, v46, v47);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v21 = *v40;
  if ( *v40 )
  {
    v22 = v40[1];
    if ( (*(_DWORD *)(v21 + 8))-- == 1 )
      sub_15D7BC0(v22, v21);
  }
  *v40 = v20;
  v24 = sub_16747F0(v13, v20);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_6BFE10(*v35, v35[1]);
  v26 = qword_1C7F2C0;
  *v35 = v25;
  v27 = v26;
  sub_182CBA0(v26, &v48);
  sub_182CBA0(v27, &v50);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v42);
  return sub_182CBA0(v28, v32);
}

