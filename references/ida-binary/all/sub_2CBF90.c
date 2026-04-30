__int64 __fastcall sub_2CBF90(int a1)
{
  char v2[40]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  qsnprintf(v2, 32, "%d", a1);
  return sub_2CBEC0(v2);
}
