/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808DC70
// Address: 0x0808DC70

//----- (0808DC70) --------------------------------------------------------
int __cdecl sub_808DC70(_DWORD *a1, int a2, const char **a3, unsigned __int8 **a4)
{
  int v4; // edi
  unsigned __int8 *v5; // esi
  const char *v6; // ebp
  const char *v7; // ecx
  const char *v8; // eax
  unsigned __int8 *v9; // edi
  int v10; // eax
  unsigned __int8 *v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  const char *v16; // ecx
  const char *v17; // eax
  int v18; // eax
  unsigned __int8 *v20; // esi
  unsigned __int8 *v21; // [esp+0h] [ebp-38h]
  unsigned __int8 *v22; // [esp+0h] [ebp-38h]

  v4 = a2;
  v5 = *(unsigned __int8 **)(a2 + 8);
  if ( !v5 )
    return sub_808CC00(a1, v4, (int)a3, a4);
  v6 = a3[1];
  v21 = (unsigned __int8 *)(a2 + 4);
  while ( 1 )
  {
    v12 = *((_DWORD *)v5 + 5);
    if ( !v6 )
      break;
    v7 = *a3;
    if ( v12 )
      goto LABEL_13;
    v8 = (const char *)&dword_80DDFD8;
    v9 = v5;
LABEL_5:
    v10 = strcmp(v8, v7);
    v11 = *((unsigned __int8 **)v5 + 2);
    v5 = *((unsigned __int8 **)v5 + 3);
    if ( v10 >= 0 )
    {
      v21 = v9;
      v5 = v11;
    }
    if ( !v5 )
    {
      v14 = v21;
      v15 = (unsigned __int8 *)(a2 + 4);
      v4 = a2;
      goto LABEL_15;
    }
  }
  if ( v12 )
  {
LABEL_12:
    v7 = (const char *)&dword_80DDFD8;
LABEL_13:
    v8 = *((const char **)v5 + 4);
    v9 = v5;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)v5 + 2);
    if ( !v13 )
      break;
    v21 = v5;
    v5 = *((unsigned __int8 **)v5 + 2);
    if ( *(_DWORD *)(v13 + 20) )
      goto LABEL_12;
  }
  v15 = (unsigned __int8 *)(a2 + 4);
  v4 = a2;
  v14 = v5;
LABEL_15:
  if ( v15 == v14 )
    return sub_808CC00(a1, v4, (int)a3, a4);
  if ( !*((_DWORD *)v14 + 5) )
  {
    v16 = (const char *)&dword_80DDFD8;
    if ( v6 )
      goto LABEL_18;
    goto LABEL_23;
  }
  v16 = *((const char **)v14 + 4);
  v17 = (const char *)&dword_80DDFD8;
  if ( v6 )
LABEL_18:
    v17 = *a3;
  v22 = v14;
  v18 = strcmp(v17, v16);
  v14 = v22;
  if ( v18 < 0 )
    return sub_808CC00(a1, v4, (int)a3, a4);
LABEL_23:
  v20 = v14 + 28;
  sub_8089810(*a4, v14 + 28);
  *a4 = v20;
  return 1;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
