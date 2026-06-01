/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003130
// Address: 0x0000000140003130

//----- (0000000140003130) ----------------------------------------------------
_QWORD *__fastcall sub_140003130(_QWORD *a1, __int64 a2)
{
  size_t v4; // rdi
  void *v5; // rax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = sub_14005AAA0(*(_QWORD *)(a2 + 8));
    *a1 = v5;
    a1[2] = v4;
    memcpy(v5, *(const void **)a2, v4);
    a1[1] = v4;
  }
  return a1;
}
