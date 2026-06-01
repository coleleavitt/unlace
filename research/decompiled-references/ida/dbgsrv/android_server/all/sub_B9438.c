/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9438
// Address: 0x00000000000B9438

//----- (00000000000B9438) ----------------------------------------------------
__int64 __fastcall sub_B9438(__int64 a1)
{
  unsigned int v2; // w1
  int v3; // w0

  if ( ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16)) & 1) == 0 )
    return 0;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_DWORD *)(a1 + 56) = 0x8000;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 120) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 136;
  if ( *(_DWORD *)(a1 + 32904) )
    v2 = *(_DWORD *)(a1 + 32904);
  else
    v2 = -1;
  v3 = sub_C8640((_QWORD *)(a1 + 24), v2, "1.3.1", 112);
  if ( v3 )
  {
    sub_B9374(a1, v3);
    return 0;
  }
  return 1;
}
