__int64 __fastcall sub_438B20(__int64 a1, char *a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v3[1] = a2;
  v3[0] = map_to_other_filesystem_t___vtable;
  return sub_438700((__int64)v3, a1, a2, 0x30u);
}
