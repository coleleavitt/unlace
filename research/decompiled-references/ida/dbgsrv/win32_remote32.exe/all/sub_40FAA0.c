/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FAA0
// Address: 0x0040FAA0

//----- (0040FAA0) --------------------------------------------------------
int __stdcall sub_40FAA0(_DWORD *a1, int a2, unsigned int a3, int *a4, int a5)
{
  int v5; // ecx
  int v6; // edx

  if ( !a1[50] && (a1[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( !a4 )
    return -1;
  v5 = a1[65];
  *(_DWORD *)(v5 + 56) = a2;
  *(_DWORD *)(v5 + 52) = 0;
  v6 = a1[65];
  if ( a3 < *(_DWORD *)(v6 + 12) )
    *(_DWORD *)(v6 + 52) |= *(unsigned __int8 *)(**(_DWORD **)(v6 + 4) + 20 * a3 + 8);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[65] + 8))(a1[65])
    && sub_414730((_DWORD *)a1[65], a3, a4) )
  {
    return 2 * ((*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[65] + 12))(a1[65]) != 0) - 1;
  }
  else
  {
    return -1;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
