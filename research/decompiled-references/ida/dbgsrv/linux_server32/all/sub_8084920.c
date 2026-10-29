/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084920
// Address: 0x08084920

//----- (08084920) --------------------------------------------------------
int __cdecl sub_8084920(_DWORD *a1, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  const char *v5; // ecx
  const char *v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  const char *v14; // ecx
  const char *v15; // eax
  int v16; // eax
  _DWORD *v18; // [esp+0h] [ebp-28h]
  _DWORD *v19; // [esp+0h] [ebp-28h]
  _DWORD *v20; // [esp+8h] [ebp-20h]
  _DWORD *v21; // [esp+2Ch] [ebp+4h]

  while ( 2 )
  {
    v3 = (_DWORD *)a1[2];
    if ( !v3 )
      goto LABEL_14;
    v20 = a1 + 1;
    v18 = a1 + 1;
    v21 = a1;
    v4 = *(_DWORD *)(a2 + 4);
    while ( 1 )
    {
      v10 = v3[5];
      if ( !v4 )
        break;
      v5 = *(const char **)a2;
      if ( v10 )
        goto LABEL_13;
      v6 = (const char *)&dword_80DDFD8;
      v7 = v3;
LABEL_5:
      v8 = strcmp(v6, v5);
      v9 = (_DWORD *)v3[2];
      v3 = (_DWORD *)v3[3];
      if ( v8 >= 0 )
      {
        v18 = v7;
        v3 = v9;
      }
      if ( !v3 )
      {
        v12 = v20;
        v13 = v18;
        a1 = v21;
        goto LABEL_18;
      }
    }
    if ( v10 )
    {
LABEL_12:
      v5 = (const char *)&dword_80DDFD8;
LABEL_13:
      v6 = (const char *)v3[4];
      v7 = v3;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v11 = v3[2];
      if ( !v11 )
        break;
      v18 = v3;
      v3 = (_DWORD *)v3[2];
      if ( *(_DWORD *)(v11 + 20) )
        goto LABEL_12;
    }
    v12 = v20;
    a1 = v21;
    v13 = v3;
LABEL_18:
    if ( v12 != v13 )
    {
      if ( v13[5] )
      {
        v14 = (const char *)v13[4];
        v15 = (const char *)&dword_80DDFD8;
        if ( v4 )
          goto LABEL_21;
        goto LABEL_22;
      }
      if ( !v4 )
        return v13[7];
      v14 = (const char *)&dword_80DDFD8;
LABEL_21:
      v15 = *(const char **)a2;
LABEL_22:
      v19 = v13;
      v16 = strcmp(v15, v14);
      v13 = v19;
      if ( v16 >= 0 )
        return v13[7];
    }
LABEL_14:
    if ( a1[6] || a1[7] )
    {
      a1 = (_DWORD *)sub_8080DD0(a1[6]);
      continue;
    }
    return -1;
  }
}
// 80DDFD8: using guessed type int dword_80DDFD8;
