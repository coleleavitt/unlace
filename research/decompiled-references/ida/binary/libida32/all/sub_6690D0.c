unsigned __int64 __fastcall sub_6690D0(unsigned __int16 a1)
{
  unsigned __int16 v1; // ax
  char v3[1032]; // [rsp+0h] [rbp-418h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  setinf(6, a1);
  v1 = getinf(6);
  sub_668AE0(v3, (__int64)&unk_2B0D7A0, 4, v1);
  sub_623150((__int64)"OS type         : %s", v3);
  return v4 - __readfsqword(0x28u);
}

