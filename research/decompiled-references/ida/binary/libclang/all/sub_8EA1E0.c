__int64 __fastcall sub_8EA1E0(__int64 a1, _DWORD *a2)
{
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
    *(_DWORD *)(a1 + 816) = *a2;
  *(_DWORD *)(a1 + 812) = *a2;
  return 1;
}

