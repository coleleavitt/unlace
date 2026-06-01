__int64 __fastcall CoinMpsCardReader::nextGmsField(CoinMpsCardReader *this, char *a2)
{
  char *v2; // kr00_8
  unsigned int v3; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // rdi
  const char *v8; // rsi
  size_t v9; // r13
  CoinMpsCardReader *v11; // rbx
  char v12; // al
  CoinMpsCardReader *v13; // rbx
  char v14; // al
  __int64 v15; // rax
  size_t v16; // rax
  const char *v17; // rbx
  char v18; // al
  char v19; // al
  const char *v20; // r12
  size_t v21; // r13
  size_t v22; // rdx
  char *v23; // rax
  const char *v24; // rbx
  char v25; // al
  char v26; // al
  const char *v27; // r12
  char v28; // al
  size_t v29; // r13
  size_t v30; // rdx
  unsigned __int8 *v31; // rbx
  unsigned __int8 v32; // al
  unsigned __int8 v33; // al
  char v34; // dl
  unsigned __int8 *v35; // r13
  size_t v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  char v41; // dl
  __int64 BlankOr; // rax
  const char *v43; // r14
  char *v44; // rax
  int v45; // edx
  __int64 v46; // r12
  char *v47; // rax
  __int64 v48; // rax
  const char *v49; // rsi
  __int64 v50; // r12
  size_t v51; // rbx
  unsigned __int64 v52; // rdx
  unsigned __int8 *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rcx

  v2 = a2;
  v3 = -1;
  a2 = (char *)(unsigned int)a2;
  switch ( (unsigned __int64)v2 )
  {
    case 0uLL:
      v3 = CoinMpsCardReader::cleanCard(this);
      if ( v3 )
        return (unsigned int)-1;
      while ( !*((_BYTE *)this + 8) )
      {
        if ( (unsigned int)CoinMpsCardReader::cleanCard(this) )
          return (unsigned int)-1;
      }
      v16 = strlen((const char *)this + 8);
      *((_QWORD *)this + 111) = (char *)this + 8;
      *((_QWORD *)this + 112) = (char *)this + v16 + 8;
      return v3;
    case 1uLL:
      v24 = *((const char **)this + 111);
      while ( 2 )
      {
        v25 = *v24;
        if ( *v24 == 32 || v25 == 9 )
        {
          do
          {
            do
              v25 = *++v24;
            while ( *v24 == 9 );
          }
          while ( v25 == 32 );
        }
        if ( !v25 )
        {
          *((_QWORD *)this + 111) = 0;
          if ( !(unsigned int)CoinMpsCardReader::cleanCard(this) )
          {
            v24 = (char *)this + 8;
            v38 = strlen((const char *)this + 8);
            *((_QWORD *)this + 111) = (char *)this + 8;
            *((_QWORD *)this + 112) = (char *)this + v38 + 8;
            continue;
          }
          return (unsigned int)-1;
        }
        break;
      }
      *((_QWORD *)this + 111) = v24;
      v26 = *v24;
      if ( (unsigned __int8)((*v24 & 0xDF) - 65) > 0x19u )
        return 1;
      v27 = v24;
      if ( v26 > 32 && (unsigned __int8)(v26 - 43) > 2u && ((v26 - 59) & 0xFD) != 0 )
      {
        do
          v28 = *++v27;
        while ( v28 > 32 && (unsigned __int8)(v28 - 43) > 2u && ((v28 - 59) & 0xFD) != 0 );
        v29 = (int)v27 - (int)v24;
        v30 = v29;
      }
      else
      {
        v29 = 0;
        v30 = 0;
      }
      strncpy((char *)this + 1068, v24, v30);
      *((_BYTE *)this + v29 + 1068) = 0;
      *((_QWORD *)this + 111) = v27;
      return 0;
    case 2uLL:
      v17 = *((const char **)this + 111);
      while ( 2 )
      {
        v18 = *v17;
        if ( *v17 == 32 || v18 == 9 )
        {
          do
          {
            do
              v18 = *++v17;
            while ( *v17 == 9 );
          }
          while ( v18 == 32 );
        }
        if ( !v18 )
        {
          *((_QWORD *)this + 111) = 0;
          if ( !(unsigned int)CoinMpsCardReader::cleanCard(this) )
          {
            v17 = (char *)this + 8;
            v36 = strlen((const char *)this + 8);
            *((_QWORD *)this + 111) = (char *)this + 8;
            *((_QWORD *)this + 112) = (char *)this + v36 + 8;
            continue;
          }
          return (unsigned int)-1;
        }
        break;
      }
      *((_QWORD *)this + 111) = v17;
      v19 = *v17;
      if ( ((*v17 - 43) & 0xFD) != 0 && (unsigned __int8)(v19 - 48) > 9u )
        return 1;
      v20 = v17;
      if ( v19 > 32 && v19 != 44 && ((v19 - 59) & 0xFD) != 0 )
      {
        do
          ++v20;
        while ( ((*v20 - 59) & 0xFD) != 0 && *v20 > 32 && *v20 != 44 );
        v21 = (int)v20 - (int)v17;
        v22 = v21;
      }
      else
      {
        v21 = 0;
        v22 = 0;
      }
      v23 = strncpy((char *)this + 908, v17, v22);
      *((_BYTE *)this + v21 + 908) = 0;
      *(_QWORD *)this = 0xD4B249AD2594C37DLL;
      sscanf(v23, "%lg", this);
      *((_QWORD *)this + 111) = v20;
      return 0;
    case 3uLL:
      v31 = *((unsigned __int8 **)this + 111);
      while ( 2 )
      {
        v32 = *v31;
        if ( *v31 == 32 || v32 == 9 )
        {
          do
          {
            do
              v32 = *++v31;
            while ( *v31 == 9 );
          }
          while ( v32 == 32 );
        }
        if ( !v32 )
        {
          *((_QWORD *)this + 111) = 0;
          if ( !(unsigned int)CoinMpsCardReader::cleanCard(this) )
          {
            v31 = (unsigned __int8 *)this + 8;
            v40 = strlen((const char *)this + 8);
            *((_QWORD *)this + 111) = (char *)this + 8;
            *((_QWORD *)this + 112) = (char *)this + v40 + 8;
            continue;
          }
          return (unsigned int)-1;
        }
        break;
      }
      *((_QWORD *)this + 111) = v31;
      *(_QWORD *)this = 0x3FF0000000000000LL;
      v33 = *v31;
      v34 = (*v31 - 43) & 0xFD;
      if ( (unsigned __int8)(*v31 - 48) <= 9u || !v34 )
      {
        if ( v34 )
        {
          BlankOr = CoinMpsCardReader::nextBlankOr((CoinMpsCardReader *)v31, (char *)(unsigned int)a2);
          v43 = *((const char **)this + 111);
          v35 = (unsigned __int8 *)BlankOr;
          v44 = strchr(v43, 42);
          v45 = (_DWORD)v35 - (_DWORD)v43;
          if ( v44 )
          {
            v45 = (_DWORD)v35 - (_DWORD)v43;
            if ( v44 - v43 < v35 - (unsigned __int8 *)v43 )
            {
              v45 = (_DWORD)v44 - (_DWORD)v43;
              v35 = (unsigned __int8 *)v44;
            }
          }
          v46 = v45;
          v47 = strncpy((char *)this + 908, v43, v45);
          a2 = "%lg";
          *((_BYTE *)this + v46 + 908) = 0;
          *(_QWORD *)this = 0xD4B249AD2594C37DLL;
          sscanf(v47, "%lg", this);
        }
        else
        {
          *((_BYTE *)this + 908) = v33;
          v41 = v31[1];
          v35 = v31 + 1;
          if ( v41 == 9 || v41 == 32 )
          {
            do
            {
              do
                v41 = *++v35;
              while ( *v35 == 32 );
            }
            while ( v41 == 9 );
          }
          if ( (unsigned __int8)((v41 & 0xDF) - 65) > 0x19u )
          {
            if ( ((v41 - 43) & 0xFD) != 0 && (unsigned __int8)(v41 - 48) > 9u )
            {
              v33 = *v31;
              v35 = v31;
              v3 = 1;
            }
            else
            {
              *((_BYTE *)this + 909) = v41;
              v52 = v35[1];
              v53 = v35 + 1;
              v54 = 3;
              if ( (unsigned __int8)v52 <= 0x2Au && (v55 = 0x40100000200LL, _bittest64(&v55, v52)) )
              {
                v57 = 2;
              }
              else
              {
                v56 = 0x40100000200LL;
                do
                {
                  do
                  {
                    ++v53;
                    *((_BYTE *)this + v54 + 907) = v52;
                    v57 = (int)v54;
                    v52 = *v53;
                    ++v54;
                  }
                  while ( (unsigned __int8)v52 > 0x2Au );
                }
                while ( !_bittest64(&v56, v52) );
              }
              v35 = v53 + 1;
              a2 = "%lg";
              *((_BYTE *)this + v57 + 908) = 0;
              *(_QWORD *)this = 0xD4B249AD2594C37DLL;
              sscanf((const char *)this + 908, "%lg", this);
              *((_QWORD *)this + 111) = v53 + 1;
              v33 = v53[1];
              v3 = 0;
            }
            goto LABEL_88;
          }
          if ( v33 != 43 )
            *(_QWORD *)this = 0xBFF0000000000000LL;
        }
        *((_QWORD *)this + 111) = v35;
        v33 = *v35;
        v3 = 0;
        goto LABEL_88;
      }
      if ( (unsigned __int8)((v33 & 0xDF) - 65) <= 0x19u )
      {
        v35 = v31;
        v3 = 0;
      }
      else
      {
        v3 = 2;
        if ( v33 == 61 )
          return v3;
        v35 = v31;
        v3 = 1;
      }
LABEL_88:
      if ( v33 == 42 )
      {
        *((_QWORD *)this + 111) = v35 + 1;
        v33 = *++v35;
      }
      while ( v33 == 32 || v33 == 9 )
        v33 = *++v35;
      if ( !v33 )
        v35 = nullptr;
      *((_QWORD *)this + 111) = v35;
      if ( !v3 )
      {
        if ( (unsigned __int8)((*v35 & 0xDF) - 65) > 0x19u )
        {
          *((_QWORD *)this + 111) = v31;
          return 1;
        }
        v5 = CoinMpsCardReader::nextBlankOr((CoinMpsCardReader *)v35, a2);
        v6 = v5;
        v7 = (char *)this + 1068;
        v8 = *((const char **)this + 111);
        if ( v5 )
        {
          v9 = (int)v5 - (int)v8;
          strncpy(v7, v8, v9);
          *((_BYTE *)this + v9 + 1068) = 0;
        }
        else
        {
          strcpy(v7, v8);
          v6 = *((_QWORD *)this + 112);
        }
        *((_QWORD *)this + 111) = v6;
      }
      return v3;
    case 4uLL:
      v11 = *((CoinMpsCardReader **)this + 111);
      while ( 2 )
      {
        while ( 1 )
        {
          v12 = *(_BYTE *)v11;
          if ( *(_BYTE *)v11 != 9 && v12 != 32 )
            break;
          v11 = (CoinMpsCardReader *)((char *)v11 + 1);
        }
        if ( !v12 )
        {
          *((_QWORD *)this + 111) = 0;
          if ( !(unsigned int)CoinMpsCardReader::cleanCard(this) )
          {
            v11 = (CoinMpsCardReader *)((char *)this + 8);
            v39 = strlen((const char *)this + 8);
            *((_QWORD *)this + 111) = (char *)this + 8;
            *((_QWORD *)this + 112) = (char *)this + v39 + 8;
            continue;
          }
          return (unsigned int)-1;
        }
        break;
      }
      *((_QWORD *)this + 111) = v11;
      if ( *(_BYTE *)v11 != 61 )
        return 1;
      v48 = CoinMpsCardReader::nextBlankOr(v11, (char *)(unsigned int)a2);
      v49 = *((const char **)this + 111);
      v50 = v48;
      v51 = (int)v48 - (int)v49;
      strncpy((char *)this + 908, v49, v51);
      *((_BYTE *)this + v51 + 908) = 0;
      *((_QWORD *)this + 111) = v50;
      return 0;
    case 5uLL:
      v13 = *((CoinMpsCardReader **)this + 111);
      while ( 2 )
      {
        v14 = *(_BYTE *)v13;
        if ( *(_BYTE *)v13 == 9 || v14 == 32 )
        {
          do
          {
            do
            {
              v13 = (CoinMpsCardReader *)((char *)v13 + 1);
              v14 = *(_BYTE *)v13;
            }
            while ( *(_BYTE *)v13 == 32 );
          }
          while ( v14 == 9 );
        }
        if ( v14 )
        {
          *((_QWORD *)this + 111) = v13;
          if ( *(_BYTE *)v13 != 59 )
            return 1;
          v15 = CoinMpsCardReader::nextBlankOr(v13, (char *)(unsigned int)a2);
          if ( !v15 )
            v15 = *((_QWORD *)this + 112);
          *((_QWORD *)this + 111) = v15;
          return 0;
        }
        else
        {
          *((_QWORD *)this + 111) = 0;
          if ( !(unsigned int)CoinMpsCardReader::cleanCard(this) )
          {
            v13 = (CoinMpsCardReader *)((char *)this + 8);
            v37 = strlen((const char *)this + 8);
            *((_QWORD *)this + 111) = (char *)this + 8;
            *((_QWORD *)this + 112) = (char *)this + v37 + 8;
            continue;
          }
          return (unsigned int)-1;
        }
      }
    default:
      return v3;
  }
}

