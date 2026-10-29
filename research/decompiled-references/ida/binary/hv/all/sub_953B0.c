__int64 __fastcall sub_953B0(const char *a1, unsigned int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = open64(a1, 66, a2);
  if ( v4 == -1 )
  {
    sub_8F860(1u);
  }
  else
  {
    v5 = v4;
    if ( !(unsigned int)sub_95120(v4, 66, a3) && !sub_952C0(v5, 0) )
      return v5;
    sub_952F0(v5);
  }
  return 0xFFFFFFFFLL;
}

