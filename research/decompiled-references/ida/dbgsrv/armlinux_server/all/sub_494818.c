/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494818
// Address: 0x0000000000494818

//----- (0000000000494818) ----------------------------------------------------
__int64 sub_494818()
{
  unsigned __int8 v0; // w1
  _QWORD *v2; // x21

  v0 = atomic_load((unsigned __int8 *)&byte_524520);
  if ( (v0 & 1) == 0 && (unsigned int)sub_49F4B8((unsigned __int8 *)&byte_524520) )
  {
    v2 = sub_49E050(0xD0u);
    sub_4945D0(v2);
    qword_524538 = (__int64)v2;
    sub_49F630((__int64)&byte_524520);
    sub_494788((__int64)v2);
    return qword_524538;
  }
  else
  {
    sub_494788(qword_524538);
    return qword_524538;
  }
}
// 523500: using guessed type __int64 qword_523500[512];
// 524520: using guessed type char byte_524520;
// 524538: using guessed type __int64 qword_524538;
