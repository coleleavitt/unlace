unsigned __int64 __fastcall sub_F8B40(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned __int64 result; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  if ( a2 >= *(_QWORD *)(a1 + 32) )
  {
    if ( !under_debugger )
      sub_383060(50115);
    goto LABEL_16;
  }
  v3 = *(_QWORD *)(a1 + 24) + 80 * a2;
  v4 = *(_DWORD *)(v3 + 56);
  if ( (unsigned int)(v4 - 3) > 1 && v4 )
  {
    if ( v4 == 1 )
    {
      sub_82440((__int64 *)(a1 + 24), a2);
      result = *(int *)(a1 + 8);
      if ( a2 < result )
        *(_DWORD *)(a1 + 8) = a2;
      return result;
    }
    if ( !under_debugger )
      sub_383060(51015);
LABEL_16:
    BUG();
  }
  cleanup_argloc();
  v6 = *(_QWORD *)(v3 + 32);
  if ( v6 )
  {
    *(_QWORD *)(v3 + 40) = 0;
    qfree(v6);
  }
  clear_tinfo_t();
  sub_11CDA0(v3);
  memmove((void *)v3, (const void *)(v3 + 80), *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - v3 - 80);
  v7 = *(int *)(a1 + 8);
  --*(_QWORD *)(a1 + 32);
  result = v7;
  if ( a2 < v7 )
  {
    result = (unsigned int)(v7 - 1);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
