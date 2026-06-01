__int64 __fastcall sub_9958E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 i; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax

  v3 = a1[1];
  v4 = *a1;
  switch ( v4 & 3 | (4 * (unsigned int)(v3 & 3)) )
  {
    case 9LL:
      v17 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      i = *(_QWORD *)(v17 + 48);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
        v18 = sub_B73640(v17);
        if ( v18 )
          i = sub_995800(v18, nullptr);
      }
      while ( 1 )
      {
        v19 = sub_A72040(a2, i);
        if ( !v19 )
          break;
        i = *(_QWORD *)(v19 + 32);
      }
      goto LABEL_11;
    case 0xALL:
      v8 = sub_C93F60(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43 > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
          goto LABEL_7;
        v10 = sub_F63050(v10, v8, v6, v7, v9);
        if ( !v10 )
          goto LABEL_7;
      }
      break;
    case 0xBLL:
      return 0;
    case 0xCLL:
      for ( i = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 48); ; i = *(_QWORD *)(v15 + 32) )
      {
        v15 = sub_A72040(a2, i);
        if ( !v15 )
          break;
      }
LABEL_11:
      v13 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_12;
    case 0xDLL:
      return **(_QWORD **)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 16);
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v10 + 32);
    if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v11 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      v10 = *(_QWORD *)v11;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v11 + 16LL) - 43 <= 1 )
        break;
      v12 = sub_F63050(v10, v11, v6, v7, v9);
      v8 = *(_QWORD *)(v12 + 32);
      if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
        goto LABEL_7;
    }
  }
LABEL_7:
  v13 = *(_QWORD *)(sub_A71450(a2, v8) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_12:
  v16 = sub_F63270(v13);
  return sub_B97300(v16);
}
