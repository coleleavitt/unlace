__int64 __fastcall sub_F5FEF0(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_F5FD80(
           a2,
           a3,
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           *(char *)(a1 + 51) < 0,
           a2,
           (_QWORD *)(a1 + 64),
           *(_DWORD *)(a1 + 48) & 0x7FFFFFFF);
}
