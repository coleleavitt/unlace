__int64 __fastcall sub_C8B480(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 v6; // rax
  unsigned __int8 v7; // bp
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx

  v4 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(a2[290] + 212LL) >> 4;
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 <= 1
    || (v8 = a1,
        v15 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v15 <= 1)
    && (v6 = sub_F3F310(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, a4)) != 0 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
        v6 = *(_QWORD *)v9;
        v10 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43;
        if ( (unsigned int)v10 <= 1 )
          break;
        v11 = sub_F3F310(v6, a2, v10, a4);
        v8 = *(_QWORD *)(v11 + 32);
        if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v4 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v12 = v4[1];
  if ( (v12 & 8) != 0 && (*((_BYTE *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    return 1;
  if ( a3 != 4 && v7 > 3u )
    return sub_A74360((__int64)a2, v8);
  v14 = sub_A8BCD0(a2, *v4);
  return sub_A742B0((__int64)a2, v14);
}

