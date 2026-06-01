__int64 __fastcall sub_29840(const char *a1, __mode_t a2)
{
  unsigned int v2; // ebx

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  sub_26E40(1u);
  return 0xFFFFFFFFLL;
}

