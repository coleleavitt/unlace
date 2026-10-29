__int64 __fastcall sub_63D4A0(__int64 a1, void *a2)
{
  __int64 v2; // rax
  signed int v3; // ebx
  __int64 *i; // r12
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = *(_DWORD *)(a1 + 40);
  for ( i = *(__int64 **)(v2 + 1672); ; sub_63D3D0(i, a2, v3++) )
  {
    v5 = sub_3BDD60(i, (__int64)a2);
    result = netnode_qsupstr(v5, 0, v3, 83);
    if ( result < 0 )
      break;
  }
  return result;
}
