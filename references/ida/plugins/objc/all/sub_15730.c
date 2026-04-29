__int64 __fastcall sub_15730(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int _32bit; // r12d
  unsigned int v5; // eax
  unsigned int v6; // r13d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 (*v10)(); // rax
  __int64 result; // rax

  v2 = sub_15060(a1, *(_DWORD *)(a2 + 12));
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  if ( (*(_BYTE *)(a2 + 8) & 2) != 0 )
    sub_EB50(v2, *(_QWORD *)(a1 + 688), *(_QWORD *)(a1 + 664));
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return 0xFFFFFFFFLL;
  v5 = get_32bit();
  v6 = v5;
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  v7 = v3 + *(_QWORD *)(a1 + 688) + v5 * _32bit;
  v8 = v3 + *(_QWORD *)(a1 + 688);
  v9 = getseg();
  if ( !v9 || *(_QWORD *)(v9 + 8) < v7 )
    return 0xFFFFFFFFLL;
  if ( v8 < v7 )
  {
    while ( (*(_BYTE *)(a2 + 8) & 1) == 0 || !(unsigned __int8)callui(27) )
    {
      v10 = **(__int64 (***)())a2;
      if ( v10 != sub_F0A0 )
      {
        result = ((__int64 (__fastcall *)(__int64, unsigned __int64))v10)(a2, v8);
        if ( (_DWORD)result )
          return result;
      }
      v8 += v6;
      if ( v8 >= v7 )
        return 0;
    }
    return 0xFFFFFFFFLL;
  }
  return 0;
}
