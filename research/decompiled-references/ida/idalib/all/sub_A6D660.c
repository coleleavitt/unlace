unsigned __int64 __fastcall sub_A6D660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 )
    v3 = a2 - 8;
  sub_F221D0(v3, a3);
  return sub_985B10(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}
