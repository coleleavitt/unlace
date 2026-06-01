/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044A20
// Address: 0x0000000140044A20

//----- (0000000140044A20) ----------------------------------------------------
void __fastcall sub_140044A20(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD **v3; // rdi

  v2 = *(_QWORD ***)a1;
  if ( v2 != (_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD **)*v2;
      *v2[1] = *v2;
      (*v2)[1] = v2[1];
      j_free(v2);
      --*(_QWORD *)(a1 + 16);
      v2 = v3;
    }
    while ( v3 != (_QWORD **)a1 );
  }
}
