/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423670
// Address: 0x00423670

//----- (00423670) --------------------------------------------------------
int __stdcall sub_423670(char *a1, char *a2)
{
  char *v2; // esi
  char v4; // al
  int v5; // ecx
  int v6; // eax

  v2 = a1;
  if ( a1 == a2 )
    return 0;
  if ( *a1 != 10 || (v2 = sub_4239C0(a1, 1)) != nullptr )
  {
    sub_423B70((int)v2);
    v4 = *a2;
    *v2 = *a2;
    switch ( v4 )
    {
      case 2:
      case 6:
      case 8:
        *((_DWORD *)v2 + 2) = *((_DWORD *)a2 + 2);
        return 0;
      case 3:
        *(_OWORD *)(v2 + 8) = *(_OWORD *)(a2 + 8);
        return 0;
      case 5:
        v6 = *((_DWORD *)a2 + 2);
        *((_DWORD *)v2 + 2) = v6;
        ++*(_DWORD *)(v6 + 8);
        return 0;
      case 7:
        sub_402AD0((_DWORD *)v2 + 2, (unsigned int *)a2 + 2);
        return 0;
      case 9:
      case 10:
        v5 = *((_DWORD *)a2 + 3);
        *((_DWORD *)v2 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)v2 + 3) = v5;
        return 0;
      default:
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(283);
    }
  }
  return sub_45C9E0();
}
// 4B70F0: using guessed type char byte_4B70F0;
