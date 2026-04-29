__int64 __fastcall sub_841F0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rax

  v3 = sub_840B0((__int64)a1, a3);
  if ( v3 == -1 )
    return 0x8000000000000000LL;
  v4 = *(unsigned int *)(*a2 + 4LL * v3);
  if ( (_DWORD)v4 == -1 )
    return 0x8000000000000000LL;
  if ( v4 < a1[1] )
    return *(_QWORD *)(*a1 + 16 * v4);
  if ( under_debugger )
    BUG();
  interr(30419);
  return sub_84270();
}
