__int64 __fastcall sub_235EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx

  v5 = *(int *)(a1 + 44);
  if ( (int)v5 >= 0 )
  {
    a3 = dbg;
    if ( (int)v5 < *(_DWORD *)(dbg + 64) )
      return *(unsigned int *)(*(_QWORD *)(dbg + 56) + 32 * v5 + 8);
  }
  if ( under_debugger )
    BUG();
  interr(40048, a2, a3, a4, a5);
  return sub_235EE0(40048, a2, v7);
}
