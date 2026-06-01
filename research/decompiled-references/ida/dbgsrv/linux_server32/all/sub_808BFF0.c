/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808BFF0
// Address: 0x0808BFF0

//----- (0808BFF0) --------------------------------------------------------
int __cdecl sub_808BFF0(_DWORD *a1, _DWORD *a2, const char **a3, unsigned __int8 *a4)
{
  _DWORD *v4; // edi
  const char **v5; // ebp
  unsigned int i; // eax
  int v7; // eax
  int v8; // edx
  int result; // eax
  unsigned __int8 *v10; // ebp
  unsigned __int8 *v11; // esi
  const char *v12; // ecx
  const char *v13; // eax
  unsigned __int8 *v14; // edi
  int v15; // eax
  unsigned __int8 *v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned __int8 *v19; // edx
  unsigned __int8 *v20; // ecx
  const char *v21; // edx
  const char *v22; // eax
  int v23; // eax
  unsigned __int8 *v24; // esi
  const char *v25; // [esp+0h] [ebp-48h]
  unsigned __int8 *v26; // [esp+0h] [ebp-48h]
  int v27[3]; // [esp+18h] [ebp-30h] BYREF
  const char **v28; // [esp+24h] [ebp-24h] BYREF
  unsigned int v29; // [esp+28h] [ebp-20h]

  v4 = a2;
  v5 = a3;
  v29 = __readgsdword(0x14u);
  for ( i = a2[7]; i; i = *(_DWORD *)(v7 + 24) )
  {
    v7 = sub_8080D50(a1[1], i);
    v8 = *(_DWORD *)(v7 + 48);
    if ( v8 != -1 )
    {
      result = sub_808BC30(a1, (int)a2, v8, (int)a3, a4, 0);
      goto LABEL_6;
    }
  }
  if ( !a2[2] )
  {
    v20 = (unsigned __int8 *)(a2 + 1);
    goto LABEL_27;
  }
  v10 = (unsigned __int8 *)a2[2];
  v11 = (unsigned __int8 *)(a2 + 1);
  v25 = a3[1];
  while ( 1 )
  {
    v17 = *((_DWORD *)v10 + 5);
    if ( !v25 )
      break;
    v12 = *a3;
    if ( v17 )
      goto LABEL_20;
    v13 = (const char *)&dword_80DDFD8;
    v14 = v10;
LABEL_12:
    v15 = strcmp(v13, v12);
    v16 = *((unsigned __int8 **)v10 + 2);
    v10 = *((unsigned __int8 **)v10 + 3);
    if ( v15 >= 0 )
    {
      v11 = v14;
      v10 = v16;
    }
    if ( !v10 )
    {
      v19 = (unsigned __int8 *)(a2 + 1);
      v4 = a2;
      v20 = v11;
      v5 = a3;
      goto LABEL_22;
    }
  }
  if ( v17 )
  {
LABEL_19:
    v12 = (const char *)&dword_80DDFD8;
LABEL_20:
    v13 = *((const char **)v10 + 4);
    v14 = v10;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v18 = *((_DWORD *)v10 + 2);
    if ( !v18 )
      break;
    v11 = v10;
    v10 = *((unsigned __int8 **)v10 + 2);
    if ( *(_DWORD *)(v18 + 20) )
      goto LABEL_19;
  }
  v24 = v10;
  v19 = (unsigned __int8 *)(a2 + 1);
  v4 = a2;
  v5 = a3;
  v20 = v24;
LABEL_22:
  if ( v20 == v19 )
    goto LABEL_27;
  if ( *((_DWORD *)v20 + 5) )
  {
    v21 = *((const char **)v20 + 4);
    v22 = (const char *)&dword_80DDFD8;
    if ( v25 )
      v22 = *v5;
LABEL_26:
    v26 = v20;
    v23 = strcmp(v22, v21);
    v20 = v26;
    if ( v23 < 0 )
    {
LABEL_27:
      v28 = v5;
      sub_8089660(v27, v4, v20, (int *)&v28);
      v20 = (unsigned __int8 *)v27[0];
    }
  }
  else
  {
    v21 = (const char *)&dword_80DDFD8;
    if ( v25 )
    {
      v22 = *v5;
      goto LABEL_26;
    }
  }
  sub_8089810(v20 + 28, a4);
  result = 1;
LABEL_6:
  if ( v29 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
