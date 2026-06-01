__int64 __fastcall sub_818210(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  _DWORD *v3; // rax

  v2 = *(_WORD *)(a2 + 4);
  if ( v2 )
  {
    if ( v2 == 2 && *(_DWORD *)(a2 + 16) == 2 )
      return 1;
    return sub_860060();
  }
  v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v3 || *(_DWORD *)(a1 + 112) != *v3 || v3[1] != 2 && v3[1] != 13 && v3[1] )
    return sub_860060();
  return 1;
}

