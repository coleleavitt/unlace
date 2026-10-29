/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C888
// Address: 0x000000000040C888

//----- (000000000040C888) ----------------------------------------------------
bool __fastcall sub_40C888(__int64 a1, __int64 a2)
{
  FILE *v4; // x1
  __int64 v5; // x0
  double v6; // d0
  double v7; // d1
  double v8; // d2
  _BOOL4 v9; // w22
  char *v10; // x21
  int v12; // w0
  __int64 v13; // x0
  const char *v14; // x22
  char *v15; // x0
  const char *v16; // x22
  size_t v17; // x0
  const char *v18; // x21
  int v19; // w0
  size_t v20; // x0
  size_t v21; // x21
  unsigned __int64 v22; // x24
  void *v23; // x0
  void *ptr; // [xsp+60h] [xbp-20h] BYREF
  __int64 v25; // [xsp+68h] [xbp-18h]
  __int64 v26; // [xsp+70h] [xbp-10h]

  v4 = *(FILE **)(a1 + 2104);
  ptr = nullptr;
  v25 = 0;
  v26 = 0;
  v5 = sub_490E28((__int64)&ptr, v4);
  v9 = 0;
  v10 = (char *)ptr;
  if ( v5 > 0 )
  {
    *(_QWORD *)a2 = -1;
    *(_BYTE *)(a2 + 39) = 0;
    *(_WORD *)(a2 + 47) = 0;
    v12 = sub_49B8B8(
            v10,
            "%a-%a %7s %a %7s %llx%n",
            v6,
            v7,
            (const char *)a2,
            v8,
            (const char *)(a2 + 8),
            a2 + 32,
            (_DWORD *)(a2 + 16));
    v10 = (char *)ptr;
    if ( v12 == 6 )
    {
      v13 = v25;
      *(_BYTE *)(a2 + 48) = 1;
      v14 = (const char *)&qword_4B2D48;
      if ( v13 )
        v14 = v10;
      v15 = strchr(v14, 45);
      if ( v15 && (unsigned __int64)(v15 - v14 - 9) <= 0xFFFFFFFFFFFFFFF5LL )
      {
        *(_BYTE *)(a2 + 48) = 2;
        if ( *(_BYTE *)(a1 + 36) )
        {
          *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 32) = 8;
        }
        *(_DWORD *)(a1 + 276) = 8;
      }
      v16 = sub_49BBA0(v10);
      v17 = strlen(v16);
      v18 = &v16[v17];
      if ( v16 < &v16[v17] )
      {
        do
        {
          v19 = *((unsigned __int8 *)v18 - 1);
          if ( (v19 & 0x80) != 0 )
            break;
          if ( !isspace(v19) )
            break;
          *--v18 = 0;
        }
        while ( v16 != v18 );
      }
      if ( v18 - v16 > 10 && !strncmp(v18 - 10, " (deleted)", 0xAu) )
        *((_BYTE *)v18 - 10) = 0;
      if ( v16 && (v20 = strlen(v16), (v21 = v20) != 0) )
      {
        v22 = v20 + 1;
        v23 = *(void **)(a2 + 56);
        if ( v22 > *(_QWORD *)(a2 + 72) )
        {
          v23 = sub_491288(a2 + 56, *(void **)(a2 + 56), v22, 1u);
          *(_QWORD *)(a2 + 56) = v23;
        }
        *(_QWORD *)(a2 + 64) = v22;
        memmove(v23, v16, v21);
        *(_BYTE *)(*(_QWORD *)(a2 + 56) + v21) = 0;
        v10 = (char *)ptr;
      }
      else
      {
        v10 = (char *)ptr;
        *(_QWORD *)(a2 + 64) = 0;
      }
    }
    v9 = *(_QWORD *)a2 != -1;
  }
  if ( v10 )
  {
    v25 = 0;
    j__free(v10);
  }
  return v9;
}
// 40C95C: variable 'v6' is possibly undefined
// 40C95C: variable 'v7' is possibly undefined
// 40C95C: variable 'v8' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
