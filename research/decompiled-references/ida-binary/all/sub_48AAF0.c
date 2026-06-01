__int64 __fastcall sub_48AAF0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 16);
  v3[0] = 0;
  v3[1] = 0xFFFFFFFF00000000LL;
  v3[2] = v1;
  return sub_48A940((_QWORD **)a1, (__int64)v3);
}
