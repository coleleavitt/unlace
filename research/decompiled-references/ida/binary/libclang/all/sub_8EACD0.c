__int64 __fastcall sub_8EACD0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 v6; // rdi

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v6 = a1 + 384;
  *(_QWORD *)(v6 + 416) = *a5;
  return sub_9F1990(v6, *(_QWORD *)(v6 + 408), a2, a3, a4);
}

