__int64 __fastcall sub_D38420(__int64 a1, __int64 a2)
{
  void *v3; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-C0h]
  char v5; // [rsp+Ch] [rbp-BCh]
  int v6; // [rsp+10h] [rbp-B8h]
  void *v7; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-A0h]
  _BYTE v9[32]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v11; // [rsp+68h] [rbp-60h]
  void *i; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+88h] [rbp-40h]
  char v14; // [rsp+8Ch] [rbp-3Ch]
  int v15; // [rsp+90h] [rbp-38h]

  sub_D0AF80((__int64)&v3, *(_QWORD *)(a1 + 176));
  sub_D0AF80((__int64)&v7, *(_QWORD *)(a1 + 176));
  if ( (unsigned __int8)sub_D38010(a1, a2, (__int64)&v7, (__int64 *)&v3) )
  {
    sub_CFE920((__int64)v9);
    v13 = v4;
    if ( v4 > 0x40 )
      goto LABEL_12;
    for ( i = v3; ; sub_2205510(&i) )
    {
      v14 = v5;
      v15 = v6;
      v11 = v8;
      sub_2205510(v10);
LABEL_12:
      ;
    }
  }
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( v4 > 0x40 && v3 )
    operator delete[](v3);
  return 0;
}
