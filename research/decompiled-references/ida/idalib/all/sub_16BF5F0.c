void __fastcall sub_16BF5F0(__int64 a1, _WORD *a2, unsigned int a3, double a4)
{
  __int64 v5; // [rsp+4h] [rbp-54h] BYREF
  char v6; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v7; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int8)sub_16B6AF0((__int64 *)(a1 + 248), a2) )
  {
    sub_168B9B0((__int64)&v7, a1 + 8, 7163);
    v6 = 1;
    v5 = sub_EEC8C0((unsigned __int64)a2, a1 + 8, a4);
    sub_AEC610((__int64 *)&v7, &v5);
    sub_18CAED0(a1, a3, a2, &v7);
    if ( v7 )
    {
      if ( v8 )
        sub_1580C40(v8, v7);
    }
  }
}
