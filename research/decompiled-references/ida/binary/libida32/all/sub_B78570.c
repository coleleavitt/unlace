__int64 __fastcall sub_B78570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  result = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(result + 1) |= 8u;
  return result;
}

