__int64 __fastcall sub_6CAB80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v5 = sub_6CAAD0(a1, a3, a4);
  v6 = *a1;
  v8[0] = v5;
  return sub_7BF130(v8, v6, a2);
}
