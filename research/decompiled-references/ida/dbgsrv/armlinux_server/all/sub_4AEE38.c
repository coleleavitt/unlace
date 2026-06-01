/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AEE38
// Address: 0x00000000004AEE38

//----- (00000000004AEE38) ----------------------------------------------------
void __fastcall __noreturn sub_4AEE38(_QWORD *a1)
{
  if ( a1 )
  {
    sub_49EF68(a1);
    if ( (unsigned __int64)(*a1 - 0x474E5543432B2B00LL) <= 1 )
      sub_49DB68((void (*)(void))*(a1 - 7));
  }
  sub_49DBB0();
}
