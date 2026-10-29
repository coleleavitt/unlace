/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466FE8
// Address: 0x0000000000466FE8

//----- (0000000000466FE8) ----------------------------------------------------
__int64 __fastcall sub_466FE8(__int64 a1, char *s)
{
  size_t v4; // x0
  size_t v5; // x21
  unsigned __int64 v7; // x22
  void *v8; // x0

  if ( s && (v4 = strlen(s), (v5 = v4) != 0) )
  {
    v7 = v4 + 1;
    v8 = *(void **)a1;
    if ( v7 > *(_QWORD *)(a1 + 16) )
    {
      v8 = sub_491288(a1, *(void **)a1, v7, 1u);
      *(_QWORD *)a1 = v8;
    }
    *(_QWORD *)(a1 + 8) = v7;
    memmove(v8, s, v5);
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
}
