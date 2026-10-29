/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043730
// Address: 0x0000000140043730

//----- (0000000140043730) ----------------------------------------------------
__int64 __fastcall sub_140043730(unsigned int a1, __int64 a2, struct __crt_locale_pointers *a3, va_list a4)
{
  if ( a2 && !*(_BYTE *)(a2 + 68) )
    return sub_140052690(a1, a2);
  else
    return sub_140054270(a1, a3, a4);
}
