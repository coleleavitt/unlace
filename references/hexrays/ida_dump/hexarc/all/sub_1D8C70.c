__int64 __fastcall sub_1D8C70(__int64 a1, int *a2, _DWORD *a3)
{
  __int64 v3; // rax
  int v4; // eax

  if ( *a3 == 3 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    LODWORD(v3) = a3[2];
    if ( *a3 == 4 )
      v3 = (unsigned __int16)v3;
    else
      v3 = (int)v3;
  }
  else
  {
    if ( *a3 != 1 )
      return 0;
    *(_BYTE *)(a1 + 8) = 5;
    if ( *a3 == 1 )
      v3 = *((_QWORD *)a3 + 1);
    else
      v3 = -1;
  }
  *(_QWORD *)a1 = v3;
  v4 = a3[22];
  if ( v4 <= 8 )
  {
    *a2 = v4;
    return 1;
  }
  return 0;
}
