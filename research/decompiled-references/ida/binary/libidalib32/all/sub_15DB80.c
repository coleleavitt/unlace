unsigned __int64 __fastcall sub_15DB80(__int64 a1)
{
  __int64 (**v2)(); // [rsp+0h] [rbp-48h] BYREF
  int v3; // [rsp+8h] [rbp-40h]
  int v4; // [rsp+Ch] [rbp-3Ch]
  __int64 (**v5)(); // [rsp+10h] [rbp-38h] BYREF
  int v6; // [rsp+18h] [rbp-30h]
  int v7; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = off_22FD98;
  v3 = 0;
  v4 = getinf();
  v6 = 0x7FFFFFFF;
  v7 = getinf();
  v5 = off_22FD98;
  sub_15DA50(a1, (__int64)&v2, (__int64)&v5);
  return v8 - __readfsqword(0x28u);
}

