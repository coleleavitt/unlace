/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33700
// Address: 0x00033700

//----- (00033700) --------------------------------------------------------
int __fastcall sub_33700(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r0
  int v6; // r1
  int result; // r0
  unsigned int v8; // r0
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r1
  void *v12[18]; // [sp+8h] [bp-48h] BYREF

  v12[17] = **(void ***)(loc_33838 + 210706);
  memset(v12, 0, 0x43u);
  if ( v12 != (void **)a2 )
  {
    v4 = *(void **)(a2 + 12);
    if ( v4 )
    {
      *(_DWORD *)(a2 + 16) = 0;
      qfree(v4);
      *(_DWORD *)(a2 + 20) = 0;
      *(_DWORD *)(a2 + 12) = 0;
    }
    v5 = *(void **)a2;
    if ( *(_DWORD *)a2 )
    {
      *(_DWORD *)(a2 + 4) = 0;
      qfree(v5);
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)a2 = 0;
    }
    sub_366DA((void **)a2, (int)v12);
    if ( v12[3] )
    {
      v12[4] = nullptr;
      qfree(v12[3]);
      v12[5] = nullptr;
      v12[3] = nullptr;
    }
  }
  if ( v12[0] )
  {
    v12[1] = nullptr;
    qfree(v12[0]);
    v12[2] = nullptr;
    v12[0] = nullptr;
  }
  v6 = sub_2C18A(*(_DWORD *)(a1 + 4), a2 + 24);
  result = 0;
  if ( v6 >= 0 )
  {
    v8 = *(unsigned __int8 *)(a2 + 28);
    if ( v8 < 0x30
      || ((LOBYTE(v9) = 2, v8 >> 4 != 14) || *(_WORD *)(*(_DWORD *)(a1 + 4) + 406) != 40)
      && (LOBYTE(v9) = -2, v8 >> 5 >= 5) )
    {
      v9 = v8 >> 4;
    }
    *(_BYTE *)(a2 + 64) = v9;
    *(_BYTE *)(a2 + 65) = v8 & 0xF;
    *(_DWORD *)(a2 + 60) = 0;
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 476);
    v11 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 52) = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a2 + 48) = v11;
    *(_DWORD *)(a2 + 56) = v10 + *(_DWORD *)(a2 + 32);
    return 1;
  }
  return result;
}
