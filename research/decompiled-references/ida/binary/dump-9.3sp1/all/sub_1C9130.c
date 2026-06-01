__int64 __fastcall sub_1C9130(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 2 || (int)a2 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(52908);
    BUG();
  }
  v4 = qalloc_or_throw(24, a2, a3, a4);
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = 0;
  v5 = qvector_reserve(v4, 0, 1, 24);
  v6 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)v4 = v5;
  v7 = v5 + 24 * v6;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 16) = 0xFFFF;
  ++*(_QWORD *)(v4 + 8);
  copy_argloc();
  *(_WORD *)(v7 + 18) = a2;
  *(_WORD *)(v7 + 16) = 0;
  result = cleanup_argloc();
  if ( v4 )
  {
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
  }
  return result;
}
