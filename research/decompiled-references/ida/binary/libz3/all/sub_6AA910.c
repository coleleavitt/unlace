__int64 __fastcall sub_6AA910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  sub_1858590(a1 + 16, a4);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 40) = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  result = *(_QWORD *)(a2 + 856);
  *(_QWORD *)(a1 + 48) = 8;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = result;
  return result;
}

