/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF270
// Address: 0x00000000000BF270

//----- (00000000000BF270) ----------------------------------------------------
__int64 __fastcall sub_BF270(__int64 a1, __off_t a2, void *a3, signed __int64 a4)
{
  if ( qseek(*(_DWORD *)(a1 + 20), a2, 0) == -1 )
    return -1;
  else
    return (int)qread(*(_DWORD *)(a1 + 20), a3, a4);
}
