__int64 __fastcall sub_C9D980(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a3 + 18720);
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  return a1;
}
