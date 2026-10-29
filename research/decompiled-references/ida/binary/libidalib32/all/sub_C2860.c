bool __fastcall sub_C2860(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  v1 = qalloc_or_throw();
  sub_C1AC0(v1, *(_QWORD *)(a1 + 16), 0);
  v3[0] = -1;
  return sub_198260(v1, v3) == 0;
}

