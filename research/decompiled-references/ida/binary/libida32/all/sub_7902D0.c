__int64 __fastcall sub_7902D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // r12d
  __int64 v4; // rax

  v2 = *(_BYTE *)(a1 + 5984) & 1;
  if ( (*(_BYTE *)(a1 + 5984) & 1) == 0 )
  {
    if ( !under_debugger )
      interr(1229);
    BUG();
  }
  v3 = _byteswap_ulong(*(_DWORD *)(a2 + 1));
  if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 5896) )
    return 0;
  v4 = *(_QWORD *)(a1 + 5888) + 24LL * v3;
  if ( *(_QWORD *)(v4 + 8) <= 1u )
    return 0;
  sub_78DE50(3, v3, *(const char **)v4);
  sub_790080(a1, v3);
  return v2;
}

