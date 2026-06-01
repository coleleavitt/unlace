__int64 __fastcall sub_485B60(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 result; // rax

  v5 = a1 + 24;
  *(_QWORD *)(v5 - 16) = a2;
  v6 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(v5 - 24) = &off_1C4EC18;
  *(_QWORD *)(v5 - 8) = v6;
  sub_16669D0(v5, v6);
  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 72) = result;
  *(_QWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 88) = a3;
  *(_DWORD *)(a1 + 92) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  return result;
}

