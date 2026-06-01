__int64 __fastcall sub_C0DDA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax

  result = 11;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 8) == 0 )
    return result;
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  result = 0;
  if ( (_BYTE)v6 == 43 )
    return result;
  if ( *(_BYTE *)(v5 + 16) != 44 )
  {
    if ( (_BYTE)v6 == 44 )
    {
      v5 = sub_F63050(v5, a2, v6, a4);
      if ( v5 )
        goto LABEL_4;
      LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL);
    }
    result = 8;
    if ( (_BYTE)v6 != 48 )
      return (unsigned __int8)(v6 - 2) < 5u ? 9 : 11;
    return result;
  }
LABEL_4:
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v5 = *(_QWORD *)v7;
      v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL) - 43;
      if ( (unsigned int)v8 <= 1 )
        break;
      v9 = sub_F63050(v5, a2, v8, a4);
      v7 = *(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
        return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 > 1;
    }
  }
  return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
       - 25 > 1;
}
