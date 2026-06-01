bool __fastcall sub_F632A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  bool result; // al

  v6 = sub_F631C0(a1, a2, a3, a4, a5, a6);
  result = v6
        && (*((_BYTE *)v6 + 28) & 0x7Fu) - 59 <= 2
        && (v7 = v6[5], (v7 & 7) == 0)
        && (v8 = v7 & 0xFFFFFFFFFFFFFFF8LL) != 0
        && (v9 = *(_QWORD *)(v8 + 16), *(_DWORD *)v9 == 9)
        && *(_QWORD *)(v9 + 16) == 0x5F776F7268746F6ELL
        && *(_BYTE *)(v9 + 24) == 116
        && sub_B8EC80((__int64)v6);
  return result;
}
