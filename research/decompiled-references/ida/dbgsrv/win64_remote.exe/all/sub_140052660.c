/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052660
// Address: 0x0000000140052660

//----- (0000000140052660) ----------------------------------------------------
__int64 __fastcall sub_140052660(unsigned int a1, _BYTE *a2, struct __crt_locale_pointers *a3, va_list a4)
{
  if ( !a2 || a2[68] )
    return sub_140054270(a1, a3, a4);
  else
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, a1);
}
