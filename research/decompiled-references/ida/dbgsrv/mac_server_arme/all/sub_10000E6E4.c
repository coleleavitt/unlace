/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E6E4
// Address: 0x000000010000E6E4

//----- (000000010000E6E4) ----------------------------------------------------
__int64 __fastcall sub_10000E6E4(_DWORD *a1, __int64 a2)
{
  int v2; // w8
  int v3; // w8
  int v4; // w8
  void (__fastcall *v5)(_DWORD *, __int64); // x8

  *(_DWORD *)a2 = *a1 & 0x1F;
  v2 = a1[2];
  *(_DWORD *)(a2 + 4) = 36;
  *(_DWORD *)(a2 + 8) = v2;
  *(_DWORD *)(a2 + 12) = 0;
  v3 = a1[5] + 100;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = v3;
  v4 = a1[5];
  if ( (unsigned int)(v4 - 2411) >= 0xFFFFFFFA
    && (v5 = (void (__fastcall *)(_DWORD *, __int64))*(&off_10009CE58 + 5 * (unsigned int)(v4 - 2405) + 5)) != nullptr )
  {
    v5(a1, a2);
    return 1;
  }
  else
  {
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    *(_DWORD *)(a2 + 32) = -303;
    return 0;
  }
}
// 10009CE58: using guessed type __int64 (__fastcall *off_10009CE58)();
