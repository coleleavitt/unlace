void __fastcall sub_1669F10(__int64 a1, unsigned int a2, char a3)
{
  int v4; // eax
  _BYTE v5[32]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 *v6; // [rsp+20h] [rbp-88h] BYREF
  char v7; // [rsp+78h] [rbp-30h]
  char v8; // [rsp+84h] [rbp-24h]

  v4 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(a1 + 544)) + 8) & 0x7F;
  if ( v4 && v4 != 24 )
  {
    sub_168B9F0(v5, a1 + 8, a2, 4820, 0);
    if ( v7 )
    {
      sub_AE9DF0(&v6, (__int64)"optimize", 1u);
      sub_15F7200(v5);
    }
    else
    {
      if ( v8 )
        sub_1669EA0((__int64)v5, (__int64)"optimize");
      sub_15F7200(v5);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 2332) = a3;
  }
}
