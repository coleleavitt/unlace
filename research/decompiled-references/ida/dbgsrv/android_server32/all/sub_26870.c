/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26870
// Address: 0x00026870

//----- (00026870) --------------------------------------------------------
int __fastcall sub_26870(_DWORD *a1, char *s)
{
  void **v3; // r7
  size_t v5; // r0
  size_t v6; // r6
  unsigned int v7; // r2
  void *v8; // r0
  unsigned int v10; // [sp+0h] [bp-4h]

  v3 = (void **)(a1 + 2);
  if ( s && (v5 = strlen(s)) != 0 )
  {
    v6 = v5;
    v7 = v5 + 1;
    if ( a1[4] >= v5 + 1 )
    {
      v8 = *v3;
    }
    else
    {
      v10 = v5 + 1;
      v8 = qvector_reserve((int)v3, *v3, v7, 1u);
      v7 = v10;
      *v3 = v8;
    }
    a1[3] = v7;
    memmove(v8, s, v6);
    *(_BYTE *)(a1[2] + v6) = 0;
  }
  else
  {
    a1[3] = 0;
  }
  return 2;
}
