__int64 __fastcall sub_E5C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( *(_BYTE *)a2 == 8 )
  {
    *(_BYTE *)(a1 + 41) |= sub_E5990(*(int **)(a2 + 8), *(_QWORD *)(a1 + 16), a3, a4, a5, a6);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)a2 == 14 )
      *(_BYTE *)(a1 + 42) = 1;
    return 0;
  }
}
