__int64 __fastcall sub_6A74F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    BUG();
  sub_B06BB0(a5, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (*(_BYTE *)(a2 - 6) >> 3) & 0xF);
  return sub_25ABE00(a5, a3);
}

