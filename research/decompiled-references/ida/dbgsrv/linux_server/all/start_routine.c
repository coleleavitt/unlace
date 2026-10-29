/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start_routine
// Address: 0x000000000046E740

//----- (000000000046E740) ----------------------------------------------------
__int64 __fastcall start_routine(void *a1)
{
  char *v2; // rdi

  sub_482A00(*((_QWORD *)a1 + 2), -1);
  sub_46E5F0(*(_QWORD *)a1, *((__int64 **)a1 + 1));
  if ( a1 )
  {
    v2 = *((char **)a1 + 2);
    *(_OWORD *)a1 = 0;
    sub_4826F0(v2);
    operator delete(a1, 0x18u);
  }
  return 0;
}
