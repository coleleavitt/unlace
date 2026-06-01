void __fastcall sub_20BE040(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rsi
  _QWORD *v5; // [rsp+0h] [rbp-30h]
  _QWORD v6[4]; // [rsp+10h] [rbp-20h] BYREF

  if ( a3 || *(_QWORD *)(a1 + 48) || (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
  {
    if ( a2 )
    {
      if ( a2 == 38 )
      {
        v5 = a3;
        sub_20B2580(a1, (__int64)a3);
        a3 = v5;
      }
      sub_20BDD70(a1, a2, a3);
    }
    else
    {
      sub_208B310(v6, (__int64)a3);
      v3 = *(_QWORD **)(a1 + 48);
      if ( v3 )
        sub_20A0850(a1 + 48, v3);
      v4 = (_QWORD *)v6[0];
      *(_QWORD *)(a1 + 48) = v6[0];
      if ( v4 )
        sub_20B3430((__int64)v6, v4, a1 + 48);
    }
  }
}
