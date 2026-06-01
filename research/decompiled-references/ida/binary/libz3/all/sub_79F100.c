__int64 *__fastcall sub_79F100(__int64 *a1, __int64 a2)
{
  signed __int64 v2; // rbp
  _BYTE *v4; // rdi
  char *v5; // r12
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdi

  v2 = *(_QWORD *)(a2 + 2296);
  v4 = a1 + 2;
  *a1 = (__int64)v4;
  v5 = *(char **)(a2 + 2288);
  if ( (unsigned __int64)v2 > 0xF )
  {
    if ( v2 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v2 + 1 < 0 )
      std::__throw_bad_alloc();
    v8 = operator new(v2 + 1);
    a1[2] = v2;
    *a1 = v8;
    v4 = (_BYTE *)v8;
  }
  else
  {
    if ( v2 == 1 )
    {
      v7 = *v5;
      a1[1] = 1;
      *((_BYTE *)a1 + 16) = v7;
      v4[1] = 0;
      return a1;
    }
    if ( !v2 )
    {
      a1[1] = 0;
      *v4 = 0;
      return a1;
    }
  }
  memcpy(v4, v5, v2);
  v9 = *a1;
  a1[1] = v2;
  *(_BYTE *)(v9 + v2) = 0;
  return a1;
}

