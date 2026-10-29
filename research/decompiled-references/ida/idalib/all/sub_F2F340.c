__int64 __fastcall sub_F2F340(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  __int64 v4; // r12
  const char *v5; // rbp
  size_t v6; // rdx
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v9; // rax
  size_t v10; // rdx
  __int64 v11; // rbp
  const char *v12; // rbx
  __int64 v13; // rbx
  size_t v14; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" \"");
  v4 = sub_9954E0(v2, " \"", v3);
  v5 = (const char *)(a2 + 48);
  if ( a2 == -48 )
    v6 = 0;
  else
    v6 = j__strlen(v5);
  v7 = sub_9954E0(v4, v5, v6);
  v8 = j__strlen("\" \"");
  v9 = sub_9954E0(v7, "\" \"", v8);
  v10 = 0;
  v11 = v9;
  v12 = (const char *)(a2 + *(_QWORD *)(a2 + 40) + 48);
  if ( a2 + *(_QWORD *)(a2 + 40) != -48 )
    v10 = j__strlen(v12);
  v13 = sub_9954E0(v11, v12, v10);
  v14 = j__strlen("\"");
  return sub_9954E0(v13, "\"", v14);
}
