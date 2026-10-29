/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D90C
// Address: 0x0005D90C

//----- (0005D90C) --------------------------------------------------------
bool __fastcall sub_5D90C(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  _BOOL4 v6; // r4
  unsigned int v8; // r7
  const void *v9; // r9
  void *v10; // r0
  void *ptr; // [sp+2h] [bp+0h] BYREF
  int v12; // [sp+6h] [bp+4h]
  int v13; // [sp+Ah] [bp+8h]

  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  sub_5D780(a3, (int)&ptr);
  v5 = sub_5D8BC(a1, (const char **)&ptr);
  v6 = a1 + 4 != (_DWORD)v5;
  if ( !a2 )
    v6 = 0;
  if ( v6 && (_DWORD *)a2 != v5 + 7 )
  {
    v8 = v5[8];
    if ( v8 > 1 )
    {
      v9 = (const void *)v5[7];
      v10 = *(void **)a2;
      if ( v8 > *(_DWORD *)(a2 + 8) )
      {
        v10 = sub_77EB0(a2, *(void **)a2, v8, 1u);
        *(_DWORD *)a2 = v10;
      }
      *(_DWORD *)(a2 + 4) = v8;
      memmove(v10, v9, v8 - 1);
      *(_BYTE *)(*(_DWORD *)a2 + v8 - 1) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
  }
  if ( ptr )
  {
    v12 = 0;
    sub_77E08(ptr);
  }
  return v6;
}
