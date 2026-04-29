__int64 __fastcall sub_1C9130(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 2 || a2 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(52908);
    BUG();
  }
  v2 = qalloc_or_throw(24);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = 0;
  v3 = qvector_reserve(v2, 0, 1, 24);
  v4 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)v2 = v3;
  v5 = v3 + 24 * v4;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 16) = 0xFFFF;
  ++*(_QWORD *)(v2 + 8);
  copy_argloc(v5, a1);
  *(_WORD *)(v5 + 18) = a2;
  *(_WORD *)(v5 + 16) = 0;
  result = cleanup_argloc(a1);
  if ( v2 )
  {
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v2;
  }
  return result;
}
