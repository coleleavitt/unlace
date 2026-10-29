__int64 __fastcall sub_16EB2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v19; // rdx

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  v9 = (unsigned int)(v8 - 40);
  if ( (unsigned int)v9 <= 6 )
  {
    v10 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_QWORD *)v10;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 43 > 1 )
    {
      v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v14 = (unsigned int)(v13 - 43);
      if ( (unsigned int)v14 > 1 )
        goto LABEL_9;
      v11 = sub_F63050(v11, a2, v14, a4);
      if ( !v11 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v12 = (*(_BYTE *)(v11 + 18) & 0x10) == 0;
      v11 = *(_QWORD *)v10;
      if ( v12 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43 > 1 )
        v11 = sub_F63050(v11, a2, v9, a4);
    }
    goto LABEL_17;
  }
  if ( (unsigned int)(v8 - 49) > 2 )
    return 0;
  v10 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_QWORD *)v10;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 43 <= 1 )
  {
LABEL_20:
    while ( 1 )
    {
      v10 = *(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v12 = (*(_BYTE *)(v11 + 18) & 0x10) == 0;
      v11 = *(_QWORD *)v10;
      if ( v12 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43 > 1 )
        v11 = sub_F63050(v11, a2, v9, a4);
    }
LABEL_17:
    LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_9;
  }
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v19 = (unsigned int)(v13 - 43);
  if ( (unsigned int)v19 <= 1 )
  {
    v11 = sub_F63050(v11, a2, v19, a4);
    if ( !v11 )
    {
LABEL_8:
      v11 = *(_QWORD *)v10;
      LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_9:
  if ( (_BYTE)v13 == 11 )
    goto LABEL_12;
  v15 = *(unsigned __int8 *)(v11 + 16);
  if ( (_BYTE)v15 != 42 )
  {
    if ( (_BYTE)v13 != 42 )
    {
LABEL_30:
      if ( (_BYTE)v15 != 26
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
         || !sub_F63050(v11, a2, v15, a4)) )
      {
        return 0;
      }
      goto LABEL_12;
    }
    v11 = sub_F63050(v11, a2, v15, a4);
    if ( !v11 )
      goto LABEL_29;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
LABEL_29:
    v11 = *(_QWORD *)v10;
    v15 = *(unsigned __int8 *)(*(_QWORD *)v10 + 16LL);
    goto LABEL_30;
  }
LABEL_12:
  if ( a4 && *(char *)(a4 + 19) < 0 )
    v16 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11;
  else
    v16 = 4;
  v17 = sub_EEC8C0(*(_QWORD *)(a3 + 32), a2, *(double *)a5.m128i_i64);
  sub_16E9510(
    a1,
    a2,
    a4,
    0,
    a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32,
    *(unsigned int *)(a3 + 16),
    a5,
    0,
    *(_DWORD *)(a3 + 20),
    v17,
    v16);
  return 0;
}
