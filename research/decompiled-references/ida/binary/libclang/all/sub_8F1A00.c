__int64 __fastcall sub_8F1A00(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rdi

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v5 = a1 + 384;
  *(_QWORD *)(v5 + 416) = *a4;
  return sub_9C9E10(v5, *(_QWORD *)(v5 + 408), a2, a3);
}

