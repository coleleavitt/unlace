__int64 __fastcall sub_CE7520(__int64 a1)
{
  void *v2; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v3; // [rsp+8h] [rbp-B0h]
  void *v4; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-90h]
  char v6; // [rsp+2Ch] [rbp-8Ch]
  int v7; // [rsp+30h] [rbp-88h]
  void *v8; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-70h]
  char v10; // [rsp+4Ch] [rbp-6Ch]
  int v11; // [rsp+50h] [rbp-68h]
  void *v12; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+68h] [rbp-50h]
  char v14; // [rsp+6Ch] [rbp-4Ch]
  int v15; // [rsp+70h] [rbp-48h]
  void *v16; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+88h] [rbp-30h]
  char v18; // [rsp+8Ch] [rbp-2Ch]
  int v19; // [rsp+90h] [rbp-28h]

  sub_CE7240((__int64)&v8, *(_QWORD *)(a1 + 176));
  sub_CE7240((__int64)&v4, *(_QWORD *)(a1 + 176));
  sub_CDABE0((__int64)&v2);
  v17 = v9;
  if ( v9 > 0x40 )
    sub_21E17D0(&v16);
  else
    v16 = v8;
  v18 = v10;
  v19 = v11;
  v13 = v5;
  if ( v5 > 0x40 )
  {
    sub_21E17D0(&v12);
    v14 = v6;
    v15 = v7;
    if ( v13 > 0x40 )
    {
      if ( v12 )
        operator delete[](v12);
    }
  }
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v3 > 0x40 && v2 )
    operator delete[](v2);
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return 0;
}

