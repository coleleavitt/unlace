__int64 __fastcall sub_6CABE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v7 = sub_6CAAD0(a1, a3, a4);
  v8 = *a1;
  v10[0] = v7;
  return sub_7BEA80(v10, v8, a2, a5, 83);
}
