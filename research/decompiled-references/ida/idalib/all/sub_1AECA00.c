__int64 __fastcall sub_1AECA00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  char v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rbx

  if ( *(char *)(a2 + 28) < 0 )
    return 0;
  if ( (unsigned __int8)sub_183BD10(*a1, *((unsigned int *)a1 + 4), a1[1], *(_QWORD *)(a2 + 48), a5, a6) )
  {
    v7 = a1[1];
    v8 = *(_QWORD *)(a2 + 48);
    v9 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
    v10 = 0;
    if ( (v9 & 8) != 0 )
      v10 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
    v11 = v7 | v9;
    v12 = 0;
    v13 = v10 | v11 & 7;
    v14 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v14 & 8) != 0 )
      v12 = *(__int64 *)((char *)&qword_18 + (v14 & 0xFFFFFFFFFFFFFFF0LL));
    v15 = v12 | ((unsigned __int8)v8 | (unsigned __int8)v14) & 7;
    if ( v13 == v15
      || (unsigned int)v15 >> 9 != (unsigned int)v13 >> 9
      && !sub_F56A30((unsigned int)v13 >> 9, (unsigned int)v15 >> 9, *(_QWORD *)(*a1 + 248)) )
    {
      return a2;
    }
    if ( ((v13 >> 4) & 3) != ((v15 >> 4) & 3) && (v13 & 0x30) != 0 && (v15 & 0x30) != 0
      || HIDWORD(v15) != HIDWORD(v13)
      || ((v13 >> 6) & 7) != ((v15 >> 6) & 7)
      || ((unsigned __int8)v15 & (unsigned __int8)~(_BYTE)v13 & 7) != 0
      || (v15 & 8) != 0 && (v13 & 8) == 0 )
    {
      return a2;
    }
  }
  return 0;
}
