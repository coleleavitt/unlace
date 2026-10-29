/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000633F4
// Address: 0x00000001000633F4

//----- (00000001000633F4) ----------------------------------------------------
__int64 __fastcall sub_1000633F4(__int64 a1, _BYTE *a2, char *a3, va_list a4)
{
  if ( a2 && a2[68] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 32LL))(a2, a1);
  else
    return sub_1000655B4(a1, a3, a4);
}
