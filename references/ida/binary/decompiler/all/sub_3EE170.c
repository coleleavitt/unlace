__int64 __fastcall sub_3EE170(__int64 a1)
{
  _QWORD v2[47]; // [rsp+0h] [rbp-178h] BYREF

  v2[45] = __readfsqword(0x28u);
  qmemcpy(v2, (const void *)(a1 + 24), 0x168u);
  LOWORD(v2[3]) = 46;
  BYTE1(v2[5]) = 5;
  v2[6] = 128;
  return sub_3ED340(a1, (__int64)v2, 0);
}
