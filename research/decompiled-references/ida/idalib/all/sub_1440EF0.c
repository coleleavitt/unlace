__int64 __fastcall sub_1440EF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_1440A00(a2, *a1);
  if ( v2 )
    return sub_FBCE00(1u, 0, v2, *(_QWORD *)(*a1 + 64), *(_QWORD *)(*a1 + 56));
  else
    return 0;
}
