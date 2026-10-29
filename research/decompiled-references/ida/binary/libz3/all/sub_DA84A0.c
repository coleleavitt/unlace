__int64 (__fastcall **__fastcall sub_DA84A0(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // rax
  signed __int64 v3; // rbp
  _BYTE *v5; // rdi
  unsigned __int8 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi

  result = off_1C63670;
  v3 = *(_QWORD *)(a2 + 16);
  v5 = a1 + 3;
  *((_QWORD *)v5 - 3) = off_1C63670;
  a1[1] = v5;
  v6 = *(unsigned __int8 **)(a2 + 8);
  if ( (unsigned __int64)v3 > 0xF )
  {
    if ( v3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v3 + 1 < 0 )
      std::__throw_bad_alloc();
    v7 = operator new(v3 + 1);
    a1[1] = v7;
    v5 = (_BYTE *)v7;
    a1[3] = v3;
  }
  else
  {
    if ( v3 == 1 )
    {
      result = (__int64 (__fastcall **)(std::exception *))*v6;
      a1[2] = 1;
      *((_BYTE *)a1 + 24) = (_BYTE)result;
      v5[1] = 0;
      return result;
    }
    if ( !v3 )
    {
      a1[2] = 0;
      *v5 = 0;
      return result;
    }
  }
  result = (__int64 (__fastcall **)(std::exception *))memcpy(v5, v6, v3);
  v8 = a1[1];
  a1[2] = v3;
  *(_BYTE *)(v8 + v3) = 0;
  return result;
}

