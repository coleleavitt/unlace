unsigned __int64 __fastcall sub_182830(__int64 **a1, int a2)
{
  int v2; // eax
  size_t v3; // r8
  _DWORD *v4; // rax
  unsigned __int8 v6[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  get_eah();
  v2 = qsnprintf();
  v4 = (_DWORD *)sub_1820F0(a1, v6, v2, 0, v3);
  v4[2] = 5;
  *v4 = a2;
  return v7 - __readfsqword(0x28u);
}

