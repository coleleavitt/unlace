/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B450
// Address: 0x000000010005B450

//----- (000000010005B450) ----------------------------------------------------
void __fastcall sub_10005B450(_QWORD *__p)
{
  void *v1; // rax

  *__p = off_1000A9718;
  v1 = (void *)__p[1];
  if ( v1 )
  {
    __p[2] = 0;
    qfree(v1);
  }
  operator delete(__p);
}
// 1000A9718: using guessed type __int64 (__fastcall *off_1000A9718[2])();
