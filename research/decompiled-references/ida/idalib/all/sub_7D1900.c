__int64 __fastcall sub_7D1900(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx

  v3 = sub_7D17D0(a1);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 72);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = qlseek(v3, v4, v5);
  return 0;
}
