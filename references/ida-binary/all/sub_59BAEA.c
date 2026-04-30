__int64 __fastcall sub_59BAEA(__int64 a1, int a2)
{
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}
