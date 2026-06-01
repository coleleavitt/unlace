__int64 __fastcall sub_75CB40(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbp
  const __int32_t **v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int8 v12; // al
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned __int16 v22; // bx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  unsigned int *v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rbp
  unsigned int *v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v34; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+14h] [rbp-34h]
  unsigned __int64 v36; // [rsp+18h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  v33 = 0;
  v4 = qword_2CD44C0;
  v35 = 0;
  if ( !*qword_2CD44C0 )
    goto LABEL_90;
  if ( (unsigned __int8)(*qword_2CD44C0 - 48) <= 9u )
    goto LABEL_3;
  qword_2CD44C0 += 2;
  v6 = __ctype_tolower_loc();
  a3 = (unsigned __int8)*v4;
  v7 = a3 | ((*v6)[(unsigned __int8)v4[1]] << 8);
  if ( v7 == 28527 )
  {
    LOWORD(v35) = 31868;
    goto LABEL_71;
  }
  if ( v7 <= 28527 )
  {
    if ( v7 == 27747 )
    {
      if ( a1 )
        *(_BYTE *)a1 = -3;
      v8 = 10536;
      LOWORD(v35) = 10536;
      goto LABEL_59;
    }
    if ( v7 > 27747 )
    {
      if ( v7 == 28016 )
      {
        v35 = 2768429;
        goto LABEL_71;
      }
      if ( v7 > 28016 )
      {
        if ( v7 == 28271 )
        {
LABEL_3:
          v34 = sub_75E9A0();
          sub_770B70(&v33, &v34);
          if ( *qword_2CD44C0 == 73 )
          {
            v34 = sub_75D9F0(0);
            sub_770B70(&v33, &v34);
          }
          return v33;
        }
        if ( v7 <= 28271 )
        {
          if ( v7 == 28018 )
          {
            LOWORD(v35) = 15653;
          }
          else
          {
            if ( v7 != 28257 )
              goto LABEL_90;
            LOWORD(v35) = 15654;
          }
        }
        else
        {
          if ( v7 == 28515 )
          {
            LOBYTE(v35) = 126;
            goto LABEL_71;
          }
          if ( v7 != 28517 )
            goto LABEL_90;
          LOWORD(v35) = 15710;
        }
      }
      else if ( v7 == 27760 )
      {
        LOWORD(v35) = 15659;
      }
      else
      {
        if ( v7 > 27760 )
        {
          if ( v7 != 28003 )
          {
            if ( v7 == 28013 )
            {
              LOWORD(v35) = 11565;
              v8 = 11565;
              goto LABEL_59;
            }
LABEL_90:
            sub_76E6C0(a1, a2, a3, a4);
          }
          LOBYTE(v35) = 44;
          goto LABEL_71;
        }
        if ( v7 == 27748 )
        {
          v12 = 7;
          v13 = " delete";
          goto LABEL_81;
        }
        if ( v7 != 27757 )
          goto LABEL_90;
        LOWORD(v35) = 15658;
      }
LABEL_65:
      qword_2CD44C0 = v4 + 3;
      if ( v4[2] != 61 )
      {
        qword_2CD44C0 = v4 + 2;
        v10 = v4[1];
        if ( (unsigned int)v10 <= 0x7F && ((*__ctype_b_loc())[v10] & 0x200) != 0 )
        {
          v11 = 2;
          if ( !BYTE2(v35) )
            v11 = 1;
          *((_BYTE *)&v35 + v11) = 0;
        }
      }
      goto LABEL_71;
    }
    if ( v7 == 25959 )
    {
      LOWORD(v35) = 15678;
      goto LABEL_71;
    }
    if ( v7 <= 25959 )
    {
      if ( v7 == 24942 )
      {
        v12 = 6;
        v13 = " new[]";
        goto LABEL_81;
      }
      if ( v7 > 24942 )
      {
        if ( v7 == 25697 )
        {
          v8 = 38;
          goto LABEL_59;
        }
        if ( v7 == 25956 )
        {
          v8 = 42;
LABEL_59:
          v9 = 3;
          if ( !BYTE2(v35) )
          {
            v9 = 1;
            if ( BYTE1(v35) )
              v9 = 2;
          }
          goto LABEL_41;
        }
        goto LABEL_90;
      }
      if ( v7 != 24929 )
      {
        if ( v7 != 24932 )
          goto LABEL_90;
        v12 = 9;
        v13 = " delete[]";
        goto LABEL_81;
      }
      LOWORD(v35) = 9766;
LABEL_71:
      if ( a1 )
        ++*(_BYTE *)a1;
      v8 = v35;
      v9 = 4;
      if ( HIBYTE(v35) )
        goto LABEL_41;
      goto LABEL_59;
    }
    if ( v7 == 26478 )
    {
      v8 = 45;
      goto LABEL_59;
    }
    if ( v7 <= 26478 )
    {
      if ( v7 == 25964 )
      {
        LOWORD(v35) = 15676;
      }
      else
      {
        if ( v7 != 25966 )
          goto LABEL_90;
        LOWORD(v35) = 15649;
      }
      goto LABEL_71;
    }
    if ( v7 != 26988 )
    {
      if ( v7 != 26989 )
        goto LABEL_90;
      LOWORD(v35) = 15661;
      goto LABEL_65;
    }
    sub_76FCD0(&v34, 2105890, 3);
    sub_770B70(&v33, &v34);
    v34 = sub_75C2C0((__int64)&v33, (__int64)&v34, v15, v16, v17);
    sub_770B70(&v33, &v34);
    return v33;
  }
  if ( v7 <= 29811 )
  {
    if ( v7 > 29798 )
    {
      switch ( v7 )
      {
        case 29799:
          LOBYTE(v35) = 62;
          goto LABEL_71;
        case 29804:
          LOBYTE(v35) = 60;
          goto LABEL_71;
        case 29806:
          v8 = 33;
          goto LABEL_59;
        case 29808:
          if ( a1 )
            *(_BYTE *)a1 = 3;
          v8 = 15917;
          LOWORD(v35) = 15917;
          goto LABEL_59;
        case 29811:
          v14 = 7;
          v13 = " sizeof";
          if ( !a1 )
            goto LABEL_83;
          *(_BYTE *)a1 = -2;
          v14 = 6;
          break;
        default:
          goto LABEL_90;
      }
      goto LABEL_82;
    }
    if ( v7 > 29555 )
      goto LABEL_90;
    if ( v7 > 29536 )
    {
      switch ( v7 )
      {
        case 29537:
          LOBYTE(v35) = 61;
          goto LABEL_65;
        case 29548:
          v35 = 4013116;
          goto LABEL_65;
        case 29552:
          v8 = 43;
          goto LABEL_59;
        case 29554:
          v35 = 4013630;
          goto LABEL_65;
        case 29555:
          v35 = (unsigned int)&algn_3E3D36[6];
          goto LABEL_71;
        default:
          goto LABEL_90;
      }
    }
    if ( v7 == 29029 )
    {
      LOWORD(v35) = 15677;
      goto LABEL_71;
    }
    if ( v7 <= 29029 )
    {
      if ( v7 == 28774 )
      {
        if ( v4[2] == 84 )
        {
          qword_2CD44C0 = v4 + 3;
          sub_76FCD0(&v34, 1936287860, 4);
        }
        else
        {
          sub_76FA20(&v34, "{parm", 5);
          sub_770B70(&v33, &v34);
          v34 = sub_75C200((__int64)&v33, (__int64)&v34, v18, v19, v20);
        }
        sub_770B70(&v33, &v34);
        return v33;
      }
      if ( v7 == 28784 )
      {
        v8 = 11051;
        LOWORD(v35) = 11051;
        goto LABEL_59;
      }
      goto LABEL_90;
    }
    if ( v7 != 29295 )
    {
      if ( v7 == 29299 && a1 )
      {
        --*(_BYTE *)a1;
        return v33;
      }
      goto LABEL_90;
    }
    LOWORD(v35) = 15740;
    goto LABEL_65;
  }
  if ( v7 == 30561 )
  {
    v12 = 9;
    v13 = " co_await";
    goto LABEL_81;
  }
  if ( v7 <= 30561 )
  {
    if ( v7 != 30307 )
    {
      if ( v7 != 30308 )
      {
        if ( v7 == 30065 )
        {
          if ( a1 )
            *(_BYTE *)a1 = 2;
          v8 = 63;
          goto LABEL_59;
        }
        goto LABEL_90;
      }
      LOWORD(v35) = 15663;
      goto LABEL_65;
    }
    if ( a1 )
    {
      sub_76FD20(&v33, 40);
      v34 = sub_75DC60(0, 0);
      sub_770B70(&v33, &v34);
      sub_76FD20(&v33, 41);
    }
    else
    {
      if ( v4[2] == 84 )
      {
        qword_2CD44C0 = v4 + 4;
        if ( v4[3] != 95 || v4[4] != 73 )
          goto LABEL_90;
        v22 = *(_WORD *)(xmmword_2CCCD90 + 8);
        v34 = sub_75D9F0(0);
        a1 = &v33;
        a2 = (unsigned int *)sub_772CD0(xmmword_2CCCD90, v22, v23, v24);
        sub_770B70(&v33, a2);
        if ( !(_BYTE)xmmword_2CCCD80 )
        {
          v29 = *((_QWORD *)&xmmword_2CCCD90 + 1);
          if ( !(_WORD)v33 || *(_DWORD *)(*((_QWORD *)&xmmword_2CCCD90 + 1) + 2048LL) > 0x7Fu )
            goto LABEL_90;
          v30 = (unsigned int *)sub_76E9D0(&v33, a2);
          *v30 = v33;
          v31 = *(unsigned int *)(v29 + 2048);
          v32 = *(_DWORD *)(v29 + 2048);
          *(_QWORD *)(v29 + 8 * v31) = v30;
          *(_DWORD *)(v29 + 2048) = v32 + 1;
          *(_QWORD *)(v29 + 8 * v31 + 1024) = 0;
        }
        a2 = &v34;
        a1 = &v33;
        sub_770B70(&v33, &v34);
        if ( !(_BYTE)xmmword_2CCCD80 )
        {
          v25 = *((_QWORD *)&xmmword_2CCCD90 + 1);
          if ( !(_WORD)v33 || *(_DWORD *)(*((_QWORD *)&xmmword_2CCCD90 + 1) + 2048LL) > 0x7Fu )
            goto LABEL_90;
          v26 = (unsigned int *)sub_76E9D0(&v33, &v34);
          *v26 = v33;
          v27 = *(unsigned int *)(v25 + 2048);
          v28 = *(_DWORD *)(v25 + 2048);
          *(_QWORD *)(v25 + 8 * v27) = v26;
          *(_DWORD *)(v25 + 2048) = v28 + 1;
          *(_QWORD *)(v25 + 8 * v27 + 1024) = 0;
        }
      }
      else
      {
        v34 = sub_75DC60(0, 0);
        sub_770B70(&v33, &v34);
      }
      v21 = sub_7713D0(32, &v33);
      DWORD1(xmmword_2CCCD80) ^= 0x500000u;
      return v21;
    }
    return v33;
  }
  if ( v7 == 30825 )
  {
    v8 = 23899;
    LOWORD(v35) = 23899;
    goto LABEL_59;
  }
  if ( v7 != 31347 )
  {
    if ( v7 == 30574 )
    {
      v8 = 2003136032;
      v9 = 4;
LABEL_41:
      sub_76FCD0(&v34, v8, v9);
      return v34;
    }
    goto LABEL_90;
  }
  v12 = 7;
  v13 = " sizeof";
LABEL_81:
  v14 = (unsigned __int8)(v12 - 1);
  if ( !a1 )
  {
    v14 = v12;
    goto LABEL_83;
  }
LABEL_82:
  ++v13;
LABEL_83:
  sub_76FA20(&v34, v13, v14);
  return v34;
}
