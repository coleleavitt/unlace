/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DA0
// Address: 0x00048DA0

//----- (00048DA0) --------------------------------------------------------
int __cdecl sub_48DA0(_DWORD *a1)
{
  char *v1; // eax
  _DWORD *v2; // esi
  unsigned int v3; // edi
  const char *v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // edi
  const char *v7; // eax
  _DWORD *v8; // ecx
  unsigned int v9; // esi
  const char *v10; // eax
  _DWORD *v11; // edi
  char *v13; // [esp+8h] [ebp-24h]
  unsigned int v14; // [esp+10h] [ebp-1Ch]
  unsigned int v15; // [esp+10h] [ebp-1Ch]
  _DWORD *v16; // [esp+14h] [ebp-18h]
  int v17; // [esp+18h] [ebp-14h]

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  v13 = v1;
  v14 = a1[20];
  if ( v14 )
  {
    v2 = (_DWORD *)(a1[19] + 4);
    v3 = 0;
    while ( 1 )
    {
      v4 = byte_EF875;
      if ( *v2 )
        v4 = (const char *)*(v2 - 1);
      if ( !strcmp(v4, v13) )
        break;
      ++v3;
      v2 += 3;
      if ( v3 >= v14 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v16 = a1 + 16;
    v15 = a1[17];
    if ( v15 )
    {
      v17 = *v16;
      v5 = (_DWORD *)(*v16 + 4);
      v6 = 0;
      while ( 1 )
      {
        v7 = byte_EF875;
        if ( *v5 )
          v7 = (const char *)*(v5 - 1);
        if ( !strcmp(v7, v13) )
          break;
        ++v6;
        v5 += 3;
        if ( v6 >= v15 )
        {
          v8 = (_DWORD *)(v17 + 4);
          v9 = 0;
          while ( 1 )
          {
            v10 = byte_EF875;
            if ( *v8 )
              v10 = (const char *)*(v8 - 1);
            v11 = v8;
            if ( !strcmp(v10, v13) )
              goto LABEL_23;
            ++v9;
            v8 = v11 + 3;
            if ( v9 >= v15 )
              goto LABEL_21;
          }
        }
      }
    }
    else
    {
LABEL_21:
      if ( sub_4B430((int)v16, v13) != -1 )
        return 0;
    }
  }
LABEL_23:
  set_error_string(0, v13);
  return set_qerrno(52);
}
