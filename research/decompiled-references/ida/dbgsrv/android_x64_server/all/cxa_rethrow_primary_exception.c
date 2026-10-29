/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow_primary_exception
// Address: 0x00000000000CF710

//----- (00000000000CF710) ----------------------------------------------------
void __fastcall _cxa_rethrow_primary_exception(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rbx
  _DWORD *globals; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  _DWORD *v10; // rax
  int v11; // edx
  char v12; // [rsp+0h] [rbp-18h]

  if ( !a1 )
    return;
  v2 = (char *)sub_D0A90(0x80u);
  if ( !v2 )
LABEL_12:
    std::terminate();
  v3 = v2;
  *(_OWORD *)(v2 + 104) = 0;
  *(_OWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 8) = 0;
  *((_QWORD *)v2 + 15) = 0;
  *(_QWORD *)v2 = a1;
  _InterlockedAdd64((volatile signed __int64 *)(a1 - 128), 1u);
  *((_QWORD *)v2 + 1) = *(_QWORD *)(a1 - 120);
  *((_QWORD *)v2 + 3) = std::get_unexpected();
  *((_QWORD *)v3 + 4) = std::get_terminate();
  *((_QWORD *)v3 + 12) = 0x434C4E47432B2B01LL;
  globals = _cxa_get_globals();
  ++globals[2];
  *((_QWORD *)v3 + 13) = sub_CF810;
  Unwind_RaiseException((_QWORD *)v3 + 12, a2, v5, v6, v7, v8, v12);
  v9 = *((_QWORD *)v3 + 12);
  v10 = _cxa_get_globals();
  if ( (v9 & 0xFFFFFFFFFFFFFF00LL) != 0x434C4E47432B2B00LL )
  {
    if ( !*(_QWORD *)v10 )
    {
      *(_QWORD *)v10 = v3;
      return;
    }
    goto LABEL_12;
  }
  v11 = -*((_DWORD *)v3 + 12);
  if ( v11 < 1 )
    v11 = *((_DWORD *)v3 + 12);
  *((_DWORD *)v3 + 12) = v11 + 1;
  if ( *(char **)v10 != v3 )
  {
    *((_QWORD *)v3 + 5) = *(_QWORD *)v10;
    *(_QWORD *)v10 = v3;
  }
  --v10[2];
}
// CF7B1: variable 'v5' is possibly undefined
// CF7B1: variable 'v6' is possibly undefined
// CF7B1: variable 'v7' is possibly undefined
// CF7B1: variable 'v8' is possibly undefined
// CF7B1: variable 'v12' is possibly undefined
