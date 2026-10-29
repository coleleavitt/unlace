/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_533E0
// Address: 0x000533E0

//----- (000533E0) --------------------------------------------------------
_DWORD *__fastcall sub_533E0(_DWORD *result, _DWORD *a2)
{
  _DWORD *v3; // r5
  unsigned int v4; // r6
  const void *v5; // r8
  void *v6; // r0

  v3 = result;
  *a2 = result[35];
  a2[1] = result[36];
  if ( a2 + 2 == result + 37 )
    goto LABEL_4;
  v4 = result[38];
  if ( v4 <= 1 )
  {
    a2[3] = 0;
LABEL_4:
    a2[5] = result[40];
    return result;
  }
  v5 = (const void *)result[37];
  v6 = (void *)a2[2];
  if ( v4 > a2[4] )
  {
    v6 = sub_78018((int)(a2 + 2), (void *)a2[2], v4, 1u);
    a2[2] = v6;
  }
  a2[3] = v4;
  result = memmove(v6, v5, v4 - 1);
  *(_BYTE *)(a2[2] + v4 - 1) = 0;
  a2[5] = v3[40];
  return result;
}
