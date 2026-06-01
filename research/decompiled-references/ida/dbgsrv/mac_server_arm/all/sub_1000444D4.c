/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000444D4
// Address: 0x00000001000444D4

//----- (00000001000444D4) ----------------------------------------------------
_QWORD *__fastcall sub_1000444D4(_QWORD *a1, char *__s)
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
