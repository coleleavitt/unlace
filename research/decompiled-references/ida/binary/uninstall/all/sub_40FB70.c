__int64 __fastcall sub_40FB70(int a1, int a2, int a3)
{
  __int64 v4; // rbp
  int v6; // r8d
  int v7; // r9d

  v4 = sub_496CB0();
  if ( a1 != 0 && v4 == 0 )
  {
    fflush(stdout);
    sub_47D740((unsigned int)"unable to alloc %u bytes, %s line %d", a1, a2, a3, v6, v7);
  }
  return v4;
}

