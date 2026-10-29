__int64 __fastcall sub_ED1650(__int64 a1, int a2, char a3, int a4)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a4;
  *(_BYTE *)(a1 + 8) = a3;
  return a1;
}

