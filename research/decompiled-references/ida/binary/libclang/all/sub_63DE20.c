__int64 __fastcall sub_63DE20(__int64 a1, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx

  if ( !a2 )
    return 0;
  v3 = sub_CAE830(*(_QWORD *)(a1 + 2152));
  v4 = v3;
  LOBYTE(v3) = v3 != 0;
  LOBYTE(v4) = v4 != 3;
  return v4 & v3;
}

