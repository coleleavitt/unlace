__int64 __fastcall sub_2100420(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-28h] BYREF
  char v4[9]; // [rsp+1Fh] [rbp-9h] BYREF

  result = a1;
  v3[0] = a1;
  v3[1] = a2;
  if ( *(_BYTE *)(a1 + a2 - 1) == 93 )
  {
    v4[0] = 91;
    sub_2246E40(v3, v4, 1);
    return v3[0];
  }
  return result;
}
