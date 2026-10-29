/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400372B0
// Address: 0x00000001400372B0

//----- (00000001400372B0) ----------------------------------------------------
void __fastcall sub_1400372B0(void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_140037230((__int64)(v3 + 2));
      j_j_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  j_j_free(*a1);
}
