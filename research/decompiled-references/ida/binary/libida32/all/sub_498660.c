unsigned __int64 __fastcall sub_498660(__int64 *a1, __int64 *a2)
{
  __int64 v3[52]; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v4; // [rsp+1A0h] [rbp-28h]
  unsigned __int64 v5; // [rsp+1A8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_486910((__int64)v3, a1);
  v4 = a1[52];
  sub_480260((__int64)a1, a2);
  a1[52] = a2[52];
  sub_480260((__int64)a2, v3);
  a2[52] = v4;
  sub_481890((__int64)v3);
  return v5 - __readfsqword(0x28u);
}

