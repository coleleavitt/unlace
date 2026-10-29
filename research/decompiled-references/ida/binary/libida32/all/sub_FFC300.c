const char *__fastcall sub_FFC300(__int64 a1, int a2, bool *a3)
{
  int v5; // eax
  __int64 v6; // rax
  char v7; // al
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10; // [rsp+20h] [rbp-28h]

  if ( a3 )
    *a3 = a2 == 0;
  if ( !a2 )
  {
    j__strlen("<invalid loc>");
    return "<invalid loc>";
  }
  v5 = sub_FF98A0((unsigned int *)a1, a2);
  v6 = sub_FFC290(a1, v5);
  if ( v6 )
  {
    sub_FF9C60(
      &v8,
      (__int64 *)(*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 16),
      0);
    v7 = v10;
    if ( a3 )
      *a3 = v10 ^ 1;
    if ( v7 )
      return (const char *)v9;
  }
  else if ( a3 )
  {
    *a3 = 1;
  }
  j__strlen("<invalid buffer>");
  return "<invalid buffer>";
}

