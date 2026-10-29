/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C9B8
// Address: 0x0047C9B8

//----- (0047C9B8) --------------------------------------------------------
int __usercall sub_47C9B8@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int *v7; // eax
  int v8; // eax
  unsigned __int8 *v9; // ecx
  unsigned __int8 v10; // dl
  __int16 *v11; // [esp-Ch] [ebp-10h]
  DWORD v12; // [esp-8h] [ebp-Ch]

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  if ( (*(_DWORD *)(a3 + 12) & 0x2000) == 0 || (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    return -1;
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a3 + 12), 0x10u);
    return -1;
  }
  _InterlockedOr((volatile signed __int32 *)(a3 + 12), 1u);
  if ( (*(_DWORD *)(a3 + 12) & 0x4C0) == 0 )
    sub_480792((_DWORD *)a3);
  *(_DWORD *)a3 = *(_DWORD *)(a3 + 4);
  v12 = *(_DWORD *)(a3 + 24);
  v11 = *(__int16 **)(a3 + 4);
  v4 = sub_47631B(1, a2, a3);
  *(_DWORD *)(a3 + 8) = sub_473C03(1, a2, v4, v11, v12);
  v5 = *(_DWORD *)(a3 + 8);
  if ( !v5 || v5 == -1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a3 + 12), 8 * (v5 != 0) + 8);
    *(_DWORD *)(a3 + 8) = 0;
    return -1;
  }
  if ( (*(_DWORD *)(a3 + 12) & 6) == 0 )
  {
    if ( sub_47631B(1, a2, a3) == -1 || sub_47631B(1, a2, a3) == -2 )
    {
      v7 = dword_4B60F0;
    }
    else
    {
      v6 = sub_47631B(1, a2, a3) >> 6;
      v7 = (int *)((char *)*(&dword_4B7B38 + v6) + 56 * (sub_47631B(1, v6, a3) & 0x3F));
    }
    if ( (v7[10] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)(a3 + 12), 0x20u);
  }
  v8 = a3;
  if ( *(_DWORD *)(a3 + 24) == 512 )
  {
    if ( (*(_DWORD *)(a3 + 12) & 0x40) != 0 && (*(_DWORD *)(a3 + 12) & 0x100) == 0 )
      *(_DWORD *)(a3 + 24) = 4096;
    v8 = a3;
  }
  v9 = *(unsigned __int8 **)v8;
  --*(_DWORD *)(v8 + 8);
  v10 = *v9;
  *(_DWORD *)v8 = v9 + 1;
  return v10;
}
// 4B60F0: using guessed type int dword_4B60F0[6];
