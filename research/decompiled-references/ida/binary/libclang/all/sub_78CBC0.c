__int64 __fastcall sub_78CBC0(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD v3[19]; // [rsp+0h] [rbp-98h] BYREF

  memset(v3, 0, 0x88u);
  LOBYTE(v3[0]) = 1;
  v3[1] = -1;
  v3[3] = -1;
  v3[5] = -1;
  v3[7] = -1;
  v3[9] = -1;
  v3[11] = -1;
  v3[13] = -1;
  v3[15] = -1;
  v1 = sub_78C840((__int64)v3, a1, 7u) & 7;
  if ( (v3[0] & 1) == 0 )
    operator delete();
  return v1;
}

