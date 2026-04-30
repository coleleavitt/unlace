__int64 __fastcall sub_5A7F04(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // eax
  _BYTE v9[2]; // [rsp+24h] [rbp-1Ch] BYREF
  __int16 v10; // [rsp+26h] [rbp-1Ah]
  __int64 v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-10h]
  int v13; // [rsp+34h] [rbp-Ch]
  unsigned int v14; // [rsp+38h] [rbp-8h]
  unsigned __int8 v15; // [rsp+3Fh] [rbp-1h]

  v15 = 1;
  v14 = 0;
  while ( a3 && v15 == 1 )
  {
    v13 = sub_5A8A7F(a2, a3, v9);
    if ( !v13 )
      return 0;
    a3 -= v13;
    a2 += v13;
    if ( v10 )
      v5 = 2;
    else
      v5 = 1;
    v12 = v5;
    v11 = 2LL * v5;
    v15 = sub_5A84B6(a4, v14, v9, v11);
    v14 += v12;
  }
  return v15;
}
