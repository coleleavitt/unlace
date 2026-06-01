unsigned __int64 __fastcall sub_A6CDE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 )
    v3 = a2 - 40;
  sub_F60130(v3, a3);
  return sub_985B10(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}
