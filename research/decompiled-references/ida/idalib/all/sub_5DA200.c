__int64 __fastcall sub_5DA200(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  __int64 v3; // rbp

  v2 = haystack;
  v3 = *(_QWORD *)(qword_2CCB598 + 1624);
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  sub_391AE0(
    a2,
    (__int64)"title: \"%s\"\n"
             "manhattan_edges: yes\n"
             "layoutalgorithm: mindepth\n"
             "finetuning: no\n"
             "layout_downfactor: 100\n"
             "layout_upfactor: 0\n"
             "layout_nearfactor: 0\n"
             "xlspace: 12\n"
             "yspace: 30\n",
    v2);
  return sub_5DA140(v3, a2);
}
