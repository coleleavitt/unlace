__int64 __fastcall sub_A56080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    BUG();
  sub_F5FD10(
    a5,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 32),
    (unsigned __int8)BYTE2(*(_DWORD *)(a2 - 8)) >> 7,
    HIBYTE(*(_DWORD *)(a2 - 8)) & 1);
  return sub_2222ED0(a5, a3);
}
