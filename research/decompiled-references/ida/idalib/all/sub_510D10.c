__int64 __fastcall sub_510D10(__int64 a1, __int64 a2, char **a3)
{
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rax

  v4 = *(_QWORD *)(a1 + 1672);
  v5 = 1;
  v6 = *(_QWORD *)(v4 + 1048);
  if ( !v6 )
    return v5;
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 1040) + 16 * v6 - 8) <= 0x100000000uLL || *(_DWORD *)(a2 + 24) == 8 )
    return 1;
  if ( !a3 )
    return 0;
  sub_35A790(a3);
  return 0;
}
