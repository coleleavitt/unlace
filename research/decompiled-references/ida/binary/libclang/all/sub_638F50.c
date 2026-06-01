__int64 __fastcall sub_638F50(__int64 a1, int a2, __int64 a3)
{
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 24) = a3;
  *(_OWORD *)(a1 + 4) = 0;
  return a1;
}

