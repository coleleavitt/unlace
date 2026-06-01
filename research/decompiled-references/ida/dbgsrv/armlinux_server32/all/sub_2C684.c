/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C684
// Address: 0x0002C684

//----- (0002C684) --------------------------------------------------------
unsigned __int64 __fastcall sub_2C684(_DWORD *a1, int a2)
{
  if ( *(_DWORD *)(a2 + 4) == 8 )
    return 0;
  else
    return sub_23008(a1, (_QWORD *)a2);
}
