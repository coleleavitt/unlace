bool __fastcall sub_BF2940(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 v6; // rbp
  int v7; // eax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(__int64 **)a1;
  if ( v2 <= 0x40 )
  {
    v4 = 0;
    if ( v2 )
      v4 = (__int64)((_QWORD)v3 << (64 - (unsigned __int8)v2)) >> (64 - (unsigned __int8)v2);
    return a2 < v4;
  }
  v6 = v3[(v2 - 1) >> 6] & (1LL << ((unsigned __int8)v2 - 1));
  if ( v6 )
    v7 = sub_21E2AC0(a1);
  else
    v7 = sub_21E2A40(a1);
  if ( v2 + 1 - v7 <= 0x40 )
  {
    v4 = *v3;
    return a2 < v4;
  }
  return v6 == 0;
}

