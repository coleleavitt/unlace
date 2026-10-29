char *__fastcall sub_3DED80(__int64 a1, char a2)
{
  double v2; // xmm0_8
  size_t v4; // rax

  v2 = qsnprintf(
         byte_8D0E40,
         1024,
         "%p:%s_node_t(\"%s\")",
         (const void *)a1,
         off_86A220[*(int *)(a1 + 56)],
         *(const char **)(a1 + 80));
  if ( a2 )
  {
    qstrncat(byte_8D0E40, "::", 1024);
    v4 = strlen(byte_8D0E40);
    (*(void (__fastcall **)(__int64, char *, size_t, double))(*(_QWORD *)a1 + 16LL))(
      a1,
      &byte_8D0E40[v4],
      1024 - v4,
      v2);
  }
  return byte_8D0E40;
}
