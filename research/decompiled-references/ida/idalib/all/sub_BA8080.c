__int64 __fastcall sub_BA8080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 **v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  char v17; // al
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rdx

  v6 = (*(_DWORD *)(a1 + 56) >> 13) & 0xF;
  if ( v6 != 15 )
    return v6;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_8;
  v8 = (__int64 **)sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v9 = *v8;
  v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
  if ( (unsigned __int64)v9 < v10 )
  {
    v11 = v9;
    while ( 1 )
    {
      a2 = *v11;
      if ( *(_WORD *)(*v11 + 36) == 310 )
        break;
      if ( (__int64 *)v10 == ++v11 )
        goto LABEL_8;
    }
    if ( (__int64 *)v10 != v11 )
      goto LABEL_10;
LABEL_8:
    v6 = sub_FDEF00(*(_QWORD *)(a1 + 40));
    switch ( v6 )
    {
      case 1u:
      case 2u:
      case 4u:
      case 5u:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 34 )
          goto LABEL_25;
        goto LABEL_37;
      case 3u:
        if ( (*(_BYTE *)(a1 + 58) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 34 )
        {
          goto LABEL_25;
        }
        v17 = 3;
        goto LABEL_15;
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        if ( (*(_BYTE *)(a1 + 58) & 2) != 0 )
          goto LABEL_37;
        goto LABEL_25;
      case 0xDu:
        if ( (*(_BYTE *)(a1 + 58) & 2) != 0 )
          goto LABEL_25;
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v20 + 16) != 13 )
          goto LABEL_25;
        v21 = *(_WORD *)(v20 + 18);
        v17 = 13;
        if ( ((v21 >> 3) & 0x1FF) != 0x1B3 )
          goto LABEL_25;
        goto LABEL_15;
      case 0xEu:
        if ( (*(_BYTE *)(a1 + 58) & 2) == 0 )
          goto LABEL_25;
        if ( !sub_9C7DB0(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v12, v13) )
          goto LABEL_25;
        v25 = (unsigned int)(*(_DWORD *)(a1 + 104) - 1);
        if ( (unsigned int)v25 > 2 )
          goto LABEL_25;
        v26 = *(_QWORD *)(a1 + 96);
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v27 + 16) != 42 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v30 + 16) != 42 )
            goto LABEL_25;
          v27 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v30, v23);
          if ( !v27 )
            goto LABEL_25;
        }
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v28 + 16) != 13 || ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) != 0x1EB )
          goto LABEL_25;
        v29 = v26 + 8 * v25;
        break;
      default:
LABEL_37:
        v17 = v6 & 0xF;
        goto LABEL_15;
    }
    while ( v29 != v26 )
    {
      v26 += 8;
      if ( !sub_9C7DB0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v22, v23, v24) )
      {
LABEL_25:
        v17 = 0;
        v6 = 0;
        goto LABEL_15;
      }
    }
    v17 = 14;
    goto LABEL_15;
  }
  if ( v9 == (__int64 *)v10 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 310 )
  {
    v18 = (__int64 *)(v10 + 8);
    while ( v9 != v18 )
    {
      v19 = *v18++;
      if ( *(_WORD *)(v19 + 36) == 310 )
        goto LABEL_10;
    }
    goto LABEL_8;
  }
LABEL_10:
  v14 = *v9;
  if ( *(_WORD *)(*v9 + 36) != 310 )
  {
    v15 = v9 + 1;
    do
      v14 = *v15++;
    while ( *(_WORD *)(v14 + 36) != 310 );
  }
  v16 = *(unsigned int *)(v14 + 40);
  v17 = 15;
  if ( (unsigned int)v16 <= 5 )
  {
    v6 = dword_23E51B0[v16];
    v17 = v6 & 0xF;
  }
LABEL_15:
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 0xFFFE1FFF | ((v17 & 0xF) << 13);
  return v6;
}
