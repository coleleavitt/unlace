__int64 __fastcall sub_4087C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 2376);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = a1 + 2368;
  v4 = a1 + 2368;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_QWORD *)(v2 + 24);
      if ( a2 < *(_DWORD *)(v2 + 32) )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v5 );
LABEL_6:
  if ( v3 == v4 )
    return 0xFFFFFFFFLL;
  result = *(unsigned int *)(v4 + 32);
  if ( a2 >= (unsigned int)result )
  {
    if ( !under_debugger )
      interr(1547);
    BUG();
  }
  return result;
}

