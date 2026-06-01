/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B0AC0
// Address: 0x080B0AC0

//----- (080B0AC0) --------------------------------------------------------
_DWORD *__userpurge sub_80B0AC0@<eax>(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // ebp
  const char *v6; // ecx
  const char *v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // edx
  const char *v14; // ecx
  const char *v15; // eax
  int v16; // eax
  _DWORD *v18; // [esp+0h] [ebp-28h]
  _DWORD *v19; // [esp+0h] [ebp-28h]

  v3 = *(_DWORD **)(a2 + 8);
  v4 = (_DWORD *)(a2 + 4);
  if ( !v3 )
    goto LABEL_21;
  v18 = (_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a3 + 4);
  while ( 1 )
  {
    v11 = v3[5];
    if ( !v5 )
      break;
    v6 = *(const char **)a3;
    if ( v11 )
      goto LABEL_13;
    v7 = (const char *)&dword_80DDFD8;
    v8 = v3;
LABEL_5:
    v9 = strcmp(v7, v6);
    v10 = (_DWORD *)v3[2];
    v3 = (_DWORD *)v3[3];
    if ( v9 >= 0 )
    {
      v18 = v8;
      v3 = v10;
    }
    if ( !v3 )
    {
      v4 = (_DWORD *)(a2 + 4);
      v13 = v18;
      goto LABEL_15;
    }
  }
  if ( v11 )
  {
LABEL_12:
    v6 = (const char *)&dword_80DDFD8;
LABEL_13:
    v7 = (const char *)v3[4];
    v8 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v3[2];
    if ( !v12 )
      break;
    v18 = v3;
    v3 = (_DWORD *)v3[2];
    if ( *(_DWORD *)(v12 + 20) )
      goto LABEL_12;
  }
  v4 = (_DWORD *)(a2 + 4);
  v13 = v3;
LABEL_15:
  if ( v4 != v13 )
  {
    if ( !v13[5] )
    {
      v14 = (const char *)&dword_80DDFD8;
      if ( v5 )
      {
        v15 = *(const char **)a3;
        goto LABEL_19;
      }
      goto LABEL_20;
    }
    v14 = (const char *)v13[4];
    v15 = (const char *)&dword_80DDFD8;
    if ( v5 )
      v15 = *(const char **)a3;
LABEL_19:
    v19 = v13;
    v16 = strcmp(v15, v14);
    v13 = v19;
    if ( v16 >= 0 )
    {
LABEL_20:
      *a1 = v13;
      return a1;
    }
  }
LABEL_21:
  *a1 = v4;
  return a1;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
