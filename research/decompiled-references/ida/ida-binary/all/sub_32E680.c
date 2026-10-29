__int64 __fastcall sub_32E680(__int64 a1, __int64 a2, int *a3, int *a4)
{
  _QWORD *v6; // rax
  __int64 segm_base; // r14
  int v8; // eax
  int v9; // ecx

  v6 = (_QWORD *)getseg(a1);
  if ( !v6 )
    return 0;
  if ( *v6 == a1 )
    return 0;
  segm_base = get_segm_base(v6);
  v8 = calc_max_align(a1) + 1;
  *a3 = v8;
  if ( v8 > 63 )
    return 0;
  v9 = 63;
  while ( a2 - segm_base < ((a1 - segm_base) | (unsigned __int64)((1LL << v9) - 1)) + 1 )
  {
    if ( v8 > --v9 )
      return 0;
  }
  *a4 = v9;
  return 1;
}
