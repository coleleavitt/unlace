/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C4EC
// Address: 0x0002C4EC

//----- (0002C4EC) --------------------------------------------------------
unsigned __int64 __fastcall sub_2C4EC(_DWORD *a1, int a2)
{
  if ( *(_DWORD *)(a2 + 4) == 8 )
    return 0;
  else
    return sub_22E68(a1, (_QWORD *)a2);
}
