/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow
// Address: 0x00000000000CF5E0

//----- (00000000000CF5E0) ----------------------------------------------------
void __noreturn _cxa_rethrow()
{
  __int64 v0; // rsi
  _DWORD *globals; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  _DWORD *v9; // rax
  int v10; // esi
  char v11; // [rsp+0h] [rbp-28h]

  globals = _cxa_get_globals();
  v6 = *(_QWORD *)globals;
  if ( *(_QWORD *)globals )
  {
    v7 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFF00LL;
    if ( v7 == 0x434C4E47432B2B00LL )
    {
      *(_DWORD *)(v6 + 48) = -*(_DWORD *)(v6 + 48);
      ++globals[2];
    }
    else
    {
      *(_QWORD *)globals = 0;
    }
    Unwind_RaiseException((_QWORD *)(v6 + 96), v0, v2, v3, v4, v5, v11);
    v8 = *(_QWORD *)(v6 + 96);
    v9 = _cxa_get_globals();
    if ( (v8 & 0xFFFFFFFFFFFFFF00LL) == 0x434C4E47432B2B00LL )
    {
      v10 = -*(_DWORD *)(v6 + 48);
      if ( v10 < 1 )
        v10 = *(_DWORD *)(v6 + 48);
      *(_DWORD *)(v6 + 48) = v10 + 1;
      if ( *(_QWORD *)v9 != v6 )
      {
        *(_QWORD *)(v6 + 40) = *(_QWORD *)v9;
        *(_QWORD *)v9 = v6;
      }
      --v9[2];
      if ( v7 == 0x434C4E47432B2B00LL )
LABEL_11:
        sub_CFC20(*(void (**)(void))(v6 + 32));
    }
    else if ( !*(_QWORD *)v9 )
    {
      *(_QWORD *)v9 = v6;
      if ( v7 == 0x434C4E47432B2B00LL )
        goto LABEL_11;
    }
  }
  std::terminate();
}
// CF62C: variable 'v0' is possibly undefined
// CF62C: variable 'v2' is possibly undefined
// CF62C: variable 'v3' is possibly undefined
// CF62C: variable 'v4' is possibly undefined
// CF62C: variable 'v5' is possibly undefined
// CF62C: variable 'v11' is possibly undefined
