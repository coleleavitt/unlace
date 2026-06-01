/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1578
// Address: 0x00000000004B1578

//----- (00000000004B1578) ----------------------------------------------------
__int64 *__fastcall sub_4B1578(__int64 *result, _BYTE *a2, size_t a3)
{
  unsigned __int64 v3; // x4
  __int64 *v4; // x19
  size_t v5; // x6
  __int64 v6; // x5
  unsigned __int64 v7; // x20
  __int64 v8; // x5

  v3 = 15;
  v4 = result;
  v5 = result[1];
  v6 = *result;
  v7 = v5 + a3;
  if ( (__int64 *)*result != result + 2 )
    v3 = result[2];
  if ( v7 > v3 )
  {
    sub_4AFE60(result, v5, 0, a2, a3);
    v8 = *v4;
    v4[1] = v7;
    *(_BYTE *)(v8 + v7) = 0;
    return v4;
  }
  else
  {
    if ( !a3 )
    {
LABEL_7:
      result[1] = v7;
      *(_BYTE *)(v6 + v7) = 0;
      return result;
    }
    if ( a3 == 1 )
    {
      *(_BYTE *)(v6 + v5) = *a2;
      v6 = *result;
      goto LABEL_7;
    }
    memcpy((void *)(v6 + v5), a2, a3);
    v4[1] = v7;
    *(_BYTE *)(*v4 + v7) = 0;
    return v4;
  }
}
