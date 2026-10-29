/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AA70
// Address: 0x000000010005AA70

//----- (000000010005AA70) ----------------------------------------------------
char *__fastcall sub_10005AA70(unsigned int a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx

  if ( a1 <= 0x38 )
  {
    v1 = 0x20000000003C0LL;
    if ( !_bittest64(&v1, a1) )
      return off_1000A9880[a1];
  }
  v2 = qword_1000AE3D0;
  qsnprintf((char *)qword_1000AE3D0, 16, "RPC_%d", a1);
  return (char *)v2;
}
// 1000A9880: using guessed type char *off_1000A9880[6];
// 1000AE3D0: using guessed type __int64 qword_1000AE3D0[2];
