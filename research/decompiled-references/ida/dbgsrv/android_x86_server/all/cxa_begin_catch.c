/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_begin_catch
// Address: 0x000BD1D0

//----- (000BD1D0) --------------------------------------------------------
void *_cxa_begin_catch(void *a1)
{
  unsigned __int64 v1; // rdi
  _DWORD *globals; // eax
  char *v3; // ecx
  int v4; // esi
  int *v7; // [esp+0h] [ebp-1Ch]

  v1 = *(_QWORD *)a1;
  globals = _cxa_get_globals(v7);
  v3 = (char *)a1 - 48;
  if ( v1 >> 8 == 0x434C4E47432B2BLL )
  {
    v4 = -*((_DWORD *)a1 - 7);
    if ( v4 < 1 )
      v4 = *((_DWORD *)a1 - 7);
    *((_DWORD *)a1 - 7) = v4 + 1;
    if ( (char *)*globals != v3 )
    {
      *((_DWORD *)a1 - 8) = *globals;
      *globals = v3;
    }
    --globals[1];
    return *((void **)a1 - 2);
  }
  else
  {
    if ( *globals )
      std::terminate();
    *globals = v3;
    return (char *)a1 + 32;
  }
}
// BD1F0: variable 'v7' is possibly undefined
