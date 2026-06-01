char *__fastcall sub_1365800(void *src, size_t n, _QWORD *a3, __int64 a4, char a5)
{
  size_t v9; // rax
  __int64 v10; // rdi
  size_t v11; // rdx
  size_t v12; // rbp
  char *result; // rax
  size_t v14; // r14
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax

  if ( a5 && (*(_BYTE *)(a4 + 1) & 8) != 0 )
  {
    v17 = j__strlen("extern \"C\" {\n");
    sub_A1FE50(a3, "extern \"C\" {\n", &aExternC_0[v17]);
  }
  if ( (*(_BYTE *)(a4 + 2) & 4) != 0 )
  {
    v9 = j__strlen("#import \"");
    sub_A1FE50(a3, "#import \"", &aImport[v9]);
    v10 = a3[1];
    v11 = n + v10;
    if ( n + v10 <= a3[2] )
      goto LABEL_6;
  }
  else
  {
    v15 = j__strlen("#include \"");
    sub_A1FE50(a3, "#include \"", &aInclude_1[v15]);
    v10 = a3[1];
    v11 = n + v10;
    if ( n + v10 <= a3[2] )
      goto LABEL_6;
  }
  sub_2236E10(a3, a3 + 3, v11, 1);
  v10 = a3[1];
LABEL_6:
  if ( n )
  {
    memcpy((void *)(*a3 + v10), src, n);
    v10 = a3[1];
  }
  v12 = v10 + n;
  a3[1] = v10 + n;
  result = (char *)j__strlen("\"\n");
  v14 = (size_t)result;
  if ( (unsigned __int64)&result[v10 + n] > a3[2] )
  {
    result = (char *)sub_2236E10(a3, a3 + 3, &result[v12], 1);
    v12 = a3[1];
  }
  if ( v14 )
  {
    result = (char *)memcpy((void *)(v12 + *a3), "\"\n", v14);
    v12 = a3[1];
  }
  a3[1] = v14 + v12;
  if ( a5 )
  {
    if ( (*(_BYTE *)(a4 + 1) & 8) != 0 )
    {
      v16 = j__strlen("}\n");
      return (char *)sub_A1FE50(a3, "}\n", &asc_2337371[v16 + 1]);
    }
  }
  return result;
}
