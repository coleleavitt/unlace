/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450580
// Address: 0x00450580

//----- (00450580) --------------------------------------------------------
int __userpurge sub_450580@<eax>(int a1@<edi>, char *name, int a3, int a4, __int16 a5, int a6, _DWORD *a7)
{
  _DWORD *v7; // ebx
  const char *v8; // esi
  char *v9; // ebp
  _DWORD *v10; // edi
  struct hostent *v11; // eax
  int *v12; // ebx
  int **h_addr_list; // esi
  int *i; // eax
  _DWORD *v15; // eax
  int v16; // esi
  const char *v17; // edi
  int v18; // eax
  unsigned int v19; // kr04_4
  _BYTE *v20; // eax
  _BYTE *v21; // edi
  int v23; // [esp+10h] [ebp-820h]
  const char *v24; // [esp+14h] [ebp-81Ch]
  char v25; // [esp+24h] [ebp-80Ch] BYREF
  __m128i v26[64]; // [esp+25h] [ebp-80Bh] BYREF
  char v27; // [esp+428h] [ebp-408h] BYREF
  __m128i v28[64]; // [esp+429h] [ebp-407h] BYREF

  v7 = a7;
  v8 = name;
  v23 = 0;
  v25 = 0;
  sub_464890(v26, 0, 0x400u);
  v27 = 0;
  sub_464890(v28, 0, 0x400u);
  v24 = &v25;
  v9 = &v27;
  sub_46C902(a1, &v25, 1025, (int)name, 1024);
  while ( 1 )
  {
    v10 = v7;
    *v7 = 0;
    *v9 = 0;
    v11 = gethostbyname(v8);
    v12 = (int *)v11;
    if ( !v11 )
    {
      switch ( WSAGetLastError() )
      {
        case 11002:
          v16 = 11002;
          break;
        case 11003:
          return 11003;
        default:
          v16 = 11001;
          break;
      }
      return v16;
    }
    if ( v11->h_addrtype == 2 && v11->h_length == 4 )
    {
      h_addr_list = (int **)v11->h_addr_list;
      for ( i = *h_addr_list; *h_addr_list; i = *h_addr_list )
      {
        v15 = sub_4507B0(a3, a4, a5, *i);
        *v10 = v15;
        if ( !v15 )
          return 8;
        ++h_addr_list;
        v10 = v15 + 7;
      }
    }
    sub_46C902((int)v10, v9, 1025, *v12, 1024);
    v7 = a7;
    v16 = 0;
    if ( *a7 )
      break;
    if ( !strlen(v9) )
      return 11003;
    v17 = v24;
    v18 = strcmp(v24, v9);
    if ( v18 )
      v18 = v18 < 0 ? -1 : 1;
    if ( !v18 )
      return 11003;
    if ( ++v23 == 16 )
      return 11003;
    v8 = name;
    v24 = v9;
    v9 = (char *)v17;
  }
  if ( a6 )
  {
    v19 = strlen(v9);
    v20 = sub_46C90D(1u, v19 + 1);
    v21 = v20;
    if ( v20 )
      sub_46C78C(v19 + 1, (int)v20, v20, v19 + 1, (int)v9);
    *(_DWORD *)(*a7 + 20) = v21;
    if ( !*(_DWORD *)(*a7 + 20) )
      return 8;
  }
  return v16;
}
