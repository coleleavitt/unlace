__int64 *__fastcall sub_31A1D0(__int64 *a1)
{
  char v2; // al
  __int64 v4; // rbp
  const void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = reg_str_get(a1, "Editor", 0);
  if ( a1 == &qword_8CD780 || v2 == 1 )
    return a1;
  v4 = unk_8CD788;
  if ( unk_8CD788 > 1u )
  {
    v5 = (const void *)qword_8CD780;
    v6 = (void *)*a1;
    if ( (unsigned __int64)a1[2] < unk_8CD788 )
    {
      v7 = qvector_reserve(a1, *a1, unk_8CD788, 1);
      *a1 = v7;
      v6 = (void *)v7;
    }
    a1[1] = v4;
    memmove(v6, v5, v4 - 1);
    *(_BYTE *)(*a1 + v4 - 1) = 0;
    return a1;
  }
  a1[1] = 0;
  return a1;
}
