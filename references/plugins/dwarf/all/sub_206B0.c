unsigned __int64 __fastcall sub_206B0(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 *v5; // rdx

  if ( *(_QWORD *)(a1 + 8) > 1u )
    return a1;
  v3 = a2[36];
  if ( !a1 || a1 < v3 || v3 + 96LL * a2[37] < a1 )
  {
    if ( !under_debugger )
      interr(20086);
    BUG();
  }
  v4 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1 - v3) >> 5);
  v5 = a2 + 44;
  if ( v4 < a2[39] )
    v5 = a2 + 40;
  sub_20460((__int64)a2, (__int64 *)a1, v5, *(_DWORD *)(a1 + 48));
  return a1;
}
