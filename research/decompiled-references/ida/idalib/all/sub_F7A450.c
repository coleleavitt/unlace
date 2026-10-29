_BYTE *__fastcall sub_F7A450(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  size_t v4; // rbx
  _BYTE *result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = a3 - (_QWORD)a2;
  v4 = v3;
  v7[0] = v3;
  if ( v3 > 0xF )
  {
    result = (_BYTE *)sub_F79BF0((__int64 *)v7, 0);
    v6 = v7[0];
    *a1 = result;
    a1[2] = v6;
    goto LABEL_10;
  }
  result = (_BYTE *)*a1;
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_6;
LABEL_10:
    memcpy(result, a2, v4);
    v4 = v7[0];
    result = (_BYTE *)*a1;
    goto LABEL_6;
  }
  *result = *a2;
  v4 = v7[0];
  result = (_BYTE *)*a1;
LABEL_6:
  a1[1] = v4;
  result[v4] = 0;
  return result;
}
