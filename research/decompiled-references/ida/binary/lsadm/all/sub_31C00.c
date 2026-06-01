void *__fastcall sub_31C00(__int64 a1, char **a2)
{
  unsigned int v2; // edx
  size_t v4; // rax
  const char *v5; // r12
  size_t v6; // rdx
  const char *v7; // rsi
  const char *v8; // r12
  size_t v9; // rdx
  _BYTE v11[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  v12[0] = __readfsqword(0x28u);
  v4 = sub_28E10(v11, (unsigned __int64)v12, v2) - v11;
  if ( v4 )
    sub_30190(a2, v11, v4);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v5 = *(const char **)(a1 + 16);
  if ( v5 )
  {
    v6 = strlen(v5) + 1;
  }
  else
  {
    v6 = 1;
    v5 = "";
  }
  v7 = v5;
  v8 = s1;
  sub_30190(a2, v7, v6);
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
  return sub_30190(a2, v8, v9);
}

