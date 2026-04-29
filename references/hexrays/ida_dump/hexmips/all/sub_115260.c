_BOOL8 __fastcall sub_115260(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v4[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  return v2 != v1
      && (unsigned int)(*(_DWORD *)v2 - 15) <= 3
      && *(_QWORD *)(v2 + 24) == *(_QWORD *)(v1 + 24)
      && (unsigned __int8)sub_11BB80(v2 + 48, v4, 1)
      && !v4[0];
}
