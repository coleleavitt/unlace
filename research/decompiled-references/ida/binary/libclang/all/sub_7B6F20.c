__int64 __fastcall sub_7B6F20(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned int v10; // edx
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r12d
  _QWORD *v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int16 v31; // dx

  v1 = (*(_DWORD *)(a1 + 56) >> 13) & 0xF;
  if ( v1 != 15 )
    return v1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_15;
  v4 = sub_79A2B0(a1);
  v5 = (_QWORD *)*v4;
  v6 = *v4 + 8LL * *((unsigned int *)v4 + 2);
  if ( (unsigned __int64)v5 >= v6 )
  {
    if ( v5 == (_QWORD *)v6 )
    {
LABEL_15:
      v12 = sub_C87900(*(_QWORD *)(a1 + 40));
      v1 = v12;
      switch ( v12 )
      {
        case 1LL:
        case 2LL:
        case 4LL:
        case 5LL:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 33 )
            goto LABEL_22;
          goto LABEL_24;
        case 3LL:
          if ( (*(_BYTE *)(a1 + 58) & 2) == 0
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 33 )
          {
            goto LABEL_24;
          }
          v11 = 3;
          break;
        case 6LL:
        case 7LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
          if ( (*(_BYTE *)(a1 + 58) & 2) != 0 )
            goto LABEL_22;
          goto LABEL_24;
        case 13LL:
          if ( (*(_BYTE *)(a1 + 58) & 2) == 0 )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v30 + 16) == 13 )
            {
              v31 = *(_WORD *)(v30 + 18);
              v11 = 13;
              if ( ((v31 >> 3) & 0x1FF) == 0x1B2 )
                goto LABEL_14;
            }
          }
          goto LABEL_24;
        case 14LL:
          if ( (*(_BYTE *)(a1 + 58) & 2) == 0 )
            goto LABEL_24;
          v13 = *(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0LL;
          v14 = *(_QWORD *)v13;
          if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) != 33 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
              goto LABEL_24;
            v14 = sub_B0D320(v14);
            if ( !v14 )
              goto LABEL_24;
          }
          v15 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 34 > 1 )
            v15 = sub_B0D320(v15);
          if ( *(_BYTE *)(v15 + 19) >> 2 )
            goto LABEL_24;
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v16 + 16) != 13 )
            goto LABEL_24;
          if ( ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) != 0x1E8 )
            goto LABEL_24;
          v17 = *(_DWORD *)(a1 + 104);
          if ( (unsigned int)(v17 - 1) > 2 )
            goto LABEL_24;
          v18 = *(_QWORD **)(a1 + 96);
          v19 = *(_QWORD *)(*v18 + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
          v20 = *(_QWORD *)v19;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) != 41 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
              goto LABEL_24;
            v20 = sub_B0D320(v20);
            if ( !v20 )
              goto LABEL_24;
          }
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v21 + 16) != 13 || ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) != 0x1EA )
            goto LABEL_24;
          if ( v17 == 1 )
            goto LABEL_53;
          v22 = *(_QWORD *)(v18[1] + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
          v23 = *(_QWORD *)v22;
          if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) != 33 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
              goto LABEL_24;
            v23 = sub_B0D320(v23);
            if ( !v23 )
              goto LABEL_24;
          }
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v24 + 16) - 34 > 1 )
            v24 = sub_B0D320(v24);
          if ( *(_BYTE *)(v24 + 19) >> 2 )
            goto LABEL_24;
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v25 + 16) != 13 || ((*(_WORD *)(v25 + 18) >> 3) & 0x1FF) != 0x1E8 )
            goto LABEL_24;
          if ( v17 == 2 )
            goto LABEL_53;
          v26 = *(_QWORD *)(v18[2] + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
          v27 = *(_QWORD *)v26;
          if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) != 33 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
              goto LABEL_24;
            v27 = sub_B0D320(v27);
            if ( !v27 )
              goto LABEL_24;
          }
          v28 = *(_QWORD *)(*(_QWORD *)(v27 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v28 + 16) - 34 > 1 )
            v28 = sub_B0D320(v28);
          if ( !(*(_BYTE *)(v28 + 19) >> 2)
            && (v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(v29 + 16) == 13)
            && ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) == 0x1E8 )
          {
LABEL_53:
            v11 = 14;
          }
          else
          {
LABEL_24:
            v11 = 0;
            v1 = 0;
          }
          break;
        default:
LABEL_22:
          v11 = v12 & 0xF;
          break;
      }
      goto LABEL_14;
    }
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 302 )
    {
      v6 += 8LL;
      if ( v5 == (_QWORD *)v6 )
        goto LABEL_15;
    }
    v7 = v5;
  }
  else
  {
    v7 = v5;
    while ( *(_WORD *)(*v7 + 32LL) != 302 )
    {
      if ( (_QWORD *)v6 == ++v7 )
        goto LABEL_15;
    }
  }
  if ( v7 == (_QWORD *)v6 )
    goto LABEL_15;
  v8 = *v5;
  if ( *(_WORD *)(*v5 + 32LL) != 302 )
  {
    v9 = v5 + 1;
    do
      v8 = *v9++;
    while ( *(_WORD *)(v8 + 32) != 302 );
  }
  v10 = *(_DWORD *)(v8 + 36);
  v11 = 15;
  if ( v10 <= 5 )
  {
    v1 = *(_DWORD *)(v8 + 36);
    v11 = v10 & 0xF;
  }
LABEL_14:
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 0xFFFE1FFF | ((v11 & 0xF) << 13);
  return v1;
}

