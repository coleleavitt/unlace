/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BE4C
// Address: 0x0006BE4C

//----- (0006BE4C) --------------------------------------------------------
int __fastcall sub_6BE4C(const void *a1, _DWORD *a2)
{
  _DWORD *v3; // r7
  size_t v5; // r0
  size_t v6; // r6
  void *v7; // r1
  unsigned int v8; // r2
  void *v9; // r0
  int result; // r0
  unsigned int v11; // [sp+0h] [bp-4h]

  v3 = a2 + 4;
  if ( a1 && (v5 = strlen((const char *)a1)) != 0 )
  {
    v6 = v5;
    v7 = (void *)a2[4];
    v8 = v5 + 1;
    if ( a2[6] < v5 + 1 )
    {
      v11 = v5 + 1;
      v9 = qvector_reserve((int)v3, v7, v8, 1u);
      v8 = v11;
      v7 = v9;
      *v3 = v9;
    }
    a2[5] = v8;
    memmove(v7, a1, v6);
    result = a2[4];
    *(_BYTE *)(result + v6) = 0;
  }
  else
  {
    a2[5] = 0;
    return 0;
  }
  return result;
}
