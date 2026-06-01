__int64 __fastcall sub_15EEB70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx

  v4 = *(_QWORD *)(a1 + 1608);
  if ( !v4 )
    return *(unsigned __int8 *)(a1 + 1632) ^ 1u;
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 <= 1
    || (v11 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v11 <= 1)
    && (v6 = sub_F63050(v6, a2, v11, a4)) != 0 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        v8 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43;
        if ( (unsigned int)v8 <= 1 )
          break;
        v9 = sub_F63050(v6, a2, v8, a4);
        v7 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    v5 = v7;
  }
  result = 1;
  if ( (v5 & 1) == 0 )
    return *(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
  return result;
}
