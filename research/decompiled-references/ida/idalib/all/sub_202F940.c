__int64 __fastcall sub_202F940(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // rbx
  size_t v9; // rax
  __int64 v10; // rbx
  size_t v11; // rax
  __int64 v12; // rax
  size_t v13; // rdx
  __int64 v14; // rbp
  char *v15; // rbx

  v4 = a3;
  if ( a4 != 1 )
  {
    v5 = a4;
    if ( !*((_DWORD *)a1 + 114) )
      sub_2091AA0(a2, a1 + 56);
    v6 = *a1;
    v7 = j__strlen(" syncscope(\"");
    sub_9954E0(v6, " syncscope(\"", v7);
    sub_22449A0(*(_QWORD *)(16 * v5 + a1[56]), *(_QWORD *)(16 * v5 + a1[56] + 8), *a1);
    v8 = *a1;
    v9 = j__strlen("\")");
    sub_9954E0(v8, "\")", v9);
  }
  v10 = *a1;
  v11 = j__strlen(" ");
  v12 = sub_9954E0(v10, " ", v11);
  v13 = 0;
  v14 = v12;
  v15 = (&off_2C8EEC0)[v4];
  if ( v15 )
    v13 = j__strlen((&off_2C8EEC0)[v4]);
  return sub_9954E0(v14, v15, v13);
}
