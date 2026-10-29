__int64 __fastcall sub_25A7E0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v2 = (__int64)v1;
      v1 = (_QWORD *)*v1;
      **(_QWORD **)(v2 + 8) = v1;
      v1[1] = *(_QWORD *)(v2 + 8);
      sub_255050(v2 + 16);
      result = qfree(v2);
      --a1[2];
    }
    while ( a1 != v1 );
  }
  return result;
}
