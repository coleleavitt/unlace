/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57BD0
// Address: 0x00057BD0

//----- (00057BD0) --------------------------------------------------------
int __fastcall sub_57BD0(_DWORD *a1, int a2, __int16 a3)
{
  char *v4; // r1
  int v6; // r0
  int v7; // r7
  int v8; // lr
  unsigned int v9; // r2
  unsigned int v10; // r3
  void *v12; // r0
  char *v13; // r0
  __int16 v14; // [sp+2h] [bp-6h] BYREF

  v4 = (char *)a1[16];
  v6 = (int)(a1 + 16);
  v7 = *(_DWORD *)(v6 + 4);
  v14 = a3;
  v8 = v7;
  v9 = v7 + 1;
  v10 = a1[18];
  if ( v4 <= (char *)&v14 && &v14 < (__int16 *)&v4[2 * v10] )
  {
    if ( v10 < v9 )
    {
      v13 = (char *)sub_77EB0(v6, v4, v9, 2u);
      v7 = a1[17];
      v4 = v13;
      a1[16] = v13;
    }
    *(_WORD *)&v4[2 * v7] = a3;
  }
  else
  {
    if ( v10 < v9 )
    {
      v12 = sub_77EB0(v6, v4, v9, 2u);
      v8 = a1[17];
      a1[16] = v12;
    }
    *(_WORD *)(a1[16] + 2 * v8) = a3;
  }
  ++a1[17];
  return 0;
}
