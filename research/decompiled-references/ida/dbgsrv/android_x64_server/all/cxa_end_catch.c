/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_end_catch
// Address: 0x00000000000CF4A0

//----- (00000000000CF4A0) ----------------------------------------------------
void _cxa_end_catch()
{
  __int64 *globals_fast; // rax
  __int64 v1; // rbx
  __int64 *v2; // r14
  unsigned __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // r14
  void (__fastcall *v6)(__int64); // rax

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
          *v2 = *(_QWORD *)(v1 + 40);
      }
      else
      {
        *(_DWORD *)(v1 + 48) = v4 - 1;
        if ( v4 == 1 )
        {
          *v2 = *(_QWORD *)(v1 + 40);
          if ( (_BYTE)v3 == 1 )
          {
            v5 = *(_QWORD *)v1 - 128LL;
            _cxa_free_dependent_exception_0(v1);
            v1 = v5;
          }
          if ( !_InterlockedSub64((volatile signed __int64 *)v1, 1u) )
          {
            v6 = *(void (__fastcall **)(__int64))(v1 + 16);
            if ( v6 )
              v6(v1 + 128);
            _cxa_free_dependent_exception_0(v1);
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
