__int64 __fastcall sub_1AF3C80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  unsigned int v4; // ebp
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  _BYTE v8[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL)
                 + 6776LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 344LL)
                 - 6776)
     + 1688LL * a2;
  ptr = v8;
  v3 = *(unsigned int *)(v2 + 976);
  v7 = 0x400000000LL;
  sub_FFF220((__int64)&ptr, v3);
  v4 = v7;
  if ( ptr != v8 )
    free(ptr);
  return v4;
}
