/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092E00
// Address: 0x08092E00

//----- (08092E00) --------------------------------------------------------
char *__cdecl sub_8092E00(int a1)
{
  int v1; // ecx
  char *i; // esi
  int v3; // edx
  unsigned int v4; // edi
  int v5; // eax
  char *v6; // ecx
  char v7; // dl
  int v9; // eax
  int v10; // eax
  char v11; // dl
  char *v12; // eax
  char v13; // dl
  char v14; // [esp+0h] [ebp-24h]
  char *v15; // [esp+0h] [ebp-24h]
  char v16; // [esp+7h] [ebp-1Dh]

  v1 = -8388628;
  for ( i = *(char **)(a1 + 4); ; *(_DWORD *)(a1 + 4) = i )
  {
    v3 = (unsigned __int8)*i;
    if ( (unsigned __int8)(v3 - 9) > 0x17u )
      break;
    if ( _bittest(&v1, v3 - 9) && (unsigned __int8)(v3 - 11) > 1u )
    {
      v4 = (char)v3;
      goto LABEL_4;
    }
    ++i;
  }
  v4 = (char)v3;
  if ( (unsigned int)(char)v3 > 0x7F )
  {
    *(_BYTE *)(a1 + 368) = v3;
    v6 = i;
  }
  else
  {
LABEL_4:
    v14 = *i;
    v5 = isalpha(v4);
    v6 = i;
    v7 = v14;
    if ( v5 || v14 == 95 || v14 == 36 )
    {
      while ( 1 )
      {
        if ( v4 > 0x7F || (v16 = v7, v15 = v6, v9 = isalnum(v4), v6 = v15, v7 = v16, !v9) )
        {
          if ( v7 != 95 && v7 != 36 )
            break;
        }
        *(_DWORD *)(a1 + 4) = ++v6;
        v4 = *v6;
        v7 = *v6;
      }
    }
    *(_BYTE *)(a1 + 368) = v7;
    if ( !v7 )
      return i;
  }
  *v6 = 0;
  v10 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v10 + 1;
  v11 = *(_BYTE *)(v10 + 1);
  if ( (unsigned __int8)(v11 - 9) > 4u && v11 != 32 )
    return i;
  v12 = (char *)(v10 + 2);
  do
  {
    do
    {
      *(_DWORD *)(a1 + 4) = v12;
      v13 = *v12++;
    }
    while ( (unsigned __int8)(v13 - 9) <= 4u );
  }
  while ( v13 == 32 );
  return i;
}
