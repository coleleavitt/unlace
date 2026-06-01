__int64 __fastcall sub_111F0(const char *a1, const char *a2)
{
  unsigned int v2; // ebx

  v2 = rename(a1, a2);
  if ( !v2 )
    return 0;
  sub_F2F0(1u);
  return v2;
}

