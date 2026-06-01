unsigned __int64 __fastcall sub_1E70340(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  __int64 *v14; // rbx
  __int64 v15; // rax
  unsigned __int64 result; // rax

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = a2;
  v9 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)v9;
  v11 = *(unsigned __int8 *)(*(_QWORD *)v9 + 16LL);
  if ( (_DWORD)v11 == 43 )
    goto LABEL_8;
  a2 = (unsigned int)(v11 - 25);
  v12 = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
  if ( (unsigned __int8)(v11 - 25) <= 1u || (_DWORD)v11 == 44 )
  {
    if ( (_DWORD)v11 == 44 )
      goto LABEL_8;
    if ( *(_BYTE *)(v7 + 16) != 26 )
    {
      if ( (_BYTE)v11 != 26 )
        goto LABEL_23;
      v7 = sub_F63050(v7, a2, v10, v11);
      if ( !v7 )
        goto LABEL_21;
    }
    goto LABEL_6;
  }
  if ( (_BYTE)v11 != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
LABEL_8:
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 <= 1 )
      goto LABEL_9;
LABEL_16:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1
      || (v7 = sub_F63050(v7, a2, v10, v11)) == 0 )
    {
LABEL_12:
      v8 = sub_1E6FFC0(a1, v8, a3, 0, a5);
      v5 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_13;
    }
LABEL_9:
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
        goto LABEL_12;
      while ( 1 )
      {
        v14 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        v7 = *v14;
        if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 <= 1 )
          break;
        v15 = sub_F63050(*v14, a2, v10, v11);
        v8 = *(_QWORD *)(v15 + 32);
        if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
          goto LABEL_12;
      }
    }
  }
  if ( *(_BYTE *)(v7 + 16) == 26 )
  {
LABEL_6:
    if ( !sub_A5DBE0(v7, a2, v10, v11, a5) )
    {
      v13 = (*(_BYTE *)(v7 + 18) & 0x18) == 0;
      v7 = *v5;
      if ( v13 )
        goto LABEL_8;
      goto LABEL_22;
    }
LABEL_21:
    v7 = *v5;
LABEL_22:
    v10 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v10 + 16);
LABEL_23:
    if ( v12 != 13 )
      goto LABEL_13;
  }
  if ( ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 <= 1 )
      goto LABEL_9;
    goto LABEL_16;
  }
LABEL_13:
  result = 0;
  if ( v5 )
    return v8;
  return result;
}
