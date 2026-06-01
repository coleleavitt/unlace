__int64 __fastcall sub_17A67D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 result; // rax

  v3 = sub_B8E970(a2 + 64);
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_BYTE *)(v3 + 28) & 0x7F;
        v6 = (unsigned int)(v5 - 49);
        if ( (unsigned int)v6 <= 2 )
          break;
        if ( (unsigned int)(v5 - 58) > 4 )
          return 0;
        result = (*(_BYTE *)(v3 + 74) & 1) == 0;
        if ( (*(_BYTE *)(v3 + 74) & 1) != 0 )
          return result;
        v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v3 )
          return 1;
      }
      v7 = *(_QWORD *)(a1 + 248);
      v8 = *(_QWORD *)(sub_F6B0C0(*(_QWORD *)(v3 + 48), v7, v6, v2, v4) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v8 + 16) != 42 )
        break;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F6B0C0(
                                                                              *(_QWORD *)(v8 + 32),
                                                                              *(_QWORD *)(a1 + 248),
                                                                              v9,
                                                                              v10,
                                                                              v11)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 25) > 1u )
        return 0;
      v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v3 )
        return 1;
    }
    v13 = (__int64 *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v13 + 16) != 48 )
      break;
    v14 = sub_F60F10(*v13, v7, v9, v10, v11, v12);
    if ( *((_BYTE *)v14 + 73) >> 5 )
      break;
    result = sub_17A67D0(a1, v14);
    if ( !(_BYTE)result )
      return result;
    v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v3 )
      return 1;
  }
  return 0;
}
