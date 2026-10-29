unsigned __int64 __fastcall sub_38D250(__int64 a1, __int64 a2)
{
  int v2; // esi
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 4);
  v5 = __readfsqword(0x28u);
  sub_38CFF0((__int64)ptr, v2, "BADADDR");
  sub_38C9E0();
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  *(_QWORD *)(a1 + 8) += 22LL;
  return v5 - __readfsqword(0x28u);
}

