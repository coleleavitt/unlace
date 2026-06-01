__int64 __fastcall CoinLpIO::newCardLpIO(CoinLpIO *this)
{
  const char *v1; // rbp
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  char *v11; // rax
  int v12; // eax
  int v13; // edi
  CoinLpIO *v14; // rcx
  char v15; // si
  __int64 v16; // r10
  int v17; // edi
  char *v18; // rsi
  __int64 v19; // r11
  int v20; // r9d
  char v21; // cl
  char v22; // al
  int v23; // ecx
  int v24; // eax

  v1 = (char *)this + 336;
  LODWORD(v3) = *((_DWORD *)this + 341);
  v4 = *((_DWORD *)this + 342);
  while ( (_DWORD)v3 == v4 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)this + 172);
      *(_QWORD *)((char *)this + 1364) = 0;
      if ( !(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v5 + 24LL))(v5, v1, 1024) )
        return 0;
      v6 = strlen(v1);
      if ( v6 && v6 <= 1022 )
      {
        v7 = v6 - 1;
        v8 = v6 - 1;
        if ( v6 - 1 >= 0 && *((char *)this + (int)v7 + 336) <= 32 )
        {
          v9 = v6 - 2;
          v10 = v9 - v7;
          do
          {
            v8 = v9;
            if ( v9 == v10 )
              break;
            --v9;
          }
          while ( *((char *)this + v9 + 337) <= 32 );
        }
        *((_BYTE *)this + v8 + 337) = 10;
        *((_BYTE *)this + v8 + 338) = 0;
      }
      v11 = strstr(v1, "::");
      v3 = *((int *)this + 341);
      if ( !v11 )
        break;
      v12 = (_DWORD)v11 - (_DWORD)v1;
      v13 = v12;
      if ( v12 <= 0 )
        goto LABEL_19;
      v14 = (CoinLpIO *)v1;
      do
      {
        v15 = *(_BYTE *)v14;
        if ( *(_BYTE *)v14 != 32 )
        {
          *((_DWORD *)this + 341) = v3 + 1;
          *((_BYTE *)this + v3 + 336) = v15;
          v3 = (int)v3 + 1;
        }
        v14 = (CoinLpIO *)((char *)v14 + 1);
      }
      while ( v14 != (CoinLpIO *)((char *)this + (unsigned int)(v12 - 1) + 337) );
      if ( v12 <= 1023 )
        goto LABEL_19;
LABEL_38:
      v24 = *((_DWORD *)this + 342);
      if ( *((_BYTE *)this + 336) == 32 )
        *((_DWORD *)this + 342) = ++v24;
      LODWORD(v3) = -(int)v3;
      *((_DWORD *)this + 341) = v3;
      if ( (_DWORD)v3 != v24 )
        return abs32(v3);
    }
    v13 = 0;
LABEL_19:
    v16 = v13;
    v17 = v13 + 1;
    v18 = (char *)this + v16 + 336;
    v19 = v17;
    while ( 1 )
    {
      v22 = *v18;
      v21 = *v18;
      if ( *v18 == 58 )
      {
        v23 = v3 - 1;
        if ( *((_BYTE *)this + (int)v3 + 335) == 32 )
        {
          *((_DWORD *)this + 341) = v23;
          v22 = *v18;
          v3 = v23;
        }
        v21 = v22;
        v20 = v17;
        goto LABEL_24;
      }
      if ( v22 == 9 )
      {
        *v18 = 32;
        goto LABEL_22;
      }
      if ( !v22 || v22 == 10 )
        break;
      if ( v22 == 13 )
        goto LABEL_36;
      v20 = v17;
      if ( v22 != 32 )
        goto LABEL_24;
LABEL_22:
      v20 = v17;
      if ( v18[v19 - v16] != 32 )
      {
        v21 = 32;
LABEL_24:
        *((_DWORD *)this + 341) = v3 + 1;
        *((_BYTE *)this + v3 + 336) = v21;
        v3 = (int)v3 + 1;
      }
      ++v18;
      ++v17;
      if ( v20 == 1024 )
        goto LABEL_38;
    }
    if ( v22 != 10 )
      goto LABEL_38;
LABEL_36:
    *((_BYTE *)this + (int)v3 + 336) = 0;
    v4 = *((_DWORD *)this + 342);
    if ( *((_BYTE *)this + 336) == 32 )
      *((_DWORD *)this + 342) = ++v4;
  }
  return abs32(v3);
}

