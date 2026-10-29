__int64 __fastcall sub_10B5A0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int16 *i; // rbx
  unsigned __int16 **v4; // rbx
  _UNKNOWN ***v5; // r12
  unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // edi
  int v11; // edx
  __int16 *v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  _BYTE *v19; // r13
  char *v20; // rax
  char *v21; // rcx
  int v22; // edx
  unsigned __int16 v23; // ax
  __int16 *v24; // rbx
  _BYTE *v25; // r14
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  char *v28; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int16 v32; // ax
  __int16 *v33; // rdx
  __int64 v34; // [rsp+8h] [rbp-850h]
  char v35[1024]; // [rsp+10h] [rbp-848h] BYREF
  char s1[1032]; // [rsp+410h] [rbp-448h] BYREF
  unsigned __int64 v37; // [rsp+818h] [rbp-40h]

  v2 = word_244280;
  v37 = __readfsqword(0x28u);
  for ( i = &word_244280; v2; i += 8 )
  {
    if ( (unsigned __int16)v2 <= 0xFFu )
    {
      s1[0] = v2;
      s1[1] = 0;
      *i = sub_19BE40(s1);
    }
    *((_QWORD *)i + 1) = 0;
    v2 = i[8];
  }
  v4 = (unsigned __int16 **)off_245040[0];
  v5 = off_245040;
  if ( off_245040[0] )
  {
    do
    {
      v6 = *v4;
      v7 = (unsigned __int64)v4[1] & 0xFFFFFFFFFFFFLL;
      if ( *v4 )
      {
LABEL_8:
        if ( !v7 )
        {
          v8 = sub_19B130(*v6);
          v9 = v8;
          if ( v8 )
          {
            if ( *(_QWORD *)(v8 + 48) > 1u )
            {
              v10 = *(unsigned __int16 *)(v8 + 170);
              if ( (unsigned __int16)v10 <= 0xFFu )
                v10 = toupper(v10);
              v11 = (unsigned __int16)word_244280;
              if ( word_244280 )
              {
                v12 = &word_244280;
                while ( v11 != v10 )
                {
                  v11 = (unsigned __int16)v12[8];
                  v12 += 8;
                  if ( !(_WORD)v11 )
                    goto LABEL_18;
                }
                *((_QWORD *)v12 + 1) = v9;
              }
            }
          }
        }
        goto LABEL_18;
      }
      while ( v7 )
      {
LABEL_18:
        v13 = (unsigned __int64)v4[3];
        v6 = v4[2];
        v4 += 2;
        v7 = v13 & 0xFFFFFFFFFFFFLL;
        if ( v6 )
          goto LABEL_8;
      }
      v4 = (unsigned __int16 **)v5[1];
      ++v5;
    }
    while ( v4 );
  }
  v17 = qalloc();
  v18 = v17 + 4096;
  v19 = (_BYTE *)v17;
  v20 = (char *)&unk_1D47E0;
  v21 = "c>";
  if ( !v17 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, char *))(*(_QWORD *)TProgram::application + 72LL))(
             TProgram::application,
             a2,
             v14,
             v21);
  while ( 1 )
  {
    v22 = (unsigned __int8)*v20++;
    *v19 = v22;
    if ( !(_BYTE)v22 )
      break;
    ++v19;
    if ( v20 == "c>" )
    {
      *(_BYTE *)(v17 + 4095) = 0;
      v19 = (_BYTE *)(v17 + 4095);
      break;
    }
  }
  v23 = word_244280;
  v24 = &word_244280;
  if ( word_244280 )
  {
    v34 = v17;
    v25 = v19;
    v26 = 4096;
    while ( 1 )
    {
      sub_19BA80(v23, v35, 1024);
      if ( !*((_QWORD *)v24 + 1) )
      {
        v32 = word_244160;
        if ( word_244160 )
        {
          v33 = &word_244160;
          do
          {
            if ( *v24 == v32 )
              break;
            v32 = v33[8];
            v33 += 8;
          }
          while ( v32 );
        }
      }
      v27 = (int)qsnprintf();
      v22 = v18 - (_DWORD)v25;
      if ( v18 - (unsigned __int64)v25 < v27 )
      {
        v26 += 4096;
        a2 = v26;
        v30 = qrealloc();
        if ( !v30 )
        {
          qfree();
          return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, char *))(*(_QWORD *)TProgram::application + 72LL))(
                   TProgram::application,
                   a2,
                   v14,
                   v21);
        }
        v31 = v34;
        v34 = v30;
        v18 = v30 + v26;
        v25 = &v25[v30 - v31];
      }
      if ( (unsigned __int64)v25 >= v18 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v21 = (char *)(v18 - 1);
      v28 = s1;
      if ( v25 == (_BYTE *)(v18 - 1) )
      {
LABEL_37:
        v24 += 8;
        *(_BYTE *)(v18 - 1) = 0;
        v25 = (_BYTE *)(v18 - 1);
        v23 = *v24;
        if ( !*v24 )
          goto LABEL_35;
      }
      else
      {
        while ( 1 )
        {
          v22 = (unsigned __int8)*v28++;
          *v25 = v22;
          if ( !(_BYTE)v22 )
            break;
          if ( ++v25 == v21 )
            goto LABEL_37;
        }
        v23 = v24[8];
        v24 += 8;
        if ( !v23 )
        {
LABEL_35:
          v17 = v34;
          break;
        }
      }
    }
  }
  tv_dynhelp = v17;
  sub_144300(TProgram::application, 65534, v22, (_DWORD)v21, v15, v16);
  return qfree();
}

