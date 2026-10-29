unsigned __int64 __fastcall sub_20A09F0(_QWORD **a1)
{
  _QWORD **v1; // r11
  unsigned __int64 result; // rax

  v1 = a1;
  do
  {
    if ( *v1 )
      result = sub_20A0850((__int64)v1, *v1);
    ++v1;
  }
  while ( v1 != a1 + 3 );
  return result;
}
