unsigned __int64 __fastcall sub_183370(__int64 **a1, __int64 a2)
{
  int v2; // eax
  size_t v3; // r8
  __int64 v4; // rax
  unsigned __int8 v6[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  get_eah();
  v2 = qsnprintf();
  v4 = sub_182C10(a1, v6, v2, 0, v3);
  *(_DWORD *)(v4 + 8) = 5;
  *(_QWORD *)v4 = a2;
  return v7 - __readfsqword(0x28u);
}

