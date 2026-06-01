/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_get_address
// Address: 0x0009BABC

//----- (0009BABC) --------------------------------------------------------
_DWORD *__fastcall _emutls_get_address(size_t *a1)
{
  _DWORD *result; // r0
  unsigned int v3; // r4
  char *v4; // r0
  char *v5; // r5
  char *v6; // r0
  pthread_key_t v7; // r0
  unsigned int v8; // r3
  int v9; // r6
  char *v10; // r0
  char *v11; // r5
  unsigned int v12; // [sp+4h] [bp-8h]

  if ( !sub_9B948() )
  {
    if ( !a1[2] )
      a1[2] = (size_t)sub_9B9BC(a1);
    return (_DWORD *)a1[2];
  }
  v3 = a1[2];
  sub_9B844();
  if ( !v3 )
  {
    sub_9BA78();
    sub_9BA28();
    v3 = a1[2];
    if ( !v3 )
    {
      v3 = ++dword_E07DC;
      sub_9B844();
      a1[2] = v3;
    }
    sub_9BA0C();
  }
  v4 = (char *)sub_9B964(dword_E07CC);
  v5 = v4;
  if ( v4 )
  {
    v8 = *((_DWORD *)v4 + 1);
    v12 = v8;
    if ( v3 <= v8 )
      goto LABEL_19;
    v9 = 2 * v8;
    if ( v3 > 2 * v8 )
      v9 = v3 + 32;
    v10 = (char *)realloc(v4, 4 * (v9 + 2));
    v5 = v10;
    if ( !v10 )
LABEL_11:
      abort();
    *((_DWORD *)v10 + 1) = v9;
    memset(&v10[4 * v12 + 8], 0, 4 * (v9 - v12));
    v7 = dword_E07CC;
  }
  else
  {
    v6 = (char *)calloc(v3 + 34, 4u);
    v5 = v6;
    if ( !v6 )
      goto LABEL_11;
    *(_DWORD *)v6 = 1;
    *((_DWORD *)v6 + 1) = v3 + 32;
    v7 = dword_E07CC;
  }
  sub_9B96C(v7, v5);
LABEL_19:
  v11 = &v5[4 * v3];
  result = *((_DWORD **)v11 + 1);
  if ( !result )
  {
    result = sub_9B9BC(a1);
    *((_DWORD *)v11 + 1) = result;
  }
  return result;
}
// E07CC: using guessed type int dword_E07CC;
// E07DC: using guessed type int dword_E07DC;
