__int64 __fastcall sub_F3FB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  v6 = *(_QWORD *)(a2 + 8);
  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == v6 )
    return sub_F3F980(a1, a2, v7, a4, a5, a6);
  else
    return sub_F3F980(a1, *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), v7, a4, a5, a6);
}

