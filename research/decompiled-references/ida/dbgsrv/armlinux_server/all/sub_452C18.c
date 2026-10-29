/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452C18
// Address: 0x0000000000452C18

//----- (0000000000452C18) ----------------------------------------------------
void *__fastcall sub_452C18(__int64 a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x19
  void *result; // x0

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_450A88(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  result = memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  return result;
}
