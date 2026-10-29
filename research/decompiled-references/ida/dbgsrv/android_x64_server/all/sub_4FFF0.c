/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FFF0
// Address: 0x000000000004FFF0

//----- (000000000004FFF0) ----------------------------------------------------
bool sub_4FFF0(__int64 a1, int a2, ...)
{
  char v3[1024]; // [rsp+B0h] [rbp-438h] BYREF
  gcc_va_list va; // [rsp+4B0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+4D0h] [rbp-18h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  sub_4F4E0(a1, v3, 1024, (unsigned int)a2, (int *)va);
  sub_4FCD0((int)"%s", v3);
  return a2 < 19;
}
