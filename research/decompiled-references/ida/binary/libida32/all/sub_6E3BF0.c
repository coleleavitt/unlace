__int64 __fastcall sub_6E3BF0(_QWORD *a1, __int64 a2, __int64 a3, void **a4, int a5, double a6, __m128i a7, __m128 a8)
{
  sub_6D5600((__int64)a1);
  parse_command_line(a1 + 9, 0, a3, 0);
  if ( a4 && *(_BYTE *)a4 )
    return sub_6E2510((__int64)a1, a2, a4, a5, a6, a7, a8);
  sub_6DD970(a1);
  sub_6D7ED0((__int64)a1);
  return 1;
}

