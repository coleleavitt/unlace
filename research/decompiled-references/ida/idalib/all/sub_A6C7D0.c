unsigned __int64 __fastcall sub_A6C7D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = a2;
  if ( a2 )
    v4 = a2 - 24;
  sub_F60A30(v4, a3, *(_QWORD *)(a1 + 16));
  return sub_985B10(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}
