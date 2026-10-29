/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4096B8
// Address: 0x00000000004096B8

//----- (00000000004096B8) ----------------------------------------------------
void __fastcall sub_4096B8(char *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x19
  char *v4; // x0
  void *v5; // x0

  v2 = *((_QWORD **)a1 + 7);
  *(_QWORD *)a1 = qword_51D958;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      j__free_0(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*((void **)a1 + 5), 0, 8LL * *((_QWORD *)a1 + 6));
  v4 = *((char **)a1 + 5);
  *((_QWORD *)a1 + 7) = 0;
  *((_QWORD *)a1 + 8) = 0;
  if ( v4 != a1 + 88 )
    j__free_0(v4);
  v5 = *((void **)a1 + 2);
  if ( v5 )
  {
    *((_QWORD *)a1 + 3) = 0;
    j__free(v5);
  }
  j_j__free_0(a1);
}
// 51D958: using guessed type __int64 qword_51D958[2];
