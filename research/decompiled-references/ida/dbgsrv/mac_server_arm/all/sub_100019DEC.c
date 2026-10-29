/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019DEC
// Address: 0x0000000100019DEC

//----- (0000000100019DEC) ----------------------------------------------------
size_t __fastcall sub_100019DEC(__int64 a1, off_t a2, void *a3, size_t a4)
{
  off_t v6; // x22
  off_t v8; // x8

  v6 = a2;
  if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( !v8 || v8 > a2 )
      v6 = *(_QWORD *)(a1 + 32) + a2;
  }
  if ( qlseek(*(_QWORD *)(a1 + 24), v6, 0) == v6 )
    return qlread(*(_QWORD *)(a1 + 24), a3, a4);
  else
    return -1;
}
