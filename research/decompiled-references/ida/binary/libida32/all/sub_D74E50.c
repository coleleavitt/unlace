__int64 __fastcall sub_D74E50(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rsi
  void *v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v31; // rax
  void *v32; // rcx
  char v33; // [rsp+1Eh] [rbp-DAh] BYREF
  char v34; // [rsp+1Fh] [rbp-D9h] BYREF
  void *v35; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-D0h]
  void *v37; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-C0h]
  void *v39; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B0h]
  char v41; // [rsp+4Ch] [rbp-ACh]
  void *v42; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A0h]
  char v44; // [rsp+5Ch] [rbp-9Ch]
  void *v45; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-90h]
  char v47; // [rsp+6Ch] [rbp-8Ch]
  void *v48; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v49; // [rsp+78h] [rbp-80h]
  void *v50; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+88h] [rbp-70h]
  _BYTE v52[104]; // [rsp+90h] [rbp-68h] BYREF

  v5 = a1[22];
  sub_DFDA20(v5, 48);
  sub_DFF520(v52);
  sub_DFDA50(v5, 48);
  v9 = sub_CC2440(
         a1[23],
         *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
         v6,
         v7,
         v8);
  LODWORD(v5) = sub_CC2440(
                  a1[23],
                  *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL),
                  v10,
                  v11,
                  v12);
  sub_D67460((__int64)&v35, a1[22], v9);
  sub_D67460((__int64)&v37, a1[22], v5);
  sub_D67460((__int64)&v39, a1[22], v9);
  v13 = v40;
  v43 = 1;
  v42 = nullptr;
  v44 = 0;
  v46 = 1;
  v45 = nullptr;
  v47 = 0;
  if ( v40 <= 0x40 )
  {
    v32 = v39;
    v14 = v41;
    v46 = v40;
    v45 = v39;
    v47 = v41;
LABEL_38:
    v42 = v32;
    v43 = v13;
    goto LABEL_5;
  }
  sub_21E1960(&v45, &v39);
  v14 = v41;
  v47 = v41;
  if ( v43 <= 0x40 )
  {
    v13 = v40;
    if ( v40 <= 0x40 )
    {
      v32 = v39;
      goto LABEL_38;
    }
  }
  sub_21E1960(&v42, &v39);
  v14 = v41;
LABEL_5:
  v44 = v14;
  v33 = 0;
  v34 = 0;
  if ( a3 < 0x74 )
    goto LABEL_40;
  if ( a3 <= 0x78 )
  {
    sub_21E5250(&v48, &v39, &v37, &v33);
    sub_21E5250(&v50, &v48, &v35, &v34);
    if ( v46 <= 0x40 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( a3 - 1285 > 4 )
LABEL_40:
    BUG();
  sub_21E53C0(&v48, &v39, &v37, &v33);
  sub_21E53C0(&v50, &v48, &v35, &v34);
  if ( v46 <= 0x40 )
    goto LABEL_10;
LABEL_8:
  if ( v45 )
    operator delete[](v45);
LABEL_10:
  v45 = v50;
  v46 = v51;
  if ( v49 > 0x40 && v48 )
    operator delete[](v48);
  v16 = (unsigned __int8)(v34 | v33);
  v17 = v43;
  if ( v43 <= 0x40 )
  {
    v20 = -v43;
    v18 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v43;
    v19 = (void *)(v18 & v16);
    v31 = nullptr;
    if ( v43 )
      v31 = v19;
    v42 = v31;
  }
  else
  {
    v18 = 0;
    *(_QWORD *)v42 = v16;
    memset((char *)v42 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v17 + 63) >> 6) + 0x1FFFFFFF));
  }
  v21 = sub_F44710(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 56) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          v18,
          v19,
          v20,
          v15);
  v25 = sub_CC2440(a1[23], v21, v22, v23, v24);
  sub_D741C0(a1, (__int64)v52, v25, (__int64)&v42, v26, v27);
  sub_E00FC0(v52);
  sub_D6C2A0(a1, (__int64)&v45, *(_QWORD *)(a2 + 8), v28, v29);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  sub_DFF560(v52);
  return 1;
}

