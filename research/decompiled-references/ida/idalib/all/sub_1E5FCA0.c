unsigned __int64 __fastcall sub_1E5FCA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = a3;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 > 1 )
  {
    v8 = a2;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      goto LABEL_5;
    v7 = sub_F63050(v7, a2, a3, a4);
    if ( !v7 )
    {
      if ( v6 != 9 )
        return v8;
      goto LABEL_10;
    }
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 32);
    if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      v7 = *(_QWORD *)v9;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43 <= 1 )
        break;
      v10 = sub_F63050(v7, a2, a3, a4);
      v8 = *(_QWORD *)(v10 + 32);
      if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  if ( v6 != 9 )
    return v8;
LABEL_10:
  if ( (v8 & 1) == 0
    && !(*(_DWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 1 | *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 4 | v8 & 4) )
  {
    return v8;
  }
  v12 = *(_QWORD **)(a1 + 248);
  v19[0] = 0;
  v13 = sub_A725A0(v12, v8, v19, a4, a5);
  v14 = v19[0];
  v15 = v13 & 7;
  v16 = v19[0] & 0xFFFFFFFFFFFFFFFALL;
  v19[0] &= 0xFFFFFFFFFFFFFFFALL;
  if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return v13 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v15 | (unsigned int)v16;
  v17 = v15 | v16;
  v18 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v13 & 8) != 0 )
  {
    v17 |= *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
    v18 = (_QWORD *)*v18;
  }
  return sub_A70C40(*(_QWORD *)(a1 + 248), (__int64)v18, v17);
}
