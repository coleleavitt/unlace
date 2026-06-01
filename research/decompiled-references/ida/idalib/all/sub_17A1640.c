void __fastcall sub_17A1640(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rsi
  __int64 v5; // rbp

  v3 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v3 != 4 )
  {
    if ( v3 > 3u )
    {
LABEL_3:
      sub_17A13F0(a1, a2);
      return;
    }
    v4 = *(_QWORD *)(a2 + 16);
    goto LABEL_5;
  }
  if ( !*(_BYTE *)(a1 + 24) )
    goto LABEL_3;
  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_WORD *)sub_BFB9F0(v5) & 0x1FF) != 0x2E )
    goto LABEL_3;
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v4 = v5;
LABEL_5:
    sub_17A14E0(a1, v4, a3);
  }
}
