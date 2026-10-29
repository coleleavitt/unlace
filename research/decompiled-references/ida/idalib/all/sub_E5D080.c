const char *__fastcall sub_E5D080(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  const char *v3; // rbx
  const char **v5; // rax

  v2 = *(_QWORD *)(a1 + 1264);
  if ( v2 )
  {
    v3 = (const char *)*sub_B3E290(v2, a2);
    if ( !v3 )
      return v3;
LABEL_3:
    j__strlen(v3);
    return v3;
  }
  v5 = (const char **)sub_B3E550(a2);
  if ( !v5 )
  {
    v3 = "<invalid>";
    j__strlen("<invalid>");
    return v3;
  }
  v3 = *v5;
  if ( *v5 )
    goto LABEL_3;
  return nullptr;
}
