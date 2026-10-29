/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006E600
// Address: 0x000000014006E600

//----- (000000014006E600) ----------------------------------------------------
__int64 __fastcall sub_14006E600(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  int v5; // eax
  int v6; // ecx

  v3 = *a1;
  *a3 = 0;
  if ( *(_DWORD *)v3 != -529697949 )
    return 0;
  if ( *(_DWORD *)(v3 + 24) == 4 )
  {
    v5 = *(_DWORD *)(v3 + 32);
    if ( (v5 == 429065504 || (unsigned int)(v5 - 429065505) <= 1) && *(_QWORD *)(v3 + 40) == *(_QWORD *)(a2 + 40) )
      *a3 = 1;
  }
  if ( *(_DWORD *)v3 != -529697949 )
    return 0;
  if ( *(_DWORD *)(v3 + 24) != 4 )
    return 0;
  v6 = *(_DWORD *)(v3 + 32);
  if ( v6 != 429065504 && (unsigned int)(v6 - 429065505) > 1 )
    return 0;
  if ( *(_QWORD *)(v3 + 48) )
    return 0;
  *(_DWORD *)(sub_14006CCF8() + 64) = 1;
  *a3 = 1;
  return 1;
}
