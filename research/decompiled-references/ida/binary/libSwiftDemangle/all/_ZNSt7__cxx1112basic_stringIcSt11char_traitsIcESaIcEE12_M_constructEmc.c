size_t __fastcall std::string::_M_construct(__int64 *a1, unsigned __int64 a2, char a3)
{
  _BYTE *v5; // rdi
  size_t result; // rax
  __int64 v7; // rax
  _BYTE *v8; // rdi
  size_t v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v9[0] = a2;
  if ( a2 > 0xF )
  {
    v7 = std::string::_M_create(a1, v9, 0);
    *a1 = v7;
    v5 = (_BYTE *)v7;
    result = v9[0];
    a1[2] = v9[0];
  }
  else
  {
    v5 = (_BYTE *)*a1;
    result = a2;
  }
  if ( !result )
    goto LABEL_6;
  if ( result != 1 )
  {
    memset(v5, a3, result);
    result = v9[0];
    v5 = (_BYTE *)*a1;
LABEL_6:
    a1[1] = result;
    v5[result] = 0;
    return result;
  }
  *v5 = a3;
  result = v9[0];
  v8 = (_BYTE *)*a1;
  a1[1] = v9[0];
  v8[result] = 0;
  return result;
}

