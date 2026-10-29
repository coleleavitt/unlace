__int64 __fastcall sub_168B9B0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)a2 + 248LL);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = v4 + 2448;
  return a1;
}
