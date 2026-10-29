bool __fastcall sub_C3A50(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  v1 = qalloc_or_throw();
  sub_C2C80(v1, *(_QWORD *)(a1 + 16), 0);
  v3[0] = -1;
  return sub_198E60(v1, v3) == 0;
}

