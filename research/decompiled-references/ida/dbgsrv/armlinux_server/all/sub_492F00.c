/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492F00
// Address: 0x0000000000492F00

//----- (0000000000492F00) ----------------------------------------------------
void *__fastcall sub_492F00(int a1)
{
  _QWORD *v2; // x19
  char *v3; // x0
  char *v4; // x21
  size_t v5; // x20
  void *result; // x0

  v2 = (_QWORD *)sub_486CE8();
  v3 = strerror(a1);
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen(v3);
    result = (void *)*v2;
    if ( v5 )
    {
      if ( v5 + 1 > v2[2] )
      {
        result = sub_491288((__int64)v2, result, v5 + 1, 1u);
        *v2 = result;
      }
      v2[1] = v5 + 1;
      memmove(result, v4, v5);
      *(_BYTE *)(*v2 + v5) = 0;
      return (void *)*v2;
    }
    else
    {
      v2[1] = 0;
    }
  }
  else
  {
    sub_40CD68((__int64)v2, "Unknown error, code: 0x%08X", a1);
    return (void *)*v2;
  }
  return result;
}
