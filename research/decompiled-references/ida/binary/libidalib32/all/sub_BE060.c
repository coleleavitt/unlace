__int64 __fastcall sub_BE060(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  size_t v5; // rbp
  size_t v6; // rdx
  const char *v7; // rsi
  void *v9; // [rsp+0h] [rbp-48h]
  size_t v10; // [rsp+8h] [rbp-40h]

  v3 = (unsigned int *)(*(_QWORD *)(a1 + 224) + 32 * a3);
  v10 = 0;
  v5 = *((_QWORD *)v3 + 2);
  v9 = nullptr;
  if ( v5 )
  {
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, *((const void **)v3 + 1), v5);
    v10 = v5;
    if ( !*(_BYTE *)(TProgram::application + 353LL) )
      goto LABEL_11;
  }
  else if ( !*(_BYTE *)(TProgram::application + 353LL) )
  {
LABEL_3:
    v6 = 0;
    v7 = s1;
    goto LABEL_4;
  }
  getinf();
  demangle_name();
  v5 = v10;
  if ( !v10 )
    goto LABEL_3;
LABEL_11:
  v7 = (const char *)v9;
  v6 = v5 - 1;
LABEL_4:
  sub_1823B0(a2, v7, v6);
  if ( *(_BYTE *)(TProgram::application + 352LL) )
  {
    get_nice_colored_name();
    sub_1828B0(a2, *v3, s1);
  }
  else
  {
    sub_182830(a2, *v3);
  }
  if ( v9 )
    qfree();
  return 1;
}

