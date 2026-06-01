__int64 __fastcall sub_4E0E80(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  if ( !a1 )
    return 0;
  v1 = (_QWORD *)qword_8D1E60;
  v2 = (_QWORD *)(qword_8D1E60 + 16 * xmmword_8D1E68);
  if ( (_QWORD *)qword_8D1E60 == v2 )
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
