__int64 __fastcall sub_A32340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    BUG();
  sub_F3BFD0(
    a5,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 32),
    (unsigned __int8)BYTE2(*(_DWORD *)(a2 - 8)) >> 7,
    HIBYTE(*(_DWORD *)(a2 - 8)) & 1);
  return sub_21FF190(a5, a3);
}

