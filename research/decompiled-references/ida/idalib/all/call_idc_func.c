__int64 __fastcall call_idc_func(__int64 a1, const char *a2, __int64 a3, int a4, __int64 *a5, __int64 a6)
{
  unsigned int v9; // ebx
  _QWORD v11[26]; // [rsp+10h] [rbp-D0h] BYREF

  v11[19] = __readfsqword(0x28u);
  sub_7977F0((__int64)v11, a6, 0);
  v9 = sub_79BFB0(v11, a2, 0, a4, a3, a1, a5);
  sub_797950((__int64)v11);
  return v9;
}
