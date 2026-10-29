/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446910
// Address: 0x00446910

//----- (00446910) --------------------------------------------------------
int __cdecl sub_446910(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v8[3]; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  if ( !*(_BYTE *)(a4 + 165) )
    return 0;
  v4 = 0;
  if ( !*(_BYTE *)(a4 + 164) )
  {
    v5 = *(_DWORD *)(a4 + 256);
    *(_BYTE *)(a4 + 165) = 0;
    v6 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v5 + 64))(v5, a4 + 212, 40);
    *(_BYTE *)(a4 + 164) = v6 >= 1;
    if ( v6 < 1 )
    {
      *(_BYTE *)(a4 + 165) = 1;
    }
    else
    {
      sub_44DD50((int *)v8, 4);
      v9 = 0;
      sub_449950((int)v8, a4 + 212);
      v4 = sub_44BD70((_BYTE *)(a4 + 112), (int *)v8);
      *(_BYTE *)(a4 + 164) = 0;
      v9 = 1;
      if ( v8[0] )
      {
        v8[1] = nullptr;
        sub_453A20(v8[0]);
        return (v4 != 0) + 1;
      }
    }
  }
  return (v4 != 0) + 1;
}
