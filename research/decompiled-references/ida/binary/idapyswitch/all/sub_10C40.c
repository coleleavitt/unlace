__int64 __fastcall sub_10C40(int a1)
{
  unsigned int v1; // ebx

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  sub_F2F0(1u);
  return 0xFFFFFFFFLL;
}

