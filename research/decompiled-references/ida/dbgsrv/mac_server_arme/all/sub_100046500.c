/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046500
// Address: 0x0000000100046500

//----- (0000000100046500) ----------------------------------------------------
_QWORD *__fastcall sub_100046500(_QWORD *a1, char *__s)
{
  size_t v4; // x21
  unsigned __int64 v5; // x22
  void *v6; // x0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( __s )
  {
    v4 = strlen(__s);
    v5 = v4 + 1;
    if ( v4 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve(a1, nullptr, v5, 1u);
      *a1 = v6;
    }
    a1[1] = v5;
    memmove(v6, __s, v4);
    *(_BYTE *)(*a1 + v4) = 0;
  }
  return a1;
}
