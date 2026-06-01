/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480140
// Address: 0x0000000000480140

//----- (0000000000480140) ----------------------------------------------------
__int64 __fastcall sub_480140(__int64 a1)
{
  __int64 v1; // rax

  do
  {
    v1 = *(int *)(a1 + 8240);
    if ( (int)v1 >= *(_DWORD *)(a1 + 8244) )
      return 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 8240) = v1 + 1;
  }
  while ( (unsigned int)sub_47FFD0(
                          a1 + 4120,
                          (_QWORD *)(a1 + 4104),
                          (char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8232) + 8 * v1) + 19LL)) );
  *(_DWORD *)a1 = *(_DWORD *)(a1 + 4120);
  sub_479A40((unsigned __int8 *)(a1 + 4), (unsigned __int8 *)(a1 + 4124), 4096);
  *(_DWORD *)(a1 + 4112) = *(_DWORD *)(a1 + 8224);
  return 0;
}
