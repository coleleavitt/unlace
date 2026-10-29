/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C350
// Address: 0x0007C350

//----- (0007C350) --------------------------------------------------------
int __fastcall sub_7C350(int a1, void *a2, unsigned int a3)
{
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  size_t v10; // r7
  int *v11; // r4
  FILE *v12; // r0
  bool v13; // cf
  int whence; // [sp+0h] [bp-14h] BYREF
  int off; // [sp+8h] [bp-Ch]
  void *ptr; // [sp+Ch] [bp-8h]
  int v18; // [sp+10h] [bp-4h]

  v5 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) | v5 )
  {
    v6 = v5 - *(_DWORD *)(a1 + 32);
    if ( v6 <= a3 )
      a3 = v6;
  }
  v7 = *(_DWORD *)(a1 + 20);
  v8 = -1;
  if ( v7 )
  {
    v18 = 0;
    if ( *(int *)v7 < 2 )
      v9 = qfread(*(FILE **)(v7 + 8), a2, a3);
    else
      v9 = sub_7B4E0(v7, a2, a3);
    v10 = v9;
    if ( v9 < 1 )
      return v10;
    ptr = a2;
    v11 = (int *)(a1 + 32);
    v12 = *(FILE **)(a1 + 24);
    if ( !v12
      || (off = *v11, !qfseek(v12, (int)&whence, off, *(_DWORD *)(a1 + 36), 0))
      && qfwrite(*(FILE **)(a1 + 24), ptr, v10) == v10 )
    {
      v13 = __CFADD__(*v11, v10);
      *v11 += v10;
      *(_DWORD *)(a1 + 36) += v18 + v13;
      return v10;
    }
  }
  return v8;
}
