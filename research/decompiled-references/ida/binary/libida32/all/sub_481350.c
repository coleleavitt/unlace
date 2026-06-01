bool __fastcall sub_481350(__int64 a1, __int64 a2, char a3)
{
  char v5; // dl
  bool result; // al
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rax
  const char *v10; // rsi
  const char *v11; // rsi
  __int64 v12; // rax
  const char *v13; // rsi
  const char *v14; // rdi
  int v15; // edx
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // edx
  __int64 v20; // rax
  const char *v21; // rsi
  const char *v22; // rdi
  int v23; // edx
  const char *v24; // rdi
  const char *v25; // rdi

  if ( !a3
    || (*(_BYTE *)(a1 + 400) & 2) != 0
    || (*(_BYTE *)(a1 + 184) & 0x2F) != 0xD
    || (*(_BYTE *)(a2 + 400) & 2) != 0
    || (*(_BYTE *)(a2 + 184) & 0x2F) != 0xD )
  {
    v9 = *(_QWORD *)(a1 + 160);
    if ( *(_QWORD *)(a2 + 160) )
    {
      v10 = *(const char **)(a2 + 152);
      v24 = haystack;
      if ( !v9 )
        goto LABEL_35;
    }
    else
    {
      v10 = haystack;
      if ( !v9 )
      {
LABEL_17:
        v11 = byte_2389C44;
        if ( *(_QWORD *)(a1 + 136) <= 1u )
        {
          if ( *(_QWORD *)(a2 + 32) )
            v11 = *(const char **)(a2 + 24);
          v25 = byte_2389C44;
          if ( *(_QWORD *)(a1 + 32) )
            v25 = *(const char **)(a1 + 24);
          if ( !strcmp(v25, v11) )
          {
LABEL_21:
            v12 = *(_QWORD *)(a1 + 56);
            if ( *(_QWORD *)(a2 + 56) )
            {
              v13 = *(const char **)(a2 + 48);
              v14 = byte_2389C44;
              if ( !v12 )
              {
LABEL_24:
                v15 = strcmp(v14, v13);
                result = 0;
                if ( v15 )
                  return result;
LABEL_25:
                v16 = *(_QWORD *)(a1 + 104);
                if ( *(_QWORD *)(a2 + 104) )
                {
                  v17 = *(const char **)(a2 + 96);
                  v18 = byte_2389C44;
                  if ( !v16 )
                    goto LABEL_27;
                }
                else
                {
                  v17 = byte_2389C44;
                  if ( !v16 )
                    goto LABEL_28;
                }
                v18 = *(const char **)(a1 + 96);
LABEL_27:
                v19 = strcmp(v18, v17);
                result = 0;
                if ( v19 )
                  return result;
LABEL_28:
                v20 = *(_QWORD *)(a1 + 80);
                if ( *(_QWORD *)(a2 + 80) )
                {
                  v21 = *(const char **)(a2 + 72);
                  v22 = haystack;
                  if ( !v20 )
                    goto LABEL_31;
                }
                else
                {
                  v21 = haystack;
                  if ( !v20 )
                    return *(_DWORD *)(a1 + 120) == *(_DWORD *)(a2 + 120);
                }
                v22 = *(const char **)(a1 + 72);
LABEL_31:
                v23 = strcmp(v22, v21);
                result = 0;
                if ( v23 )
                  return result;
                return *(_DWORD *)(a1 + 120) == *(_DWORD *)(a2 + 120);
              }
            }
            else
            {
              v13 = byte_2389C44;
              if ( !v12 )
                goto LABEL_25;
            }
            v14 = *(const char **)(a1 + 48);
            goto LABEL_24;
          }
        }
        else
        {
          if ( *(_QWORD *)(a2 + 136) )
            v11 = *(const char **)(a2 + 128);
          if ( !strcmp(*(const char **)(a1 + 128), v11) )
            goto LABEL_21;
        }
        return 0;
      }
    }
    v24 = *(const char **)(a1 + 152);
LABEL_35:
    if ( strcmp(v24, v10) )
      return 0;
    goto LABEL_17;
  }
  v5 = *(_BYTE *)(a2 + 184) & 0x3F;
  result = 0;
  if ( (*(_BYTE *)(a1 + 184) & 0x3F) == 0x1D )
  {
    if ( v5 != 29 )
      return result;
  }
  else if ( v5 == 29 )
  {
    return result;
  }
  result = 0;
  if ( ((*(_DWORD *)(a1 + 404) ^ *(_DWORD *)(a2 + 404)) & 0xFFFFFDFF) == 0
    && *(_WORD *)(a1 + 408) == *(_WORD *)(a2 + 408) )
  {
    v7 = haystack;
    if ( *(_QWORD *)(a2 + 160) )
      v7 = *(const char **)(a2 + 152);
    v8 = haystack;
    if ( *(_QWORD *)(a1 + 160) )
      v8 = *(const char **)(a1 + 152);
    return strcmp(v8, v7) == 0;
  }
  return result;
}

