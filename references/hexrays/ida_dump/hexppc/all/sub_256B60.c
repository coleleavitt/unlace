__int64 __fastcall sub_256B60(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      *(_QWORD *)v2[1] = v1;
      v1[1] = v2[1];
      sub_2513D0((__int64)(v2 + 2));
      result = qfree(v2);
      --a1[2];
    }
    while ( a1 != v1 );
  }
  return result;
}
