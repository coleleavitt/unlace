/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400015D0
// Address: 0x00000001400015D0

//----- (00000001400015D0) ----------------------------------------------------
_QWORD *__fastcall sub_1400015D0(_QWORD *a1, const char *a2)
{
  size_t v4; // rax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    sub_140001810((__int64)a1, a2, v4);
  }
  return a1;
}
