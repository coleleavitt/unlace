/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FA70
// Address: 0x000000000046FA70

//----- (000000000046FA70) ----------------------------------------------------
__int64 __fastcall sub_46FA70(unsigned int a1, _BYTE *a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  if ( a2 && !a2[68] )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, const char *))(*(_QWORD *)a2 + 32LL))(a2, a1, a3);
  else
    return sub_4725C0(a1, a3, a4, a4, a5, a6);
}
