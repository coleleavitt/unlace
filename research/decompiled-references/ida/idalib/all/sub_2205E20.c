__int64 __fastcall sub_2205E20(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // rdx
  unsigned int v4; // r10d
  __int64 v5; // r9
  bool v6; // r11
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 *i; // rax
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned __int64 **)a1;
  if ( (unsigned int)v2 <= 0x40 )
  {
    result = 0;
    if ( (_DWORD)v2 )
    {
      v12 = (__int64)((_QWORD)v3 << (64 - (unsigned __int8)v2)) >> (64 - (unsigned __int8)v2);
      v13 = *a2 << (64 - (unsigned __int8)v2) >> (64 - (unsigned __int8)v2);
      result = v13 < v12;
      if ( v13 > v12 )
        return 0xFFFFFFFFLL;
    }
    return result;
  }
  v4 = *((_DWORD *)a2 + 2);
  v5 = *a2;
  v6 = (v3[(unsigned int)(v2 - 1) >> 6] & (1LL << ((unsigned __int8)v2 - 1))) != 0;
  v7 = 1LL << ((unsigned __int8)v4 - 1);
  if ( v4 <= 0x40 )
  {
    if ( ((v5 & v7) != 0) == v6 )
      goto LABEL_4;
    return (v3[(unsigned int)(v2 - 1) >> 6] & (1LL << ((unsigned __int8)v2 - 1))) == 0 ? 1 : -1;
  }
  if ( ((*(_QWORD *)(v5 + 8LL * ((v4 - 1) >> 6)) & v7) != 0) != v6 )
    return (v3[(unsigned int)(v2 - 1) >> 6] & (1LL << ((unsigned __int8)v2 - 1))) == 0 ? 1 : -1;
LABEL_4:
  v8 = *a2 - (_QWORD)v3;
  for ( i = &v3[(unsigned int)((unsigned __int64)(v2 + 63) >> 6) - 1]; ; --i )
  {
    v10 = *(unsigned __int64 *)((char *)i + v8);
    if ( *i != v10 )
      break;
    if ( v3 == i )
      return 0;
  }
  return v10 < *i ? 1 : -1;
}
