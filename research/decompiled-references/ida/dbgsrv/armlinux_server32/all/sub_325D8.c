/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_325D8
// Address: 0x000325D8

//----- (000325D8) --------------------------------------------------------
int __fastcall sub_325D8(int a1, int a2, __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // r10
  __int64 v7; // r2
  void *v9; // r5

  if ( *a3 >= 1 && (v5 = a3[2]) != 0 )
  {
    v7 = a4 + *a3;
    if ( a4 >= v5 )
    {
      sub_188E0(a2, "bad offset %08x", (_DWORD)v7);
      return 0;
    }
    else
    {
      return sub_32430(a1, (void **)a2, v7, HIDWORD(v7));
    }
  }
  else
  {
    v9 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) <= 0x11u )
    {
      v9 = sub_78018(a2, *(void **)a2, 0x12u, 1u);
      *(_DWORD *)a2 = v9;
    }
    *(_DWORD *)(a2 + 4) = 18;
    qmemcpy(v9, "{no string table}", 17);
    *(_BYTE *)(*(_DWORD *)a2 + 17) = 0;
    return 0;
  }
}
