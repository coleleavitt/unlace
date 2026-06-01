__int64 __fastcall sub_17A5990(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v6; // rax
  __int64 result; // rax

  v6 = sub_A81910(*(_QWORD **)(a1 + 248), a4, a3);
  result = sub_B74530(*(_QWORD *)(a1 + 248), a2, a3, a3, 0, a4, (__int64)v6, 0, 0);
  *(_BYTE *)(result + 29) |= 2u;
  return result;
}
