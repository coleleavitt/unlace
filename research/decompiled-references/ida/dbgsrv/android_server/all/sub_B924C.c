/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B924C
// Address: 0x00000000000B924C

//----- (00000000000B924C) ----------------------------------------------------
void __fastcall sub_B924C(__int64 a1)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)a1 = off_1601B0;
  if ( v1 )
    sub_CE950((_QWORD *)(a1 + 48));
  sub_BA53C((pthread_mutex_t *)a1);
  operator delete((void *)a1);
}
// 1601B0: using guessed type __int64 (__fastcall *off_1601B0[3])();
