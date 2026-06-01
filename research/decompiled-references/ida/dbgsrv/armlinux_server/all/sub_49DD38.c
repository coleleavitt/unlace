/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DD38
// Address: 0x000000000049DD38

//----- (000000000049DD38) ----------------------------------------------------
void __noreturn sub_49DD38()
{
  unsigned __int64 v0; // x0
  __int64 v1; // x1

  v0 = sub_49F2B0();
  v1 = *(_QWORD *)v0;
  ++*(_DWORD *)(v0 + 8);
  if ( v1 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v1 + 80) - 0x474E5543432B2B00LL) <= 1 )
      *(_DWORD *)(v1 + 40) = -*(_DWORD *)(v1 + 40);
    else
      *(_QWORD *)v0 = 0;
    _Unwind_Resume_or_Rethrow((struct _Unwind_Exception *)(v1 + 80));
  }
  sub_49DBB0();
}
