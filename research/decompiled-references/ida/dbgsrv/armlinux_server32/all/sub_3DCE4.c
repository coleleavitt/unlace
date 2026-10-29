/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DCE4
// Address: 0x0003DCE4

//----- (0003DCE4) --------------------------------------------------------
bool __fastcall sub_3DCE4(int a1, int a2, const char *a3, int a4, int a5, int a6)
{
  unsigned int v7; // r4
  void *v8; // r6
  int v9; // r8
  _BOOL4 v10; // r4
  void *v12; // r0
  void *v13; // [sp+8h] [bp-10h] BYREF
  unsigned int v14; // [sp+Ch] [bp-Ch]

  sub_3DA90(&v13, a1, a3, a4, a5, a6);
  v8 = v13;
  v7 = v14;
  if ( a2 )
  {
    if ( v14 && (v9 = v14 - 1, v14 != 1) )
    {
      v12 = *(void **)a2;
      if ( v14 > *(_DWORD *)(a2 + 8) )
      {
        v12 = sub_78018(a2, *(void **)a2, v14, 1u);
        *(_DWORD *)a2 = v12;
      }
      *(_DWORD *)(a2 + 4) = v7;
      memmove(v12, v8, v7 - 1);
      *(_BYTE *)(*(_DWORD *)a2 + v9) = 0;
      v8 = v13;
      v7 = v14;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
  }
  v10 = v7 <= 1;
  if ( v8 )
  {
    v14 = 0;
    sub_77F70(v8);
  }
  return v10;
}
