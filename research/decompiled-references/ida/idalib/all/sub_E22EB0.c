__int64 __fastcall sub_E22EB0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx

  v2 = *a2;
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 32;
  *(_BYTE *)(a1 + 20) = 0;
  return a1;
}
