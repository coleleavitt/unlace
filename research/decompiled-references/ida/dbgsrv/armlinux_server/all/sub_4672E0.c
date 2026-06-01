/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4672E0
// Address: 0x00000000004672E0

//----- (00000000004672E0) ----------------------------------------------------
_QWORD *__fastcall sub_4672E0(_QWORD *result, char *s)
{
  _QWORD *v3; // x19
  size_t v4; // x21
  void *v5; // x0

  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( s )
  {
    v3 = result;
    v4 = strlen(s);
    v5 = sub_491288((__int64)v3, nullptr, v4 + 1, 1u);
    *v3 = v5;
    v3[1] = v4 + 1;
    memmove(v5, s, v4);
    result = (_QWORD *)*v3;
    *(_BYTE *)(*v3 + v4) = 0;
  }
  return result;
}
