__int64 __fastcall sub_C09380(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  char v14; // al
  char *v15; // r15
  bool v16; // cc
  char v17; // dl
  unsigned int v18; // eax
  void *v19; // rsi
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // [rsp+8h] [rbp-190h]
  char v28; // [rsp+1Fh] [rbp-179h]
  _QWORD v29[4]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v30[4]; // [rsp+40h] [rbp-158h] BYREF
  void *v31; // [rsp+60h] [rbp-138h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-130h]
  char v33; // [rsp+6Ch] [rbp-12Ch]
  void *v34; // [rsp+80h] [rbp-118h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-110h]
  char v36; // [rsp+8Ch] [rbp-10Ch]
  unsigned int v37; // [rsp+A0h] [rbp-F8h] BYREF
  char v38; // [rsp+A4h] [rbp-F4h]
  void *v39; // [rsp+A8h] [rbp-F0h] BYREF
  unsigned int v40; // [rsp+B0h] [rbp-E8h]
  char v41; // [rsp+B4h] [rbp-E4h]
  void *v42; // [rsp+B8h] [rbp-E0h]
  __int64 v43[3]; // [rsp+C0h] [rbp-D8h] BYREF
  char v44; // [rsp+D8h] [rbp-C0h]
  _QWORD v45[16]; // [rsp+E0h] [rbp-B8h] BYREF
  char v46; // [rsp+160h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(*a2 + 16);
  v9 = *(_QWORD *)(a3 + 32);
  v27 = sub_A8AC40(v8, v9);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_BYTE *)(v13 + 16);
  if ( v14 == 13 )
  {
    v28 = (((*(_WORD *)(v13 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  }
  else if ( v14 == 47 )
  {
    v22 = sub_F3D1D0(v13, v9, v10, v11, v12);
    if ( (*(_BYTE *)(v22 + 74) & 1) != 0 || (v28 = 0, (*(_QWORD *)(v22 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0) )
      v28 = (unsigned __int8)~*(_BYTE *)(sub_F3D1D0(v13, v9, v23, v24, v12) + 76) >> 7;
  }
  else
  {
    v28 = v14 == 10;
  }
  memset(v45, 0, sizeof(v45));
  v15 = (char *)v45;
  do
  {
    sub_C08890((__int64)&v37, a2, *(_QWORD *)(a3 + 32), a4, v12);
    if ( v15[56] )
    {
      if ( v44 )
      {
        sub_A2BFE0((__int64)v15, (__int64)&v37);
        v21 = v44;
      }
      else
      {
        v16 = *(_DWORD *)v15 <= 1u;
        v15[56] = 0;
        if ( v16 )
          goto LABEL_7;
        sub_A2BBA0((int *)v15);
        v21 = v44;
      }
    }
    else
    {
      if ( !v44 )
      {
LABEL_30:
        *(_BYTE *)(a1 + 56) = 0;
LABEL_22:
        if ( !LOBYTE(v45[15]) )
          goto LABEL_25;
        goto LABEL_23;
      }
      sub_A2BB60((__int64)v15, (__int64)&v37);
      v15[56] = 1;
      v21 = v44;
    }
    if ( v21 && v37 > 1 )
      sub_A2BBA0((int *)&v37);
LABEL_7:
    if ( !v15[56] )
      goto LABEL_30;
    a4 += v27;
    v15 += 64;
  }
  while ( &v46 != v15 );
  if ( v28 )
  {
    v35 = v45[10];
    if ( LODWORD(v45[10]) > 0x40 )
      sub_21E17D0(&v34);
    else
      v34 = (void *)v45[9];
    v17 = BYTE4(v45[10]);
    v18 = v45[2];
    v36 = BYTE4(v45[10]);
    v32 = v45[2];
    if ( LODWORD(v45[2]) > 0x40 )
    {
      sub_21E17D0(&v31);
      v18 = v32;
      v19 = v31;
      v17 = v36;
    }
    else
    {
      v19 = (void *)v45[1];
      v31 = (void *)v45[1];
    }
    v40 = v18;
    v39 = v19;
    LODWORD(v43[0]) = v35;
    v38 &= ~1u;
    v33 = BYTE4(v45[2]);
    v37 = 5;
    v35 = 0;
    v32 = 0;
    v41 = BYTE4(v45[2]);
    v42 = v34;
    BYTE4(v43[0]) = v17;
    sub_A2BB60(a1, (__int64)&v37);
    v16 = v37 <= 1;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v16 )
      sub_A2BBA0((int *)&v37);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    goto LABEL_22;
  }
  v25 = sub_21D5390();
  if ( v45[9] == v25 )
    sub_21DC120(v30, &v45[9]);
  else
    sub_21D5A60(v30, &v45[9]);
  if ( v45[1] == v25 )
    sub_21DC120(v29, &v45[1]);
  else
    sub_21D5A60(v29, &v45[1]);
  v38 &= ~1u;
  v37 = 0;
  v26 = sub_21D5370();
  sub_21D8290(&v34, 0.0);
  sub_21DE690(&v39, &v34, v26);
  sub_21D5AF0(&v34);
  sub_21D8290(&v34, 0.0);
  sub_21DE690(v43, &v34, v26);
  sub_21D5AF0(&v34);
  v37 = 6;
  if ( v25 == v30[0] )
    sub_21DC190(&v34, v30);
  else
    sub_21D5A90(&v34, v30);
  if ( v25 == v29[0] )
    sub_21DC190(&v31, v29);
  else
    sub_21D5A90(&v31, v29);
  sub_BF3A80((__int64 *)&v39, (__int64 *)&v31);
  sub_BF3A80(v43, (__int64 *)&v34);
  sub_971860(&v31);
  sub_971860(&v34);
  sub_A2BB60(a1, (__int64)&v37);
  v16 = v37 <= 1;
  *(_BYTE *)(a1 + 56) = 1;
  if ( !v16 )
    sub_A2BBA0((int *)&v37);
  sub_971860(v29);
  sub_971860(v30);
  if ( LOBYTE(v45[15]) )
  {
LABEL_23:
    if ( LODWORD(v45[8]) > 1 )
      sub_A2BBA0((int *)&v45[8]);
  }
LABEL_25:
  if ( LOBYTE(v45[7]) && LODWORD(v45[0]) > 1 )
    sub_A2BBA0((int *)v45);
  return a1;
}

