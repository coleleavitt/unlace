bool __fastcall sub_164420(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  v1 = (_QWORD *)qword_2544E0;
  v2 = (_QWORD *)(qword_2544E0 + 8 * xmmword_2544E8);
  if ( (_QWORD *)qword_2544E0 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  return v2 != v1;
}

