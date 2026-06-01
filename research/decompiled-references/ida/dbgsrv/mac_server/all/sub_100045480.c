/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045480
// Address: 0x0000000100045480

//----- (0000000100045480) ----------------------------------------------------
void __fastcall sub_100045480(__int64 a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_10004CE40((__int64)(v2 + 2));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
}
