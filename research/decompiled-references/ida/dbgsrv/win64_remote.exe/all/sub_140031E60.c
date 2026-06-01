/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031E60
// Address: 0x0000000140031E60

//----- (0000000140031E60) ----------------------------------------------------
__int64 __fastcall sub_140031E60(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbx
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 344);
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 336) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 344) = v1 - 1;
  if ( *(_DWORD *)v2 == 1 || *(_DWORD *)v2 == 5 )
    v3 = sub_1400339E0(a1, (__int64)v2, 0, 1);
  else
    v3 = 58;
  if ( v2 )
    sub_140032910(v2, 1);
  return sub_1400640B0(v3);
}
