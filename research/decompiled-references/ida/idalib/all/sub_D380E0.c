__int64 __fastcall sub_D380E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // r13d
  char v5; // r12
  char v6; // r12
  void *v7; // [rsp+8h] [rbp-130h]
  char v8; // [rsp+1Fh] [rbp-119h] BYREF
  void *v9; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-110h]
  char v11; // [rsp+2Ch] [rbp-10Ch]
  int v12; // [rsp+30h] [rbp-108h]
  void *v13; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-F0h]
  char v15; // [rsp+4Ch] [rbp-ECh]
  int v16; // [rsp+50h] [rbp-E8h]
  void *v17; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-D0h]
  char v19; // [rsp+6Ch] [rbp-CCh]
  int v20; // [rsp+70h] [rbp-C8h]
  void *v21; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp-B0h]
  char v23; // [rsp+8Ch] [rbp-ACh]
  int v24; // [rsp+90h] [rbp-A8h]
  void *v25; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp-90h]
  char v27; // [rsp+ACh] [rbp-8Ch]
  int v28; // [rsp+B0h] [rbp-88h]
  void *v29; // [rsp+C0h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp-70h]
  char v31; // [rsp+CCh] [rbp-6Ch]
  int v32; // [rsp+D0h] [rbp-68h]
  int v33; // [rsp+F0h] [rbp-48h]

  sub_D0AF80((__int64)&v9, *(_QWORD *)(a1 + 176));
  sub_D0AF80((__int64)&v13, *(_QWORD *)(a1 + 176));
  v2 = sub_D38010(a1, a2, (__int64)&v13, (__int64 *)&v9);
  if ( !(_BYTE)v2 )
    goto LABEL_2;
  sub_CFE920((__int64)&v17);
  v26 = v10;
  if ( v10 > 0x40 )
    sub_2205510(&v25);
  else
    v25 = v9;
  v27 = v11;
  v28 = v12;
  v22 = v14;
  if ( v14 > 0x40 )
    sub_2205510(&v21);
  else
    v21 = v13;
  v8 = 0;
  v23 = v15;
  v24 = v16;
  sub_21F0520(&v29, &v21, &v25, &v8);
  v4 = v30;
  v30 = 0;
  v5 = v31;
  v33 = v32;
  if ( v18 > 0x40 && v17 )
  {
    v7 = v29;
    operator delete[](v17);
    v18 = v4;
    v19 = v5;
    v17 = v7;
    v20 = v33;
    if ( v30 > 0x40 && v29 )
    {
      operator delete[](v29);
      v6 = v8;
      if ( v22 <= 0x40 )
        goto LABEL_18;
LABEL_28:
      if ( v21 )
        operator delete[](v21);
      goto LABEL_18;
    }
  }
  else
  {
    v17 = v29;
    v18 = v4;
    v19 = v31;
    v20 = v32;
  }
  v6 = v8;
  if ( v22 > 0x40 )
    goto LABEL_28;
LABEL_18:
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( !v6 || (v2 = sub_DF81A0(a1, a2, &v17), (_BYTE)v2) )
    sub_D0BA90(*(_QWORD *)(a1 + 176), (__int64)&v17);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
LABEL_2:
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return v2;
}
