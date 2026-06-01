/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21760
// Address: 0x00021760

//----- (00021760) --------------------------------------------------------
int __cdecl sub_21760(int a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  const char *v4; // esi
  char *v5; // eax
  unsigned int v6; // eax
  char *v7; // esi
  size_t v8; // eax
  char *i; // edi
  const char *v10; // edi
  size_t v11; // eax
  size_t v12; // edi
  void **v13; // ecx
  size_t v14; // edx
  void *v15; // eax
  int v16; // esi
  char *v18; // [esp-Ch] [ebp-48h]
  int v19; // [esp+18h] [ebp-24h] BYREF
  int v20; // [esp+1Ch] [ebp-20h]
  int v21; // [esp+20h] [ebp-1Ch]
  unsigned int v22; // [esp+28h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( qgetline(&v19, *(FILE **)(a1 + 668)) <= 0 )
  {
    v3 = 0;
    goto LABEL_26;
  }
  v2 = (_DWORD *)a2;
  *(_DWORD *)a2 = -1;
  *(_BYTE *)(a2 + 36) = 0;
  *(_BYTE *)(a2 + 27) = 0;
  *(_BYTE *)(a2 + 35) = 0;
  if ( qsscanf(v19, "%a-%a %7s %a %7s %llx%n", a2) == 6 )
  {
    *(_BYTE *)(a2 + 36) = 1;
    if ( v20 )
      v4 = (const char *)v19;
    else
      v4 = byte_EF875;
    v5 = strchr(v4, 45);
    if ( v5 )
    {
      v6 = v5 - v4;
      if ( v6 != -1 && v6 >= 9 )
      {
        *(_BYTE *)(a2 + 36) = 2;
        if ( !(_BYTE)under_debugger )
          interr(2777);
        BUG();
      }
    }
    v7 = skip_spaces((char *)v19);
    v8 = strlen(v7);
    for ( i = &v7[v8]; i > v7; *--i = 0 )
    {
      if ( *(i - 1) < 0 )
        break;
      if ( !isspace((unsigned __int8)*(i - 1)) )
        break;
    }
    if ( i - v7 >= 11 && (v10 = i - 10, !strncmp(v10, " (deleted)", 0xAu)) )
    {
      *v10 = 0;
      if ( v7 )
      {
LABEL_18:
        v11 = strlen(v7);
        if ( v11 )
        {
          v12 = v11;
          v13 = (void **)(a2 + 40);
          v14 = v11 + 1;
          if ( *(_DWORD *)(a2 + 48) >= v11 + 1 )
          {
            v15 = *v13;
          }
          else
          {
            v15 = qvector_reserve(a2 + 40, *v13, v11 + 1, 1u);
            *(_DWORD *)(a2 + 40) = v15;
            v14 = v12 + 1;
          }
          *(_DWORD *)(a2 + 44) = v14;
          v18 = v7;
          v2 = (_DWORD *)a2;
          memmove(v15, v18, v12);
          *(_BYTE *)(*(_DWORD *)(a2 + 40) + v12) = 0;
          goto LABEL_25;
        }
      }
    }
    else if ( v7 )
    {
      goto LABEL_18;
    }
    v2 = (_DWORD *)a2;
    *(_DWORD *)(a2 + 44) = 0;
  }
LABEL_25:
  LOBYTE(v3) = *v2 != -1;
LABEL_26:
  if ( v19 )
  {
    v16 = v3;
    v20 = 0;
    qfree((void *)v19);
    v19 = 0;
    v21 = 0;
    return v16;
  }
  return v3;
}
// 2195C: variable 'v3' is possibly undefined
// 13E34C: using guessed type int under_debugger;
