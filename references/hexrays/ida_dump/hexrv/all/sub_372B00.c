__int64 __fastcall sub_372B00(_QWORD *a1, __int64 a2, __int64 *a3, double a4, __m128 a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  sub_674F0(
    &v8,
    (__int64)"\n//-------------------------------------------------------------------------\n// %s declarations\n\n",
    "Function");
  if ( (unsigned __int8)sub_372000(a1, a2, a3, v8, 0, 0.0, a5)
    && (sub_674F0(
          &v8,
          (__int64)"\n"
                   "//-------------------------------------------------------------------------\n"
                   "// %s declarations\n"
                   "\n",
          "Data"),
        (unsigned __int8)sub_372000(a1, a2, a3, v8, 1, 0.0, a5)) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(*a3 + 32))(a3, a2, "\n");
  }
  else
  {
    v6 = 0;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v6;
}
