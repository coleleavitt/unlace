__int64 __fastcall sub_BD9770(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  _WORD *v10; // rax
  int v11; // edx

  if ( (unsigned int)((__int64)(a1[3] - a1[2]) >> 3) != 1 )
    return 0;
  v6 = *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  v8 = (unsigned int)(v7 - 2);
  if ( (unsigned __int8)(v7 - 2) > 4u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      return 0;
    v6 = sub_F3F310(
           *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL),
           a2,
           (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
           v7);
    if ( !v6 )
      return 0;
  }
  if ( !sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v7, a5) )
    return 0;
  v9 = *(_QWORD *)a1[2];
  if ( !v9 )
    return 0;
  v10 = (_WORD *)sub_BD7DA0(v9);
  v11 = *v10 & 0x1FF;
  LOBYTE(v10) = (_WORD)v11 == 37;
  LOBYTE(v11) = (_WORD)v11 == 9;
  return v11 | (unsigned int)v10;
}

