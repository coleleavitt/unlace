/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66CF0
// Address: 0x00066CF0

//----- (00066CF0) --------------------------------------------------------
int __fastcall sub_66CF0(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  void **v5; // r7
  unsigned int v6; // r6
  const void *v7; // r1
  void *v8; // r0
  int result; // r0
  const void *v10; // [sp+4h] [bp-8h]
  size_t v11; // [sp+8h] [bp-4h]

  v4 = a1[32];
  *a2 = a1[31];
  a2[1] = v4;
  v5 = (void **)(a2 + 2);
  if ( a1 + 31 != a2 )
  {
    v6 = a1[34];
    if ( v6 < 2 )
    {
      a2[3] = 0;
    }
    else
    {
      v11 = v6 - 1;
      v7 = (const void *)a1[33];
      if ( a2[4] >= v6 )
      {
        v8 = *v5;
      }
      else
      {
        v10 = (const void *)a1[33];
        v8 = qvector_reserve((int)(a2 + 2), *v5, v6, 1u);
        v7 = v10;
        *v5 = v8;
      }
      a2[3] = v6;
      memmove(v8, v7, v11);
      *(_BYTE *)(a2[2] + v11) = 0;
    }
  }
  result = a1[36];
  a2[5] = result;
  return result;
}
