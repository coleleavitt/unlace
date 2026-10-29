_BOOL8 __fastcall sub_B78C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  bool v8; // zf
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BOOL8 result; // rax

  if ( ((*(_BYTE *)(a1 + 73) >> 5) & 5) == 1 || (*(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return 0;
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 128) == 0;
  v9 = (__int64 *)(v7 + 96);
  if ( v8 )
  {
    sub_6E4DB0(v9, v7, a3, a4, a5, a6);
    result = 1;
    if ( !*(_QWORD *)(a1 + 128) )
      return result;
    v7 = *(_QWORD *)(a1 + 104);
    v9 = (__int64 *)(v7 + 96);
  }
  sub_6E4DB0(v9, v7, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 1) == 0 )
    return 0;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v10, v11, v12, v13);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 0x20) != 0;
}

