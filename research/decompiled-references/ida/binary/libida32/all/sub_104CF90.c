_BOOL8 __fastcall sub_104CF90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 600);
  v2 = *(_QWORD *)(a1 + 592);
  if ( v1 == 3 && *(_WORD *)v2 == 21558 && *(_BYTE *)(v2 + 2) == 50 )
    return 1;
  result = 0;
  if ( *(_DWORD *)(a1 + 624) > 6u )
  {
    result = 1;
    if ( v1 == 7 )
      return *(_DWORD *)v2 != 1113541944 || *(_WORD *)(v2 + 4) != 21313 || *(_BYTE *)(v2 + 6) != 69;
  }
  return result;
}

