__int64 __fastcall sub_9BD90(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v3; // [rsp+28h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  memset(&v2[1], 0, 32);
  v2[0] = &off_4AF840;
  v3 = 0;
  ((void (__fastcall *)(__int64, _QWORD *))sub_11AE20)(a1, v2);
  return v3;
}
