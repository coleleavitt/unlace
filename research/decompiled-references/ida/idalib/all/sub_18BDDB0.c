_BOOL8 __fastcall sub_18BDDB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  _BOOL8 result; // rax

  v5 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 43;
  if ( (unsigned int)v6 <= 1
    || (v7 = a1,
        v6 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v6 <= 1)
    && (v5 = sub_F63050(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v6, a4)) != 0 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 32);
      if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
        v5 = *(_QWORD *)v8;
        v6 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v8 + 16LL) - 43;
        if ( (unsigned int)v6 <= 1 )
          break;
        v9 = sub_F63050(v5, a2, v6, a4);
        v7 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  if ( (_BYTE)a2 )
  {
    v10 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
      v7 = sub_F68450(v10, a2, v6, a4, a5);
  }
  result = 0;
  if ( (v7 & 1) == 0 )
    return !(*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 1);
  return result;
}
