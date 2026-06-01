__int64 __fastcall sub_C12530(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rdx
  unsigned int v13; // eax

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 <= 1
    || (v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v12 <= 1)
    && (v6 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v12, a4)) != 0 )
  {
    while ( 1 )
    {
      v5 = (__int64 *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v6 = *v5;
        v7 = (unsigned int)*(unsigned __int8 *)(*v5 + 16) - 43;
        if ( (unsigned int)v7 <= 1 )
          break;
        v8 = sub_F63050(v6, a2, v7, a4);
        v5 = (__int64 *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v8 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v9 = v5[1];
  if ( (v9 & 8) != 0 && (*((_BYTE *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    return 1;
  v10 = *v5;
  if ( *(_BYTE *)(a1[290] + 212LL) > 0x3Fu && a3 != 4 )
    return sub_A98070((__int64)a1, v10);
  v13 = sub_AAFA10(a1, v10);
  return sub_A97FF0((__int64)a1, v13);
}
