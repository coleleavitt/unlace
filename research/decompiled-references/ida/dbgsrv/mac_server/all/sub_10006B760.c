/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B760
// Address: 0x000000010006B760

//----- (000000010006B760) ----------------------------------------------------
void __fastcall sub_10006B760(unsigned int a1, _BYTE *a2, char *a3, __int64 a4, __int64 a5, int a6)
{
  if ( a2 && a2[68] != 1 )
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, a1);
  else
    sub_10006D900(a1, a3, a4, a4, a5, a6);
}
