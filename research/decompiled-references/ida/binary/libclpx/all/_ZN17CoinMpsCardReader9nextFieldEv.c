__int64 __fastcall CoinMpsCardReader::nextField(CoinMpsCardReader *this, char *a2, double a3)
{
  CoinMpsCardReader *v4; // rbx
  CoinMpsCardReader *v5; // rdx
  const char *v6; // rdx
  char *BlankOr; // r12
  CoinMpsCardReader *v8; // rdi
  char v9; // r13
  char *v10; // rsi
  char *v11; // rax
  char *v12; // rbx
  char v13; // r13
  bool v14; // cc
  __int64 v15; // r15
  CoinMpsCardReader *v17; // r13
  char v18; // bl
  char *v19; // r13
  CoinMessageHandler *v20; // rax
  CoinMessageHandler *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  size_t i; // rdx
  __int64 v28; // r14
  char *v29; // rax
  int v30; // r14d
  __int64 v31; // rax
  const char *v32; // rdx
  CoinMpsCardReader *v33; // r12
  int v34; // eax
  const char *v35; // rdx
  char *v36; // rax
  char v37; // r14
  char *v38; // rsi
  char *v39; // r13
  const char *v40; // rdx
  __int64 v41; // rax
  char v42; // r14
  char *v43; // rsi
  char *v44; // rdx
  bool v45; // zf
  _BYTE *v46; // rax
  _BYTE *v47; // rbx
  char v48; // r12
  bool v49; // cf
  __int64 v50; // rax
  bool v51; // zf
  int v52; // ecx
  bool v53; // zf
  const char *v54; // rdi
  __int64 v55; // rcx
  const char *v56; // rdi
  __int64 v57; // rcx
  const char *v58; // rdi
  __int64 v59; // rcx
  CoinMpsCardReader *v60; // rdi
  char v61; // r13
  CoinMpsCardReader *v62; // rdx
  char *v63; // rbx
  char v64; // r13
  int v65; // eax
  bool v66; // zf
  const char *v67; // rdi
  __int64 v68; // rcx
  size_t v69; // rax
  _UNKNOWN **v70; // r9
  __int64 v71; // r14
  int v72; // eax
  CoinMpsCardReader *v73; // rdx
  __int64 v74; // rax
  int v75; // eax
  const char *v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // [rsp+0h] [rbp-68h]
  _UNKNOWN **v79; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+10h] [rbp-58h]
  int v81; // [rsp+1Ch] [rbp-4Ch]
  char *v82[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *((CoinMpsCardReader **)this + 111);
  v5 = *((CoinMpsCardReader **)this + 112);
  *((_DWORD *)this + 226) = 4;
  if ( v4 != v5 )
  {
    if ( *(_BYTE *)v4 != 9 && *(_BYTE *)v4 != 32 )
    {
LABEL_7:
      BlankOr = (char *)CoinMpsCardReader::nextBlankOr(v4, a2);
      v8 = (CoinMpsCardReader *)((char *)this + 908);
      if ( !*((_BYTE *)this + 1248) && *((_BYTE *)this + 1256) && v4 == (CoinMpsCardReader *)((char *)this + 47) )
      {
        if ( (__int64)(*((_QWORD *)this + 112) - (_QWORD)v4) > 7 )
        {
          v9 = *((_BYTE *)this + 55);
          if ( (v9 & 0xDF) != 0 )
          {
            *((_BYTE *)this + 1256) = 0;
            v9 = *BlankOr;
          }
          else
          {
            BlankOr = (char *)this + 55;
          }
          goto LABEL_12;
        }
      }
      else
      {
        *((_BYTE *)this + 1248) = 1;
        if ( BlankOr )
        {
          v9 = *BlankOr;
LABEL_12:
          *BlankOr = 0;
          v10 = (char *)v4;
          CoinMpsCardReader::strcpyAndCompress(v8, (char *)v4, v6);
          *BlankOr = v9;
          v11 = *((char **)this + 112);
          if ( v11 == BlankOr )
          {
            v11 = BlankOr;
LABEL_166:
            if ( *((_DWORD *)this + 310) != 12 )
            {
              *((_QWORD *)this + 111) = v11;
              *((_DWORD *)this + 226) = 30;
              v12 = v11;
LABEL_19:
              v13 = *BlankOr;
              *BlankOr = 0;
              CoinMpsCardReader::osi_strtod(this, v12, v82, *((_DWORD *)this + 313));
              v14 = v82[0] <= v12;
              *(double *)this = a3;
              if ( !v14 )
              {
                *BlankOr = v13;
                *((_QWORD *)this + 111) = BlankOr;
                goto LABEL_21;
              }
              goto LABEL_133;
            }
            v12 = v11;
            goto LABEL_18;
          }
          v12 = BlankOr;
          if ( v9 == 9 || v9 == 32 )
          {
            while ( ++v12 != v11 )
            {
              if ( *v12 != 32 && *v12 != 9 )
                goto LABEL_18;
            }
            goto LABEL_166;
          }
LABEL_18:
          BlankOr = (char *)CoinMpsCardReader::nextBlankOr((CoinMpsCardReader *)v12, v10);
          if ( BlankOr )
            goto LABEL_19;
LABEL_132:
          CoinMpsCardReader::osi_strtod(this, v12, v82, *((_DWORD *)this + 313));
          v49 = v12 < v82[0];
          *(double *)this = a3;
          if ( v49 )
            goto LABEL_138;
LABEL_133:
          *((_QWORD *)this + 111) = *((_QWORD *)this + 112);
          if ( (unsigned int)(*((_DWORD *)this + 226) - 23) > 1 )
            *((_DWORD *)this + 226) = 30;
          *(_QWORD *)this = 0xD4B249AD2594C37DLL;
          goto LABEL_21;
        }
      }
      v10 = (char *)v4;
      CoinMpsCardReader::strcpyAndCompress(v8, (char *)v4, v6);
      v12 = *((char **)this + 112);
      if ( *((_DWORD *)this + 310) != 12 )
      {
        *((_QWORD *)this + 111) = v12;
        *((_DWORD *)this + 226) = 30;
        goto LABEL_132;
      }
      goto LABEL_18;
    }
    while ( 1 )
    {
      v4 = (CoinMpsCardReader *)((char *)v4 + 1);
      if ( v4 == v5 )
        break;
      if ( *(_BYTE *)v4 != 32 && *(_BYTE *)v4 != 9 )
        goto LABEL_7;
    }
  }
  v17 = (CoinMpsCardReader *)((char *)this + 8);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)CoinMpsCardReader::cleanCard(this) )
        {
          LODWORD(v15) = 8;
          return (unsigned int)v15;
        }
        v18 = *((_BYTE *)this + 8);
        if ( (v18 & 0xDF) == 0 )
          break;
        if ( v18 != 42 )
        {
          v19 = (char *)this + 8;
          v15 = 2;
          v20 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 159),
                                        0,
                                        (CoinMpsCardReader *)((char *)this + 1280));
          v21 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v20);
          v26 = CoinMessageHandler::operator<<(v21, (__int64)this + 8, v22, v23, v24, v25, v78);
          CoinMessageHandler::operator<<(v26, 0, a3);
          for ( i = 3; ; i = strlen(*(const char **)((char *)&off_4CFF20 + v28 + 8)) )
          {
            v28 = 8 * v15;
            if ( !strncmp((const char *)this + 8, (const char *)*(&off_4CFF20 + v15), i) )
              break;
            if ( ++v15 == 14 )
            {
              LODWORD(v15) = 14;
              break;
            }
          }
          *((_QWORD *)this + 111) = v19;
          *((_QWORD *)this + 112) = v19;
          *((_DWORD *)this + 310) = v15;
          return (unsigned int)v15;
        }
      }
      *((_QWORD *)this + 111) = v17;
      v29 = (char *)v17 + strlen((const char *)this + 8);
      *((_QWORD *)this + 112) = v29;
    }
    while ( v17 == (CoinMpsCardReader *)v29 );
    if ( v18 != 9 && v18 != 32 )
      break;
    v4 = (CoinMpsCardReader *)((char *)this + 8);
    while ( 1 )
    {
      v4 = (CoinMpsCardReader *)((char *)v4 + 1);
      if ( v29 == (char *)v4 )
        break;
      if ( *(_BYTE *)v4 != 32 && *(_BYTE *)v4 != 9 )
        goto LABEL_40;
    }
  }
  v4 = (CoinMpsCardReader *)((char *)this + 8);
