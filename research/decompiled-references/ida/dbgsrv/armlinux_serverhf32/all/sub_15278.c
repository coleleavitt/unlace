/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15278
// Address: 0x00015278

//----- (00015278) --------------------------------------------------------
bool __fastcall sub_15278(_DWORD *a1, int a2, int a3)
{
  FILE *v5; // r0
  FILE *v6; // r5
  _BOOL4 v7; // r4
  _BOOL4 v8; // r3
  size_t v10; // r0
  size_t v11; // r7
  unsigned int v12; // r10
  void *v13; // r0
  char v14; // [sp+Bh] [bp-140Dh] BYREF
  _BYTE v15[4]; // [sp+Ch] [bp-140Ch] BYREF
  char v16[1028]; // [sp+10h] [bp-1408h] BYREF
  _BYTE v17[4076]; // [sp+414h] [bp-1004h] BYREF

  sub_7EA4C(v17, 4096, "/proc/%u/stat", a3);
  v5 = sub_75BE8((int)v17, (unsigned __int8 *)"r");
  v6 = v5;
  v7 = (_BOOL4)v5;
  if ( v5 )
  {
    *a1 = 0;
    v7 = sub_15180((int)v5, "%d %1024s %c %d", v15, v16, &v14, a1) == 4;
    if ( a2 )
      v8 = v7;
    else
      v8 = 0;
    if ( v8 )
    {
      v10 = strlen(v16);
      v11 = v10;
      if ( v10 )
      {
        v12 = v10 + 1;
        v13 = *(void **)a2;
        if ( v12 > *(_DWORD *)(a2 + 8) )
        {
          v13 = sub_77EB0(a2, *(void **)a2, v12, 1u);
          *(_DWORD *)a2 = v13;
        }
        *(_DWORD *)(a2 + 4) = v12;
        memmove(v13, v16, v11);
        *(_BYTE *)(*(_DWORD *)a2 + v11) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 0;
      }
    }
    sub_77754(v6);
  }
  return v7;
}
