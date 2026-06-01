/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80648B0
// Address: 0x080648B0

//----- (080648B0) --------------------------------------------------------
_DWORD *__userpurge sub_80648B0@<eax>(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  const char *v5; // eax
  const char *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  const char **v11; // eax
  const char *v12; // ecx
  const char *v13; // eax
  int v15; // [esp+0h] [ebp-24h]

  v3 = *(_DWORD **)(a2 + 8);
  v4 = (_DWORD *)(a2 + 4);
  if ( !v3 )
  {
LABEL_17:
    if ( v4 == *(_DWORD **)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v4;
      return a1;
    }
    v3 = v4;
    v10 = std::_Rb_tree_decrement(v4);
    v9 = *(_DWORD *)(v10 + 20);
    v4 = (_DWORD *)v10;
    v11 = (const char **)a3;
    if ( !*(_DWORD *)(a3 + 4) )
      goto LABEL_24;
LABEL_19:
    v12 = *v11;
    v13 = (const char *)&dword_80DDFD8;
    if ( v9 )
      goto LABEL_20;
    goto LABEL_21;
  }
  v15 = *(_DWORD *)(a3 + 4);
  do
  {
    v9 = v3[5];
    if ( !v9 )
    {
      if ( !v15 )
      {
        while ( 1 )
        {
          v4 = (_DWORD *)v3[3];
          if ( !v4 )
            break;
          v9 = v4[5];
          if ( v9 )
          {
            v5 = (const char *)v4[4];
            v6 = (const char *)&dword_80DDFD8;
            goto LABEL_5;
          }
          v3 = (_DWORD *)v3[3];
        }
        if ( !*(_DWORD *)(a3 + 4) )
        {
          *a1 = v3;
          a1[1] = 0;
          return a1;
        }
        v12 = *(const char **)a3;
        v4 = v3;
        v13 = (const char *)&dword_80DDFD8;
        goto LABEL_21;
      }
      v5 = (const char *)&dword_80DDFD8;
LABEL_4:
      v4 = v3;
      v6 = *(const char **)a3;
      goto LABEL_5;
    }
    v5 = (const char *)v3[4];
    if ( v15 )
      goto LABEL_4;
    v6 = (const char *)&dword_80DDFD8;
    v4 = v3;
LABEL_5:
    v7 = strcmp(v6, v5);
    v3 = (_DWORD *)v4[3];
    if ( v7 < 0 )
      v3 = (_DWORD *)v4[2];
    v8 = (v7 >> 31) & 1;
  }
  while ( v3 );
  if ( (_BYTE)v8 )
    goto LABEL_17;
  v11 = (const char **)a3;
  v3 = v4;
  if ( *(_DWORD *)(a3 + 4) )
    goto LABEL_19;
LABEL_24:
  v12 = (const char *)&dword_80DDFD8;
  if ( !v9 )
  {
LABEL_25:
    *a1 = v4;
    a1[1] = 0;
    return a1;
  }
LABEL_20:
  v13 = (const char *)v4[4];
LABEL_21:
  if ( strcmp(v13, v12) >= 0 )
    goto LABEL_25;
  *a1 = 0;
  a1[1] = v3;
  return a1;
}
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
