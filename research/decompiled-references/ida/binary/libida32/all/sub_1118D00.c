__int64 __fastcall sub_1118D00(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( sub_2222D70(v4, "crypto", 6, 0) != -1 )
    return 1;
  LOBYTE(v3) = sub_2222D70(v4, "aes", 3, 0) != -1;
  return v3;
}

