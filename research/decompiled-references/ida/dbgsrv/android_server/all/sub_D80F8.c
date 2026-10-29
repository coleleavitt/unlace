/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D80F8
// Address: 0x00000000000D80F8

//----- (00000000000D80F8) ----------------------------------------------------
__int64 __fastcall sub_D80F8(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x0
  char *v7; // x2

  v4 = a1[1];
  if ( a3 )
  {
    v5 = v4 >> 8;
    if ( (v4 & 1) != 0 )
      v5 = *(_QWORD *)(*a3 + v5);
  }
  else
  {
    v5 = 0;
  }
  v6 = *a1;
  v7 = (char *)a3 + v5;
  if ( (v4 & 2) != 0 )
    a4 = (unsigned int)a4;
  else
    a4 = 2;
  return (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)v6 + 56LL))(v6, a2, v7, a4);
}
