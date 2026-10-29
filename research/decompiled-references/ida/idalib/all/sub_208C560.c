char *__fastcall sub_208C560(_QWORD *a1, _BYTE *a2, signed __int64 a3, unsigned __int64 a4)
{
  _BYTE *v4; // rax
  unsigned int v6; // ebp
  char *result; // rax
  char v8; // r8
  _BYTE *v9; // r13
  char *v10; // r12
  _BYTE *v11; // rbp
  _BYTE v12[51]; // [rsp+25h] [rbp-33h] BYREF

  v4 = a1 + 2;
  v6 = a4;
  *a1 = a1 + 2;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      goto LABEL_26;
    v4 = (_BYTE *)operator new(a3 + 1);
    a1[2] = a3;
    *a1 = v4;
  }
  else
  {
    if ( a3 == 1 )
    {
      *((_BYTE *)a1 + 16) = *a2;
      goto LABEL_6;
    }
    if ( !a3 )
    {
      a4 = (unsigned int)a4;
      a1[1] = 0;
      *v4 = 0;
      if ( !(_DWORD)a4 )
        goto LABEL_7;
      goto LABEL_12;
    }
  }
  memcpy(v4, a2, a3);
  v4 = (_BYTE *)*a1;
LABEL_6:
  a4 = v6;
  a1[1] = a3;
  v4[a3] = 0;
  if ( v6 )
  {
LABEL_12:
    v10 = v12;
    while ( 1 )
    {
      --v10;
      v8 = a4 % 0xA + 48;
      *v10 = v8;
      if ( a4 <= 9 )
        break;
      a4 /= 0xAu;
    }
    result = (char *)(a1 + 6);
    v11 = (_BYTE *)(v12 - v10);
    a1[4] = a1 + 6;
    v9 = (_BYTE *)(v12 - v10);
    if ( (unsigned __int64)(v12 - v10) <= 0xF )
    {
      if ( v11 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_8;
      if ( !v11 )
        goto LABEL_9;
LABEL_18:
      memcpy(result, v10, (size_t)v11);
      result = (char *)a1[4];
      goto LABEL_9;
    }
    if ( (__int64)v11 >= 0 )
    {
      result = (char *)operator new((unsigned __int64)(v11 + 1));
      a1[6] = v11;
      a1[4] = result;
      goto LABEL_18;
    }
LABEL_26:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_7:
  result = (char *)(a1 + 6);
  v8 = 48;
  a1[4] = a1 + 6;
LABEL_8:
  *result = v8;
  v9 = (_BYTE *)(&dword_0 + 1);
LABEL_9:
  a1[5] = v9;
  v9[(_QWORD)result] = 0;
  a1[8] = 0;
  a1[9] = 0;
  return result;
}
