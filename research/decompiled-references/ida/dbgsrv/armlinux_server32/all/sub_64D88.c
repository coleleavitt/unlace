/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64D88
// Address: 0x00064D88

//----- (00064D88) --------------------------------------------------------
size_t __fastcall sub_64D88(int a1, unsigned int a2, unsigned int a3)
{
  _BOOL4 v3; // r7
  const char *v4; // r6
  _BOOL4 v6; // r3
  _BOOL4 v7; // r1
  size_t result; // r0
  size_t v10; // r5
  int v11; // r0
  int v12; // r9
  size_t v13; // r8
  void *v14; // r1

  if ( a2 > 0xC2 )
    return -1;
  v3 = a2 <= 0xF && a3 > 4;
  v4 = (const char *)*(&off_D10F0 + a2);
  if ( v3 )
    return -1;
  if ( a2 - 93 <= 0x1F && a3 > 4 )
    return -1;
  v6 = a2 - 61 <= 0x1F;
  if ( a3 <= 8 )
    v6 = 0;
  if ( v6 )
    return -1;
  v7 = a2 - 45 <= 0xF;
  if ( a3 <= 0x10 )
    v7 = 0;
  if ( v7 )
    return -1;
  if ( !a1 )
    return j_strlen(v4);
  if ( *(_DWORD *)(a1 + 8) <= 0xFu )
  {
    *(_DWORD *)a1 = sub_78018(a1, *(void **)a1, 0x10u, 1u);
    result = strlen(v4);
    v10 = result;
    if ( v4 )
      goto LABEL_19;
  }
  else
  {
    result = strlen(v4);
    v10 = result;
    if ( v4 )
    {
LABEL_19:
      v11 = *(_DWORD *)(a1 + 4);
      v12 = v11 - 1;
      v13 = v11 - 1 + v10;
      if ( !v11 )
      {
        v12 = 0;
        v13 = v10;
      }
      v14 = *(void **)a1;
      if ( v13 + 1 > *(_DWORD *)(a1 + 8) )
      {
        v14 = sub_78018(a1, v14, v13 + 1, 1u);
        *(_DWORD *)a1 = v14;
      }
      *(_DWORD *)(a1 + 4) = v13 + 1;
      *((_BYTE *)v14 + v13) = 0;
      memmove((void *)(*(_DWORD *)a1 + v12), v4, v10);
      return j_strlen(v4);
    }
  }
  return result;
}
// D10F0: using guessed type int (*off_D10F0)[14];
