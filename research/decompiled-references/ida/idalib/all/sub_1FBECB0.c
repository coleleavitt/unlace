__int64 __fastcall sub_1FBECB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_1FBEC00((__int64 *)a1, (_QWORD *)a2, a3, a4, a5, a6);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 89) >> 6);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 88) & 0x3FFF);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 92), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 96), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 134;
  return result;
}
