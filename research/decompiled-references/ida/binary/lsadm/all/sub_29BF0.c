__int64 __fastcall sub_29BF0(const char *a1)
{
  unsigned int v1; // ebx

  v1 = unlink(a1);
  if ( !v1 )
    return 0;
  sub_26E40(1u);
  return v1;
}

