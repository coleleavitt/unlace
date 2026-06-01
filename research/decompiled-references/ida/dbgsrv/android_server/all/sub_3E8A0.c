/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E8A0
// Address: 0x000000000003E8A0

//----- (000000000003E8A0) ----------------------------------------------------
bool __fastcall sub_3E8A0(__int64 a1, __int64 a2)
{
  const char *v4; // x21
  char *v5; // x0
  __int64 v6; // x8
  char *v7; // x20
  size_t v8; // x0
  char *v9; // x22
  char *v10; // x21
  unsigned __int8 v11; // w8
  int v12; // t1
  _BOOL4 v13; // w19
  void *v14; // x0
  const char *v15; // x21
  size_t v16; // x0
  unsigned __int64 v17; // x22
  size_t v18; // x21
  void **v19; // x23
  void *v20; // x0
  int v22; // [xsp+Ch] [xbp-64h] BYREF
  void *ptr; // [xsp+10h] [xbp-60h] BYREF
  __int64 v24; // [xsp+18h] [xbp-58h]
  __int64 v25; // [xsp+20h] [xbp-50h]
  __int64 v26; // [xsp+28h] [xbp-48h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v24 = 0;
  v25 = 0;
  ptr = nullptr;
  if ( qgetline((__int64)&ptr, *(FILE **)(a1 + 1920)) <= 0 )
  {
    v13 = 0;
    v14 = ptr;
    if ( !ptr )
      return v13;
    goto LABEL_32;
  }
  *(_BYTE *)(a2 + 48) = 0;
  *(_QWORD *)a2 = -1;
  v22 = 0;
  *(_BYTE *)(a2 + 39) = 0;
  *(_BYTE *)(a2 + 47) = 0;
  if ( (unsigned int)qsscanf(
                       (const char *)ptr,
                       "%a-%a %7s %a %7s %llx%n",
                       a2,
                       a2 + 8,
                       a2 + 32,
                       a2 + 16,
                       a2 + 40,
                       a2 + 24,
                       &v22) == 6 )
  {
    *(_BYTE *)(a2 + 48) = 1;
    if ( v24 )
      v4 = (const char *)ptr;
    else
      v4 = &byte_F154B;
    v5 = strchr(v4, 45);
    if ( v5 && v5 - v4 != -1 && (unsigned __int64)(v5 - v4) >= 9 )
    {
      *(_BYTE *)(a2 + 48) = 2;
      if ( *(_BYTE *)(a1 + 36) )
      {
        v6 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 32) = 8;
        *(_QWORD *)(a1 + 24) = v6;
      }
      *(_DWORD *)(a1 + 244) = 8;
    }
    v7 = skip_spaces((char *)ptr + v22);
    v8 = strlen(v7);
    v9 = &v7[v8];
    if ( &v7[v8] > v7 )
    {
      v10 = &v7[v8];
      while ( 1 )
      {
        v12 = *--v10;
        v11 = v12;
        if ( v12 < 0 || !isspace(v11) )
          break;
        *(v9 - 1) = 0;
        v9 = v10;
        if ( v10 <= v7 )
          goto LABEL_21;
      }
    }
    v10 = v9;
LABEL_21:
    if ( v10 - v7 >= 11 && (v15 = v10 - 10, !strncmp(v15, " (deleted)", 0xAu)) )
    {
      *v15 = 0;
      if ( !v7 )
        goto LABEL_30;
    }
    else if ( !v7 )
    {
      goto LABEL_30;
    }
    v16 = strlen(v7);
    if ( v16 )
    {
      v17 = v16 + 1;
      v18 = v16;
      v19 = (void **)(a2 + 56);
      if ( *(_QWORD *)(a2 + 72) >= v16 + 1 )
      {
        v20 = *v19;
      }
      else
      {
        v20 = qvector_reserve((pthread_mutex_t *)(a2 + 56), *v19, v17, 1u);
        *v19 = v20;
      }
      *(_QWORD *)(a2 + 64) = v17;
      memmove(v20, v7, v18);
      *(_BYTE *)(*(_QWORD *)(a2 + 56) + v18) = 0;
      goto LABEL_31;
    }
LABEL_30:
    *(_QWORD *)(a2 + 64) = 0;
  }
LABEL_31:
  v13 = *(_QWORD *)a2 != -1;
  v14 = ptr;
  if ( ptr )
  {
LABEL_32:
    v24 = 0;
    qfree(v14);
    ptr = nullptr;
    v25 = 0;
  }
  return v13;
}
// F154B: using guessed type char byte_F154B;
