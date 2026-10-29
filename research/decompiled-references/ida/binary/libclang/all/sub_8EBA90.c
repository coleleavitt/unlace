__int64 __fastcall sub_8EBA90(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a2;
  return sub_A1AEE0();
}

