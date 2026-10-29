/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037360
// Address: 0x0000000140037360

//----- (0000000140037360) ----------------------------------------------------
void __fastcall sub_140037360(void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rdi

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_14002BC90((__int64)(v3 + 6));
      sub_140037230((__int64)(v3 + 2));
      j_j_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  j_j_free(*a1);
}
