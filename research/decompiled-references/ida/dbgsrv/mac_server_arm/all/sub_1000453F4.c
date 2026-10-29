/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000453F4
// Address: 0x00000001000453F4

//----- (00000001000453F4) ----------------------------------------------------
_QWORD *__fastcall sub_1000453F4(_QWORD *a1)
{
  _QWORD *v1; // x8
  __int64 v2; // x0
  _QWORD *v3; // x19
  __int64 v4; // x20

  v1 = a1;
  v2 = *a1;
  *v1 = 0;
  if ( v2 )
  {
    v3 = v1;
    if ( *((_BYTE *)v1 + 16) == 1 && *(char *)(v2 + 39) < 0 )
    {
      v4 = v2;
      operator delete(*(void **)(v2 + 16));
      v2 = v4;
    }
    operator delete((void *)v2);
    return v3;
  }
  return v1;
}
