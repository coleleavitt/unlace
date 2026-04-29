__int64 __fastcall sub_1D1900(int a1, int a2, unsigned __int8 a3, __int64 a4)
{
  int v4; // ebp
  int v5; // r8d
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp-8h] [rbp-50h]
  _DWORD v10[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = a4;
  v5 = *(_DWORD *)(a4 + 4);
  v11 = __readfsqword(0x28u);
  v6 = a3 + 27;
  qsnprintf(v10, 16, "__RO%c%d__", a3 == 0 ? 76 : 82, v5);
  result = sub_32FDB0(a1, a2, (unsigned int)v10, v4 + 24, 2, v4, 1, v9, v10[0], v10[2], v10[4], v11);
  v8 = *(_QWORD *)(result + 72);
  *(_DWORD *)(v8 + 280) |= 0x14u;
  *(_DWORD *)(v8 + 284) = v6;
  return result;
}
