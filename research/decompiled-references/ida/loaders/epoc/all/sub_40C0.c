__int64 __fastcall sub_40C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rax
  int v5; // edx

  if ( *a3 != 13 )
    return 0;
  v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4 * v4 - 4);
  *(_QWORD *)(a1 + 104) = v4 - 1;
  *(_DWORD *)(a1 + 88) = v5;
  return 0;
}

