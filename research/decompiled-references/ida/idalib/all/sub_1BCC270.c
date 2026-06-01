bool __fastcall sub_1BCC270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  bool result; // al
  __int64 v15; // rax

  v4 = *(unsigned __int8 *)(a1 + 16);
  v5 = a1;
  v6 = a1;
  if ( (_BYTE)v4 == 34 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    goto LABEL_12;
  v6 = sub_F63050(a1, a2, v4, a4);
  if ( v6 )
  {
LABEL_2:
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 35;
    if ( (unsigned int)v8 > 1 )
    {
      v7 = sub_F63050(v7, a2, v8, a4);
      if ( *(_BYTE *)(v7 + 19) >> 2 )
        goto LABEL_4;
    }
    else if ( *(_BYTE *)(v7 + 19) >> 2 )
    {
      goto LABEL_4;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 1;
  }
LABEL_4:
  v4 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v4 == 34 )
  {
    v9 = a1;
LABEL_6:
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 35;
    if ( (unsigned int)v11 > 1 )
      v10 = sub_F63050(v10, a2, v11, a4);
    if ( *(_BYTE *)(v10 + 19) >> 2 )
      goto LABEL_11;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) != 13 || ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) != 0x1EA )
      goto LABEL_11;
    return 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v9 = sub_F63050(a1, a2, v4, a4);
    if ( !v9 )
    {
LABEL_11:
      v4 = *(unsigned __int8 *)(a1 + 16);
      goto LABEL_12;
    }
    goto LABEL_6;
  }
LABEL_12:
  result = ((_BYTE)v4 == 42 || (v5 = sub_1BC7590(a1, a2, v4, a4)) != 0)
        && (v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v13 + 16) == 13)
        && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 491;
  return result;
}
