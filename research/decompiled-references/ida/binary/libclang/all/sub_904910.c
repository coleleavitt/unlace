__int64 __fastcall sub_904910(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdi

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = a1 + 384;
  *(_QWORD *)(v4 + 416) = *a3;
  return sub_904680(v4, *(_QWORD *)(v4 + 408), a2);
}

