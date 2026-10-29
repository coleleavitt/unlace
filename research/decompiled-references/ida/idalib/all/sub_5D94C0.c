__int64 __fastcall sub_5D94C0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  sub_391AE0(a2, (__int64)"digraph \"%s\" {\n", v2);
  return sub_391AE0(a2, (__int64)"\tgraph [\n\t];\n\tnode [\n\t\tshape = \"box\"\n\t];\n\tedge [\n\t];\n");
}
