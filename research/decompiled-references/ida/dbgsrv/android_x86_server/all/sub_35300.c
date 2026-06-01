/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35300
// Address: 0x00035300

//----- (00035300) --------------------------------------------------------
_BYTE *__cdecl sub_35300(int a1, void **a2, unsigned int *a3)
{
  if ( a3 && *(__int64 *)(a1 + 140) >= 1 && *(_QWORD *)(a1 + 156) )
    return sub_3C8A0(*(int **)(a1 + 132), a2, (_QWORD *)(a1 + 140), *a3);
  else
    return nullptr;
}
