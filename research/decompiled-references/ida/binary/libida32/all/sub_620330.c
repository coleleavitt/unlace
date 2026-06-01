__int64 __fastcall sub_620330(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 *i; // r12
  unsigned int v5; // eax
  __int64 result; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = *(_DWORD *)(a1 + 40);
  for ( i = *(__int64 **)(v2 + 1480); ; sub_620260(i, a2, v3++) )
  {
    v5 = sub_3B90A0(i, a2);
    result = netnode_qsupstr(v5, 0, v3, 83);
    if ( result < 0 )
      break;
  }
  return result;
}

