__int64 __fastcall sub_503E30(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // edx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = sub_506F10(v3, *a2);
  if ( v4 == **(_QWORD **)(a1 + 32) + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) )
    return 0xFFFFFFFFLL;
  v5 = *(_DWORD *)(v4 + 8);
  if ( !v5 )
  {
    if ( !under_debugger )
      interr(40);
    BUG();
  }
  result = (unsigned int)(v5 - 1);
  *(_DWORD *)(v4 + 8) = result;
  return result;
}
