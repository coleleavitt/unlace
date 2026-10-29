__int64 __fastcall sub_21EF560(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v6; // eax
  bool v7; // r14
  void *v8; // rdx
  unsigned int v9; // eax
  bool v10; // r14
  void *v11; // rdx
  void *v12; // rcx
  unsigned int v13; // eax
  int v14; // edx
  bool v15; // r12
  unsigned int v17; // eax
  bool v18; // cc
  char v19; // [rsp+1Bh] [rbp-BDh] BYREF
  int v20; // [rsp+1Ch] [rbp-BCh] BYREF
  void *v21; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-B0h]
  bool v23; // [rsp+2Ch] [rbp-ACh]
  void *v24; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-A0h]
  bool v26; // [rsp+3Ch] [rbp-9Ch]
  void *v27; // [rsp+40h] [rbp-98h]
  unsigned int v28; // [rsp+48h] [rbp-90h]
  char v29; // [rsp+4Ch] [rbp-8Ch]
  void *v30; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-80h]
  void *v32; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-70h]
  char v34; // [rsp+73h] [rbp-65h]
  void *v35; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+88h] [rbp-50h]
  char v37; // [rsp+93h] [rbp-45h]

  LODWORD(v35) = *(_DWORD *)(a3 + 16);
  v20 = sub_21EF420((unsigned __int16 *)(a2 + 16), (unsigned int *)&v35);
  sub_21EDE90((__int64)&v32, a2, (unsigned __int16 *)&v20, nullptr);
  sub_21EDE90((__int64)&v35, a3, (unsigned __int16 *)&v20, nullptr);
  v6 = v33;
  v7 = (v34 & 0x20) == 0;
  v31 = v33;
  if ( v33 > 0x40 )
  {
    sub_2205510(&v30);
    v6 = v31;
    v8 = v30;
  }
  else
  {
    v8 = v32;
  }
  v22 = v6;
  v9 = v36;
  v23 = v7;
  v21 = v8;
  v10 = (v37 & 0x20) == 0;
  v31 = v36;
  if ( v36 > 0x40 )
  {
    sub_2205510(&v30);
    v9 = v31;
    v11 = v30;
  }
  else
  {
    v11 = v35;
  }
  v25 = v9;
  v24 = v11;
  v26 = v10;
  v19 = 0;
  v28 = 1;
  v27 = nullptr;
  v29 = 0;
  if ( (v20 & 0x40000000) != 0 )
  {
    if ( (v20 & 0x20000000) != 0 )
      sub_22092B0(&v30, &v21, &v24);
    else
      sub_22093E0(&v30, &v21, &v24);
  }
  else if ( v23 )
  {
    sub_2208F90(&v30, &v21, &v24, &v19);
  }
  else
  {
    sub_2208E80(&v30, &v21, &v24, &v19);
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  v12 = v30;
  v13 = v31;
  v27 = v30;
  v28 = v31;
  if ( a4 )
    *a4 = v19;
  v14 = v20;
  v31 = v13;
  v15 = (v20 & 0x20000000) == 0;
  if ( v13 > 0x40 )
  {
    sub_2205510(&v30);
    v17 = v31;
    v18 = v28 <= 0x40;
    *(_BYTE *)(a1 + 12) = v15;
    *(_DWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = v30;
    *(_DWORD *)(a1 + 16) = v20;
    if ( !v18 && v27 )
      operator delete[](v27);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v13;
    *(_QWORD *)a1 = v12;
    *(_BYTE *)(a1 + 12) = v15;
    *(_DWORD *)(a1 + 16) = v14;
  }
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  return a1;
}
