_BYTE *__fastcall sub_32E8C0(__int64 a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  __int64 v8; // rsi
  size_t v9; // rax
  const char *v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  _BYTE *v13; // rbx
  unsigned __int64 v14; // r13
  int v15; // r12d
  int v16; // eax
  _BYTE *v17; // rbp
  _BYTE *result; // rax
  char v19; // dl
  char *v20; // rax

  v8 = itext((unsigned int)a3, a2, a3);
  qstrncpy(a2, v8, 1024);
  v9 = strlen((const char *)a2);
  v11 = a2;
  v12 = *(_DWORD *)(a1 + 68);
  v13 = (_BYTE *)(v9 + a2);
  v14 = v11 + 1024;
  if ( v12 <= *(_DWORD *)(a1 + 72) )
  {
    v15 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 80) != v12 )
      {
        if ( v15 )
        {
          if ( (unsigned __int64)v13 >= v14 )
          {
            if ( !under_debugger )
            {
              interr(518, v8, v10, v11, a5);
              goto LABEL_32;
            }
LABEL_34:
            BUG();
          }
          v17 = v13 + 1;
          *v13 = 10;
          if ( (unsigned __int64)(v13 + 1) < v14 )
          {
            v8 = v14 - (_QWORD)v17;
          }
          else
          {
            v8 = 1;
            *(_BYTE *)(a2 + 1023) = 0;
            v17 = (_BYTE *)(a2 + 1023);
          }
        }
        else
        {
          v17 = v13;
          v8 = v14 - (_QWORD)v13;
        }
        ++v15;
        a5 = qsnprintf(v17, v8, "<%s:R>", *(const char **)(*(_QWORD *)(a1 + 56) + 8LL * v12));
        v13 = &v17[v16];
      }
      ++v12;
    }
    while ( v12 <= *(_DWORD *)(a1 + 72) );
    if ( v15 == 1 )
    {
      v8 = 10;
      v20 = strchr((const char *)a2, 10);
      if ( v20 )
        *(v20 - 1) = 49;
    }
  }
  if ( (unsigned __int64)v13 >= v14 )
    goto LABEL_32;
  v10 = ">\n\n<~V~alue:S::18::>\n\n";
  v8 = a2 + 1023;
  result = v13;
  if ( (_BYTE *)(a2 + 1023) == v13 )
  {
LABEL_26:
    *(_BYTE *)(a2 + 1023) = 0;
    if ( (*(_BYTE *)(a1 + 9) & 0x40) != 0 )
      v13[12] = 78;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v11 = *(unsigned __int8 *)v10++;
    *result = v11;
    if ( !(_BYTE)v11 )
      break;
    if ( ++result == (_BYTE *)v8 )
      goto LABEL_26;
  }
  if ( (*(_BYTE *)(a1 + 9) & 0x40) != 0 )
    v13[12] = 78;
  if ( (unsigned __int64)result >= v14 )
  {
LABEL_32:
    if ( under_debugger )
      goto LABEL_34;
    interr(520, v8, v10, v11, a5);
    return (_BYTE *)setup_data_dialog_t__::vfunc_5();
  }
  else
  {
    if ( (_BYTE *)v8 == result )
    {
LABEL_24:
      result = (_BYTE *)a2;
      *(_BYTE *)(a2 + 1023) = 0;
      return result;
    }
    while ( 1 )
    {
      v19 = *a4++;
      *result = v19;
      if ( !v19 )
        break;
      if ( (_BYTE *)v8 == ++result )
        goto LABEL_24;
    }
  }
  return result;
}
