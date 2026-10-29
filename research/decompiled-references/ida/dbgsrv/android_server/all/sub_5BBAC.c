/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BBAC
// Address: 0x000000000005BBAC

//----- (000000000005BBAC) ----------------------------------------------------
void __fastcall sub_5BBAC(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_5BBAC(a1, *a2);
    sub_5BBAC(a1, a2[1]);
    sub_5B2BC((__int64)(a2 + 5), (_QWORD *)a2[6]);
    operator delete(a2);
  }
}
