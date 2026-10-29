/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E6730
// Address: 0x00000000000E6730

//----- (00000000000E6730) ----------------------------------------------------
char __fastcall sub_E6730(__int64 a1)
{
  _BYTE *v1; // rdi
  char v2; // al

  v1 = *(_BYTE **)(a1 + 16);
  v2 = v1[10];
  if ( v2 == 2 )
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v1 + 8LL))(v1);
  else
    return v2 == 0;
}
