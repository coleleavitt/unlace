/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2400
// Address: 0x00000000004A2400

//----- (00000000004A2400) ----------------------------------------------------
unsigned int **__fastcall sub_4A2400(unsigned int **a1, unsigned int *a2, size_t a3)
{
  unsigned int *v4; // x0
  __int64 v5; // x5
  size_t v6; // x4
  int v8; // w6

  v4 = *a1;
  v5 = *((_QWORD *)v4 - 3);
  if ( a3 > 0x3FFFFFFFFFFFFFF9LL )
    sub_4A04D0("basic_string::assign");
  v6 = a3;
  if ( a2 < v4 )
    return sub_4A2388(a1, 0, v5, a2, a3);
  if ( a2 > (unsigned int *)((char *)v4 + v5) )
    return sub_4A2388(a1, 0, v5, a2, a3);
  v8 = atomic_load(v4 - 2);
  if ( v8 > 0 )
    return sub_4A2388(a1, 0, v5, a2, a3);
  if ( a3 <= (char *)a2 - (char *)v4 )
  {
    if ( a3 != 1 )
    {
      if ( a3 )
      {
        memcpy(v4, a2, a3);
        v4 = *a1;
        v6 = a3;
      }
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 != v4 )
  {
    if ( a3 == 1 )
    {
LABEL_16:
      *(_BYTE *)v4 = *(_BYTE *)a2;
      v4 = *a1;
      goto LABEL_10;
    }
    memmove(v4, a2, a3);
    v4 = *a1;
    v6 = a3;
  }
LABEL_10:
  if ( v4 - 6 != (unsigned int *)std::string::_Rep::_S_empty_rep_storage )
  {
    *((_QWORD *)v4 - 3) = v6;
    *(v4 - 2) = 0;
    *((_BYTE *)v4 + v6) = 0;
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
