_QWORD *__fastcall sub_F4AFC0(_QWORD *a1, __int64 a2, unsigned __int8 *a3, signed __int64 a4)
{
  _BYTE *v4; // rax
  unsigned __int8 v7; // dl
  __int64 v9; // rax

  v4 = a1 + 2;
  *a1 = a1 + 2;
  if ( &a3[a4] && !a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a4 > 0xF )
  {
    if ( a4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v4 = (_BYTE *)operator new(a4 + 1);
    a1[2] = a4;
    *a1 = v4;
  }
  else
  {
    if ( a4 == 1 )
    {
      v7 = *a3;
      a1[1] = 1;
      *((_WORD *)a1 + 8) = v7;
      return a1;
    }
    if ( !a4 )
    {
      a1[1] = 0;
      *v4 = 0;
      return a1;
    }
  }
  memcpy(v4, a3, a4);
  v9 = *a1;
  a1[1] = a4;
  *(_BYTE *)(v9 + a4) = 0;
  return a1;
}

