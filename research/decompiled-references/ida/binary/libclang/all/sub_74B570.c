__int64 __fastcall sub_74B570(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int *v5; // rdx
  const char *v6; // rdi
  size_t v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rdx
  const char *v13; // rdi
  size_t v14; // rbp
  __int64 v15; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 == 1 || v2 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::objc_gc");
    sub_5FF0F0(a2, "(");
    v3 = sub_5FF0F0(a2, &byte_3B9466E);
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v5 = *(unsigned int **)(v4 + 16);
      v6 = (const char *)(v5 + 4);
      v7 = *v5;
    }
    else
    {
      v6 = &byte_3B9466E;
      v7 = 0;
    }
    v8 = sub_722320(v3, v6, v7);
    sub_5FF0F0(v8, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((objc_gc");
    sub_5FF0F0(a2, "(");
    v10 = sub_5FF0F0(a2, &byte_3B9466E);
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      v12 = *(unsigned int **)(v11 + 16);
      v13 = (const char *)(v12 + 4);
      v14 = *v12;
    }
    else
    {
      v13 = &byte_3B9466E;
      v14 = 0;
    }
    v15 = sub_722320(v10, v13, v14);
    sub_5FF0F0(v15, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

