/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020C30
// Address: 0x0000000100020C30

//----- (0000000100020C30) ----------------------------------------------------
void __fastcall sub_100020C30(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  void *v4; // rdi
  void *v5; // rdi

  *a1 = off_1000A8420;
  v2 = (_QWORD *)a1[7];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)a1[5];
  a1[5] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 1000A8420: using guessed type void (__fastcall __noreturn *off_1000A8420[2])();
