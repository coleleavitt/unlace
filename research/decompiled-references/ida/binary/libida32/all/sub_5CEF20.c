__int64 __fastcall sub_5CEF20(__int64 a1, char a2)
{
  unsigned __int64 v3; // rdx
  const char *v4; // rbp
  const char *v6; // rsi
  __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  size_t v12; // r12
  void *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rdx
  char v16; // al
  const char *v18; // rdi
  _BYTE *v19; // rsi
  unsigned __int64 v20; // rbp
  size_t v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rax
  unsigned __int64 v24; // rbp
  const void *v25; // r13
  void *v26; // rdi
  const void *v27; // r13
  void *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + 44LL) & 1) != 0 )
  {
LABEL_21:
    sub_5CAA70((const __m128i *)a1);
    v20 = *(_QWORD *)(a1 + 560);
    *(_WORD *)(a1 + 64) = 2;
    if ( v20 > 1 )
    {
      v27 = *(const void **)(a1 + 552);
      v28 = *(void **)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < v20 )
      {
        v29 = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v20, 1);
        *(_QWORD *)(a1 + 40) = v29;
        v28 = (void *)v29;
      }
      *(_QWORD *)(a1 + 48) = v20;
      memmove(v28, v27, v20 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v20 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
    }
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 608);
    v4 = *(const char **)(a1 + 552);
    if ( v3 > 1 )
    {
      v6 = *(const char **)(a1 + 600);
      if ( !v6
        || (v7 = *(_QWORD *)(a1 + 560)) != 0
        && (v21 = v3 - 1, v7 - 1 >= v21)
        && !strncmp(*(const char **)(a1 + 552), v6, v21) )
      {
        if ( !(unsigned int)get_named_type(*(_QWORD *)(a1 + 240), (int)v4, 1, 0, 0, 0, 0, 0, 0) )
        {
          v22 = *(_QWORD *)(a1 + 608);
          v23 = &v4[v22 - 1];
          if ( !v22 )
            v23 = v4;
          if ( *v23 == 58 && v23[1] == 58 )
            v4 = v23 + 2;
        }
      }
    }
    while ( 1 )
    {
      v8 = v4;
      if ( (unsigned int)get_named_type(*(_QWORD *)(a1 + 240), (int)v4, 1, 0, 0, 0, 0, 0, 0) )
        break;
      v9 = strstr(v4, "::");
      if ( v9 )
      {
        v4 = v9 + 2;
        if ( *(_WORD *)(a1 + 64) == 40 && (unsigned __int8)sub_5C8AD0((_QWORD *)a1, v9 + 2) )
          goto LABEL_21;
        if ( (*(_BYTE *)(a1 + 730) & 8) != 0 )
          continue;
      }
      v10 = *(_QWORD *)(a1 + 608);
      if ( *(_QWORD *)(a1 + 560) )
      {
        v8 = *(const char **)(a1 + 552);
        v18 = haystack;
        if ( v10 )
          goto LABEL_19;
      }
      else
      {
        v8 = haystack;
        if ( !v10 )
          break;
LABEL_19:
        v18 = *(const char **)(a1 + 600);
      }
      if ( strcmp(v18, v8) )
      {
        if ( a2 )
        {
          v19 = sub_5C5F70(*(_QWORD *)(a1 + 240), *(_BYTE **)(a1 + 552), 1);
          set_error_string();
          return set_qerrno(67, v19);
        }
        else
        {
          sub_5CAA70((const __m128i *)a1);
          v24 = *(_QWORD *)(a1 + 560);
          *(_WORD *)(a1 + 64) = 2;
          if ( v24 < 2 )
          {
            *(_QWORD *)(a1 + 48) = 0;
          }
          else
          {
            v25 = *(const void **)(a1 + 552);
            v26 = *(void **)(a1 + 40);
            if ( *(_QWORD *)(a1 + 56) < v24 )
            {
              v30 = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v24, 1);
              *(_QWORD *)(a1 + 40) = v30;
              v26 = (void *)v30;
            }
            *(_QWORD *)(a1 + 48) = v24;
            memmove(v26, v25, v24 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 40) + v24 - 1) = 0;
          }
          return 1507;
        }
      }
      break;
    }
    if ( *(_WORD *)(a1 + 64) == 40 )
    {
      v8 = v4;
      if ( (unsigned __int8)sub_5C8AD0((_QWORD *)a1, v4) )
        goto LABEL_21;
    }
    v11 = *(_QWORD *)(a1 + 120);
    v12 = strlen(v4);
    v13 = (void *)qalloc_or_throw(v12 + 1, v8);
    v14 = memcpy(v13, v4, v12);
    v14[v12] = 0;
    *(_QWORD *)(v11 + 72) = v14;
    v15 = *(_QWORD *)(a1 + 120);
    v16 = *(_BYTE *)(v15 + 186);
    if ( (v16 & 0x3F) == 0 )
    {
      *(_BYTE *)(v15 + 186) = v16 | 0x3D;
      return 0;
    }
    return set_qerrno(66, v4);
  }
}

