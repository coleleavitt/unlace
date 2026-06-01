unsigned __int64 __fastcall sub_525C00(__int64 *a1, const char *a2, int a3, char a4)
{
  char v6[40]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  qsnprintf(v6, 32, "%d", a3);
  sub_5258E0(a1, a2, v6, a4);
  return v7 - __readfsqword(0x28u);
}
