bool __fastcall sub_967CD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  bool result; // al
  __int64 v8; // rax
  __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned int *v16; // rcx
  __int64 v17; // rdx
  unsigned int *v18; // rax
  int v19; // eax
  const char *v20; // rdi
  unsigned int *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 *i; // rax
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rbx
  int v37; // eax
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx

  v5 = a3;
  sub_B52330(a2);
  if ( v6 <= (unsigned int)v5 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_11;
  v8 = sub_B68690(a2);
  v9 = *(__int64 **)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( (unsigned __int64)v9 < v10 )
  {
    v27 = v9;
    while ( *(_WORD *)(*v27 + 36) != 364 )
    {
      if ( (__int64 *)v10 == ++v27 )
        goto LABEL_11;
    }
    if ( (__int64 *)v10 != v27 )
      goto LABEL_37;
LABEL_11:
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v5);
    if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
    {
      v30 = sub_B68690(v13);
      v31 = *(__int64 **)v30;
      v32 = *(_QWORD *)v30 + 8LL * *(unsigned int *)(v30 + 8);
      if ( *(_QWORD *)v30 < v32 )
      {
        v35 = *(__int64 **)v30;
        while ( *(_WORD *)(*v35 + 36) != 414 )
        {
          if ( (__int64 *)v32 == ++v35 )
            goto LABEL_12;
        }
        if ( (__int64 *)v32 != v35 )
          return 1;
      }
      else if ( v31 != (__int64 *)v32 )
      {
        if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 414 )
          return 1;
        for ( i = (__int64 *)(v32 + 8); i != v31; ++i )
        {
          v34 = *i;
          if ( *(_WORD *)(v34 + 36) == 414 )
            return 1;
        }
      }
    }
LABEL_12:
    if ( !*(_BYTE *)(a1 + 24) )
      return 0;
    v14 = *(_QWORD *)(v13 + 40);
    v15 = v14 & 7;
    if ( (v14 & 7) != 0 )
      goto LABEL_20;
    if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_21;
    v16 = *(unsigned int **)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v17 = *v16;
    v18 = v16 + 4;
    switch ( v17 )
    {
      case 17LL:
        if ( !(*((_QWORD *)v16 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v16 + 3) ^ 0x656C646E61486E6FLL)
          && *((_BYTE *)v16 + 32) == 114 )
        {
          v19 = 0;
          goto LABEL_19;
        }
        break;
      case 10LL:
        if ( *((_QWORD *)v16 + 2) == 0x6974656C706D6F63LL && *((_WORD *)v16 + 12) == 28271 )
        {
          v19 = 0;
          goto LABEL_19;
        }
        break;
      case 21LL:
        if ( !(*((_QWORD *)v16 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v16 + 3) ^ 0x61486E6F6974656CLL)
          && v16[8] == 1701602414
          && *((_BYTE *)v16 + 36) == 114 )
        {
          v19 = 0;
LABEL_19:
          if ( !v19 )
            goto LABEL_24;
LABEL_20:
          if ( (v14 & 7) != 0 )
          {
            v14 = 0;
            v20 = &byte_22CD811;
            goto LABEL_23;
          }
LABEL_21:
          v20 = &byte_22CD811;
          v14 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v14 )
          {
            v21 = *(unsigned int **)(v14 + 16);
            v14 = *v21;
            v20 = (const char *)(v21 + 4);
          }
LABEL_23:
          if ( sub_9677D0((__int64)v20, v14) == (char **)&unk_2B16370 )
            goto LABEL_55;
LABEL_24:
          v22 = *(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v23 + 16) != 11 )
            goto LABEL_55;
          if ( *(_BYTE *)(v22 + 16) != 11 )
            v22 = sub_F3F310(v22, v14, v23, v16, v15);
          v24 = *(_QWORD *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 25;
          if ( (unsigned int)v25 > 1 )
            v24 = sub_F3F310(v24, v14, v25, v16, v15);
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v26 + 16) == 13 && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1B3 )
            return 1;
          if ( *(_BYTE *)(a1 + 24) )
          {
LABEL_55:
            v36 = *(_QWORD *)(a2 + 40);
            if ( (v36 & 7) != 0 )
            {
              sub_B52330(a2);
            }
            else
            {
              sub_B52330(a2);
              if ( v37 == 1 )
              {
                v38 = v36 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v38 )
                  return sub_9677D0(*(_QWORD *)(v38 + 16) + 16LL, **(unsigned int **)(v38 + 16)) != (char **)&unk_2B16370;
              }
            }
          }
          return 0;
        }
        break;
      default:
        switch ( v17 )
        {
          case 14LL:
            if ( *(_QWORD *)v18 == 0x706D6F4368746977LL && v16[6] == 1769235820 && *((_WORD *)v16 + 14) == 28271 )
              goto LABEL_24;
            goto LABEL_21;
          case 15LL:
            if ( *(_QWORD *)v18 == 0x6974656C706D6F63LL
              && v16[6] == 1816292975
              && *((_WORD *)v16 + 14) == 25455
              && *((_BYTE *)v16 + 30) == 107 )
            {
              goto LABEL_24;
            }
            break;
          case 19LL:
            v39 = *(_QWORD *)v18 ^ 0x706D6F4368746977LL;
            v16 = (unsigned int *)(v39 | *((_QWORD *)v16 + 3) ^ 0x6C426E6F6974656CLL);
            if ( !(v39 | *((_QWORD *)v18 + 1) ^ 0x6C426E6F6974656CLL)
              && *((_WORD *)v18 + 8) == 25455
              && *((_BYTE *)v18 + 18) == 107 )
            {
              goto LABEL_24;
            }
            break;
          case 7LL:
            if ( *v18 == 1819305330 && *((_WORD *)v16 + 10) == 21625 && *((_BYTE *)v16 + 22) == 111 )
              goto LABEL_24;
            break;
          case 5LL:
            if ( *v18 == 1819305330 && *((_BYTE *)v16 + 20) == 121 )
              goto LABEL_24;
            break;
          default:
            if ( v17 == 11
              && *(_QWORD *)v18 == 0x6C70655268746977LL
              && *((_WORD *)v16 + 12) == 21625
              && *((_BYTE *)v16 + 26) == 111 )
            {
              goto LABEL_24;
            }
            break;
        }
        goto LABEL_20;
    }
    v19 = 1;
    goto LABEL_19;
  }
  if ( v9 == (__int64 *)v10 )
    goto LABEL_11;
  if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 364 )
  {
    v11 = (__int64 *)(v10 + 8);
    while ( v9 != v11 )
    {
      v12 = *v11++;
      if ( *(_WORD *)(v12 + 36) == 364 )
        goto LABEL_37;
    }
    goto LABEL_11;
  }
LABEL_37:
  v28 = *v9;
  if ( *(_WORD *)(*v9 + 36) != 364 )
  {
    v29 = v9 + 1;
    do
      v28 = *v29++;
    while ( *(_WORD *)(v28 + 36) != 364 );
  }
  result = 0;
  if ( *(_DWORD *)(v28 + 40) )
    return (*(_DWORD *)(v28 + 44) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v28 + 44) >> 30) & 1) == (_DWORD)v5;
  return result;
}

