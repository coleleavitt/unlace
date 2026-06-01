/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F0E8
// Address: 0x0001F0E8

//----- (0001F0E8) --------------------------------------------------------
int __fastcall sub_1F0E8(int a1, _DWORD *a2)
{
  int v3; // r4
  char *v4; // r6
  char *v5; // r5
  char *v6; // r0
  unsigned int v7; // r1
  char *v8; // r5
  size_t v9; // r0
  char *v10; // r6
  unsigned int v11; // r5
  void **v12; // r7
  size_t v13; // r0
  size_t v14; // r5
  unsigned int v15; // r2
  void *v16; // r0
  _BYTE *v18; // [sp+18h] [bp-24h]
  unsigned int v19; // [sp+18h] [bp-24h]
  char *v20; // [sp+20h] [bp-1Ch]
  _DWORD *v21; // [sp+24h] [bp-18h]
  char *s; // [sp+2Ch] [bp-10h] BYREF
  int v23; // [sp+30h] [bp-Ch]
  int v24; // [sp+34h] [bp-8h]

  v3 = 0;
  v23 = 0;
  s = nullptr;
  v24 = 0;
  if ( qgetline(&s, *(FILE **)(a1 + 1012)) >= 1 )
  {
    *((_BYTE *)a2 + 40) = 0;
    *a2 = -1;
    *((_BYTE *)a2 + 39) = 0;
    *((_BYTE *)a2 + 31) = 0;
    v18 = a2 + 10;
    v21 = a2;
    if ( qsscanf((int)s, "%a-%a %7s %a %7s %llx%n") == 6 )
    {
      *v18 = 1;
      v4 = s;
      v5 = s;
      if ( !v23 )
        v4 = &byte_B3CBE;
      v6 = strchr(v4, 45);
      v7 = v6 - v4;
      if ( v6 && v7 != -1 && v7 >= 9 )
      {
        *v18 = 2;
        if ( !under_debugger )
          interr(2777);
        __debugbreak();
      }
      v8 = skip_spaces(v5);
      v9 = strlen(v8);
      v10 = &v8[v9];
      v20 = v8;
      if ( &v8[v9] > v8 )
      {
        while ( 1 )
        {
          v11 = (unsigned int)(v10 - 1);
          if ( *(v10 - 1) < 0 || !isspace((unsigned __int8)*(v10 - 1)) )
            break;
          *--v10 = 0;
          if ( v11 <= (unsigned int)v20 )
            goto LABEL_14;
        }
      }
      v11 = (unsigned int)v10;
LABEL_14:
      if ( (int)(v11 - (_DWORD)v20) >= 11 && !strncmp((const char *)(v11 - 10), " (deleted)", 0xAu) )
        *(_BYTE *)(v11 - 10) = 0;
      a2 = v21;
      v12 = (void **)(v21 + 11);
      if ( v20 && (v13 = strlen(v20)) != 0 )
      {
        v14 = v13;
        v15 = v13 + 1;
        if ( v21[13] >= v13 + 1 )
        {
          v16 = *v12;
        }
        else
        {
          v19 = v13 + 1;
          v16 = qvector_reserve((int)v12, *v12, v15, 1u);
          *v12 = v16;
          v15 = v19;
        }
        v21[12] = v15;
        memmove(v16, v20, v14);
        *(_BYTE *)(v21[11] + v14) = 0;
      }
      else
      {
        v21[12] = 0;
      }
    }
    v3 = *a2 + 1 - (*a2 + (*a2 == -1));
  }
  if ( s )
  {
    v23 = 0;
    qfree(s);
    v24 = 0;
    s = nullptr;
  }
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
