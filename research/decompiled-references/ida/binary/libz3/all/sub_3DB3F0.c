__int64 __fastcall sub_3DB3F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v3; // r12
  char v5; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[0] = 0;
  v6[1] = 0;
  v7[0] = 1;
  v7[1] = 0;
  v2 = sub_1666AE0(a1, a2, v6, &v5);
  if ( (_BYTE)v2 )
  {
    v2 = (v6[0] & 0x100000000LL) == 0;
    if ( (v6[0] & 0x100000000LL) == 0 )
    {
      v2 = 0;
      if ( LODWORD(v6[0]) == -1 )
      {
        v2 = (v7[0] & 0x100000000LL) == 0;
        if ( (v7[0] & 0x100000000LL) == 0 )
          LOBYTE(v2) = LODWORD(v7[0]) == 1;
      }
    }
  }
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v6);
  sub_182CBA0(v3, v7);
  return v2;
}

