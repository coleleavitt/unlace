unsigned __int64 __fastcall sub_A71450(__int64 a1, __int64 a2)
{
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // [rsp+8h] [rbp-20h]

  for ( i = 0; ; i |= v6 )
  {
    v5 = sub_F6AEA0(a2);
    v8 = *(unsigned __int8 *)(v5 + 16);
    v9 = v5;
    if ( (unsigned __int8)(v8 - 2) > 4u )
    {
      v15 = v6;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        break;
      v10 = sub_F63050(v5, v8, v6, (unsigned int)(v8 - 2), v7);
      v6 = v15;
      v9 = v10;
      if ( !v10 )
        break;
    }
    a2 = *(_QWORD *)(v9 + 32);
  }
  v11 = a2 & 7;
  if ( (i & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return (unsigned int)i | (unsigned int)v11 | a2 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = i | v11;
  v14 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 8) != 0 )
  {
    v13 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
    v14 = (_QWORD *)*v14;
  }
  return sub_A70C40(a1, (__int64)v14, v13);
}
