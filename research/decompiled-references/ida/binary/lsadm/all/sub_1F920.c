__int64 __fastcall sub_1F920(__int64 a1)
{
  __int64 result; // rax

  result = sub_2B340();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  return result;
}

