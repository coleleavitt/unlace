__int64 __fastcall sub_1FDECF0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        int a8,
        __int128 a9,
        int a10)
{
  size_t v10; // r8
  char *v11; // rcx

  if ( a9 == 0 && !a10 || a7 == a9 && a8 == a10 )
    return 0;
  if ( a7 != 0 || (v10 = 31, v11 = "could not read module signature", a8) )
  {
    v10 = 18;
    v11 = "signature mismatch";
  }
  sub_99BDC0(a1, 0, a1[1], v11, v10);
  return 1;
}
