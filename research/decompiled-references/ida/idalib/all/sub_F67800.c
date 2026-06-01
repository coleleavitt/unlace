__int64 __fastcall sub_F67800(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx

  for ( i = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    v7 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(unsigned __int8 *)(v7 + 16);
    v9 = (unsigned int)(v8 - 2);
    if ( (unsigned __int8)(v8 - 2) > 4u )
      goto LABEL_7;
    v10 = sub_F62E70(i);
    if ( !v10 )
      break;
    i = v10;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
LABEL_7:
  if ( (_BYTE)v8 != 48
    || (v11 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, v8, v9, a5, a6), result = 5, (*((_BYTE *)v11 + 75) & 0x20) == 0) )
  {
    v13 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v13 & 8) == 0 )
    {
      v14 = ((unsigned __int8)v13 | (unsigned __int8)*a1) & 7;
      return (v14 >> 2) & 1;
    }
    v14 = *a1 & 7LL
        | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    result = (v14 >> 6) & 7;
    if ( (_DWORD)result != 2 && (_DWORD)result != 3 )
    {
      if ( !HIDWORD(v14) )
        return (v14 >> 2) & 1;
      result = 4;
      if ( (v14 & 0x200000000LL) == 0 )
        return (v14 >> 2) & 1;
    }
  }
  return result;
}
