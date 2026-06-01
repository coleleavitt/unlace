unsigned __int64 __fastcall sub_15E460(__int64 a1)
{
  __int64 (**v2)(); // [rsp+0h] [rbp-58h] BYREF
  int v3; // [rsp+8h] [rbp-50h]
  __int64 v4; // [rsp+10h] [rbp-48h]
  __int64 (**v5)(); // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = off_230E18;
  v3 = 0;
  v4 = getinf();
  v6 = 0x7FFFFFFF;
  v7 = getinf();
  v5 = off_230E18;
  sub_15E330(a1, (__int64)&v2, (__int64)&v5);
  return v8 - __readfsqword(0x28u);
}

