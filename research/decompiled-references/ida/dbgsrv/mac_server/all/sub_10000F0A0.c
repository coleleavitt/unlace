/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F0A0
// Address: 0x000000010000F0A0

//----- (000000010000F0A0) ----------------------------------------------------
__int64 __fastcall sub_10000F0A0(int *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int *v8; // rbx
  __int64 result; // rax

  v3 = a1[1];
  if ( *a1 < 0
    || v3 - 5249 < 0xFFFFEBAF
    || (v4 = a1[9], v4 > 2)
    || (v5 = 2 * v4, (v3 - 48) >> 3 < v4 || v3 < 8 * v4 + 48)
    || (v6 = a1[v5 + 11], v6 > 0x510)
    || (v7 = v3 - v5 * 4, (v7 - 48) >> 2 < v6)
    || v7 != 4 * v6 + 48 )
  {
    *(_DWORD *)(a2 + 32) = -304;
    result = (__int64)NDR_record;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
  }
  else
  {
    *(_DWORD *)(a2 + 40) = 1296;
    v8 = &a1[v5 + 10];
    result = sub_100001DD0();
    *(_DWORD *)(a2 + 32) = result;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a2 + 36) = *v8;
      result = (unsigned int)(4 * *(_DWORD *)(a2 + 40) + 44);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
