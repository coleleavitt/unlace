/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43ED0
// Address: 0x0000000000043ED0

//----- (0000000000043ED0) ----------------------------------------------------
bool __fastcall sub_43ED0(__int64 a1, const char *a2, __int64 a3)
{
  __int64 (__fastcall **v4)(); // [rsp+8h] [rbp-20h] BYREF
  int v5; // [rsp+10h] [rbp-18h]
  __int64 v6; // [rsp+18h] [rbp-10h]
  unsigned __int64 v7; // [rsp+20h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  v5 = 4;
  v4 = off_146E90;
  v6 = a3;
  return (unsigned int)sub_5B480(a2, &v4, 0) == 1;
}
// 146E90: using guessed type __int64 (__fastcall *off_146E90[3])();
