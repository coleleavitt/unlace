/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D44C
// Address: 0x0003D44C

//----- (0003D44C) --------------------------------------------------------
_DWORD *__fastcall sub_3D44C(const char *a1, int a2)
{
  pthread_mutex_t *v4; // r8
  _DWORD *v5; // r5
  int v6; // r9
  _DWORD *v7; // r4
  _DWORD *v8; // t1
  const char *v9; // r1

  if ( !a1 )
    return nullptr;
  v4 = (pthread_mutex_t *)dword_D3A00;
  sub_7A100((pthread_mutex_t *)dword_D3A00);
  if ( a2 != 2 )
  {
    v5 = (_DWORD *)dword_D39F4;
    v6 = dword_D39F4 + 4 * dword_D39F8;
    if ( dword_D39F4 != v6 )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)*v5++;
        v7 = v8;
        if ( v8 )
        {
          v9 = (const char *)v7[4];
          if ( a2 )
            v9 = (const char *)v7[3];
          if ( v9 && !strcasecmp(a1, v9) )
            goto LABEL_15;
        }
        if ( (_DWORD *)v6 == v5 )
          goto LABEL_10;
      }
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)a1 >= (unsigned int)dword_D39F8 )
  {
LABEL_10:
    v7 = nullptr;
    goto LABEL_11;
  }
  v7 = *(_DWORD **)(dword_D39F4 + 4 * *(_DWORD *)a1);
  if ( v7 )
LABEL_15:
    ++v7[2];
LABEL_11:
  sub_7A128(v4);
  return v7;
}
// D39F4: using guessed type int dword_D39F4;
// D39F8: using guessed type int dword_D39F8;
// D3A00: using guessed type int dword_D3A00;
