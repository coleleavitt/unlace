/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_end_catch
// Address: 0x000BD260

//----- (000BD260) --------------------------------------------------------
void _cxa_end_catch()
{
  int *globals_fast; // eax
  int v1; // edi
  int *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  void (__cdecl *v7)(int); // eax
  int v8; // ecx
  int *v9; // [esp+0h] [ebp-1Ch]

  globals_fast = (int *)_cxa_get_globals_fast(v9);
  v1 = *globals_fast;
  if ( *globals_fast )
  {
    v2 = globals_fast;
    v3 = *(_DWORD *)(v1 + 48);
    if ( (*(_DWORD *)(v1 + 52) >> 8) ^ 0x434C4E | (unsigned int)(*(_QWORD *)(v1 + 48) >> 8) ^ 0x47432B2B )
    {
      Unwind_DeleteException(v1 + 48);
      *v2 = 0;
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 20);
      if ( v4 < 0 )
      {
        v8 = v4 + 1;
        *(_DWORD *)(v1 + 20) = v8;
        if ( !v8 )
          *v2 = *(_DWORD *)(v1 + 16);
      }
      else
      {
        v5 = v4 - 1;
        *(_DWORD *)(v1 + 20) = v5;
        if ( !v5 )
        {
          *v2 = *(_DWORD *)(v1 + 16);
          if ( (_BYTE)v3 == 1 )
          {
            v6 = *(_DWORD *)(v1 + 44) - 80;
            sub_BED40((int *)v1);
            v1 = v6;
          }
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v1 + 44)) )
          {
            v7 = *(void (__cdecl **)(int))(v1 + 4);
            if ( v7 )
              v7(v1 + 80);
            sub_BED40((int *)v1);
          }
        }
      }
    }
  }
}
// BD278: variable 'v9' is possibly undefined
