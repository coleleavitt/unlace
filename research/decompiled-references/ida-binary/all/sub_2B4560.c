unsigned __int64 __fastcall sub_2B4560(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8 = -1;
  v5 = *(_QWORD *)(a1 + 16);
  v7[4] = -1;
  sub_1F73F0(*(_QWORD *)(v5 + 16), (__int64)v7, a2, a5, a3);
  sub_1F4990(9u, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v7);
  sub_466D40(a1, a1 + 24);
  return v9 - __readfsqword(0x28u);
}
