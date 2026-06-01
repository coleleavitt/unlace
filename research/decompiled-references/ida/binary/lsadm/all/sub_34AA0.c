void *__fastcall sub_34AA0(__int64 a1, char **a2)
{
  unsigned int v2; // edx
  size_t v4; // rax
  const char *v5; // r13
  size_t v6; // rdx
  size_t v7; // rax
  const char *v8; // rbp
  size_t v9; // rdx
  const char *v10; // rsi
  const char *v11; // rbp
  size_t v12; // rdx
  _BYTE v14[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v15[5]; // [rsp+13h] [rbp-35h] BYREF
  unsigned __int64 v16[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_DWORD *)a1;
  v16[0] = __readfsqword(0x28u);
  v4 = sub_28E10(v14, (unsigned __int64)v15, v2) - v14;
  if ( v4 )
    sub_30190(a2, v14, v4);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(const char **)(a1 + 8);
  if ( v5 )
  {
    v6 = strlen(v5) + 1;
  }
  else
  {
    v6 = 1;
    v5 = "";
  }
  sub_30190(a2, v5, v6);
  v7 = sub_28F50(v14, (unsigned __int64)v16, *(_QWORD *)(a1 + 32)) - v14;
  if ( v7 )
    sub_30190(a2, v14, v7);
  v8 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v8 = *(const char **)(a1 + 40);
  if ( v8 )
  {
    v9 = strlen(v8) + 1;
  }
  else
  {
    v9 = 1;
    v8 = "";
  }
  v10 = v8;
  v11 = s1;
  sub_30190(a2, v10, v9);
  if ( *(_QWORD *)(a1 + 72) )
    v11 = *(const char **)(a1 + 64);
  if ( v11 )
  {
    v12 = strlen(v11) + 1;
  }
  else
  {
    v12 = 1;
    v11 = "";
  }
  return sub_30190(a2, v11, v12);
}

