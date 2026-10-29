unsigned __int64 __fastcall sub_669170(unsigned __int16 a1)
{
  unsigned __int16 v1; // ax
  char v3[1032]; // [rsp+0h] [rbp-418h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  setinf(7, a1);
  v1 = getinf(7);
  sub_668AE0(v3, (__int64)&unk_2B0D700, 9, v1);
  sub_623150((__int64)"Application type: %s", v3);
  return v4 - __readfsqword(0x28u);
}

