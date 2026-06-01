__int64 __fastcall sub_766450(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // dx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  size_t v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rdi
  void *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi

  sub_766240((__int64)a1, (_BYTE *)&dword_0 + 2);
  v1 = a1[40];
  v2 = *(_WORD *)(a1[39] + 2 * v1 - 2);
  if ( v1 )
    a1[40] = v1 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[42] + 8LL * a1[43] - 8) + 24LL) = v2;
  v3 = a1[20];
  v4 = a1[19];
  v5 = v4 + 24 * v3 - 24;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    if ( v3 )
    {
      v7 = v3 - 1;
      a1[20] = v7;
      v8 = v4 + 24 * v7;
      v9 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        qfree(v9);
      }
    }
    return 0;
  }
  v11 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 8), (_BYTE *)&dword_0 + 2);
  memcpy(v11, *(const void **)v5, v6);
  v12 = a1[20];
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = a1[19];
    a1[20] = v13;
    v15 = v14 + 24 * v13;
    v16 = *(void **)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_QWORD *)(v15 + 8) = 0;
      qfree(v16);
    }
  }
  if ( !v11 )
    return 0;
  qfree(v11);
  return 0;
}

