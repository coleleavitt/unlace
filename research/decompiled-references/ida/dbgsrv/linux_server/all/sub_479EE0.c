/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479EE0
// Address: 0x0000000000479EE0

//----- (0000000000479EE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_479EE0(unsigned int a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 > 3 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(480);
    BUG();
  }
  result = __readfsqword(0);
  *(_QWORD *)(result + 8LL * (int)a1 - 256) = a2;
  return result;
}
// 4C94E1: using guessed type char byte_4C94E1;
