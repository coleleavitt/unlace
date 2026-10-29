unsigned __int64 __fastcall sub_421CD0(__int64 a1, void (__fastcall ***a2)(_QWORD, const char *, __int64 *))
{
  int v2; // r12d
  void (__fastcall **v3)(_QWORD, const char *, __int64 *); // rax
  int v4; // eax
  _BYTE v6[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-20h]

  v3 = *a2;
  v7 = __readfsqword(0x28u);
  v6[0] = 0;
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD, const char *, __int64 *), __int64, _BYTE *, __int64))v3[10])(
    a2,
    3,
    v6,
    4096);
  v4 = *(_DWORD *)(a1 + 4);
  LOBYTE(v2) = v6[0] != 0;
  if ( v4 )
  {
    if ( v4 != 1 )
      goto LABEL_3;
  }
  else
  {
    v2 &= sub_421C50(a1, (_BYTE *)&dword_0 + 1, a2) ^ 1;
  }
  if ( *(_BYTE *)a1 )
    v2 &= sub_421C50(a1, (_BYTE *)&dword_0 + 2, a2) ^ 1;
LABEL_3:
  (*a2)[11](a2, nullptr, (__int64 *)(unsigned __int8)v2);
  return v7 - __readfsqword(0x28u);
}
