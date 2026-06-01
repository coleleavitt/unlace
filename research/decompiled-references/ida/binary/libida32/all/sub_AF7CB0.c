__int64 __fastcall sub_AF7CB0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  int v7; // [rsp+20h] [rbp-28h]
  unsigned __int8 v8; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+28h] [rbp-20h]

  v6[0] = a1;
  v6[1] = a2;
  v9 = 0;
  LODWORD(v5) = 0;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "skip", 4);
  LODWORD(v5) = 1;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "used-gpr-arg", 12);
  LODWORD(v5) = 2;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "used-gpr", 8);
  LODWORD(v5) = 3;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "used-arg", 8);
  LODWORD(v5) = 4;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "used", 4);
  LODWORD(v5) = 5;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "all-gpr-arg", 11);
  LODWORD(v5) = 6;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "all-gpr", 7);
  LODWORD(v5) = 7;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "all-arg", 7);
  LODWORD(v5) = 8;
  BYTE4(v5) = 1;
  sub_AD7080((__int64)v6, &v5, "all", 3);
  result = (unsigned __int8)v9;
  if ( (_BYTE)v9 )
  {
    result = v8;
    if ( v8 )
      *a3 = v7;
  }
  return result;
}

