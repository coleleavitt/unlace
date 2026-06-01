unsigned __int64 __fastcall sub_F62E50(__int64 a1)
{
  bool v1; // al
  unsigned __int64 v2; // rdx

  v1 = sub_F62DD0(a1);
  v2 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v1 )
    return *(_QWORD *)(a1 + 8);
  return v2;
}
