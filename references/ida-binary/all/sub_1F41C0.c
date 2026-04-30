bool __fastcall sub_1F41C0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  v1 = (_QWORD *)qword_8CB520;
  v2 = (_QWORD *)(qword_8CB520 + 8 * xmmword_8CB528);
  if ( (_QWORD *)qword_8CB520 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  return v2 != v1;
}
