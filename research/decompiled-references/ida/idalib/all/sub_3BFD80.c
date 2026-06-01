char __fastcall sub_3BFD80(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned int *a4, char a5)
{
  char v5; // dh
  unsigned __int64 v7; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx

  if ( (v5 & 1) == 0 )
    return a5 ^ 1;
  v7 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1[3] + 24) == 8 )
    v7 = -2;
  if ( a2 >= v7 || (sub_3BE900(a1, a2 + 1, 1) & 0x100) == 0 )
    return a5 ^ 1;
  v10 = nbits(a2);
  v11 = v10 + 14;
  v12 = v10 + 7;
  if ( v12 >= 0 )
    v11 = v12;
  v13 = v11 >> 3;
  if ( v13 == 3 )
  {
    a4[1] = (unsigned __int16)a4[1];
    return *(_QWORD *)a4 == sub_3BF1D0(a1, a2);
  }
  if ( v12 > 31 )
  {
    if ( v13 != 4 )
      return a5 ^ 1;
    return *(_QWORD *)a4 == sub_3BF1D0(a1, a2);
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
      return *a4 == sub_3BF1D0(a1, a2);
    return a5 ^ 1;
  }
  return *(_WORD *)a4 == (unsigned __int16)sub_3BEE30(a1, a2);
}
