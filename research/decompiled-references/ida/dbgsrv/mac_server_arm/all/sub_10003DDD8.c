/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DDD8
// Address: 0x000000010003DDD8

//----- (000000010003DDD8) ----------------------------------------------------
__int64 __fastcall sub_10003DDD8(__int64 a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21
  void *v4; // x0

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_100044F04((__int64)(v2 + 2));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}
