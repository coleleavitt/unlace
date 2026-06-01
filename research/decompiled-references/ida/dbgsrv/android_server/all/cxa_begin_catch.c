/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_begin_catch
// Address: 0x00000000000D63F4

//----- (00000000000D63F4) ----------------------------------------------------
void *_cxa_begin_catch(void *a1)
{
  unsigned __int64 v1; // x20
  _DWORD *globals; // x0
  char *v4; // x8
  int v5; // w9

  v1 = *(_QWORD *)a1;
  globals = _cxa_get_globals();
  v4 = (char *)a1 - 96;
  if ( v1 >> 8 == 0x434C4E47432B2BLL )
  {
    v5 = *((_DWORD *)a1 - 12);
    if ( v5 < 0 )
      v5 = -v5;
    *((_DWORD *)a1 - 12) = v5 + 1;
    if ( *(char **)globals != v4 )
    {
      *((_QWORD *)a1 - 7) = *(_QWORD *)globals;
      *(_QWORD *)globals = v4;
    }
    --globals[2];
    return *((void **)a1 - 2);
  }
  else
  {
    if ( *(_QWORD *)globals )
      std::terminate();
    *(_QWORD *)globals = v4;
    return (char *)a1 + 32;
  }
}
