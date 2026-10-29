/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043640
// Address: 0x0000000140043640

//----- (0000000140043640) ----------------------------------------------------
char __fastcall sub_140043640(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // rdx

  v3 = *(_QWORD **)a1;
  v4 = &v3[*(_QWORD *)(a1 + 8)];
  if ( v3 == v4 )
    return 0;
  v5 = *a2;
  while ( 1 )
  {
    v6 = v3 + 1;
    if ( v5 == *v3 )
      break;
    ++v3;
    if ( v6 == v4 )
      return 0;
  }
  memcpy(v3, v6, 8 * (v4 - v3) - 8);
  --*(_QWORD *)(a1 + 8);
  return 1;
}
