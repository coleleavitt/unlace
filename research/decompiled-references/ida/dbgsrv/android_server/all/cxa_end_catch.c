/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_end_catch
// Address: 0x00000000000D648C

//----- (00000000000D648C) ----------------------------------------------------
void _cxa_end_catch()
{
  __int64 *globals_fast; // x0
  __int64 v1; // x19
  __int64 *v2; // x20
  unsigned __int64 v3; // x8
  int v4; // w9
  int v5; // w9
  __int64 v6; // x20
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x8
  void (__fastcall *v9)(__int64); // x8

  globals_fast = (__int64 *)_cxa_get_globals_fast();
  v1 = *globals_fast;
  if ( *globals_fast )
  {
    v2 = globals_fast;
    v3 = *(_QWORD *)(v1 + 96);
    if ( v3 >> 8 == 0x434C4E47432B2BLL )
    {
      v4 = *(_DWORD *)(v1 + 48);
      if ( v4 < 0 )
      {
        *(_DWORD *)(v1 + 48) = v4 + 1;
        if ( v4 == -1 )
          *globals_fast = *(_QWORD *)(v1 + 40);
      }
      else
      {
        v5 = v4 - 1;
        *(_DWORD *)(v1 + 48) = v5;
        if ( !v5 )
        {
          *globals_fast = *(_QWORD *)(v1 + 40);
          if ( (unsigned __int8)v3 == 1 )
          {
            v6 = *(_QWORD *)v1 - 128LL;
            _cxa_free_dependent_exception_0((int *)v1);
            v1 = v6;
          }
          do
          {
            v7 = __ldaxr((unsigned __int64 *)v1);
            v8 = v7 - 1;
          }
          while ( __stlxr(v8, (unsigned __int64 *)v1) );
          if ( !v8 )
          {
            v9 = *(void (__fastcall **)(__int64))(v1 + 16);
            if ( v9 )
              v9(v1 + 128);
            _cxa_free_dependent_exception_0((int *)v1);
          }
        }
      }
    }
    else
    {
      Unwind_DeleteException(v1 + 96);
      *v2 = 0;
    }
  }
}
