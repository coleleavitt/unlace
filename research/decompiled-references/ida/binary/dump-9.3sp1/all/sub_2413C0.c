__int64 *__fastcall sub_2413C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 *result; // rax

  if ( *(_DWORD *)(a1 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(50372);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v4 + 16) && *(_QWORD *)a1 == -1 )
    *(_QWORD *)a1 = a2;
  v5 = (_QWORD *)qalloc_or_throw(48, a2, a3, a4);
  v5[3] = -4294967226LL;
  v5[2] = -1;
  v5[4] = 0xFFFFFFFFLL;
  v5[5] = 0;
  *v5 = v4;
  v6 = *(_QWORD **)(v4 + 8);
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  result = v5 + 2;
  ++*(_QWORD *)(v4 + 16);
  *result = a2;
  return result;
}
