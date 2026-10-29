_BYTE *__fastcall sub_13AD00(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // rsi
  size_t v6; // rax
  __int64 v7; // rcx
  int v8; // r14d
  _BYTE *v9; // rbx
  unsigned __int64 v10; // r13
  int v11; // r12d
  _BYTE *v12; // rbp
  const char *v13; // rdx
  _BYTE *result; // rax
  char v15; // cl
  char v16; // dl
  char *v17; // rax

  v5 = itext();
  qstrncpy();
  v6 = strlen((const char *)a2);
  v7 = a2;
  v8 = *(_DWORD *)(a1 + 68);
  v9 = (_BYTE *)(v6 + a2);
  v10 = v7 + 1024;
  if ( v8 <= *(_DWORD *)(a1 + 72) )
  {
    v11 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 80) != v8 )
      {
        if ( v11 )
        {
          if ( (unsigned __int64)v9 >= v10 )
          {
            if ( !under_debugger )
            {
              interr();
              goto LABEL_32;
            }
LABEL_34:
            BUG();
          }
          v12 = v9 + 1;
          *v9 = 10;
          if ( (unsigned __int64)(v9 + 1) < v10 )
          {
            v5 = v10 - (_QWORD)v12;
          }
          else
          {
            v5 = 1;
            *(_BYTE *)(a2 + 1023) = 0;
            v12 = (_BYTE *)(a2 + 1023);
          }
        }
        else
        {
          v12 = v9;
          v5 = v10 - (_QWORD)v9;
        }
        ++v11;
        v9 = &v12[(int)qsnprintf()];
      }
      ++v8;
    }
    while ( v8 <= *(_DWORD *)(a1 + 72) );
    if ( v11 == 1 )
    {
      v5 = 10;
      v17 = strchr((const char *)a2, 10);
      if ( v17 )
        *(v17 - 1) = 49;
    }
  }
  if ( (unsigned __int64)v9 >= v10 )
    goto LABEL_32;
  v13 = ">\n\n<~V~alue:S::18::>\n\n";
  v5 = a2 + 1023;
  result = v9;
  if ( (_BYTE *)(a2 + 1023) == v9 )
  {
LABEL_26:
    *(_BYTE *)(a2 + 1023) = 0;
    if ( (*(_BYTE *)(a1 + 9) & 0x40) != 0 )
      v9[12] = 78;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v15 = *v13++;
    *result = v15;
    if ( !v15 )
      break;
    if ( ++result == (_BYTE *)v5 )
      goto LABEL_26;
  }
  if ( (*(_BYTE *)(a1 + 9) & 0x40) != 0 )
    v9[12] = 78;
  if ( (unsigned __int64)result >= v10 )
  {
LABEL_32:
    if ( under_debugger )
      goto LABEL_34;
    interr();
    return (_BYTE *)sub_13AF40(520, v5);
  }
  else
  {
    if ( (_BYTE *)v5 == result )
    {
LABEL_24:
      result = (_BYTE *)a2;
      *(_BYTE *)(a2 + 1023) = 0;
      return result;
    }
    while ( 1 )
    {
      v16 = *a4++;
      *result = v16;
      if ( !v16 )
        break;
      if ( (_BYTE *)v5 == ++result )
        goto LABEL_24;
    }
  }
  return result;
}

