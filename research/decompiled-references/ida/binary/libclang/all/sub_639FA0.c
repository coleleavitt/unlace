__int64 __fastcall sub_639FA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 20) = 0;
  *(_OWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 501;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return a1;
}

