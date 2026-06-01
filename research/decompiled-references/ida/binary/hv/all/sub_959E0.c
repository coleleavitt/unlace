__int64 __fastcall sub_959E0(FILE *a1)
{
  unsigned int v1; // ebx

  if ( !a1 )
  {
    v1 = -1;
    sub_8F860(1u);
    *__errno_location() = 9;
    sub_8F860(1u);
    return v1;
  }
  v1 = fclose(a1);
  if ( !v1 )
    return v1;
  sub_8F860(1u);
  return v1;
}

