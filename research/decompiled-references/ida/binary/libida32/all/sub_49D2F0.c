void *__fastcall sub_49D2F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int *v4; // rbx
  _QWORD *v5; // r13
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  void *result; // rax

  v3 = **(_QWORD **)(a1 + 40);
  *(_BYTE *)(a1 + 144) = 1;
  v4 = (unsigned int *)(v3 + 8 * a2);
  switch_dbctx(*(int *)(a1 + 8));
  v5 = sub_49C910(a1, *v4, *(_QWORD **)(a1 + 56));
  v6 = sub_49C910(a1, v4[1], v5);
  if ( v5 != v6 )
  {
    v7 = v5;
    do
    {
      clear_tinfo_t(v7 + 8);
      v8 = (void *)v7[5];
      if ( v8 )
      {
        v7[6] = 0;
        qfree(v8);
      }
      v9 = (void *)v7[2];
      if ( v9 )
      {
        v7[3] = 0;
        qfree(v9);
      }
      v7 += 16;
    }
    while ( v6 != v7 );
  }
  result = memmove(v5, v6, *(_QWORD *)(a1 + 56) + (*(_QWORD *)(a1 + 64) << 7) - (_QWORD)v6);
  *(_QWORD *)(a1 + 64) -= ((char *)v6 - (char *)v5) >> 7;
  return result;
}

