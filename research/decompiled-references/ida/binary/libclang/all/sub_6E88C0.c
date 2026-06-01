__int64 __fastcall sub_6E88C0(__int64 a1, char a2)
{
  __int64 i; // rbx
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  while ( 2 )
  {
    for ( i = a1; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v3 = *(_BYTE *)(i + 16);
      if ( (unsigned __int8)(v3 - 2) <= 4u )
        continue;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        goto LABEL_7;
      v4 = sub_B0D320(i);
      if ( !v4 )
        break;
      i = v4;
    }
    v3 = *(_BYTE *)(i + 16);
LABEL_7:
    if ( v3 == 41 )
      goto LABEL_8;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
    {
      v5 = sub_B0D320(i);
      if ( v5 )
      {
        i = v5;
LABEL_8:
        a2 = 0;
        a1 = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      }
    }
    break;
  }
  v6 = sub_B0E910(i);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 58 <= 1 )
    return 1;
  if ( !*(_QWORD *)(v6 + 128) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104));
    if ( !*(_QWORD *)(v7 + 128) )
      return 0;
  }
  if ( !a2 )
    return 0;
  v8 = *(_QWORD *)(v7 + 104);
  sub_6E77B0((unsigned __int64 *)(v8 + 96), v8);
  v9 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
    v10 = sub_7A2E20(v9, v8);
  else
    v10 = *(_QWORD *)(v9 + 24);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104));
  v11 = *(_QWORD *)(v7 + 104);
  v12 = v10 + 24LL * *(unsigned int *)(*(_QWORD *)(v7 + 128) + 16LL);
  sub_6E77B0((unsigned __int64 *)(v11 + 96), v11);
  v13 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
    v14 = sub_7A2E20(v13, v11);
  else
    v14 = *(_QWORD *)(v13 + 24);
  if ( v14 == v12 )
  {
LABEL_23:
    v16 = sub_7868A0(v7);
    if ( v16 )
    {
LABEL_24:
      if ( (unsigned __int8)sub_6E88C0(*(_QWORD *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL), 1) )
        return 1;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17 <= 7 )
          break;
        if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_24;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v19[0] = **(_QWORD **)(v14 + 16);
    v15 = sub_6B3060(v19, v11);
    v11 = 1;
    if ( (unsigned __int8)sub_6E88C0(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), 1) )
      return 1;
    v14 += 24;
    if ( v12 == v14 )
      goto LABEL_23;
  }
}

