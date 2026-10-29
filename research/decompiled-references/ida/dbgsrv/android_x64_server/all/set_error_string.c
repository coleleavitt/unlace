/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_string
// Address: 0x00000000000B6F80

//----- (00000000000B6F80) ----------------------------------------------------
_QWORD *__fastcall set_error_string(signed int a1, const char *a2)
{
  __int64 v2; // rbp
  char **v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  unsigned __int64 v6; // r12
  char *v7; // rbp
  char *v8; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rax
  size_t v11; // r15
  unsigned __int64 v12; // rbp
  char *v13; // r12
  char *v14; // rax
  _QWORD *address; // rbx
  char *v16; // rbx
  _QWORD *result; // rax

  if ( (unsigned int)a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(481);
    BUG();
  }
  v2 = a1;
  v3 = (char **)&_emutls_get_address((unsigned __int64 *)qword_155628)[3 * a1 + 4];
  if ( a2 )
  {
    if ( *a2 )
    {
      v4 = strlen(a2);
      if ( v4 )
      {
        v5 = v4;
        v6 = v4 + 1;
        if ( _emutls_get_address((unsigned __int64 *)qword_155628)[3 * a1 + 6] >= v4 + 1 )
        {
          v7 = *v3;
        }
        else
        {
          v7 = (char *)qvector_reserve((__int64)v3, *v3, v6, 1u);
          *v3 = v7;
        }
        _emutls_get_address((unsigned __int64 *)qword_155628)[3 * a1 + 5] = v6;
        memmove(v7, a2, v5);
        (*v3)[v5] = 0;
        v2 = a1;
      }
      else
      {
        _emutls_get_address((unsigned __int64 *)qword_155628)[3 * a1 + 5] = 0;
      }
    }
    else
    {
      v10 = __strlen_chk(" ", 2);
      if ( v10 )
      {
        v11 = v10;
        v12 = v10 + 1;
        if ( _emutls_get_address((unsigned __int64 *)qword_155628)[3 * a1 + 6] >= (unsigned __int64)(v10 + 1) )
        {
          v13 = *v3;
        }
        else
        {
          v13 = (char *)qvector_reserve((__int64)v3, *v3, v12, 1u);
          *v3 = v13;
        }
        address = _emutls_get_address((unsigned __int64 *)qword_155628);
        address[3 * a1 + 5] = v12;
        memmove(v13, " ", v11);
        (*v3)[v11] = 0;
        if ( address[3 * a1 + 5] )
          v14 = *v3;
        else
          v14 = byte_155771;
        v2 = a1;
      }
      else
      {
        _emutls_get_address((unsigned __int64 *)qword_155628)[3 * a1 + 5] = 0;
        v14 = byte_155771;
      }
      *v14 = 0;
    }
  }
  else
  {
    v8 = *v3;
    if ( *v3 )
    {
      v9 = _emutls_get_address((unsigned __int64 *)qword_155628);
      v9[3 * a1 + 5] = 0;
      qfree(v8);
      *v3 = nullptr;
      v9[3 * a1 + 6] = 0;
    }
  }
  v16 = *v3;
  result = _emutls_get_address((unsigned __int64 *)qword_155628);
  result[v2] = v16;
  return result;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 155628: using guessed type __int64 qword_155628[5];
// 158B40: using guessed type __int64 under_debugger;
