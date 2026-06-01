__int64 __fastcall sub_8679A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx

  if ( !a1 )
    return 0;
  v2 = a1;
  do
  {
    if ( !v2[1] && !(unsigned int)sub_89AAA0(a2, v2[2]) )
      return v2[3];
    v2 = (_QWORD *)*v2;
  }
  while ( v2 );
  return 0;
}
