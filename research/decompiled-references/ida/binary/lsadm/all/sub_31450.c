void *__fastcall sub_31450(__int64 a1, char **a2)
{
  unsigned int v2; // edx
  size_t v3; // rax
  const char *v4; // rbp
  size_t v5; // rdx
  _BYTE v7[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  v8[0] = __readfsqword(0x28u);
  v3 = sub_28E10(v7, (unsigned __int64)v8, v2) - v7;
  if ( v3 )
    sub_30190(a2, v7, v3);
  v4 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v4 = *(const char **)(a1 + 16);
  if ( v4 )
  {
    v5 = strlen(v4) + 1;
  }
  else
  {
    v5 = 1;
    v4 = "";
  }
  return sub_30190(a2, v4, v5);
}

