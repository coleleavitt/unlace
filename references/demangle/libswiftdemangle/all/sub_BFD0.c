bool __fastcall sub_BFD0(char *a1)
{
  size_t v1; // rsi

  v1 = 0;
  if ( a1 )
    v1 = strlen(a1);
  return sub_BFA0(a1, v1);
}
