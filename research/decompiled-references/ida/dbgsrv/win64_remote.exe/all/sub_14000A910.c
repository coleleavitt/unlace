/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A910
// Address: 0x000000014000A910

//----- (000000014000A910) ----------------------------------------------------
void __fastcall sub_14000A910(void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      j_j_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  j_j_free(*a1);
}
