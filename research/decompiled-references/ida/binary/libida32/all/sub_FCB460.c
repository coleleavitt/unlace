bool __fastcall sub_FCB460(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rbp
  __int64 v5; // r8
  size_t v6; // rcx
  const void *v7; // rdi
  const void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax

  if ( !a3 )
    return 0;
  result = 0;
  v4 = a1;
  v5 = 16 * a3 + a2 - 16;
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v5 + 8) == v6 )
  {
    v7 = *(const void **)a1;
    v8 = *(const void **)v5;
    v9 = a3 - 1;
    v10 = a2 + 16 * a3;
    if ( !v6 )
      goto LABEL_5;
LABEL_4:
    if ( !memcmp(v7, v8, v6) )
    {
LABEL_5:
      while ( 1 )
      {
        v4 = *(_QWORD *)(v4 + 40);
        if ( !v4 )
          return v9 == 0;
        if ( !v9 )
          return 0;
        v11 = *(_QWORD *)(v10 - 24);
        v6 = *(_QWORD *)(v4 + 8);
        --v9;
        v10 -= 16;
        if ( v11 != v6 )
          return 0;
        v7 = *(const void **)v4;
        v8 = *(const void **)(v10 - 16);
        if ( v6 )
          goto LABEL_4;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

