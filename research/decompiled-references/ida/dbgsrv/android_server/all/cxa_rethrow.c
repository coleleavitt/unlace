/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow
// Address: 0x00000000000D6618

//----- (00000000000D6618) ----------------------------------------------------
void __noreturn _cxa_rethrow()
{
  _DWORD *globals; // x0
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v8; // x20
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  _DWORD *v11; // x0
  int v12; // w9
  char v13; // [xsp+0h] [xbp-30h]

  globals = _cxa_get_globals();
  v8 = *(_QWORD *)globals;
  if ( *(_QWORD *)globals )
  {
    v9 = *(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFF00LL;
    if ( v9 == 0x434C4E47432B2B00LL )
    {
      *(_DWORD *)(v8 + 48) = -*(_DWORD *)(v8 + 48);
      ++globals[2];
    }
    else
    {
      *(_QWORD *)globals = 0;
    }
    Unwind_RaiseException((_QWORD *)(v8 + 96), v1, v2, v3, v4, v5, v6, v7, v13);
    v10 = *(_QWORD *)(v8 + 96);
    v11 = _cxa_get_globals();
    if ( (v10 & 0xFFFFFFFFFFFFFF00LL) == 0x434C4E47432B2B00LL )
    {
      v12 = *(_DWORD *)(v8 + 48);
      if ( v12 < 0 )
        v12 = -v12;
      *(_DWORD *)(v8 + 48) = v12 + 1;
      if ( *(_QWORD *)v11 != v8 )
      {
        *(_QWORD *)(v8 + 40) = *(_QWORD *)v11;
        *(_QWORD *)v11 = v8;
      }
      --v11[2];
      if ( v9 == 0x434C4E47432B2B00LL )
LABEL_11:
        sub_D6CF8(*(void (**)(void))(v8 + 32));
    }
    else if ( !*(_QWORD *)v11 )
    {
      *(_QWORD *)v11 = v8;
      if ( v9 == 0x434C4E47432B2B00LL )
        goto LABEL_11;
    }
  }
  std::terminate();
}
// D6680: variable 'v1' is possibly undefined
// D6680: variable 'v2' is possibly undefined
// D6680: variable 'v3' is possibly undefined
// D6680: variable 'v4' is possibly undefined
// D6680: variable 'v5' is possibly undefined
// D6680: variable 'v6' is possibly undefined
// D6680: variable 'v7' is possibly undefined
// D6680: variable 'v13' is possibly undefined
