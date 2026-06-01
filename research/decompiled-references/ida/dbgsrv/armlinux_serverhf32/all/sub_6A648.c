/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A648
// Address: 0x0006A648

//----- (0006A648) --------------------------------------------------------
int __fastcall sub_6A648(int a1, int a2, __int16 a3, unsigned __int8 *a4)
{
  _DWORD *v7; // r0
  _BYTE *v8; // r0
  size_t v9; // r0
  size_t v10; // r5
  unsigned int v12; // r7
  void *v13; // r0
  char buf[4]; // [sp+4h] [bp-1004h] BYREF
  int v15; // [sp+1004h] [bp-4h] BYREF

  sub_65BD0(a1, a2);
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)a1 = dword_D1B8C;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 92) = 0;
  *(_BYTE *)(a1 + 93) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  v7 = sub_805CC(8u);
  *(_DWORD *)(a1 + 88) = v7;
  *(_WORD *)(a1 + 56) = a3;
  *v7 = &off_D05C0;
  v7[1] = a1;
  sub_73690(buf, 0x1000u);
  v8 = sub_76B04(buf);
  sub_79524(v8, a4, (char *)&v15 - v8);
  v9 = strlen(buf);
  v10 = v9;
  if ( v9 )
  {
    v12 = v9 + 1;
    v13 = *(void **)(a1 + 60);
    if ( v12 > *(_DWORD *)(a1 + 68) )
    {
      v13 = sub_77EB0(a1 + 60, *(void **)(a1 + 60), v12, 1u);
      *(_DWORD *)(a1 + 60) = v13;
    }
    *(_DWORD *)(a1 + 64) = v12;
    memmove(v13, buf, v10);
    *(_BYTE *)(*(_DWORD *)(a1 + 60) + v10) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 0;
  }
  return a1;
}
// D05C0: using guessed type _UNKNOWN *;
// D1B8C: using guessed type int dword_D1B8C[2];
