/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7A4B
// Address: 0x00000000000E7A4B

//----- (00000000000E7A4B) ----------------------------------------------------
char __fastcall sub_E7A4B(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( ((*(_BYTE *)(a2 + 199) & 0x40) == 0 || !*(_BYTE *)(a2 + 223)) && !*(_QWORD *)(a2 + 56) )
    sub_E79E8(a2, *(_QWORD *)(a2 + 144), v8);
  for ( i = 0; i != 17; ++i )
  {
    v4 = *(_QWORD **)(a1 + 8 * i);
    v5 = *(_QWORD **)(a2 + 8 * i);
    if ( *(_BYTE *)(a1 + i + 216) )
LABEL_7:
      abort();
    if ( *(_BYTE *)(a2 + i + 216) && v4 )
    {
      if ( byte_1590B0[i] != 8 )
        goto LABEL_7;
      *v4 = v5;
    }
    else if ( v4 != nullptr && v5 != nullptr && v5 != v4 )
    {
      qmemcpy(v4, v5, (unsigned __int8)byte_1590B0[i]);
    }
  }
  if ( (*(_BYTE *)(a1 + 199) & 0x40) == 0 || (LOBYTE(v6) = 0, !*(_BYTE *)(a1 + 223)) )
  {
    LOBYTE(v6) = 0;
    if ( !*(_QWORD *)(a1 + 56) )
      return *(_QWORD *)(a2 + 208) + Unwind_GetGR(a2, 7) - *(_QWORD *)(a1 + 144);
  }
  return v6;
}
