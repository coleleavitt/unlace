/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F330
// Address: 0x000000010000F330

//----- (000000010000F330) ----------------------------------------------------
__int64 __fastcall sub_10000F330(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  void (__fastcall *v3)(__int64, __int64); // rax

  *(_DWORD *)a2 = *a1 & 0x1F;
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 4) = 36;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = a1[5] + 100;
  *(_DWORD *)(a2 + 16) = 0;
  v2 = a1[5];
  if ( (unsigned int)(v2 - 2411) >= 0xFFFFFFFA
    && (v3 = (void (__fastcall *)(__int64, __int64))*(&funcs_10000F387 + 5 * (unsigned int)(v2 - 2405))) != nullptr )
  {
    v3((__int64)a1, a2);
    return 1;
  }
  else
  {
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    *(_DWORD *)(a2 + 32) = -303;
    return 0;
  }
}
// 1000A76F0: using guessed type __int64 (__fastcall *funcs_10000F387)();
