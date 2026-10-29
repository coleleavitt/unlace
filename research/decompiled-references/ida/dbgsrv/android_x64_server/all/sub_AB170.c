/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB170
// Address: 0x00000000000AB170

//----- (00000000000AB170) ----------------------------------------------------
__int64 __fastcall sub_AB170(unsigned int a1, _BYTE *a2, char *a3, void *a4, __int64 a5, int a6)
{
  if ( a2 && !a2[68] )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, a1);
  else
    return sub_AD580(a1, a3, a4, (__int64)a4, a5, a6);
}
