/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F210
// Address: 0x000000014002F210

//----- (000000014002F210) ----------------------------------------------------
__int64 __fastcall sub_14002F210(__int64 a1)
{
  int v3; // esi
  void **v4; // rdi
  unsigned __int64 v5; // r8

  if ( !*(_QWORD *)(a1 + 296) )
    return sub_1400640B0(0x32u);
  sub_1400347C0(a1, 171);
  v3 = *(_DWORD *)(a1 + 200);
  v4 = (void **)(a1 + 240);
  v5 = *(_QWORD *)(a1 + 248) + 1LL;
  if ( v5 > *(_QWORD *)(a1 + 256) )
    *v4 = sub_14005ABE0(a1 + 240, *v4, v5, 4u);
  *((_DWORD *)*v4 + (*(_QWORD *)(a1 + 248))++) = v3;
  sub_1400343E0(a1, 0);
  sub_1400343E0(a1, 0);
  return 0;
}
