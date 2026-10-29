/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000EFE0
// Address: 0x000000010000EFE0

//----- (000000010000EFE0) ----------------------------------------------------
NDR_record_t __fastcall sub_10000EFE0(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // eax
  NDR_record_t result; // rax
  unsigned int v5; // r9d

  if ( *(int *)a1 >= 0 )
    goto LABEL_3;
  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 24) != 2 || (unsigned int)(v2 - 85) < 0xFFFFFFEF )
    goto LABEL_3;
  v3 = -300;
  if ( *(unsigned __int16 *)(a1 + 38) << 16 == 1114112 && *(unsigned __int16 *)(a1 + 50) << 16 == 1114112 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    if ( v5 > 2 || (unsigned int)(v2 - 68) >> 3 < v5 )
    {
LABEL_3:
      v3 = -304;
      goto LABEL_4;
    }
    v3 = -304;
    if ( v2 == 8 * v5 + 68 )
      v3 = sub_100001DF0(
             *(unsigned int *)(a1 + 12),
             *(_DWORD *)(a1 + 28),
             *(_DWORD *)(a1 + 40),
             *(_DWORD *)(a1 + 60),
             a1 + 68,
             v5);
  }
LABEL_4:
  *(_DWORD *)(a2 + 32) = v3;
  result = NDR_record;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
