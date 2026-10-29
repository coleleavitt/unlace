unsigned __int64 __fastcall sub_12FD200(unsigned __int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 *v7; // rbx
  _BYTE *v8; // r15
  signed __int64 v9; // rbp

  v4 = a2;
  v5 = a3 - a2;
  result = (a3 - a2) >> 5;
  if ( result )
  {
    if ( result > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    result = operator new(v5);
    v7 = (unsigned __int64 *)result;
  }
  else
  {
    v7 = nullptr;
  }
  *a1 = v7;
  a1[2] = (unsigned __int64 *)((char *)v7 + v5);
  if ( a3 != a2 )
  {
    while ( 1 )
    {
      *v7 = (unsigned __int64)(v7 + 2);
      v8 = *(_BYTE **)v4;
      v9 = *(_QWORD *)(v4 + 8);
      if ( v9 + *(_QWORD *)v4 && !v8 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v9 > 0xF )
        break;
      result = *v7;
      if ( v9 == 1 )
      {
        *(_BYTE *)result = *v8;
        result = *v7;
      }
      else if ( v9 )
      {
        goto LABEL_16;
      }
LABEL_7:
      v4 += 32;
      v7[1] = v9;
      v7 += 4;
      *(_BYTE *)(result + v9) = 0;
      if ( a3 == v4 )
        goto LABEL_17;
    }
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = operator new(v9 + 1);
    v7[2] = v9;
    *v7 = result;
LABEL_16:
    memcpy((void *)result, v8, v9);
    result = *v7;
    goto LABEL_7;
  }
LABEL_17:
  a1[1] = v7;
  return result;
}
