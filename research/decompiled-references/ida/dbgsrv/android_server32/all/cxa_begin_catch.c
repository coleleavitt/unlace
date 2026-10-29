/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_begin_catch
// Address: 0x000900FC

//----- (000900FC) --------------------------------------------------------
void *_cxa_begin_catch(void *a1)
{
  unsigned __int64 v1; // kr00_8
  char **v3; // r0
  char *v4; // r1
  int v5; // r2

  v1 = *(_QWORD *)a1;
  v3 = (char **)((int (*)(void))_cxa_get_globals)();
  v4 = (char *)a1 - 40;
  if ( v1 >> 8 == 0x434C4E47432B2BLL )
  {
    v5 = *((_DWORD *)a1 - 4);
    if ( v5 < 0 )
      v5 = -v5;
    *((_DWORD *)a1 - 4) = v5 + 1;
    if ( *v3 != v4 )
    {
      *((_DWORD *)a1 - 5) = *v3;
      *v3 = v4;
    }
    --v3[1];
    return *((void **)a1 + 9);
  }
  else
  {
    if ( *v3 )
      std::terminate();
    *v3 = v4;
    return (char *)a1 + 88;
  }
}
