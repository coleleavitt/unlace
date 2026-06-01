/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BE58
// Address: 0x0007BE58

//----- (0007BE58) --------------------------------------------------------
_DWORD *__fastcall sub_7BE58(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r5
  int v5; // r0

  *a1 = &off_DB1D8;
  v2 = a1[5];
  if ( !v2 )
  {
    v4 = (void *)a1[6];
    if ( !v4 )
      return a1;
    if ( *(int *)v4 < 2 )
    {
      qfclose(*((FILE **)v4 + 2));
    }
    else
    {
      v5 = *((_DWORD *)v4 + 2);
      if ( v5 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      qfree(*((void **)v4 + 9));
      qfree(*((void **)v4 + 8));
    }
    v3 = v4;
LABEL_15:
    operator delete(v3);
    return a1;
  }
  if ( v2 == 1 )
  {
    v3 = (void *)a1[6];
    if ( !v3 )
      return a1;
    goto LABEL_15;
  }
  if ( v2 != 2 )
  {
    if ( !under_debugger )
      interr(193);
    __debugbreak();
  }
  return a1;
}
// DB1D8: using guessed type _UNKNOWN *off_DB1D8;
// E0550: using guessed type char under_debugger;
