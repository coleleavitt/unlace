bool __fastcall sub_1AFCC80(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  bool result; // al
  __int64 v8; // rsi
  int v9; // edx
  int v10; // [rsp+0h] [rbp-A0h]
  _BYTE v11[4]; // [rsp+8h] [rbp-98h] BYREF
  int v12; // [rsp+Ch] [rbp-94h]
  void *ptr; // [rsp+38h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-60h]
  _BYTE v15[88]; // [rsp+48h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
    return 1;
  if ( sub_9B48E0(a2) || sub_1AF2F40(a1) )
    return 1;
  sub_1AFBE90((__int64)v11, *(_QWORD *)(a1 + 8), a2);
  v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL)
                                   + 6776LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 344LL)
                                   - 6776)
                       + 1688LL * a3
                       + 976);
  v14 = 0x400000000LL;
  ptr = v15;
  sub_FFF220((__int64)&ptr, v8);
  v9 = v14;
  result = 0;
  if ( ptr != v15 )
  {
    v10 = v14;
    free(ptr);
    result = 0;
    v9 = v10;
  }
  if ( a3 )
  {
    do
      sub_1AF1810((__int64)&ptr, *(_QWORD *)(a1 + 8), a2, --a3);
    while ( HIDWORD(ptr) == 94 && a3 );
    return 1;
  }
  if ( a4 + 1 == v9 )
  {
    if ( v12 == 94 )
      return (unsigned int)sub_1AE7690(*(_QWORD *)(a1 + 8)) == 8;
    return 1;
  }
  return result;
}
