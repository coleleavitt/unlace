__int64 __fastcall sub_13F47D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int8 v5; // [rsp+20h] [rbp-28h]
  unsigned __int8 v6; // [rsp+21h] [rbp-27h]

  v4[0] = a1;
  v4[1] = a2;
  v6 = 0;
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "float.h", 7);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "iso646.h", 8);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "limits.h", 8);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stdalign.h", 10);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stdarg.h", 8);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stdatomic.h", 11);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stdbool.h", 9);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stdcountof.h", 12);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stddef.h", 8);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "stdint.h", 8);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "tgmath.h", 8);
  v3 = 1;
  sub_B7E0A0((__int64)v4, &v3, "unwind.h", 8);
  result = v6;
  if ( v6 )
    return v5;
  return result;
}
