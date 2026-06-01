/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4230C8
// Address: 0x00000000004230C8

//----- (00000000004230C8) ----------------------------------------------------
unsigned __int64 __fastcall sub_4230C8(__int64 a1, unsigned int a2)
{
  if ( !*(_BYTE *)(a1 + 168) )
    sub_4068C0();
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 40) )
    return 0;
  else
    return *(_QWORD *)(a1 + 32) + ((unsigned __int64)a2 << 6);
}
