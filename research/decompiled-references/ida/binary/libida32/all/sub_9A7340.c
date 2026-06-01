void __fastcall sub_9A7340(__int64 a1, char *a2, std::ostream *a3, unsigned int a4, char a5)
{
  char *v6; // rbx
  unsigned __int8 v7; // al
  std::ostream *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // r13
  int v14; // r12d
  __int64 *v15; // r13
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  _QWORD **v19; // rax
  _QWORD **v20; // r13
  _QWORD **i; // rbx
  _QWORD *v22; // rsi
  const char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  const char *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  _BYTE *v29; // rsi
  char v30; // dl
  void *v31; // [rsp+0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h] BYREF

  if ( !a2 )
  {
LABEL_89:
    std::operator<<<std::char_traits<char>>();
    return;
  }
  v6 = a2;
  v7 = *a2;
  if ( a5 && *((_QWORD *)a2 + 1) )
  {
    if ( v7 != 5 )
    {
      j__strlen("_x");
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      return;
    }
LABEL_5:
    if ( a4 >= dword_23B7620[v7] )
      goto LABEL_6;
LABEL_9:
    std::operator<<<std::char_traits<char>>();
    v8 = a3;
LABEL_10:
    sub_9A7340(a1, a2, v8, 6, 1);
LABEL_11:
    std::operator<<<std::char_traits<char>>();
    return;
  }
  if ( v7 <= 0x1Eu )
    goto LABEL_5;
  if ( a4 < 6 )
    goto LABEL_9;
LABEL_6:
  switch ( *a2 )
  {
    case 0:
      goto LABEL_16;
    case 1:
    case 2:
      goto LABEL_89;
    case 3:
      if ( *((_QWORD *)a2 + 3) )
      {
        sub_9B96E0(&v31);
LABEL_26:
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v31 != &v32 )
          operator delete(v31);
      }
      else
      {
        v12 = a2[17];
        switch ( a2[16] )
        {
          case 2:
            v30 = a2[18];
            if ( v12 == 3 )
            {
              if ( !v30 )
                goto LABEL_110;
              std::ostream::operator<<();
            }
            else if ( v12 <= 3u )
            {
              if ( v12 != 2 )
                goto LABEL_89;
              if ( v30 )
              {
                LOBYTE(v31) = a2[32];
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              else
              {
                j__strlen("'");
                std::__ostream_insert<char,std::char_traits<char>>();
                LOBYTE(v31) = a2[32];
                std::__ostream_insert<char,std::char_traits<char>>();
                std::operator<<<std::char_traits<char>>();
              }
            }
            else
            {
              if ( v12 != 4 )
              {
                if ( v12 != 5 )
                  goto LABEL_89;
                if ( v30 )
                {
                  std::ostream::_M_insert<long>();
                  return;
                }
                goto LABEL_110;
              }
              if ( !v30 )
                goto LABEL_110;
              std::ostream::operator<<();
            }
            break;
          case 3:
            if ( v12 != 4 && v12 != 5 )
              goto LABEL_89;
            std::ostream::_M_insert<double>();
            return;
          case 4:
            std::operator<<<std::char_traits<char>>();
            std::ostream::write(a3, *((const char **)a2 + 4), *((_QWORD *)a2 + 5));
            std::operator<<<std::char_traits<char>>();
            return;
          default:
            goto LABEL_89;
        }
      }
      return;
    case 4:
      v11 = *((_QWORD *)a2 + 2);
      if ( !v11 )
        goto LABEL_89;
      sub_B62CC0(&v31, v11 + 40);
      goto LABEL_26;
    case 5:
      if ( *(_BYTE *)(a1 + 2) && *((_WORD *)a2 + 1) == 2 )
        goto LABEL_89;
      std::ostream::write(a3, *((const char **)a2 + 2), *((_QWORD *)a2 + 3));
LABEL_110:
      std::ostream::_M_insert<unsigned long>();
      return;
    case 6:
      sub_9AABB0(a1, a2, a3, 0);
      return;
    case 7:
      std::operator<<<std::char_traits<char>>();
      v13 = *((_QWORD *)a2 + 2);
      if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(v13 + 2) == 2 )
      {
        std::operator<<<std::char_traits<char>>();
      }
      else
      {
        std::ostream::write(a3, *(const char **)(v13 + 16), *(_QWORD *)(v13 + 24));
        std::ostream::_M_insert<unsigned long>();
      }
      goto LABEL_37;
    case 8:
    case 9:
      std::operator<<<std::char_traits<char>>();
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 4, 1);
LABEL_37:
      std::operator<<<std::char_traits<char>>();
      sub_9A7340(a1, *((_QWORD *)a2 + 3), a3, 5, 1);
      return;
    case 10:
      sub_9AACF0(a1, a2, a3, 0);
      return;
    case 11:
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 1, 1);
      if ( !*((_QWORD *)a2 + 3) )
        return;
      std::operator<<<std::char_traits<char>>();
      a2 = *((char **)a2 + 3);
      v8 = a3;
      if ( !a2 )
        a2 = *((char **)v6 + 2);
      goto LABEL_10;
    case 12:
      sub_9A7FA0(a1, a2, a3);
      return;
    case 13:
      v29 = *((_BYTE **)a2 + 2);
      if ( *v29 == 10 )
        sub_9AACF0(a1, v29, a3, 1);
      else
        sub_9A7340(a1, v29, a3, 1, 1);
      goto LABEL_89;
    case 14:
      std::operator<<<std::char_traits<char>>();
      v28 = *((_QWORD *)a2 + 2);
      goto LABEL_73;
    case 15:
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 1, 1);
      if ( !*(_BYTE *)(a1 + 2) )
        goto LABEL_89;
      return;
    case 16:
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 3, 1);
      std::operator<<<std::char_traits<char>>();
      v28 = *((_QWORD *)a2 + 3);
