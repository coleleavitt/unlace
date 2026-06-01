__int64 __fastcall sub_2233C80(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // r13d
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  size_t v10; // r9
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdi
  _QWORD *v14; // rax

  result = 1;
  v3 = *((_DWORD *)a1 + 2);
  if ( v3 )
  {
    v4 = *a1;
    v5 = sub_2282AF0(v3, *a1, 0, 0);
    v6 = a2[1];
    v7 = v5 - 1;
    v8 = v5;
    if ( v5 - 1 > v6 )
    {
      v10 = v7 - v6;
      if ( 0x7FFFFFFFFFFFFFFFLL - v6 < v7 - v6 )
        std::__throw_length_error("basic_string::_M_replace_aux");
      v11 = (_QWORD *)*a2;
      if ( (_QWORD *)*a2 == a2 + 2 )
        v12 = 15;
      else
        v12 = a2[2];
      if ( v7 > v12 )
      {
        sub_998B30((__int64)a2, a2[1], 0, nullptr, v7 - v6);
        v11 = (_QWORD *)*a2;
        v10 = v7 - v6;
      }
      v13 = (char *)v11 + v6;
      if ( v10 == 1 )
        *v13 = 0;
      else
        memset(v13, 0, v10);
      v14 = (_QWORD *)*a2;
      a2[1] = v7;
      *((_BYTE *)v14 + v8 - 1) = 0;
      sub_2282AF0(v3, v4, *a2, v8);
      return 0;
    }
    else
    {
      v9 = *a2;
      if ( v5 - 1 < v6 )
      {
        a2[1] = v7;
        *(_BYTE *)(v9 + v5 - 1) = 0;
        v9 = *a2;
      }
      sub_2282AF0(v3, v4, v9, v5);
      return 0;
    }
  }
  return result;
}
