/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1EB68
// Address: 0x0001EB68

//----- (0001EB68) --------------------------------------------------------
int __fastcall sub_1EB68(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r4
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r7
  int v9; // r0
  int *v10; // r5
  unsigned int v11; // r6
  int v12; // r3
  int v13; // r0
  int result; // r0
  int v15; // [sp+Ch] [bp-Ch]

  v4 = 0;
  if ( a3 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(a1 + 8);
    v7 = 93 * ((v6 - v5) >> 2) - 1;
    if ( v6 == v5 )
      v7 = v6 - v5;
    v8 = *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 16);
    if ( v7 == v8 )
    {
      sub_25954((void **)a1);
      v8 = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20);
      v5 = *(_DWORD *)(a1 + 4);
      v6 = *(_DWORD *)(a1 + 8);
    }
    v9 = 0;
    if ( v6 != v5 )
      v9 = *(_DWORD *)(v5 + 4 * (v8 / 0x5D)) + 44 * (v8 % 0x5D);
    *(_DWORD *)v9 = -1;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = -1;
    *(_BYTE *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 16) = 0;
    copy_debug_event(v9, a2);
    v10 = (int *)(a1 + 20);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 16);
    if ( !v11 )
    {
      sub_2519C(a1);
      v11 = *(_DWORD *)(a1 + 16);
    }
    v12 = *(_DWORD *)(a1 + 4);
    v15 = *(_DWORD *)(v12 + 4 * (v11 / 0x5D));
    if ( *(_DWORD *)(a1 + 8) != v12 )
      v4 = v15 + 44 * (v11 % 0x5D);
    if ( v4 == v15 )
      v4 = *(_DWORD *)(v12 + 4 * (v11 / 0x5D) - 4) + 4092;
    *(_DWORD *)(v4 - 44) = -1;
    v13 = v4 - 44;
    *(_DWORD *)(v13 + 4) = 0;
    *(_DWORD *)(v13 + 8) = -1;
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 16) = 0;
    copy_debug_event(v4 - 44, a2);
    --*(_DWORD *)(a1 + 16);
    v10 = (int *)(a1 + 20);
  }
  result = *v10 + 1;
  *v10 = result;
  return result;
}
