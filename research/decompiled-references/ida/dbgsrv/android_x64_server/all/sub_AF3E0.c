/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF3E0
// Address: 0x00000000000AF3E0

//----- (00000000000AF3E0) ----------------------------------------------------
__int64 __fastcall sub_AF3E0(__int64 a1, __int64 a2, char *a3, void *a4)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) )
    return sub_AD420(a3, a4);
  else
    return 0;
}
// AD420: using guessed type __int64 __fastcall sub_AD420(char *a1, __gnuc_va_list arg);
