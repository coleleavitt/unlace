__int64 __fastcall sub_BD7980(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int16 *v11; // rbx
  __int16 v12; // dx
  __int64 v13; // rax
  __int16 v14; // ax
  _WORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BOOL8 v18; // rcx

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  v7 = *(unsigned __int8 *)(*(_QWORD *)v5 + 16LL);
  if ( (_BYTE)v7 == 42 )
    goto LABEL_2;
  a4 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a4 + 16) == 42 )
  {
    v6 = sub_F3F310(v6, a2, v7, a4);
    if ( v6 )
      goto LABEL_2;
    v6 = *(_QWORD *)v5;
    LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)v5 + 16LL);
  }
  if ( (_BYTE)v7 == 11 )
    goto LABEL_2;
  a4 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(a4 + 16);
  if ( (_BYTE)v10 != 11 )
    goto LABEL_13;
  v6 = sub_F3F310(v6, a2, v10, a4);
  if ( v6 )
  {
LABEL_2:
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_3;
  }
  v6 = *(_QWORD *)v5;
  a4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v10) = *(_BYTE *)(a4 + 16);
LABEL_13:
  if ( (_BYTE)v10 == 13 )
  {
    v11 = (__int16 *)v4;
    v12 = (*(_WORD *)(a4 + 18) >> 3) & 0x1FF;
    if ( v12 == 499 )
    {
      while ( 1 )
      {
        v13 = sub_BD3180((__int64)v11);
        if ( (__int16 *)v13 == v11 )
          break;
        v11 = (__int16 *)v13;
      }
      v14 = *v11;
      v15 = (_WORD *)v4;
      if ( (v14 & 0x1FF) == 0x66 )
        return *(_QWORD *)(a2 + 18632);
      while ( 1 )
      {
        v16 = sub_BD3180((__int64)v15);
        if ( (_WORD *)v16 == v15 )
          break;
        v15 = (_WORD *)v16;
      }
      if ( (*v15 & 0x1FF) != 0x17 )
      {
        v6 = *(_QWORD *)(sub_BD7830(v4, a2, v17, v18) & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_3;
      }
      return *(_QWORD *)(a2 + 19072);
    }
    if ( (*(_BYTE *)(v6 + 17) & 4) != 0 || v12 == 498 )
      return *(_QWORD *)(a2 + 19072);
  }
  else if ( (_BYTE)v10 == 48 || (*(_BYTE *)(v6 + 17) & 4) != 0 )
  {
    return *(_QWORD *)(a2 + 19072);
  }
LABEL_3:
  v8 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v8 > 1 )
    v6 = sub_F3F310(v6, a2, v8, a4);
  return *(_QWORD *)(v6 + 24);
}

