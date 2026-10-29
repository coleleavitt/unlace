__int64 __fastcall sub_40FC80(void *a1, int a2, int a3, int a4)
{
  __int64 v6; // rbp
  int v8; // r8d
  int v9; // r9d

  v6 = sub_496FB0(a1);
  if ( a2 != 0 && v6 == 0 )
  {
    fflush(stdout);
    sub_47D740((unsigned int)"unable to realloc %u bytes, %s line %d", a2, a3, a4, v8, v9);
  }
  return v6;
}

