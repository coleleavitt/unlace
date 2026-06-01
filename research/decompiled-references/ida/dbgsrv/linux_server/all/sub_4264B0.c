/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4264B0
// Address: 0x00000000004264B0

//----- (00000000004264B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4264B0(__int64 a1, unsigned int a2)
{
  if ( !*(_BYTE *)(a1 + 168) )
    sub_4236E0();
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 40) )
    return 0;
  else
    return *(_QWORD *)(a1 + 32) + ((unsigned __int64)a2 << 6);
}
