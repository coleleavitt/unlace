__int64 __fastcall sub_2246FB0(__int64 *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rdi
  _OWORD v9[2]; // [rsp+0h] [rbp-28h] BYREF

  v4 = &a2[a3];
  memset(v9, 0, sizeof(v9));
  for ( ; a2 != v4; *((_QWORD *)v9 + (v5 >> 6)) |= 1LL << v5 )
    v5 = *a2++;
  v6 = a1[1];
  result = v6;
  if ( a4 <= v6 )
    result = a4;
  if ( a4 < v6 )
  {
    v8 = *a1;
    if ( ((1LL << *(_BYTE *)(v8 + result)) & *((_QWORD *)v9 + ((unsigned __int64)*(unsigned __int8 *)(v8 + result) >> 6))) == 0 )
      return result;
    while ( ++result != v6 )
    {
      if ( ((1LL << *(_BYTE *)(v8 + result))
          & *((_QWORD *)v9 + ((unsigned __int64)*(unsigned __int8 *)(v8 + result) >> 6))) == 0 )
        return result;
    }
  }
  return -1;
}
