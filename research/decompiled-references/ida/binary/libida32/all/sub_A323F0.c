__int64 __fastcall sub_A323F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    BUG();
  sub_F3C500(
    a5,
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a2 + 8),
    (*(_WORD *)(a2 - 6) >> 6) & 7,
    (*(_BYTE *)(a2 - 6) >> 3) & 7,
    *(_QWORD *)(a2 + 16));
  return sub_21FF190(a5, a3);
}