LABEL_73:
      sub_9A7340(a1, v28, a3, 3, 1);
      return;
    case 17:
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 1, 1);
      std::operator<<<std::char_traits<char>>();
      sub_9A7340(a1, *((_QWORD *)a2 + 3), a3, 6, 1);
      std::operator<<<std::char_traits<char>>();
      return;
    case 18:
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 1, 1);
      std::operator<<<std::char_traits<char>>();
LABEL_16:
      sub_9A7340(a1, *((_QWORD *)a2 + 3), a3, 0, 1);
      return;
    case 19:
      v26 = (const char *)sub_9BD700((unsigned __int8)a2[2]);
      std::ostream::write(a3, v26, v27);
      v25 = *((_QWORD *)a2 + 2);
      goto LABEL_69;
    case 20:
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 2, 1);
      j__strlen(" ");
      std::__ostream_insert<char,std::char_traits<char>>();
      v23 = (const char *)sub_9BD750((unsigned __int8)a2[2], " ");
      std::ostream::write(a3, v23, v24);
      std::operator<<<std::char_traits<char>>();
      v25 = *((_QWORD *)a2 + 3);
      goto LABEL_69;
    case 21:
      sub_9AADA0(a1, a2, a3);
      return;
    case 22:
      std::operator<<<std::char_traits<char>>();
      v19 = *((_QWORD ***)a2 + 3);
      v20 = &v19[*((_QWORD *)a2 + 4)];
      for ( i = v19; v20 != i; ++i )
      {
        v22 = *i;
        sub_9A71F0(a1, v22, a3);
      }
      std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      return;
    case 23:
      sub_9A71F0(a1, a2, a3);
      return;
    case 24:
      std::operator<<<std::char_traits<char>>();
      if ( *((_WORD *)a2 + 1) == 1 )
      {
        sub_9A7340(a1, **((_QWORD **)a2 + 2), a3, 6, 1);
      }
      else
      {
        v15 = *((__int64 **)a2 + 2);
        if ( v15 != &v15[*((_QWORD *)a2 + 3)] )
        {
          v16 = *v15;
          v17 = 0;
          v18 = (unsigned __int64)(8LL * *((_QWORD *)a2 + 3) - 8) >> 3;
          while ( 1 )
          {
            sub_9A7340(a1, v16, a3, 6, 1);
            if ( v17 == v18 )
              break;
            v16 = v15[v17 + 1];
            if ( (_DWORD)v17 != -1 )
              std::operator<<<std::char_traits<char>>();
            ++v17;
          }
        }
      }
      goto LABEL_11;
    case 25:
      std::operator<<<std::char_traits<char>>();
      v14 = *((_DWORD *)a2 + 6);
      if ( !*((_QWORD *)a2 + 2) )
        goto LABEL_89;
      std::operator<<<std::char_traits<char>>();
      std::ostream::operator<<();
      if ( v14 >= 0 )
        goto LABEL_51;
      return;
    case 26:
      std::operator<<<std::char_traits<char>>();
      sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 6, 1);
      std::operator<<<std::char_traits<char>>();
      if ( *((_QWORD *)a2 + 3) )
      {
        std::operator<<<std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        std::operator<<<std::char_traits<char>>();
      }
      std::operator<<<std::char_traits<char>>();
      if ( !*((_QWORD *)a2 + 4) )
        goto LABEL_89;
LABEL_51:
      std::operator<<<std::char_traits<char>>();
      std::ostream::operator<<();
      return;
    case 27:
      std::operator<<<std::char_traits<char>>();
      v10 = *((_QWORD *)a2 + 2);
      goto LABEL_21;
    case 28:
      std::ostream::write(a3, *((const char **)a2 + 2), *((_QWORD *)a2 + 3));
      return;
    case 29:
      if ( *(_BYTE *)(a1 + 2) )
      {
        sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 2, 1);
        std::operator<<<std::char_traits<char>>();
        sub_9A7340(a1, *((_QWORD *)a2 + 3), a3, 2, 1);
        std::operator<<<std::char_traits<char>>();
        v25 = *((_QWORD *)a2 + 4);
LABEL_69:
        sub_9A7340(a1, v25, a3, 2, 1);
      }
      else
      {
        std::operator<<<std::char_traits<char>>();
        sub_9A7340(a1, *((_QWORD *)a2 + 2), a3, 6, 1);
        std::operator<<<std::char_traits<char>>();
        sub_9A7340(a1, *((_QWORD *)a2 + 3), a3, 4, 1);
        std::operator<<<std::char_traits<char>>();
        v10 = *((_QWORD *)a2 + 4);
LABEL_21:
        sub_9A7340(a1, v10, a3, 4, 1);
      }
      break;
    case 30:
      std::operator<<<std::char_traits<char>>();
      v9 = *((_QWORD *)a2 + 2);
      if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(v9 + 2) == 2 )
      {
        std::operator<<<std::char_traits<char>>();
      }
      else
      {
        std::ostream::write(a3, *(const char **)(v9 + 16), *(_QWORD *)(v9 + 24));
        std::ostream::_M_insert<unsigned long>();
      }
      std::operator<<<std::char_traits<char>>();
      sub_9A7340(a1, *(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL), a3, 4, 1);
      std::operator<<<std::char_traits<char>>();
      v10 = *((_QWORD *)a2 + 3);
      goto LABEL_21;
    default:
      return;
  }
}

