size_t __fastcall sub_95810(FILE *stream, void *ptr, signed __int64 a3)
{
  size_t v4; // r12
  int v5; // eax

  if ( a3 < 0 )
  {
    if ( !byte_1671A1 )
      sub_96F80(1225);
    BUG();
  }
  if ( stream )
  {
    v4 = 0;
    if ( a3 )
    {
      v4 = fread(ptr, 1u, a3, stream);
      if ( a3 != v4 )
      {
        v5 = feof(stream);
        sub_8F860(v5 == 0 ? 1 : 3);
      }
    }
  }
  else
  {
    v4 = -1;
    sub_8F860(1u);
    *__errno_location() = 9;
    sub_8F860(1u);
  }
  return v4;
}

