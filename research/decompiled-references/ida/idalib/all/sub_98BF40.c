__int64 __fastcall sub_98BF40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r13
  unsigned __int64 v15; // rsi
  unsigned int *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  int v19; // eax
  const char *v20; // rdi
  unsigned int *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 *i; // rax
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // ecx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v48[6]; // [rsp+8h] [rbp-30h] BYREF

  v47 = *(_QWORD *)(a2 + 40);
  if ( (unsigned int)sub_FDE930(&v47) <= a3 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_11;
  v8 = sub_B8C3D0(a2);
  v9 = *(__int64 **)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( (unsigned __int64)v9 < v10 )
  {
    v28 = v9;
    while ( *(_WORD *)(*v28 + 36) != 364 )
    {
      if ( (__int64 *)v10 == ++v28 )
        goto LABEL_11;
    }
    if ( (__int64 *)v10 != v28 )
      goto LABEL_36;
LABEL_11:
    v13 = *(_QWORD *)(a2 + 96);
    v14 = *(_QWORD *)(v13 + 8LL * a3);
    if ( (*(_BYTE *)(v14 + 29) & 1) != 0 )
    {
      v31 = sub_B8C3D0(*(_QWORD *)(v13 + 8LL * a3));
      v32 = *(__int64 **)v31;
      v33 = *(_QWORD *)v31 + 8LL * *(unsigned int *)(v31 + 8);
      if ( *(_QWORD *)v31 < v33 )
      {
        v36 = *(__int64 **)v31;
        while ( *(_WORD *)(*v36 + 36) != 414 )
        {
          if ( (__int64 *)v33 == ++v36 )
            goto LABEL_12;
        }
        if ( (__int64 *)v33 != v36 )
          return 1;
      }
      else if ( v32 != (__int64 *)v33 )
      {
        if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 414 )
          return 1;
        for ( i = (__int64 *)(v33 + 8); v32 != i; ++i )
        {
          v35 = *i;
          if ( *(_WORD *)(v35 + 36) == 414 )
            return 1;
        }
      }
    }
LABEL_12:
    v6 = *(unsigned __int8 *)(a1 + 24);
    if ( !(_BYTE)v6 )
      return 0;
    v15 = *(_QWORD *)(v14 + 40);
    if ( (v15 & 7) != 0 )
    {
      v15 = 0;
      v20 = &byte_22F0C30;
      goto LABEL_22;
    }
    if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
LABEL_20:
      v20 = &byte_22F0C30;
      v15 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
      {
        v21 = *(unsigned int **)(v15 + 16);
        v15 = *v21;
        v20 = (const char *)(v21 + 4);
      }
LABEL_22:
      if ( sub_98B510((__int64)v20, v15) == (char **)&unk_2B40310 )
        goto LABEL_54;
LABEL_23:
      v23 = *(_QWORD *)(v14 + 48);
      v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
      v22 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) != 11 )
      {
LABEL_55:
        v48[0] = v47;
        v37 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v38 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v38 + 16) != 11 )
          return 0;
        if ( *(_BYTE *)(v37 + 16) != 11 )
          v37 = sub_F63050(v37, v15, v38, v22, v5);
        v39 = *(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v40 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 25;
        if ( (unsigned int)v40 > 1 )
          v39 = sub_F63050(v39, v15, v40, v22, v5);
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v41 + 16) != 13
          || ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) != 0x1B3
          || (unsigned int)sub_FDEF00(v48[0]) == 3 )
        {
          return 0;
        }
        if ( (unsigned int)sub_FDE930(v48) == 1 )
        {
          v45 = sub_FDE9A0(v48, 0);
          LOBYTE(v6) = sub_98B510(v45, v46) != (char **)&unk_2B40310;
          return v6;
        }
        v42 = sub_FDE9A0(v48, a3);
        switch ( v43 )
        {
          case 0x11uLL:
            if ( *(_QWORD *)v42 ^ 0x6974656C706D6F63LL | *(_QWORD *)(v42 + 8) ^ 0x656C646E61486E6FLL
              || *(_BYTE *)(v42 + 16) != 114 )
            {
LABEL_67:
              v44 = 1;
              goto LABEL_68;
            }
            break;
          case 0xAuLL:
            if ( *(_QWORD *)v42 != 0x6974656C706D6F63LL || *(_WORD *)(v42 + 8) != 28271 )
              goto LABEL_67;
            break;
          case 0x15uLL:
            if ( *(_QWORD *)v42 ^ 0x706D6F4368746977LL | *(_QWORD *)(v42 + 8) ^ 0x61486E6F6974656CLL
              || *(_DWORD *)(v42 + 16) != 1701602414
              || *(_BYTE *)(v42 + 20) != 114 )
            {
              goto LABEL_67;
            }
            v44 = 0;
LABEL_68:
            if ( !v44 )
              return v6;
            goto LABEL_69;
          default:
            switch ( v43 )
            {
              case 0xEuLL:
                if ( *(_QWORD *)v42 == 0x706D6F4368746977LL
                  && *(_DWORD *)(v42 + 8) == 1769235820
                  && *(_WORD *)(v42 + 12) == 28271 )
                {
                  return v6;
                }
                break;
              case 0xFuLL:
                if ( *(_QWORD *)v42 == 0x6974656C706D6F63LL
                  && *(_DWORD *)(v42 + 8) == 1816292975
                  && *(_WORD *)(v42 + 12) == 25455
                  && *(_BYTE *)(v42 + 14) == 107 )
                {
                  return v6;
                }
                break;
              case 0x13uLL:
                if ( !(*(_QWORD *)v42 ^ 0x706D6F4368746977LL | *(_QWORD *)(v42 + 8) ^ 0x6C426E6F6974656CLL)
                  && *(_WORD *)(v42 + 16) == 25455
                  && *(_BYTE *)(v42 + 18) == 107 )
                {
                  return v6;
                }
                break;
              case 7uLL:
                if ( *(_DWORD *)v42 == 1819305330 && *(_WORD *)(v42 + 4) == 21625 && *(_BYTE *)(v42 + 6) == 111 )
                  return v6;
                break;
              case 5uLL:
                if ( *(_DWORD *)v42 == 1819305330 && *(_BYTE *)(v42 + 4) == 121 )
                  return v6;
                break;
              default:
                if ( v43 == 11
                  && *(_QWORD *)v42 == 0x6C70655268746977LL
                  && *(_WORD *)(v42 + 8) == 21625
                  && *(_BYTE *)(v42 + 10) == 111 )
                {
                  return v6;
                }
                break;
            }
LABEL_69:
            if ( sub_98B510(v42, v43) != (char **)&unk_2B40310 )
              return v6;
            return 0;
        }
        v44 = 0;
        goto LABEL_68;
      }
      if ( *(_BYTE *)(v24 + 16) != 11 )
        v24 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL), v15, v23, v22, v5);
      v25 = *(_QWORD *)(*(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v26 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 25;
      if ( (unsigned int)v26 > 1 )
        v25 = sub_F63050(v25, v15, v26, v22, v5);
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v27 + 16) == 13 && ((*(_WORD *)(v27 + 18) >> 3) & 0x1FF) == 0x1B3 )
        return 1;
      if ( *(_BYTE *)(a1 + 24) )
      {
LABEL_54:
        v23 = *(_QWORD *)(v14 + 48);
        goto LABEL_55;
      }
      return 0;
    }
    v16 = *(unsigned int **)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v17 = *v16;
    v18 = v16 + 4;
    switch ( v17 )
    {
      case 17LL:
        if ( *((_QWORD *)v16 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v16 + 3) ^ 0x656C646E61486E6FLL
          || *((_BYTE *)v16 + 32) != 114 )
        {
LABEL_18:
          v19 = 1;
          goto LABEL_19;
        }
        break;
      case 10LL:
        if ( *((_QWORD *)v16 + 2) != 0x6974656C706D6F63LL || *((_WORD *)v16 + 12) != 28271 )
          goto LABEL_18;
        v19 = 0;
LABEL_19:
        if ( !v19 )
          goto LABEL_23;
        goto LABEL_20;
      case 21LL:
        if ( *((_QWORD *)v16 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v16 + 3) ^ 0x61486E6F6974656CLL
          || v16[8] != 1701602414
          || *((_BYTE *)v16 + 36) != 114 )
        {
          goto LABEL_18;
        }
        break;
      default:
        switch ( v17 )
        {
          case 14LL:
            if ( *v18 == 0x706D6F4368746977LL && v16[6] == 1769235820 && *((_WORD *)v16 + 14) == 28271 )
              goto LABEL_23;
            break;
          case 15LL:
            if ( *v18 == 0x6974656C706D6F63LL
              && v16[6] == 1816292975
              && *((_WORD *)v16 + 14) == 25455
              && *((_BYTE *)v16 + 30) == 107 )
            {
              goto LABEL_23;
            }
            break;
          case 19LL:
            if ( !(*((_QWORD *)v16 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v16 + 3) ^ 0x6C426E6F6974656CLL)
              && *((_WORD *)v16 + 16) == 25455
              && *((_BYTE *)v16 + 34) == 107 )
            {
              goto LABEL_23;
            }
            break;
          case 7LL:
            if ( *(_DWORD *)v18 == 1819305330 && *((_WORD *)v16 + 10) == 21625 && *((_BYTE *)v16 + 22) == 111 )
              goto LABEL_23;
            break;
          case 5LL:
            if ( *(_DWORD *)v18 == 1819305330 && *((_BYTE *)v16 + 20) == 121 )
              goto LABEL_23;
            break;
          default:
            if ( v17 == 11
              && *v18 == 0x6C70655268746977LL
              && *((_WORD *)v16 + 12) == 21625
              && *((_BYTE *)v16 + 26) == 111 )
            {
              goto LABEL_23;
            }
            break;
        }
        goto LABEL_20;
    }
    v19 = 0;
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
        goto LABEL_36;
    }
    goto LABEL_11;
  }
LABEL_36:
  v29 = *v9;
  if ( *(_WORD *)(*v9 + 36) != 364 )
  {
    v30 = v9 + 1;
    do
      v29 = *v30++;
    while ( *(_WORD *)(v29 + 36) != 364 );
  }
  v6 = 0;
  if ( !*(_DWORD *)(v29 + 40) )
    return v6;
  LOBYTE(v6) = (*(_DWORD *)(v29 + 44) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v29 + 44) >> 30) & 1) == a3;
  return v6;
}
