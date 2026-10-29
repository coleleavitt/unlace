/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7020
// Address: 0x00000000000E7020

//----- (00000000000E7020) ----------------------------------------------------
char __fastcall sub_E7020(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // al

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_BYTE *)(v1 + 9);
  if ( v2 == 2 )
    return (**(__int64 (__fastcall ***)(__int64))v1)(v1);
  else
    return v2 == 0;
}
