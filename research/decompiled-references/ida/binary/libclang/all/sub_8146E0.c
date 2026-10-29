__int64 __fastcall sub_8146E0(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned __int16 *v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm1
  __int128 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r12
  _WORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r13
  _QWORD *v31; // r12
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int128 v38; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v39; // [rsp+108h] [rbp-40h] BYREF

  while ( 1 )
  {
LABEL_1:
    v3 = a3;
    v4 = a1;
    v5 = (unsigned __int8)a3;
    if ( !(_BYTE)a3 && (int)sub_8124E0((__int64)a1) < 0 )
      return 0;
    v7 = *a1;
    LOWORD(v7) = v7 & 0x1FF;
    if ( (unsigned __int16)v7 > 0x4Fu )
    {
      LOWORD(v7) = (v7 + 432) & 0x1FF;
      switch ( v7 )
      {
        case 0LL:
        case 2LL:
        case 3LL:
        case 5LL:
        case 6LL:
        case 7LL:
        case 8LL:
        case 9LL:
          goto LABEL_39;
        case 1LL:
        case 37LL:
        case 38LL:
          goto LABEL_18;
        case 4LL:
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**((_QWORD **)a1 + 3)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 42 <= 1
            && ((a1[1] >> 3) & 0x7F) == 9 )
          {
            return 1;
          }
LABEL_39:
          if ( (_BYTE)v3 )
          {
            if ( ((a1[1] >> 3) & 0x7F) == 4 )
            {
              v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
              if ( (v18 & 4) != 0 || (byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
                return 1;
            }
          }
          goto LABEL_19;
        case 10LL:
        case 11LL:
        case 12LL:
        case 13LL:
        case 14LL:
          v20 = sub_80F4C0(*(_QWORD *)((char *)a1 + *((unsigned __int8 *)a1 + 3)));
          v21 = v20;
          if ( !v20 || (*(_BYTE *)(v20 + 29) & 1) == 0 )
            goto LABEL_55;
          v32 = sub_79A2B0(v20);
          v33 = *v32;
          v34 = *v32 + 8LL * *((unsigned int *)v32 + 2);
          if ( v33 < v34 )
          {
            while ( *(_WORD *)(*(_QWORD *)v33 + 32LL) != 175 )
            {
              v33 += 8LL;
              if ( v34 == v33 )
                goto LABEL_104;
            }
          }
          else
          {
            if ( v33 == v34 )
              goto LABEL_104;
            while ( *(_WORD *)(*(_QWORD *)v34 + 32LL) != 175 )
            {
              v34 += 8LL;
              if ( v33 == v34 )
                goto LABEL_104;
            }
          }
          if ( v33 != v34 )
            goto LABEL_19;
LABEL_104:
          if ( (*(_BYTE *)(v21 + 29) & 1) == 0 )
            goto LABEL_55;
          v35 = sub_79A2B0(v21);
          v36 = *v35;
          v37 = *v35 + 8LL * *((unsigned int *)v35 + 2);
          if ( v36 < v37 )
          {
            while ( *(_WORD *)(*(_QWORD *)v36 + 32LL) != 329 )
            {
              v36 += 8LL;
              if ( v37 == v36 )
                goto LABEL_55;
            }
          }
          else
          {
            if ( v36 == v37 )
              goto LABEL_55;
            while ( *(_WORD *)(*(_QWORD *)v37 + 32LL) != 329 )
            {
              v37 += 8LL;
              if ( v36 == v37 )
                goto LABEL_55;
            }
          }
          if ( v36 != v37 )
            goto LABEL_19;
LABEL_55:
          if ( (_BYTE)v3 )
            return 1;
          break;
        case 15LL:
        case 19LL:
        case 21LL:
        case 25LL:
        case 26LL:
        case 36LL:
        case 43LL:
        case 47LL:
        case 48LL:
          return 0;
        case 16LL:
        case 29LL:
        case 30LL:
          return v3;
        case 17LL:
          if ( !(unsigned __int8)sub_8C13F0(a1) )
            return 0;
          if ( (_BYTE)v3 && (unsigned __int8)sub_8C1670(a1) )
            return 1;
          goto LABEL_19;
        case 18LL:
        case 27LL:
        case 31LL:
        case 40LL:
        case 41LL:
          return 1;
        case 28LL:
        case 34LL:
        case 35LL:
          if ( *(char *)(*((_QWORD *)a1 + 2) + 82LL) < 0 )
            goto LABEL_19;
          goto LABEL_18;
        case 32LL:
          v26 = sub_781770(*((_QWORD *)a1 + 2));
          if ( !v26 )
            return 1;
          a3 = (unsigned __int8)v3;
          a1 = (unsigned __int16 *)v26;
          continue;
        case 33LL:
          a1 = (unsigned __int16 *)sub_8C4680(a1);
          goto LABEL_51;
        case 39LL:
          if ( ((a1[1] >> 3) & 0x3Fu) - 21 <= 0xA )
            return 1;
          goto LABEL_19;
        default:
          goto LABEL_19;
      }
      goto LABEL_19;
    }
    if ( (unsigned __int16)v7 <= 0x46u )
      break;
    v19 = 1LL << ((unsigned __int8)v7 - 71);
    if ( (v19 & 0xD) != 0 )
      return 1;
    if ( (v19 & 0x122) != 0 )
      return 0;
    if ( (_WORD)v7 != 78 )
      goto LABEL_19;
    if ( *((_BYTE *)a1 + 48) )
      a1 = *((unsigned __int16 **)a1 + 3);
    else
      a1 = *((unsigned __int16 **)a1 + 4);
LABEL_51:
    a3 = (unsigned __int8)v3;
  }
  if ( (unsigned __int16)v7 > 0x2Du )
  {
    LOWORD(v7) = (v7 + 466) & 0x1FF;
    switch ( v7 )
    {
      case 0LL:
      case 7LL:
      case 9LL:
      case 10LL:
      case 11LL:
      case 13LL:
      case 17LL:
      case 18LL:
      case 20LL:
      case 21LL:
        return 0;
      case 4LL:
      case 5LL:
        return 1;
      case 6LL:
        v29 = 4LL * a1[2];
        v30 = (__int64)&a1[v29 + 16];
        v31 = a1 + 16;
        if ( !(v29 * 2) )
          return 0;
        break;
      case 8LL:
        v27 = *((_QWORD *)a1 + 7);
        if ( v27 )
        {
          if ( (v27 & 2) == 0 )
          {
            v28 = v27 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v28 )
            {
              if ( (unsigned __int8)sub_8146E0(v28, a2, (unsigned __int8)v3) )
                return 1;
            }
          }
        }
        goto LABEL_19;
      case 12LL:
        a3 = (unsigned __int8)v3;
        a1 = *(unsigned __int16 **)&a1[4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)
                                     + 16
                                     + 4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)];
        goto LABEL_1;
      case 14LL:
      case 24LL:
        return v3;
      case 15LL:
        if ( (_BYTE)v3 && (a1[1] & 8) != 0 )
          return 1;
        goto LABEL_19;
      case 16LL:
        a1 = *((unsigned __int16 **)a1 + 2);
        a3 = (unsigned __int8)v3;
        goto LABEL_1;
      default:
        goto LABEL_19;
    }
    while ( !*v31 || !(unsigned __int8)sub_8146E0(*v31, a2, v5) )
    {
      if ( (_QWORD *)v30 == ++v31 )
        return 0;
    }
    return 1;
  }
  if ( (_WORD)v7 == 18 )
  {
    v22 = a1 + 12;
    v23 = 4LL * a1[2];
    v24 = (__int64)&a1[v23 + 8];
    if ( v23 == 4 )
      return 0;
    while ( 1 )
    {
      v25 = (_WORD *)*v22;
      if ( (*(_WORD *)*v22 & 0x1FF) == 0x1B )
        v25 = *((_WORD **)v25 + 2);
      if ( (unsigned __int8)sub_8146E0(v25, a2, (unsigned __int8)v3) )
        break;
      if ( ++v22 == (_QWORD *)v24 )
        return 0;
    }
    return 1;
  }
  if ( (unsigned __int16)v7 > 0x12u )
  {
    if ( (((_WORD)v7 + 493) & 0x1FFu) > 0x18 )
      goto LABEL_19;
    v9 = 1LL << v7;
    if ( (v9 & 0x6485C480000LL) != 0 )
      return 0;
    if ( (v9 & 0x9B7A0000000LL) == 0 )
    {
      if ( (v9 & 0x3800000) != 0 )
        return v3;
      goto LABEL_19;
    }
LABEL_18:
    if ( !(_BYTE)v3 )
      goto LABEL_19;
    return 1;
  }
  if ( (unsigned __int16)v7 > 0xBu )
  {
    if ( (_WORD)v7 == 17 )
      return v3;
    if ( (unsigned __int16)v7 > 0xDu && (((_WORD)v7 + 497) & 0x1FFu) > 1 )
      goto LABEL_19;
    return 0;
  }
  if ( (unsigned __int16)v7 <= 4u )
  {
    if ( (_WORD)v7 != 3 && ((_WORD)v7 != 4 || *((_BYTE *)a1 + 2) > 0x1Fu) )
      goto LABEL_19;
    return 1;
  }
  if ( ((1LL << v7) & 0x4A0) != 0 )
    return 0;
  if ( ((1LL << v7) & 0x140) == 0 )
  {
    if ( (_WORD)v7 == 11 )
    {
      v8 = *((_QWORD *)a1 + 2);
      WORD4(v38) = (unsigned __int8)v3;
      *(_QWORD *)&v38 = a2;
      sub_814E80(&v38, v8);
      return BYTE9(v38);
    }
LABEL_19:
    v10 = (__int64)v4;
    sub_AC4830(&v38);
    v14 = _mm_loadu_si128(&v39);
    v15 = v38;
LABEL_20:
    if ( v14.m128i_i64[0] == (_QWORD)v15 )
    {
LABEL_27:
      if ( v14.m128i_i64[1] == *((_QWORD *)&v15 + 1) )
        return 0;
    }
    while ( 1 )
    {
      if ( (BYTE8(v15) & 3) == 0 )
        goto LABEL_31;
      v16 = *(_QWORD *)sub_ACE280(&v38, v10, *((_QWORD *)&v15 + 1), v11, v12, v13);
      if ( v16 )
        goto LABEL_23;
LABEL_24:
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&v38 + 1);
      if ( (BYTE8(v38) & 3) == 0 )
        break;
      if ( *((_QWORD *)&v38 + 1) <= 3u )
      {
        v10 = 1;
        sub_ACE0F0(&v38, 1);
        v15 = v38;
        goto LABEL_20;
      }
      sub_ACE150(&v38);
      v15 = v38;
      if ( v14.m128i_i64[0] == (_QWORD)v38 )
        goto LABEL_27;
    }
    *(_QWORD *)&v15 = v38 + 8;
    *(_QWORD *)&v38 = v15;
    if ( v14.m128i_i64[0] == (_QWORD)v15 )
    {
LABEL_33:
      if ( *((_QWORD *)&v15 + 1) == v14.m128i_i64[1] )
        return 0;
    }
LABEL_31:
    while ( 1 )
    {
      v16 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
        break;
      *(_QWORD *)&v15 = v15 + 8;
      *(_QWORD *)&v38 = v15;
      if ( v14.m128i_i64[0] == (_QWORD)v15 )
        goto LABEL_33;
    }
LABEL_23:
    v10 = a2;
    if ( (unsigned __int8)sub_8146E0(v16, a2, v5) )
      return 1;
    goto LABEL_24;
  }
  return v3;
}

