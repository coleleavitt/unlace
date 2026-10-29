/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F8D0
// Address: 0x0003F8D0

//----- (0003F8D0) --------------------------------------------------------
int __fastcall sub_3F8D0(int a1, int a2, int a3)
{
  int v3; // r6
  pthread_mutex_t *v5; // r10
  size_t v6; // r9
  int v7; // r8
  const char **v8; // r4
  int v9; // r11
  const char *v10; // r5
  size_t v12; // r0
  size_t v13; // r4
  unsigned int v14; // r6
  void *v15; // r0

  v3 = a2;
  if ( a2 )
  {
    v5 = (pthread_mutex_t *)dword_D4AB0;
    sub_7A268((pthread_mutex_t *)dword_D4AB0);
    v6 = strlen((const char *)v3);
    v7 = dword_D3CE8;
    if ( dword_D3CE8 )
    {
      v8 = (const char **)off_D3CEC;
      v9 = 0;
      while ( 1 )
      {
        v10 = *v8;
        if ( !strncmp((const char *)v3, *v8, v6) && --a3 < 0 )
          break;
        ++v9;
        v8 += 6;
        if ( v7 == v9 )
          goto LABEL_7;
      }
      v3 = 1;
      if ( a1 )
      {
        if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
        {
          v14 = v12 + 1;
          v15 = *(void **)a1;
          if ( v14 > *(_DWORD *)(a1 + 8) )
          {
            v15 = sub_78018(a1, *(void **)a1, v14, 1u);
            *(_DWORD *)a1 = v15;
          }
          *(_DWORD *)(a1 + 4) = v14;
          v3 = 1;
          memmove(v15, v10, v13);
          *(_BYTE *)(*(_DWORD *)a1 + v13) = 0;
        }
        else
        {
          v3 = 1;
          *(_DWORD *)(a1 + 4) = 0;
        }
      }
    }
    else
    {
LABEL_7:
      v3 = 0;
    }
    sub_7A290(v5);
  }
  return v3;
}
// D3CE8: using guessed type int dword_D3CE8;
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
// D4AB0: using guessed type int dword_D4AB0;
