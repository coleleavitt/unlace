__int64 __fastcall sub_1020960(__int64 a1, int a2, int a3, int a4)
{
  int v5[3]; // [rsp+0h] [rbp-18h] BYREF
  char v6; // [rsp+Ch] [rbp-Ch]

  v5[1] = a3;
  v5[2] = a4;
  v5[0] = a2;
  v6 = 0;
  return sub_10206D0(a1, v5, (a4 & 0x7FFFFFFF) - (a3 & 0x7FFFFFFFu), 0, 0);
}
