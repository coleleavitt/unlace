__int64 __fastcall sub_95A30(const char *a1)
{
  unsigned int v1; // ebx

  v1 = unlink(a1);
  if ( !v1 )
    return 0;
  sub_8F860(1u);
  return v1;
}

