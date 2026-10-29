/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805D440
// Address: 0x0805D440

//----- (0805D440) --------------------------------------------------------
int __cdecl sub_805D440(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // ecx
  char *v6; // esi
  char *v7; // eax
  size_t v8; // eax
  const char *v9; // esi
  size_t v10; // eax
  size_t v11; // esi
  unsigned int v12; // ecx
  void *v13; // eax
  int v14; // [esp-10h] [ebp-54h]
  int v15; // [esp-Ch] [ebp-50h]
  int v16; // [esp-8h] [ebp-4Ch]
  unsigned int v17; // [esp+0h] [ebp-44h]
  const char *v18; // [esp+8h] [ebp-3Ch]
  char *s; // [esp+1Ch] [ebp-28h] BYREF
  int v20; // [esp+20h] [ebp-24h]
  int v21; // [esp+24h] [ebp-20h]
  unsigned int v22; // [esp+28h] [ebp-1Ch]

  v22 = __readgsdword(0x14u);
  s = nullptr;
  v20 = 0;
  v21 = 0;
  if ( (int)sub_80CF4E0(&s, *(FILE **)(a1 + 760)) <= 0 )
  {
    v3 = 0;
  }
  else
  {
    *(_DWORD *)a2 = -1;
    *(_BYTE *)(a2 + 27) = 0;
    *(_WORD *)(a2 + 35) = 0;
    if ( sub_80D3B90((int)s, "%a-%a %7s %a %7s %llx%n", a2) == 6 )
    {
      v5 = v20;
      v6 = s;
      *(_BYTE *)(a2 + 36) = 1;
      if ( v5 )
      {
        v7 = strchr(v6, 45);
        if ( v7 )
        {
          if ( (unsigned int)(v7 - v6 - 9) <= 0xFFFFFFF5 )
          {
            *(_BYTE *)(a2 + 36) = 2;
            if ( !byte_811F8A1 )
            {
              if ( v22 == __readgsdword(0x14u) )
                sub_80CFF40(2777, v14, v15, v16);
              sub_80D7AB0();
            }
            BUG();
          }
        }
      }
      v18 = sub_80D3D40(v6);
      v8 = strlen(v18);
      v9 = &v18[v8];
      if ( v18 < &v18[v8] )
      {
        while ( (unsigned int)*(v9 - 1) <= 0x7F && isspace(*(v9 - 1)) )
        {
          *--v9 = 0;
          if ( v18 == v9 )
            goto LABEL_17;
        }
      }
      if ( v9 - v18 > 10 && !strncmp(v9 - 10, " (deleted)", 0xAu) )
        *((_BYTE *)v9 - 10) = 0;
LABEL_17:
      if ( v18 && (v10 = strlen(v18), (v11 = v10) != 0) )
      {
        v12 = v10 + 1;
        v13 = *(void **)(a2 + 40);
        if ( *(_DWORD *)(a2 + 48) < v12 )
        {
          v17 = v12;
          v13 = sub_80CF920(a2 + 40, v13, v12, 1u);
          *(_DWORD *)(a2 + 40) = v13;
          v12 = v17;
        }
        *(_DWORD *)(a2 + 44) = v12;
        memmove(v13, v18, v11);
        *(_BYTE *)(*(_DWORD *)(a2 + 40) + v11) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 44) = 0;
      }
    }
    v2 = a2;
    LOBYTE(v2) = *(_DWORD *)a2 != -1;
    v3 = v2;
  }
  if ( s )
  {
    v20 = 0;
    sub_80CF780(s);
  }
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
// 805D6A6: variable 'v14' is possibly undefined
// 805D6A6: variable 'v15' is possibly undefined
// 805D6A6: variable 'v16' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
