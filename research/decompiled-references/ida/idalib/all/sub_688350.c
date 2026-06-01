unsigned __int64 __fastcall sub_688350(unsigned __int16 a1)
{
  unsigned __int16 v1; // ax
  _BYTE v3[1032]; // [rsp+0h] [rbp-418h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  setinf(7, a1);
  v1 = getinf(7);
  sub_687CC0(v3, (__int64)&unk_2B376C0, 9, v1);
  sub_6403C0("Application type: %s");
  return v4 - __readfsqword(0x28u);
}
