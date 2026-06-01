/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow
// Address: 0x000BD3C0

//----- (000BD3C0) --------------------------------------------------------
void __noreturn _cxa_rethrow()
{
  _DWORD *globals; // eax
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *v8; // esi
  int *v9; // [esp+0h] [ebp-2Ch]
  int *v10; // [esp+0h] [ebp-2Ch]
  _DWORD *v11; // [esp+Ch] [ebp-20h]
  __int64 v12; // [esp+10h] [ebp-1Ch]
  _DWORD *v13; // [esp+18h] [ebp-14h]

  globals = _cxa_get_globals(v9);
  v1 = (_DWORD *)*globals;
  if ( *globals )
  {
    LODWORD(v12) = v1[12] & 0xFFFFFF00;
    HIDWORD(v12) = v1[13];
    v2 = v1 + 12;
    v11 = (_DWORD *)*globals;
    if ( v12 == 0x434C4E47432B2B00LL )
    {
      v1[5] = -v1[5];
      ++globals[1];
    }
    else
    {
      *globals = 0;
    }
    Unwind_RaiseException((int)globals, v12 ^ 0x432B2B00 | HIDWORD(v12) ^ 0x434C4E47, v1 + 12);
    v3 = *v2;
    v13 = v2;
    v4 = v2[1];
    v5 = _cxa_get_globals(v10);
    v6 = v13 - 12;
    if ( v4 ^ 0x434C4E47 | v3 & 0xFFFFFF00 ^ 0x432B2B00 )
    {
      v8 = v11;
      if ( *v5 )
        goto LABEL_15;
      *v5 = v6;
    }
    else
    {
      v7 = -*(v13 - 7);
      if ( v7 < 1 )
        v7 = *(v13 - 7);
      *(v13 - 7) = v7 + 1;
      if ( (_DWORD *)*v5 != v6 )
      {
        *(v13 - 8) = *v5;
        *v5 = v6;
      }
      --v5[1];
      v8 = v11;
    }
    if ( v12 == 0x434C4E47432B2B00LL )
      sub_BDC60((void (*)(void))v8[3]);
  }
LABEL_15:
  std::terminate();
}
// BD3D8: variable 'v9' is possibly undefined
// BD430: variable 'v10' is possibly undefined
