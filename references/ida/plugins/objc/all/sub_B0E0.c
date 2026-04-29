__int64 __fastcall sub_B0E0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = a1 + 53;
  *a1 = &off_3C960;
  do
  {
    if ( v1[1] )
    {
      v1[2] = 0;
      qfree();
    }
    v1 -= 4;
    result = clear_tinfo_t();
  }
  while ( v1 != a1 - 3 );
  return result;
}
