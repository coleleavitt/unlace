__int64 __fastcall sub_DFF130(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx

  v2 = *a2;
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 64;
  *(_BYTE *)(a1 + 20) = 0;
  return a1;
}

