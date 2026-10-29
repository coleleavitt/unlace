/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_string
// Address: 0x000A35B0

//----- (000A35B0) --------------------------------------------------------
_DWORD *__cdecl set_error_string(unsigned int a1, char *s)
{
  void **v2; // ecx
  size_t v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  char *v6; // eax
  void *v7; // esi
  _DWORD *result; // eax
  void **v9; // [esp+1Ch] [ebp-30h]
  void **v10; // [esp+1Ch] [ebp-30h]
  void *v11; // [esp+20h] [ebp-2Ch]
  void *v12; // [esp+20h] [ebp-2Ch]
  size_t v13; // [esp+24h] [ebp-28h]
  _DWORD *v14; // [esp+24h] [ebp-28h]
  unsigned int v15; // [esp+24h] [ebp-28h]
  void *v16; // [esp+30h] [ebp-1Ch]
  _DWORD *address; // [esp+34h] [ebp-18h]
  size_t v18; // [esp+38h] [ebp-14h]

  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(481);
    BUG();
  }
  v2 = (void **)&_emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 4];
  if ( s )
  {
    v9 = v2;
    if ( *s )
    {
      v3 = strlen(s);
      if ( v3 )
      {
        v13 = v3;
        v4 = v3 + 1;
        if ( _emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 6] >= v3 + 1 )
        {
          v11 = *v9;
        }
        else
        {
          v11 = qvector_reserve((int)v9, *v9, v4, 1u);
          *v9 = v11;
        }
        _emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 5] = v4;
        memmove(v11, s, v13);
        v2 = v9;
        *((_BYTE *)*v9 + v13) = 0;
      }
      else
      {
        _emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 5] = 0;
        v2 = v9;
      }
    }
    else
    {
      v5 = __strlen_chk(" ", 2);
      if ( v5 )
      {
        v18 = v5;
        v15 = v5 + 1;
        if ( _emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 6] >= (unsigned int)(v5 + 1) )
        {
          v16 = *v9;
        }
        else
        {
          v16 = qvector_reserve((int)v9, *v9, v15, 1u);
          *v9 = v16;
        }
        address = _emutls_get_address((unsigned int *)dword_13BC24);
        address[3 * a1 + 5] = v15;
        memmove(v16, " ", v18);
        v2 = v9;
        *((_BYTE *)*v9 + v18) = 0;
        if ( address[3 * a1 + 5] )
          v6 = (char *)*v9;
        else
          v6 = byte_13BD21;
      }
      else
      {
        _emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 5] = 0;
        v6 = byte_13BD21;
        v2 = v9;
      }
      *v6 = 0;
    }
  }
  else if ( *v2 )
  {
    v10 = v2;
    v12 = *v2;
    v14 = _emutls_get_address((unsigned int *)dword_13BC24);
    v14[3 * a1 + 5] = 0;
    qfree(v12);
    v2 = v10;
    *v10 = nullptr;
    v14[3 * a1 + 6] = 0;
  }
  v7 = *v2;
  result = _emutls_get_address((unsigned int *)dword_13BC24);
  result[a1] = v7;
  return result;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13BC24: using guessed type int dword_13BC24[4];
// 13E34C: using guessed type int under_debugger;