LABEL_40:
  v30 = -1;
  v31 = CoinMpsCardReader::nextBlankOr(v4, a2);
  LODWORD(v15) = *((_DWORD *)this + 310);
  v33 = (CoinMpsCardReader *)v31;
  v34 = v31 - (_DWORD)v4;
  *((_DWORD *)this + 226) = 4;
  if ( v33 )
    v30 = v34;
  if ( (unsigned int)(v15 - 4) <= 1 )
  {
    v51 = *((_BYTE *)this + 1248) == 0;
    if ( *((_BYTE *)this + 1248) )
      goto LABEL_77;
    a2 = (char *)this + 12;
    v58 = "        ";
    v59 = 8;
    do
    {
      if ( !v59 )
        break;
      v51 = *a2++ == *v58++;
      --v59;
    }
    while ( v51 );
    if ( !v51 )
      goto LABEL_77;
    v45 = *((_BYTE *)this + 1256) == 0;
    strcpy((char *)this + 1068, "        ");
    v60 = (CoinMpsCardReader *)((char *)this + 908);
    if ( !v45 && v4 == (CoinMpsCardReader *)((char *)this + 22) )
    {
      if ( (__int64)(*((_QWORD *)this + 112) - (_QWORD)v4) > 7 )
      {
        v61 = *((_BYTE *)this + 30);
        if ( (v61 & 0xDF) != 0 )
        {
          *((_BYTE *)this + 1256) = 0;
          v61 = *(_BYTE *)v33;
        }
        else
        {
          v33 = (CoinMpsCardReader *)((char *)this + 30);
        }
LABEL_100:
        *(_BYTE *)v33 = 0;
        CoinMpsCardReader::strcpyAndCompress(v60, (char *)v4, v32);
        *(_BYTE *)v33 = v61;
        v62 = *((CoinMpsCardReader **)this + 112);
        if ( v33 != v62 )
        {
          if ( v61 != 32 && v61 != 9 )
          {
LABEL_106:
            v63 = (char *)CoinMpsCardReader::nextBlankOr(v33, (char *)v4);
            *(_QWORD *)this = 0xD4B249AD2594C37DLL;
            if ( v63 )
            {
              v64 = *v63;
              *v63 = 0;
              CoinMpsCardReader::osi_strtod(this, (char *)v33, v82, *((_DWORD *)this + 313));
              v49 = (char *)v33 < v82[0];
              *(double *)this = a3;
              if ( !v49 )
                goto LABEL_75;
              *v63 = v64;
              *((_QWORD *)this + 111) = v63;
              goto LABEL_21;
            }
            CoinMpsCardReader::osi_strtod(this, (char *)v33, v82, *((_DWORD *)this + 313));
            v49 = (char *)v33 < v82[0];
            *(double *)this = a3;
            if ( !v49 )
              goto LABEL_75;
LABEL_138:
            *((_QWORD *)this + 111) = *((_QWORD *)this + 112);
            goto LABEL_21;
          }
          while ( 1 )
          {
            v33 = (CoinMpsCardReader *)((char *)v33 + 1);
            if ( v33 == v62 )
              break;
            if ( *(_BYTE *)v33 != 32 && *(_BYTE *)v33 != 9 )
              goto LABEL_106;
          }
        }
LABEL_169:
        *((_QWORD *)this + 111) = v62;
        *((_DWORD *)this + 226) = 30;
        LODWORD(v15) = *((_DWORD *)this + 310);
        *(_QWORD *)this = 0xD4B249AD2594C37DLL;
        return (unsigned int)v15;
      }
    }
    else if ( v33 )
    {
      v61 = *(_BYTE *)v33;
      goto LABEL_100;
    }
    CoinMpsCardReader::strcpyAndCompress(v60, (char *)v4, v32);
    v62 = *((CoinMpsCardReader **)this + 112);
    goto LABEL_169;
  }
  if ( (_DWORD)v15 != 3 )
  {
    v53 = (_DWORD)v15 == 12;
    if ( (_DWORD)v15 == 12 )
    {
      v54 = " S1";
      v55 = 3;
      a2 = (char *)this + 8;
      do
      {
        if ( !v55 )
          break;
        v53 = *a2++ == *v54++;
        --v55;
      }
      while ( v53 );
      if ( v53 )
      {
        *((_DWORD *)this + 226) = 23;
        goto LABEL_7;
      }
      v56 = " S2";
      v57 = 3;
      a2 = (char *)this + 8;
      do
      {
        if ( !v57 )
          break;
        v53 = *a2++ == *v56++;
        --v57;
      }
      while ( v53 );
      if ( v53 )
      {
        *((_DWORD *)this + 226) = 24;
        goto LABEL_7;
      }
LABEL_45:
      if ( *((_DWORD *)&qword_297EE0 + (int)v15) != v30 )
        goto LABEL_46;
      v52 = *((_DWORD *)qword_297F60 + (int)v15);
      v81 = *((_DWORD *)qword_297F20 + (int)v15);
LABEL_119:
      v69 = v30;
      v70 = &off_4CFE20;
      v71 = v52;
      n = v69;
      while ( 1 )
      {
        a2 = (char *)v70[v71];
        v79 = v70;
        v72 = strncmp((const char *)v4, a2, n);
        v70 = v79;
        if ( !v72 )
          break;
        if ( v81 <= (int)++v71 )
          goto LABEL_79;
      }
      *((_DWORD *)this + 226) = v71;
      if ( (_DWORD)v71 != 4 )
      {
        v73 = *((CoinMpsCardReader **)this + 112);
        if ( v33 == v73 )
          goto LABEL_155;
        while ( *(_BYTE *)v33 == 32 || *(_BYTE *)v33 == 9 )
        {
          v33 = (CoinMpsCardReader *)((char *)v33 + 1);
          if ( v33 == v73 )
            goto LABEL_155;
        }
LABEL_128:
        v74 = CoinMpsCardReader::nextBlankOr(v33, a2);
        LODWORD(v15) = *((_DWORD *)this + 310);
        if ( *((_DWORD *)this + 226) == 30 )
          return (unsigned int)v15;
        v4 = v33;
        v33 = (CoinMpsCardReader *)v74;
LABEL_46:
        v35 = (const char *)*((unsigned __int8 *)this + 1248);
        v36 = (char *)this + 1068;
        if ( (_DWORD)v15 != 6 )
        {
          if ( (_BYTE)v35 )
            goto LABEL_50;
          goto LABEL_48;
        }
        goto LABEL_112;
      }
LABEL_79:
      if ( (_DWORD)v15 != 6 )
        goto LABEL_80;
      v65 = *((_DWORD *)this + 2);
      if ( (v65 & 0xFF0000FF) != 0x20000020 || (v65 & 0xFFFF00) == 0x202000 )
      {
        v35 = (const char *)*((unsigned __int8 *)this + 1248);
        v36 = (char *)this + 1068;
LABEL_112:
        v66 = (_BYTE)v35 == 0;
        if ( (_BYTE)v35 )
          goto LABEL_50;
        v38 = (char *)this + 12;
        v67 = "        ";
        v68 = 8;
        do
        {
          if ( !v68 )
            break;
          v66 = *v38++ == *v67++;
          --v68;
        }
        while ( v66 );
        if ( v66 )
        {
          v39 = (char *)v33;
          strcpy(v36, "        ");
          v33 = v4;
LABEL_54:
          v40 = *((const char **)this + 112);
          if ( v33 == (CoinMpsCardReader *)v40 )
            goto LABEL_145;
          if ( *(_BYTE *)v33 == 9 || *(_BYTE *)v33 == 32 )
          {
            do
            {
              v33 = (CoinMpsCardReader *)((char *)v33 + 1);
              if ( v33 == (CoinMpsCardReader *)v40 )
                goto LABEL_145;
            }
            while ( *(_BYTE *)v33 == 32 || *(_BYTE *)v33 == 9 );
          }
          v41 = CoinMpsCardReader::nextBlankOr(v33, v38);
          LODWORD(v15) = *((_DWORD *)this + 310);
          v39 = (char *)v41;
LABEL_61:
          if ( (_DWORD)v15 == 2 )
            return (unsigned int)v15;
          if ( !*((_BYTE *)this + 1248) && *((_BYTE *)this + 1256) && v33 == (CoinMpsCardReader *)((char *)this + 22) )
          {
            if ( (__int64)(*((_QWORD *)this + 112) - (_QWORD)v33) > 7 )
            {
              v42 = *((_BYTE *)this + 30);
              if ( (v42 & 0xDF) != 0 )
              {
                *((_BYTE *)this + 1256) = 0;
                v42 = *v39;
              }
              else
              {
                v39 = (char *)this + 30;
              }
              goto LABEL_66;
            }
          }
          else
          {
            *((_BYTE *)this + 1248) = 1;
            if ( v39 )
            {
              v42 = *v39;
LABEL_66:
              *v39 = 0;
              v43 = (char *)v33;
              CoinMpsCardReader::strcpyAndCompress((CoinMpsCardReader *)((char *)this + 908), (char *)v33, v40);
              *v39 = v42;
              v44 = *((char **)this + 112);
              if ( v44 == v39 )
                goto LABEL_148;
              if ( v42 == 32 || v42 == 9 )
              {
                while ( ++v39 != v44 )
                {
                  if ( *v39 != 32 && *v39 != 9 )
                    goto LABEL_72;
                }
LABEL_148:
                v75 = *((_DWORD *)this + 310);
                LODWORD(v15) = v75;
                if ( v75 != 3 )
                  goto LABEL_149;
                goto LABEL_153;
              }
LABEL_72:
              LODWORD(v15) = *((_DWORD *)this + 310);
              v45 = (_DWORD)v15 == 3;
              if ( (_DWORD)v15 == 3 )
              {
                v76 = "'MARKER'";
                v77 = 8;
                v43 = (char *)this + 908;
                do
                {
                  if ( !v77 )
                    break;
                  v45 = *v43++ == *v76++;
                  --v77;
                }
                while ( v45 );
                if ( v45 )
                {
                  if ( v39 != v44 )
                  {
                    if ( !memcmp(v39, "'INTORG'", 8u) )
                    {
                      *((_DWORD *)this + 226) = 8;
                    }
                    else if ( !memcmp(v39, "'INTEND'", 8u) )
                    {
                      *((_DWORD *)this + 226) = 9;
                    }
                    else if ( !memcmp(v39, "'SOSORG'", 8u) )
                    {
                      if ( *((_DWORD *)this + 226) == 4 )
                        *((_DWORD *)this + 226) = 5;
                    }
                    else
                    {
                      *((_DWORD *)this + 226) = memcmp(v39, "'SOSEND'", 8u) == 0 ? 10 : 30;
                    }
                    *((_QWORD *)this + 111) = v44;
                    return (unsigned int)v15;
                  }
                  goto LABEL_153;
                }
                if ( v39 == v44 )
                {
LABEL_153:
                  *((_QWORD *)this + 111) = v44;
                  LODWORD(v15) = 3;
LABEL_154:
                  *((_DWORD *)this + 226) = 30;
LABEL_151:
                  *(_QWORD *)this = 0xD4B249AD2594C37DLL;
                  return (unsigned int)v15;
                }
              }
              v46 = (_BYTE *)CoinMpsCardReader::nextBlankOr((CoinMpsCardReader *)v39, v43);
              v47 = v46;
              if ( v46 )
              {
                v48 = *v46;
                *v46 = 0;
                CoinMpsCardReader::osi_strtod(this, v39, v82, *((_DWORD *)this + 313));
                v49 = v39 < v82[0];
                *(double *)this = a3;
                if ( !v49 )
                {
LABEL_75:
                  v50 = *((_QWORD *)this + 112);
                  *((_DWORD *)this + 226) = 30;
                  *((_QWORD *)this + 111) = v50;
                  *(_QWORD *)this = 0xD4B249AD2594C37DLL;
                  goto LABEL_21;
                }
                *v47 = v48;
                *((_QWORD *)this + 111) = v47;
LABEL_21:
                LODWORD(v15) = *((_DWORD *)this + 310);
                return (unsigned int)v15;
              }
              CoinMpsCardReader::osi_strtod(this, v39, v82, *((_DWORD *)this + 313));
              v49 = v39 < v82[0];
              *(double *)this = a3;
              if ( !v49 )
                goto LABEL_75;
              goto LABEL_138;
            }
          }
          CoinMpsCardReader::strcpyAndCompress((CoinMpsCardReader *)((char *)this + 908), (char *)v33, v40);
          v75 = *((_DWORD *)this + 310);
          v44 = *((char **)this + 112);
          LODWORD(v15) = v75;
          if ( v75 != 3 )
          {
LABEL_149:
            *((_QWORD *)this + 111) = v44;
            if ( v75 == 6 )
            {
              *(_QWORD *)this = 0;
              LODWORD(v15) = 6;
              return (unsigned int)v15;
            }
            if ( v75 == 13 )
              goto LABEL_151;
            goto LABEL_154;
          }
          goto LABEL_153;
        }
LABEL_48:
        if ( !*((_BYTE *)this + 1256) )
          goto LABEL_50;
        v35 = (char *)this + 12;
        if ( v4 != (CoinMpsCardReader *)((char *)this + 12) )
          goto LABEL_50;
        v35 = (const char *)(*((_QWORD *)this + 112) - (_QWORD)v4);
        if ( (__int64)v35 <= 7 )
          goto LABEL_142;
        if ( (*((_BYTE *)this + 20) & 0xDF) != 0 )
        {
          *((_BYTE *)this + 1256) = 0;
          if ( !v33 )
            goto LABEL_142;
        }
        else
        {
          v33 = (CoinMpsCardReader *)((char *)this + 20);
        }
LABEL_51:
        v37 = *(_BYTE *)v33;
        v38 = (char *)v4;
        *(_BYTE *)v33 = 0;
        CoinMpsCardReader::strcpyAndCompress((CoinMpsCardReader *)v36, (char *)v4, v35);
        if ( v4 - v17 != 4 )
          *((_BYTE *)this + 1248) = 1;
        *(_BYTE *)v33 = v37;
        v39 = (char *)v33;
        goto LABEL_54;
      }
      v73 = *((CoinMpsCardReader **)this + 112);
      *((_DWORD *)this + 226) = 7;
      if ( v33 == v73 )
      {
LABEL_155:
        *((_QWORD *)this + 111) = v73;
        *((_DWORD *)this + 226) = 30;
        return (unsigned int)v15;
      }
      if ( *(_BYTE *)v33 == 9 || *(_BYTE *)v33 == 32 )
      {
        while ( 1 )
        {
          v33 = (CoinMpsCardReader *)((char *)v33 + 1);
          if ( v33 == v73 )
            goto LABEL_155;
          if ( *(_BYTE *)v33 != 32 && *(_BYTE *)v33 != 9 )
            goto LABEL_128;
        }
      }
      goto LABEL_128;
    }
LABEL_77:
    if ( *((_DWORD *)&qword_297EE0 + (int)v15) != v30 )
      goto LABEL_46;
    v52 = *((_DWORD *)qword_297F60 + (int)v15);
    v81 = *((_DWORD *)qword_297F20 + (int)v15);
    if ( v52 >= v81 )
      goto LABEL_79;
    goto LABEL_119;
  }
  if ( strstr((const char *)v4, "'MARKER'") )
    goto LABEL_45;
LABEL_80:
  v35 = (const char *)*((unsigned __int8 *)this + 1248);
  v36 = (char *)this + 1068;
  if ( !(_BYTE)v35 )
    goto LABEL_48;
LABEL_50:
  if ( v33 )
    goto LABEL_51;
LABEL_142:
  CoinMpsCardReader::strcpyAndCompress((CoinMpsCardReader *)v36, (char *)v4, v35);
  if ( v4 - v17 != 4 )
    *((_BYTE *)this + 1248) = 1;
  v40 = *((const char **)this + 112);
  v39 = nullptr;
LABEL_145:
  LODWORD(v15) = *((_DWORD *)this + 310);
  *((_QWORD *)this + 111) = v40;
  *(_QWORD *)this = 0xD4B249AD2594C37DLL;
  if ( (v15 & 0xFFFFFFF7) != 2 )
  {
    *((_DWORD *)this + 226) = 30;
    v33 = (CoinMpsCardReader *)v40;
    goto LABEL_61;
  }
  return (unsigned int)v15;
}

