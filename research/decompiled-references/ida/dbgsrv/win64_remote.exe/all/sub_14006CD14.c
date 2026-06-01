/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CD14
// Address: 0x000000014006CD14

//----- (000000014006CD14) ----------------------------------------------------
__int64 sub_14006CD14()
{
  DWORD LastError; // edi
  __int64 Value; // rax
  __int64 v3; // rsi
  _DWORD *v4; // rax
  DWORD v5; // ecx
  _DWORD *v6; // rbp
  _DWORD *v7; // rbx

  if ( dwTlsIndex == -1 )
    return 0;
  LastError = GetLastError();
  Value = _vcrt_FlsGetValue(dwTlsIndex);
  v3 = 0;
  if ( Value != -1 )
  {
    if ( Value )
    {
      v3 = Value;
      goto LABEL_13;
    }
    if ( !(unsigned int)_vcrt_FlsSetValue(dwTlsIndex, (LPVOID)0xFFFFFFFFFFFFFFFFLL) )
      goto LABEL_13;
    v4 = j__calloc_base(1u, 0x80u);
    v5 = dwTlsIndex;
    v6 = v4;
    v7 = v4;
    if ( v4 )
    {
      if ( (unsigned int)_vcrt_FlsSetValue(dwTlsIndex, v4) )
      {
        v7[30] = -2;
        v7 = nullptr;
        v3 = (__int64)v6;
LABEL_12:
        free(v7);
        goto LABEL_13;
      }
      v5 = dwTlsIndex;
    }
    _vcrt_FlsSetValue(v5, nullptr);
    goto LABEL_12;
  }
LABEL_13:
  SetLastError(LastError);
  return v3;
}
// 14006F0C0: using guessed type __int64 __fastcall _vcrt_FlsGetValue(_QWORD);
