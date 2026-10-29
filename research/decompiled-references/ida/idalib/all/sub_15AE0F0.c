__int64 __fastcall sub_15AE0F0(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  char v4; // al

  v4 = *(_BYTE *)(a1 + 3);
  if ( (v4 & 1) != 0 )
  {
    *a4 = 137;
    *a3 = "_Sat";
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 200) = a2;
    *(_BYTE *)(a1 + 3) = v4 | 1;
    return 0;
  }
}
