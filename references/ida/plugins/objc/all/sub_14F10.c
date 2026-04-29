__int64 __fastcall sub_14F10(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int _32bit; // eax
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned int v9; // eax

  v4 = getseg();
  if ( !v4 )
    return 0;
  v5 = v4;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return 0;
  v7 = _32bit;
  v8 = 4 * _32bit;
  if ( *(_QWORD *)(v5 + 8) < v8 + a3 + (unsigned __int64)_32bit )
    return 0;
  v9 = get_32bit();
  if ( v9 == -1 )
    return 0;
  *a2 = v8 + v7 + a3 + *(_QWORD *)(a1 + 672) + 1 + v9;
  return 1;
}
