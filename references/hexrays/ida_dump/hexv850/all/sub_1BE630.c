unsigned __int64 __fastcall sub_1BE630(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  _QWORD *v4; // r8

  v4 = (_QWORD *)(a1 + 80);
  if ( !a4 )
    v4 = nullptr;
  return sub_1BE430(a1, a3, *(_DWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a2 + 96) + 1408LL), v4);
}
