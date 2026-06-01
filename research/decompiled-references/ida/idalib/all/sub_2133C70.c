__int64 __fastcall sub_2133C70(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+18h] [rbp-50h] BYREF
  const char *v7; // [rsp+20h] [rbp-48h] BYREF
  __int16 v8; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 184);
  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  if ( (unsigned __int8)sub_21335C0(a1, &v6) )
    return 1;
  if ( (unsigned __int8)sub_21544B0(a1) )
    return 1;
  v7 = "invalid bundle alignment size (expected between 0 and 30)";
  v8 = 259;
  if ( (unsigned __int8)sub_2154450(a1, v6 > 0x1E, v1, &v7) )
    return 1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0xFFFFFFFFLL;
  if ( 1LL << v6 )
  {
    _BitScanReverse64(&v5, 1LL << v6);
    v4 = 63 - ((unsigned int)v5 ^ 0x3F);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 1248LL))(v3, v4);
  return 0;
}
