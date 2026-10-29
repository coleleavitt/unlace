__int64 __fastcall sub_15AF660(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  char v4; // al

  v4 = *(_BYTE *)(a1 + 4);
  if ( (v4 & 2) != 0 )
  {
    *a4 = 137;
    *a3 = "virtual";
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 244) = a2;
    *(_BYTE *)(a1 + 4) = v4 | 2;
    return 0;
  }
}
