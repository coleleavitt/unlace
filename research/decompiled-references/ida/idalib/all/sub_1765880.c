__int64 __fastcall sub_1765880(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rsi

  v2 = *(_QWORD *)(a2 + 16);
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) != 0 )
    v3 = *(_QWORD *)(v3 + 40);
  return sub_175B800(a1, (unsigned __int16 *)v3);
}
