__int64 __fastcall sub_36AF40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rsi
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = a1[9];
  v3 = a1[1];
  v7[1] = __readfsqword(0x28u);
  v5 = a1[5];
  v7[0] = v2;
  *(_QWORD *)(a2 + 8) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64, __int64))netnode_supset)(
                                           v3,
                                           v5,
                                           v7,
                                           8,
                                           65);
  return 0;
}
