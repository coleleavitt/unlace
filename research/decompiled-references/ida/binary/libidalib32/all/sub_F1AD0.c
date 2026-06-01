__int64 __fastcall sub_F1AD0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  if ( !a1 )
    return 0;
  v1 = (_QWORD *)qword_251620;
  v2 = (_QWORD *)(qword_251620 + 16 * xmmword_251628);
  if ( (_QWORD *)qword_251620 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    v1 += 2;
    if ( v2 == v1 )
      return 0;
  }
  if ( v1 )
    return v1[1];
  else
    return 0;
}

