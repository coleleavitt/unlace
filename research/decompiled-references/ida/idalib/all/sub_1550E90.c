void __fastcall sub_1550E90(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  char v4; // cl

  v3 = *(_DWORD *)(a3 + 2652);
  v4 = v3 != 0;
  if ( !v3 )
    *(_DWORD *)(a3 + 2652) = a2;
  if ( *(_DWORD *)(a3 + 56) || *(_QWORD *)(a3 + 64) )
    sub_154FF40(a1, a2, *(_DWORD *)(a3 + 80), v4, 1u);
  else
    sub_154FF40(a1, a2, *(_DWORD *)(a3 + 80), v4, *(_DWORD *)(a3 + 104) != 0);
}
