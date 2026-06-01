__int64 __fastcall sub_2090030(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax

  if ( (*(_BYTE *)(a1 + 7) & 8) != 0 )
  {
    v7 = sub_2058290(*(_QWORD **)(a1 + 8), a2, a3, a4, a5, a6);
    sub_20BD370(a1, v7);
  }
  sub_20BE040(a1, 38, 0);
  if ( *(_QWORD *)(a1 + 48) )
    sub_20A0850(a1 + 48);
  return sub_20CC0C0(a1);
}
