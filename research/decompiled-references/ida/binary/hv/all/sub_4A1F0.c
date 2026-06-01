__int64 __fastcall sub_4A1F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_3C440((_QWORD *)a1, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  sub_3C440((_QWORD *)(a1 + 24), a2 + 24);
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  sub_3C440((_QWORD *)(a1 + 48), a2 + 48);
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_3C440((_QWORD *)(a1 + 72), a2 + 72);
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 96) = result;
  return result;
}

