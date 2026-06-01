_BOOL8 __fastcall sub_787800(_QWORD *a1)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = sub_786540(a1, -1);
  result = 1;
  if ( !v1 )
  {
    sub_781D40(a1);
    return (unsigned int)sub_787700((__int64)a1, 0, 0) != 0;
  }
  return result;
}
