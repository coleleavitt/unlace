__int64 __fastcall sub_268DF0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 **merge_handlers; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax

  v3 = sub_268D80(a1, a2, a3);
  if ( !(_BYTE)v3 )
    return v3;
  if ( (get_merge_state() & 3) == 0 )
    return v3;
  merge_handlers = (__int64 **)get_merge_handlers(0);
  v6 = *merge_handlers;
  v7 = (__int64)&(*merge_handlers)[(_QWORD)merge_handlers[1]];
  if ( v6 == (__int64 *)v7 )
    return v3;
  while ( 1 )
  {
    v8 = *v6;
    if ( *(_QWORD *)(*v6 + 128) == -1 || *(_QWORD *)(v8 + 104) )
      break;
    if ( (__int64 *)v7 == ++v6 )
      return v3;
  }
  v9 = sub_277DF0();
  sub_278930(v9, v8);
  return v3;
}
