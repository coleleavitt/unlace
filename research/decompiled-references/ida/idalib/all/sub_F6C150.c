__int64 __fastcall sub_F6C150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 32);
  v4 = 1;
  if ( (v3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v4 = 1;
    if ( !(v3 & 7 | (v3 >> 3) & 1) )
      v4 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
  }
  return sub_F6BC10(a1, v3, v4 * ((a3 + 16 - (unsigned __int64)(a3 != -16)) / v4 + (a3 != -16)));
}
