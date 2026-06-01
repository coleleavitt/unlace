__int64 __fastcall sub_6F9F70(__int64 a1, const char *a2, unsigned __int8 *a3)
{
  int v5; // eax
  __int64 result; // rax
  size_t v7; // rax
  size_t v8; // rbx
  size_t v9; // rax
  size_t v10; // rbx
  int v11; // eax
  void *v12; // rdi
  size_t v13; // r13
  int v14; // edx
  int v15; // eax
  void *v16; // rdi
  size_t v17; // r13
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( !strcmp(a2, "CLANG_ARGV") )
  {
    if ( a3 && (v9 = strlen((const char *)a3), (v10 = v9) != 0) )
    {
      v12 = *(void **)(a1 + 8);
      v13 = v9 + 1;
      if ( *(_QWORD *)(a1 + 24) < v9 + 1 )
      {
        v20 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v13, 1);
        *(_QWORD *)(a1 + 8) = v20;
        v12 = (void *)v20;
      }
      *(_QWORD *)(a1 + 16) = v13;
      memmove(v12, a3, v10);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v10) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
    return 1;
  }
  if ( !strcmp(a2, "CLANG_SMART_POINTERS") )
  {
    if ( a3 && (v7 = strlen((const char *)a3), (v8 = v7) != 0) )
    {
      v16 = *(void **)(a1 + 32);
      v17 = v7 + 1;
      if ( *(_QWORD *)(a1 + 48) < v7 + 1 )
      {
        v19 = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v17, 1);
        *(_QWORD *)(a1 + 32) = v19;
        v16 = (void *)v19;
      }
      *(_QWORD *)(a1 + 40) = v17;
      memmove(v16, a3, v8);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v8) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
    return 1;
  }
  if ( !strcmp(a2, "CLANG_APPLY_TINFO") )
  {
    v5 = *a3 - 111;
    if ( *a3 == 111 )
    {
      v5 = a3[1] - 110;
      if ( a3[1] == 110 )
        v5 = a3[2];
    }
    *(_BYTE *)(a1 + 56) = v5 == 0;
    return 1;
  }
  if ( !strcmp(a2, "CLANG_NO_IDA_SPECIFIC") )
  {
    v11 = *a3 - 111;
    if ( *a3 == 111 )
    {
      v11 = a3[1] - 110;
      if ( a3[1] == 110 )
        v11 = a3[2];
    }
    *(_BYTE *)(a1 + 57) = v11 == 0;
    return 1;
  }
  if ( !strcmp(a2, "CLANG_LANGUAGE") )
  {
    *(_QWORD *)(a1 + 64) = sub_6F6270((char *)a3);
    return 1;
  }
  if ( !strcmp(a2, "CLANG_PRINT_AST") )
  {
    v18 = *a3 - 111;
    if ( *a3 == 111 )
    {
      v18 = a3[1] - 110;
      if ( a3[1] == 110 )
        v18 = a3[2];
    }
    *(_BYTE *)(a1 + 72) = v18 == 0;
    return 1;
  }
  v14 = strcmp(a2, "CLANG_DUMP_AST");
  result = 0;
  if ( !v14 )
  {
    v15 = *a3 - 111;
    if ( *a3 == 111 )
    {
      v15 = a3[1] - 110;
      if ( a3[1] == 110 )
        v15 = a3[2];
    }
    *(_BYTE *)(a1 + 73) = v15 == 0;
    return 1;
  }
  return result;
}
