/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32440
// Address: 0x00032440

//----- (00032440) --------------------------------------------------------
int __fastcall sub_32440(int a1, int a2, __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // r10
  __int64 v7; // r2
  void *v9; // r5

  if ( *a3 >= 1 && (v5 = a3[2]) != 0 )
  {
    v7 = a4 + *a3;
    if ( a4 >= v5 )
    {
      sub_1873C(a2, "bad offset %08x", (_DWORD)v7);
      return 0;
    }
    else
    {
      return sub_32298(a1, (void **)a2, v7, HIDWORD(v7));
    }
  }
  else
  {
    v9 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) <= 0x11u )
    {
      v9 = sub_77EB0(a2, *(void **)a2, 0x12u, 1u);
      *(_DWORD *)a2 = v9;
    }
    *(_DWORD *)(a2 + 4) = 18;
    qmemcpy(v9, "{no string table}", 17);
    *(_BYTE *)(*(_DWORD *)a2 + 17) = 0;
    return 0;
  }
}
