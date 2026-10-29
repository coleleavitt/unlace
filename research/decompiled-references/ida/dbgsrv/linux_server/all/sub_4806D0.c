/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4806D0
// Address: 0x00000000004806D0

//----- (00000000004806D0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_4806D0(unsigned __int8 *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // rbx
  unsigned __int8 v6[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v4 = (unsigned __int8 *)__realpath_chk(a3, v6, 4096);
  if ( !v4 )
  {
    v4 = a3;
    if ( !(unsigned __int8)sub_480670(a3) )
    {
      v4 = v6;
      sub_480690((char *)v6, 0x1000u);
      sub_480480((char *)v6, 4096, v6, a3, 0);
    }
  }
  sub_479A40(a1, v4, a2);
  return a1;
}
// 405B20: using guessed type __int64 __fastcall __realpath_chk(_QWORD, _QWORD, _QWORD);
