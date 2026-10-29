/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806F830
// Address: 0x0806F830

//----- (0806F830) --------------------------------------------------------
_DWORD *__userpurge sub_806F830@<eax>(_DWORD *a1, int a2, unsigned int a3)
{
  char *v3; // eax
  char *v4; // edi
  void *v5; // eax
  size_t n; // [esp+0h] [ebp-24h]

  v3 = sub_806C430(a2, a3);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v3 )
  {
    v4 = v3;
    n = strlen(v3);
    v5 = sub_80CF920((int)a1, nullptr, n + 1, 1u);
    *a1 = v5;
    a1[1] = n + 1;
    memmove(v5, v4, n);
    *(_BYTE *)(*a1 + n) = 0;
    if ( a1[1] > 1u )
      return a1;
  }
  sub_805ED10(a1, (char *)&qword_811CFF4 - 271492, a3);
  return a1;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
