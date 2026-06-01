__int64 __fastcall sub_8E0D20(__int64 a1, unsigned __int8 a2)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = 0;
  *(_WORD *)(a1 + 2) = a2;
  *(_QWORD *)(a1 + 8LL * a2 + 8) = 0;
  return 0;
}

