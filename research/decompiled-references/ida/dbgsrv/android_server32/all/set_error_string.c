/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_string
// Address: 0x000757F0

//----- (000757F0) --------------------------------------------------------
_DWORD *__fastcall set_error_string(unsigned int a1, const char *a2)
{
  unsigned int v3; // r7
  int v4; // r4
  void **v5; // r5
  size_t v6; // r0
  size_t v7; // r7
  void *v8; // r6
  _DWORD *v9; // r4
  int v10; // r0
  size_t v11; // r6
  int v12; // r7
  char *v13; // r0
  _DWORD *v14; // r4
  void *v15; // r4
  _DWORD *result; // r0
  void *v17; // [sp+4h] [bp-8h]
  void *v18; // [sp+4h] [bp-8h]
  unsigned int v19; // [sp+8h] [bp-4h]
  unsigned int v20; // [sp+8h] [bp-4h]

  if ( a1 >= 4 )
  {
    if ( !under_debugger )
      interr(481);
    __debugbreak();
  }
  v3 = a1;
  v4 = 3 * a1;
  v5 = (void **)&_emutls_get_address((size_t *)dword_DE26C)[3 * a1 + 4];
  if ( a2 )
  {
    if ( *a2 )
    {
      v19 = v3;
      v6 = strlen(a2);
      if ( v6 )
      {
        v7 = v6;
        if ( _emutls_get_address((size_t *)dword_DE26C)[v4 + 6] >= v6 + 1 )
        {
          v17 = *v5;
        }
        else
        {
          v17 = qvector_reserve((int)v5, *v5, v7 + 1, 1u);
          *v5 = v17;
        }
        _emutls_get_address((size_t *)dword_DE26C)[v4 + 5] = v7 + 1;
        memmove(v17, a2, v7);
        *((_BYTE *)*v5 + v7) = 0;
      }
      else
      {
        _emutls_get_address((size_t *)dword_DE26C)[v4 + 5] = 0;
      }
      goto LABEL_15;
    }
    v10 = _strlen_chk(" ", 2);
    if ( v10 )
    {
      v11 = v10;
      v20 = v3;
      v12 = v10 + 1;
      if ( _emutls_get_address((size_t *)dword_DE26C)[v4 + 6] >= (unsigned int)(v10 + 1) )
      {
        v18 = *v5;
      }
      else
      {
        v18 = qvector_reserve((int)v5, *v5, v11 + 1, 1u);
        *v5 = v18;
      }
      v14 = &_emutls_get_address((size_t *)dword_DE26C)[v4];
      v14[5] = v12;
      memmove(v18, " ", v11);
      *((_BYTE *)*v5 + v11) = 0;
      if ( v14[5] )
        v13 = (char *)*v5;
      else
        v13 = byte_DE331;
      v3 = v20;
    }
    else
    {
      _emutls_get_address((size_t *)dword_DE26C)[v4 + 5] = 0;
      v13 = byte_DE331;
    }
    *v13 = 0;
  }
  else
  {
    v8 = *v5;
    if ( *v5 )
    {
      v9 = &_emutls_get_address((size_t *)dword_DE26C)[v4];
      v19 = v3;
      v9[5] = 0;
      qfree(v8);
      *v5 = nullptr;
      v9[6] = 0;
LABEL_15:
      v3 = v19;
    }
  }
  v15 = *v5;
  result = _emutls_get_address((size_t *)dword_DE26C);
  result[v3] = v15;
  return result;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DE26C: using guessed type int dword_DE26C[4];
// E0550: using guessed type char under_debugger;
