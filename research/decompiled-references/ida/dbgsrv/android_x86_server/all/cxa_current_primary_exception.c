/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_current_primary_exception
// Address: 0x000BD4E0

//----- (000BD4E0) --------------------------------------------------------
int _cxa_current_primary_exception()
{
  int *globals_fast; // ecx
  int result; // eax
  int v2; // ecx
  int *v3; // [esp+0h] [ebp-1Ch]

  globals_fast = (int *)_cxa_get_globals_fast(v3);
  result = 0;
  if ( globals_fast )
  {
    v2 = *globals_fast;
    if ( v2 )
    {
      if ( !((*(_DWORD *)(v2 + 52) >> 8) ^ 0x434C4E | (unsigned int)(*(_QWORD *)(v2 + 48) >> 8) ^ 0x47432B2B) )
      {
        if ( (unsigned __int8)*(_DWORD *)(v2 + 48) == 1 )
          v2 = *(_DWORD *)(v2 + 44) - 80;
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 44));
        return v2 + 80;
      }
    }
  }
  return result;
}
// BD4F8: variable 'v3' is possibly undefined
