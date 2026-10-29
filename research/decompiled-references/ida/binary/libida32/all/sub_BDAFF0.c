__int64 __fastcall sub_BDAFF0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  _WORD *v10; // rbx
  __int64 i; // rbx
  unsigned __int64 v12; // rax
  unsigned __int16 v13; // dx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE v18[25]; // [rsp+17h] [rbp-19h] BYREF

  if ( (_DWORD)a2 != 5 )
    return 0;
  v8 = a4;
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v8 = a3;
    if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) )
      goto LABEL_8;
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42
    || !sub_9C8B50(v9, a2, a3, a4, a5) )
  {
    return 0;
  }
LABEL_8:
  v10 = sub_BD9B60((_WORD *)v8, a1, a6);
  if ( (*v10 & 0x1FF) != 0x80 )
  {
LABEL_13:
    for ( i = v8; ; i = v12 )
    {
      v12 = sub_BD3180(i);
      v13 = *(_WORD *)v12 & 0x1FF;
      if ( v13 > 0x4Eu )
      {
        if ( v13 > 0x58u )
          goto LABEL_16;
        goto LABEL_15;
      }
      if ( v13 > 0x3Bu )
        break;
      if ( v13 != 48 )
      {
        if ( v13 != 8 )
        {
LABEL_16:
          if ( v12 == i )
            goto LABEL_23;
          continue;
        }
LABEL_15:
        v12 = *(_QWORD *)(v12 + 16);
        goto LABEL_16;
      }
      v14 = *(_QWORD *)(v12 + 16);
      v12 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 4) == 0 )
        goto LABEL_16;
      v12 = *(_QWORD *)(v12 + 40);
      if ( v12 == i )
        goto LABEL_23;
    }
    if ( v13 > 0x3Du )
      goto LABEL_16;
    goto LABEL_15;
  }
  result = sub_C19B10(*((_QWORD *)v10 + 3), v18, a1, 0);
  if ( (_BYTE)result )
  {
    if ( v18[0] )
      v8 = *((_QWORD *)v10 + 4);
    else
      v8 = *((_QWORD *)v10 + 5);
    i = 0;
    if ( v8 )
      goto LABEL_13;
LABEL_23:
    if ( (unsigned int)sub_BDA9A0(i, a1, 2, a6) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v16 + 16) == 42 )
        return sub_F341A0(*(_QWORD *)(*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v17 + 16) == 42 )
      {
        v16 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a1, v17, v15);
        if ( v16 )
          return sub_F341A0(*(_QWORD *)(*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      }
    }
    return 0;
  }
  return result;
}

