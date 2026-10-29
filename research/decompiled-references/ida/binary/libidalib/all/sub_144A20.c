bool __fastcall sub_144A20(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  v1 = (_QWORD *)qword_2540A0;
  v2 = (_QWORD *)(qword_2540A0 + 8 * xmmword_2540A8);
  if ( (_QWORD *)qword_2540A0 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  return v2 != v1;
}

