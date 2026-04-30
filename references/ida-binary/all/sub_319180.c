__int64 __fastcall sub_319180(__int64 a1, __int64 a2)
{
  int v2; // r12d
  const void *v4; // rbp
  size_t v5; // rax
  size_t v6; // r13
  void *v7; // rdi
  size_t v8; // r12
  __int64 v9; // rax

  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    return 0;
  v2 = *(_DWORD *)(a2 + 24);
  if ( !v2 )
  {
    v4 = (const void *)(a1 + 138);
    v5 = strlen((const char *)(a1 + 138));
    v6 = v5;
    if ( v5 )
    {
      v7 = *(void **)a2;
      v8 = v5 + 1;
      if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
      {
        v9 = qvector_reserve(a2, *(_QWORD *)a2, v5 + 1, 1);
        *(_QWORD *)a2 = v9;
        v7 = (void *)v9;
      }
      *(_QWORD *)(a2 + 8) = v8;
      memmove(v7, v4, v6);
      *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
      v2 = *(_DWORD *)(a2 + 24);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  *(_DWORD *)(a2 + 24) = v2 + 1;
  return 0;
}
