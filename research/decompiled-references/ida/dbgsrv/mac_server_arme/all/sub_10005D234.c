/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D234
// Address: 0x000000010005D234

//----- (000000010005D234) ----------------------------------------------------
const char *__fastcall sub_10005D234(const char *result, _QWORD *a2)
{
  const char *v3; // x20
  size_t v4; // x21
  unsigned __int64 v5; // x22
  _QWORD *v6; // x1

  if ( result && (v3 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v4 = (size_t)result;
    v5 = (unsigned __int64)(result + 1);
    v6 = (_QWORD *)a2[14];
    if ( a2[16] < (unsigned __int64)(result + 1) )
    {
      v6 = qvector_reserve(a2 + 14, v6, v5, 1u);
      a2[14] = v6;
    }
    a2[15] = v5;
    result = (const char *)memmove(v6, v3, v4);
    *(_BYTE *)(a2[14] + v4) = 0;
  }
  else
  {
    a2[15] = 0;
  }
  return result;
}
