__int64 __fastcall sub_F2EDD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 result; // rax

  sub_F2AD60(a1, a2);
  v3 = *(_QWORD *)(a2 + 80);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  sub_F2A610(a1, v4);
  result = *(_QWORD *)(a2 + 8) & 7LL;
  if ( result == 4 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " __module_private__");
  return result;
}
