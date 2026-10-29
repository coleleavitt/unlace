/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_end_catch
// Address: 0x0009016C

//----- (0009016C) --------------------------------------------------------
void _cxa_end_catch()
{
  int *v0; // r4
  int v1; // r0
  unsigned __int64 v2; // r2
  int v3; // r1
  int v4; // r1
  int v5; // r4
  int v6; // r0
  int v7; // r1

  v0 = (int *)((int (*)(void))_cxa_get_globals_fast)();
  v1 = *v0;
  if ( !*v0 )
    return;
  v2 = *(_QWORD *)(v1 + 40);
  if ( v2 >> 8 != 0x434C4E47432B2BLL )
  {
    Unwind_DeleteException(v1 + 40);
    v6 = 0;
    goto LABEL_9;
  }
  v3 = *(_DWORD *)(v1 + 24);
  if ( v3 <= -1 )
  {
    v7 = v3 + 1;
    *(_DWORD *)(v1 + 24) = v7;
    if ( v7 )
      return;
    v6 = *(_DWORD *)(v1 + 20);
LABEL_9:
    *v0 = v6;
    return;
  }
  v4 = v3 - 1;
  *(_DWORD *)(v1 + 24) = v4;
  if ( !v4 )
  {
    *v0 = *(_DWORD *)(v1 + 20);
    if ( (unsigned __int8)v2 == 1 )
    {
      v5 = *(_DWORD *)v1;
      _cxa_free_dependent_exception_0((int *)v1);
      v1 = v5 - 128;
    }
    _cxa_decrement_exception_refcount((_DWORD *)(v1 + 128));
  }
}
