__int64 __fastcall sub_14B6D0(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = __PAIR64__(a3, a2);
  v3 = qalloc_or_throw();
  sub_14B500(v3, v5);
  return sub_14AF20(v3, a1);
}

