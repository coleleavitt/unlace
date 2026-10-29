__int64 __fastcall sub_7040F0(_QWORD *a1, __int64 a2, __int64 a3, char *a4, int a5, double a6, __m128i a7, __m128 a8)
{
  sub_6F5C40((__int64)a1);
  parse_command_line(a1 + 9, 0, a3, 0);
  if ( a4 && *a4 )
    return sub_702A10((__int64)a1, a2, a4, a5, a6, a7, a8);
  sub_6FCBC0(a1);
  sub_6F8510((__int64)a1);
  return 1;
}
