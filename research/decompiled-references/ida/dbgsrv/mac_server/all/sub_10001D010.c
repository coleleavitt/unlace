/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D010
// Address: 0x000000010001D010

//----- (000000010001D010) ----------------------------------------------------
size_t __fastcall sub_10001D010(__int64 a1, off_t a2, void *a3, signed __int64 a4)
{
  off_t v6; // r12

  v6 = a2;
  if ( !*(_BYTE *)(a1 + 48) && (*(_QWORD *)(a1 + 40) > a2 || *(_QWORD *)(a1 + 40) == 0) )
    v6 = *(_QWORD *)(a1 + 32) + a2;
  if ( qlseek(*(_QWORD *)(a1 + 24), v6, 0) == v6 )
    return qlread(*(_QWORD *)(a1 + 24), a3, a4);
  else
    return -1;
}
