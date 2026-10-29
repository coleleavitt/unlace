__int64 __fastcall sub_16CB490(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  char v28; // dl
  char *v29; // rsi
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // r13
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-48h] BYREF
  __int64 v42; // [rsp+8h] [rbp-40h]
  char v43; // [rsp+10h] [rbp-38h]

  for ( i = a2; ; i = *(_QWORD *)(v7 + 24) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = sub_BFB9F0(i);
        v9 = *(_WORD *)v7 & 0x1FF;
        if ( v9 != 79 )
          break;
LABEL_19:
        i = *(_QWORD *)(v7 + 16);
        if ( ((*(_WORD *)(v7 + 2) >> 3) & 0x7F) != 5 )
        {
          if ( ((*(_WORD *)(v7 + 2) >> 3) & 0x7Fu) < 5 )
            goto LABEL_7;
          if ( ((((*(_WORD *)(v7 + 2) >> 3) & 0x7F) + 121) & 0x7Fu) > 1 )
            goto LABEL_7;
          sub_16CB490(&v41, *(_QWORD *)(v7 + 16), a3);
          if ( !v43 )
            goto LABEL_7;
          v16 = sub_16CAC80(v7, *(_QWORD *)(i + 8), v41, v42, (__int64)a3);
          *(_BYTE *)(a1 + 16) = 1;
          *(_QWORD *)a1 = v16;
          *(_QWORD *)(a1 + 8) = v17;
          return a1;
        }
      }
      if ( v9 > 0x4Fu )
        break;
      if ( v9 == 46 )
      {
        v19 = *(_QWORD *)(v7 + 24);
        if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 49 <= 2
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          v20 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v19 + 16) & 4) != 0 )
            v20 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(v20 + 8) & 0x7Fu) - 58 > 3 )
            BUG();
          if ( *(char *)(v20 - 36) >= 0 )
          {
            v21 = *(_QWORD *)(v7 + 16);
            if ( (*(_QWORD *)v7 & 0x80000) != 0 )
            {
              sub_16CB850(&v41, v21, a3);
              if ( !v43 )
                goto LABEL_7;
            }
            else
            {
              sub_16CB490(&v41, v21, a3);
              if ( !v43 )
                goto LABEL_7;
            }
            v25 = v41;
            v26 = v42;
            v27 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v19 + 16) & 4) != 0 )
              v27 = *(_QWORD *)v27;
            v28 = *(_BYTE *)(v27 + 8);
            v29 = nullptr;
            v30 = (char *)(v27 - 64);
            v31 = (v28 & 0x7Fu) - 58;
            if ( (unsigned int)v31 < 4 )
              v29 = v30;
            v36 = sub_EDE580((__int64)a3, v29, v31, v22, v23, v24);
            if ( *(char *)(v19 + 29) < 0 )
              v19 = sub_B72720(v19);
            v37 = *(_DWORD *)(v19 + 68);
            if ( (v37 & 0xFFFFFFF0) == 0 )
            {
              sub_B7EAB0(v19, (__int64)v29, v32, v33, v34, v35);
              v37 = *(_DWORD *)(v19 + 68);
            }
            *(_QWORD *)a1 = v25;
            v38 = (v37 >> 4) - 1;
            v39 = v36[6];
            *(_BYTE *)(a1 + 16) = 1;
            *(_QWORD *)(a1 + 8) = *(_QWORD *)(v39 + 8 * v38) + v26;
            return a1;
          }
        }
LABEL_7:
        *(_BYTE *)(a1 + 16) = 0;
        return a1;
      }
      if ( v9 != 71 )
      {
        if ( v9 != 4 || *(_BYTE *)(v7 + 2) >> 3 != 5 )
          goto LABEL_7;
        sub_16CB850(a1, *(_QWORD *)(v7 + 16), a3);
        return a1;
      }
      v18 = *(_QWORD *)(v7 + 16);
      if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_7;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 > 1 )
      {
        if ( !sub_B73A10(v18) )
        {
          v40 = sub_AB0BF0(a3, v18, 0);
          *(_QWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = v40;
          *(_BYTE *)(a1 + 16) = 1;
          return a1;
        }
        goto LABEL_7;
      }
      if ( !sub_B735C0(v18) )
        goto LABEL_7;
      i = sub_B73640(v18);
    }
    if ( v9 == 87 )
      goto LABEL_19;
    if ( v9 <= 0x57u )
    {
      if ( v9 != 81 )
        goto LABEL_7;
      goto LABEL_19;
    }
    if ( v9 != 118 )
      break;
    if ( ((*(_WORD *)(v7 + 2) >> 3) & 0x3F) != 0x20 )
      goto LABEL_7;
  }
  if ( v9 != 123 )
    goto LABEL_7;
  if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, v6, v8) )
    v14 = *(_QWORD *)(v7 + 24);
  else
    v14 = *(_QWORD *)(v7 + 16);
  if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12, v13) )
    v15 = *(_QWORD *)(v7 + 16);
  else
    v15 = *(_QWORD *)(v7 + 24);
  sub_16CBAB0(a1, v15, v14, 0, a3);
  return a1;
}
