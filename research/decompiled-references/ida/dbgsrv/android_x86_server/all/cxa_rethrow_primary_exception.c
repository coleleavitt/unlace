/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow_primary_exception
// Address: 0x000BD560

//----- (000BD560) --------------------------------------------------------
void __cdecl _cxa_rethrow_primary_exception(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *globals; // eax
  int v4; // edx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // edx
  int *v8; // [esp+0h] [ebp-1Ch]
  int *v9; // [esp+0h] [ebp-1Ch]
  _DWORD *v10; // [esp+8h] [ebp-14h]
  int v11; // [esp+8h] [ebp-14h]

  if ( !a1 )
    return;
  v1 = sub_BEBA0(0x50u);
  if ( !v1 )
LABEL_12:
    std::terminate();
  v2 = v1;
  v1[1] = 0;
  *v1 = 0;
  v1[3] = 0;
  v1[2] = 0;
  v1[5] = 0;
  v1[4] = 0;
  v1[7] = 0;
  v1[6] = 0;
  v1[9] = 0;
  v1[8] = 0;
  v1[10] = 0;
  v1[13] = 0;
  v1[12] = 0;
  v1[15] = 0;
  v1[14] = 0;
  v1[17] = 0;
  v1[16] = 0;
  v1[19] = 0;
  v1[18] = 0;
  v10 = v1 + 12;
  v1[11] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 - 36));
  *v1 = *(_DWORD *)(a1 - 80);
  v1[2] = std::get_unexpected();
  v2[3] = std::get_terminate();
  v2[12] = 1126902529;
  v2[13] = 1129074247;
  globals = _cxa_get_globals(v8);
  ++globals[1];
  v2[14] = sub_BD6E0;
  Unwind_RaiseException((int)v10, v4, v10);
  v5 = v2[12];
  v11 = v2[13];
  v6 = _cxa_get_globals(v9);
  if ( v11 ^ 0x434C4E47 | v5 & 0xFFFFFF00 ^ 0x432B2B00 )
  {
    if ( !*v6 )
    {
      *v6 = v2;
      return;
    }
    goto LABEL_12;
  }
  v7 = -v2[5];
  if ( v7 < 1 )
    v7 = v2[5];
  v2[5] = v7 + 1;
  if ( (_DWORD *)*v6 != v2 )
  {
    v2[4] = *v6;
    *v6 = v2;
  }
  --v6[1];
}
// BD650: variable 'v8' is possibly undefined
// BD668: variable 'v4' is possibly undefined
// BD677: variable 'v9' is possibly undefined
