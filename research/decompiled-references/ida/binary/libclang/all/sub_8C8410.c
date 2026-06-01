unsigned __int64 __fastcall sub_8C8410(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 6) == 4 )
    return sub_6C9720(a2, v2 & 0xFFFFFFFFFFFFFFF8LL, 0);
  if ( (v2 & 6) == 2 )
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
  return *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
}

