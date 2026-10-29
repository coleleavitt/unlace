/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E5F8
// Address: 0x000000000045E5F8

//----- (000000000045E5F8) ----------------------------------------------------
size_t __fastcall sub_45E5F8(size_t result, char *s)
{
  __int64 v2; // x20
  size_t v4; // x21
  unsigned __int64 v5; // x23
  void *v6; // x0

  v2 = result;
  if ( s && (result = strlen(s), (v4 = result) != 0) )
  {
    v5 = result + 1;
    v6 = *(void **)(v2 + 280);
    if ( v5 > *(_QWORD *)(v2 + 296) )
    {
      v6 = sub_491288(v2 + 280, *(void **)(v2 + 280), v5, 1u);
      *(_QWORD *)(v2 + 280) = v6;
    }
    *(_QWORD *)(v2 + 288) = v5;
    memmove(v6, s, v4);
    result = *(_QWORD *)(v2 + 280);
    *(_BYTE *)(result + v4) = 0;
  }
  else
  {
    *(_QWORD *)(v2 + 288) = 0;
  }
  return result;
}
