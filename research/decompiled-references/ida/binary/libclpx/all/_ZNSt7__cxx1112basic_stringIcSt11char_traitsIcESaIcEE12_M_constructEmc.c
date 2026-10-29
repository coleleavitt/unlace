_BYTE *__fastcall std::string::_M_construct(_QWORD *a1, unsigned __int64 a2, char a3)
{
  _BYTE *result; // rax
  size_t v5; // rdx
  size_t v6; // rdx
  size_t v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = a2;
  if ( a2 > 0xF )
  {
    result = (_BYTE *)std::string::_M_create(a1, v7, 0);
    v5 = v7[0];
    *a1 = result;
    a1[2] = v5;
  }
  else
  {
    result = (_BYTE *)*a1;
    v5 = a2;
  }
  if ( !v5 )
    goto LABEL_6;
  if ( v5 != 1 )
  {
    memset(result, a3, v5);
    v5 = v7[0];
    result = (_BYTE *)*a1;
LABEL_6:
    a1[1] = v5;
    result[v5] = 0;
    return result;
  }
  *result = a3;
  v6 = v7[0];
  result = (_BYTE *)*a1;
  a1[1] = v7[0];
  result[v6] = 0;
  return result;
}

