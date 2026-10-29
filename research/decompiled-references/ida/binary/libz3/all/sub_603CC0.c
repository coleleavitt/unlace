__int64 __fastcall sub_603CC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  v3 = a2 + 656;
  *(_QWORD *)a1 = &off_1C527F0;
  result = *(_QWORD *)(v3 - 656);
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 48) = result;
  *(_QWORD *)(a1 + 56) = 0;
  return result;
}

