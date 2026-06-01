unsigned __int64 __fastcall sub_587630(__int64 a1, const char *a2, const char *a3)
{
  const char *v3; // r13
  __int64 v5; // rbx
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  size_t v14; // r13
  void *v15; // rax
  _DWORD v16[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16);
  v17 = __readfsqword(0x28u);
  if ( v6 > 0 )
  {
    LODWORD(a2) = 0;
    do
    {
      v7 = *(_QWORD **)(v5 + 32);
      if ( !v7 || (v8 = v7[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      a2 = (const char *)(unsigned int)((_DWORD)a2 + 1);
      v5 = *v7 + 56 * v8 - 56;
    }
    while ( v6 != (_DWORD)a2 );
  }
  v9 = *(_QWORD **)(v5 + 32);
  if ( v9 && (v10 = v9[1]) != 0 )
  {
    v5 = *v9 + 56 * v10 - 56;
    if ( *(_QWORD *)(v5 + 40) )
      return v17 - __readfsqword(0x28u);
  }
  else if ( *(_QWORD *)(v5 + 40) )
  {
    return v17 - __readfsqword(0x28u);
  }
  v12 = qalloc_or_throw(48, a2);
  v16[0] = 0;
  v13 = v12;
  copy_argloc(v16, v3);
  *(_DWORD *)v13 = 0;
  copy_argloc(v13, v16);
  *(_QWORD *)(v13 + 16) = 0;
  *(_OWORD *)(v13 + 24) = 0;
  if ( a3 )
  {
    v14 = strlen(a3);
    v15 = (void *)qvector_reserve(v13 + 16, 0, v14 + 1, 1);
    *(_QWORD *)(v13 + 16) = v15;
    *(_QWORD *)(v13 + 24) = v14 + 1;
    memmove(v15, a3, v14);
    *(_BYTE *)(*(_QWORD *)(v13 + 16) + v14) = 0;
  }
  *(_QWORD *)(v13 + 40) = 0;
  copy_tinfo_t(v13 + 40);
  *(_QWORD *)(v5 + 40) = v13;
  cleanup_argloc(v16);
  return v17 - __readfsqword(0x28u);
}

