__int64 __fastcall sub_95930(FILE *a1)
{
  __off64_t v1; // rbx

  if ( !a1 )
  {
    v1 = -1;
    sub_8F860(1u);
    *__errno_location() = 9;
    sub_8F860(1u);
    return v1;
  }
  v1 = ftello64(a1);
  if ( v1 != -1 )
    return v1;
  sub_8F860(1u);
  return -1;
}

