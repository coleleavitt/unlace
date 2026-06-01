__int64 __fastcall sub_867C0(const void ***a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  v3 = (__int64)(*a1)[1];
  v4 = unpack_dd();
  v5 = (__int64)*a1;
  v6 = v4;
  if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v4 )
    return 0;
  v7 = v4;
  v8 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)qalloc_or_throw(48, v3, v5, v6);
      v9[2] = -1;
      v3 = (__int64)(v9 + 2);
      v9[3] = -4294967226LL;
      v9[4] = 0xFFFFFFFFLL;
      v9[5] = 0;
      *v9 = a2;
      v10 = *(_QWORD **)(a2 + 8);
      v9[1] = v10;
      *v10 = v9;
      ++*(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = v9;
      if ( !(unsigned __int8)sub_85210(a1, (__int64)(v9 + 2)) )
        break;
      if ( ++v8 == v7 )
        return 1;
    }
    return 0;
  }
  return 1;
}
