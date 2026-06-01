/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_begin_catch
// Address: 0x00000000000CF420

//----- (00000000000CF420) ----------------------------------------------------
void *_cxa_begin_catch(void *a1)
{
  unsigned __int64 v1; // rbx
  _DWORD *globals; // rax
  char *v3; // rcx
  int v4; // esi

  v1 = *(_QWORD *)a1;
  globals = _cxa_get_globals();
  v3 = (char *)a1 - 96;
  if ( v1 >> 8 == 0x434C4E47432B2BLL )
  {
    v4 = -*((_DWORD *)a1 - 12);
    if ( v4 < 1 )
      v4 = *((_DWORD *)a1 - 12);
    *((_DWORD *)a1 - 12) = v4 + 1;
    if ( *(char **)globals != v3 )
    {
      *((_QWORD *)a1 - 7) = *(_QWORD *)globals;
      *(_QWORD *)globals = v3;
    }
    --globals[2];
    return *((void **)a1 - 2);
  }
  else
  {
    if ( *(_QWORD *)globals )
      std::terminate();
    *(_QWORD *)globals = v3;
    return (char *)a1 + 32;
  }
}
