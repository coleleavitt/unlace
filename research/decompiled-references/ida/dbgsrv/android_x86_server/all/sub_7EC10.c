/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EC10
// Address: 0x0007EC10

//----- (0007EC10) --------------------------------------------------------
int __cdecl sub_7EC10(int a1, int a2)
{
  int v2; // esi
  int v4; // eax
  void *v5[9]; // [esp+18h] [ebp-24h] BYREF

  v5[4] = (void *)__readgsdword(0x14u);
  v2 = 0;
  if ( !*(_BYTE *)(a1 + 152) )
  {
    *(_BYTE *)(a1 + 153) = 0;
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(a1 + 244) + 68))(*(_DWORD *)(a1 + 244), a1 + 200, a2);
    *(_BYTE *)(a1 + 152) = v4 > 0;
    if ( v4 <= 0 )
    {
      *(_BYTE *)(a1 + 153) = 1;
    }
    else
    {
      sub_96B40((int)v5, 4);
      sub_90C20(v5, a1 + 200);
      v2 = sub_96020(a1 + 100, (int *)v5);
      *(_BYTE *)(a1 + 152) = 0;
      if ( v5[0] )
      {
        v5[1] = nullptr;
        qfree(v5[0]);
        v5[0] = nullptr;
        v5[2] = nullptr;
      }
    }
  }
  return v2;
}
