unsigned __int64 __fastcall sub_449090(__int64 a1)
{
  const char *v1; // rbp
  FILE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  get_plugin_options("merge");
  if ( (unsigned __int8)parse_plugin_options() )
  {
    *(_BYTE *)(a1 + 288) = 2;
    *(_WORD *)(a1 + 290) = 257;
  }
  if ( *(_QWORD *)(a1 + 80) > 1u )
  {
    v6 = *(const char **)(a1 + 72);
    v7 = qfopen(v6, "wt");
    if ( !v7 )
      sub_4435A0(v6, (__int64)"wt", v8, v9);
    *(_QWORD *)(a1 + 216) = v7;
  }
  if ( *(_QWORD *)(a1 + 104) > 1u )
  {
    v1 = *(const char **)(a1 + 96);
    v2 = (FILE *)qfopen(v1, "wt");
    if ( !v2 )
      sub_4435A0(v1, (__int64)"wt", v3, v4);
    *(_QWORD *)(a1 + 224) = v2;
    setvbuf(v2, nullptr, 2, 0);
    sub_38CDA0();
  }
  return v10 - __readfsqword(0x28u);
}

