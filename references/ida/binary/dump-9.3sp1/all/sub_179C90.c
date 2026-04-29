__int64 __fastcall sub_179C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebp
  __int64 i; // rbx
  int v8; // eax

  v6 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL); i; v6 += v8 )
  {
    v8 = sub_1799D0(i, a2, a3, a4, a5, a6);
    i = *(_QWORD *)(i + 8);
  }
  return v6;
}
