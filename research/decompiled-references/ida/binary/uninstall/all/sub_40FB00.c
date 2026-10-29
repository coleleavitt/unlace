__int64 __fastcall sub_40FB00(int a1)
{
  int v1; // edx
  int v2; // ecx
  __int64 v3; // rbp
  int v4; // r8d
  int v5; // r9d

  v3 = sub_496CB0();
  if ( a1 != 0 && v3 == 0 )
  {
    LOBYTE(v1) = v3 == 0;
    sub_47D740((unsigned int)"unable to alloc %u bytes", a1, v1, v2, v4, v5);
  }
  return v3;
}

