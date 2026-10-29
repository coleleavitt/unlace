__int64 __fastcall sub_8F3330(__int64 a1, char a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = *a3;
  v6 = *(_QWORD *)(a1 + 792);
  v7 = a1 + 384;
  *(_QWORD *)(v7 + 416) = v4;
  return sub_8DF3C0(v7, v6, a2);
}

