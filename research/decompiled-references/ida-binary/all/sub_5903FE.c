__int64 __fastcall sub_5903FE(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 8) = a2;
  return a1;
}
