bool __fastcall sub_232C20(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v1 = qalloc_or_throw(280);
  sub_231E50(v1, *(const char **)(a1 + 16), 0);
  v5[0] = -1;
  return sub_4AED50(v1, v5, v2, v3) == 0;
}
