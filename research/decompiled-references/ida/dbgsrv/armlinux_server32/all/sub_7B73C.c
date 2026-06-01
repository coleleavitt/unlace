/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B73C
// Address: 0x0007B73C

//----- (0007B73C) --------------------------------------------------------
int __fastcall sub_7B73C(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // kr00_8
  int result; // r0
  int v4; // r4
  _DWORD *v5; // r6
  unsigned int v6; // r1
  _DWORD *v7; // r3
  int v8; // r2

  v2 = *a2;
  if ( HIDWORD(v2) <= (unsigned int)v2 )
    return 1;
  v4 = a1[1];
  if ( !v4 )
    return 0;
  v5 = (_DWORD *)*a1;
  v6 = *(_DWORD *)(*a1 + 4);
  if ( (unsigned int)v2 <= v6 )
  {
LABEL_11:
    result = *v5 != v6;
    if ( (unsigned int)v2 < *v5 )
      result = 0;
    if ( result )
      return HIDWORD(v2) - 1 <= v6 - 1;
  }
  else
  {
    v7 = v5 + 2;
    v8 = 0;
    while ( 1 )
    {
      ++v8;
      v5 = v7;
      v7 += 2;
      if ( v8 == v4 )
        return 0;
      v6 = *(v7 - 1);
      if ( (unsigned int)v2 <= v6 )
        goto LABEL_11;
    }
  }
  return result;
}
