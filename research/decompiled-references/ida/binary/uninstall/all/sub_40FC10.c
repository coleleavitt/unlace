__int64 __fastcall sub_40FC10(void *a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rbp
  int v5; // r8d
  int v6; // r9d

  v4 = sub_496FB0(a1);
  if ( a2 != 0 && v4 == 0 )
  {
    LOBYTE(v2) = v4 == 0;
    sub_47D740((unsigned int)"unable to realloc %u bytes", a2, v2, v3, v5, v6);
  }
  return v4;
}

