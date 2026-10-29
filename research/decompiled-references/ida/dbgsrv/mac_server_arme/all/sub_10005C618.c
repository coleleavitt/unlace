/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C618
// Address: 0x000000010005C618

//----- (000000010005C618) ----------------------------------------------------
_QWORD *__fastcall sub_10005C618(_QWORD *result, char *__s)
{
  _QWORD *v2; // x19
  size_t v4; // x21
  unsigned __int64 v5; // x22
  _QWORD *v6; // x1

  v2 = result;
  if ( __s && (result = (_QWORD *)strlen(__s)) != nullptr )
  {
    v4 = (size_t)result;
    v5 = (unsigned __int64)result + 1;
    v6 = (_QWORD *)v2[31];
    if ( v2[33] < (unsigned __int64)result + 1 )
    {
      v6 = qvector_reserve(v2 + 31, v6, v5, 1u);
      v2[31] = v6;
    }
    v2[32] = v5;
    result = memmove(v6, __s, v4);
    *(_BYTE *)(v2[31] + v4) = 0;
  }
  else
  {
    v2[32] = 0;
  }
  return result;
}
