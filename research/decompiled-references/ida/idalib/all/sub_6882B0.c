unsigned __int64 __fastcall sub_6882B0(unsigned __int16 a1)
{
  unsigned __int16 v1; // ax
  _BYTE v3[1032]; // [rsp+0h] [rbp-418h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  setinf(6, a1);
  v1 = getinf(6);
  sub_687CC0(v3, (__int64)&unk_2B37760, 4, v1);
  sub_6403C0("OS type         : %s");
  return v4 - __readfsqword(0x28u);
}
