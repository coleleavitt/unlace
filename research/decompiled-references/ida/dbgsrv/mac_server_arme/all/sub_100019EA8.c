/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019EA8
// Address: 0x0000000100019EA8

//----- (0000000100019EA8) ----------------------------------------------------
const void **__fastcall sub_100019EA8(const void **result, const void **a2)
{
  unsigned __int64 v2; // x8
  size_t v3; // x19
  const void *v4; // x20
  _QWORD *v5; // x1
  const void **v6; // x22

  if ( result != a2 )
  {
    v2 = (unsigned __int64)a2[1];
    if ( v2 )
      v3 = v2 - 1;
    else
      v3 = 0;
    if ( v2 >= 2 )
    {
      v4 = *a2;
      v5 = *result;
      v6 = result;
      if ( (unsigned __int64)result[2] <= v3 )
      {
        v5 = qvector_reserve(result, v5, v3 + 1, 1u);
        result = v6;
        *v6 = v5;
      }
      result[1] = (const void *)(v3 + 1);
      memmove(v5, v4, v3);
      *((_BYTE *)*v6 + v3) = 0;
      return v6;
    }
    else
    {
      result[1] = nullptr;
    }
  }
  return result;
}
