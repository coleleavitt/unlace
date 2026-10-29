unsigned __int64 __fastcall sub_7D79B0(void *a1, void *a2)
{
  _BYTE v3[1104]; // [rsp+0h] [rbp-468h] BYREF
  unsigned __int64 v4; // [rsp+458h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  qmemcpy(v3, a1, sizeof(v3));
  qmemcpy(a1, a2, 0x450u);
  qmemcpy(a2, v3, 0x450u);
  return v4 - __readfsqword(0x28u);
}

