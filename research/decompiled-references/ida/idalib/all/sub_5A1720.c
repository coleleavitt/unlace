unsigned __int64 __fastcall sub_5A1720(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v5; // rbx
  int v6; // edi
  int i; // esi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v13; // r14
  size_t v14; // r13
  void *v15; // rax
  _DWORD v16[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16);
  v17 = __readfsqword(0x28u);
  if ( v6 > 0 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = *(_QWORD **)(v5 + 32);
      if ( !v8 || (v9 = v8[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      v5 = *v8 + 56 * v9 - 56;
    }
  }
  v10 = *(_QWORD **)(v5 + 32);
  if ( v10 && (v11 = v10[1]) != 0 )
  {
    v5 = *v10 + 56 * v11 - 56;
    if ( *(_QWORD *)(v5 + 40) )
      return v17 - __readfsqword(0x28u);
  }
  else if ( *(_QWORD *)(v5 + 40) )
  {
    return v17 - __readfsqword(0x28u);
  }
  v16[0] = 0;
  v13 = qalloc_or_throw(48);
  copy_argloc(v16, a2);
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
