__int64 __fastcall sub_714290(__int64 a1, _QWORD *a2, char a3, __int64 a4)
{
  *(_BYTE *)(a1 + 8) = a3;
  *(_QWORD *)a1 = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = a4;
  return sub_7140E0(a1, a2);
}

