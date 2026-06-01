__int64 __fastcall sub_15B6C0(__int64 a1, int a2)
{
  __int16 v3; // dx

  *(_DWORD *)(a1 + 24) = -1;
  *(_WORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v3 = unk_2440C8;
  *(_DWORD *)(a1 + 32) = a2;
  *(_OWORD *)a1 = 0;
  *(_WORD *)(a1 + 30) = v3;
  return a1;
}

