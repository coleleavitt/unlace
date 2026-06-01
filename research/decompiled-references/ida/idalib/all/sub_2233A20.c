__int64 __fastcall sub_2233A20(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  size_t v11; // r9
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  _BYTE *v14; // rdi
  _QWORD *v15; // rax

  v3 = a1;
  v5 = sub_2282AF0(a1, a2, 0, 0);
  v6 = a3[1];
  v7 = v5 - 1;
  v8 = v5;
  if ( v5 - 1 > v6 )
  {
    v11 = v7 - v6;
    if ( 0x7FFFFFFFFFFFFFFFLL - v6 < v7 - v6 )
      std::__throw_length_error("basic_string::_M_replace_aux");
    v12 = (_QWORD *)*a3;
    if ( (_QWORD *)*a3 == a3 + 2 )
      v13 = 15;
    else
      v13 = a3[2];
    if ( v7 > v13 )
    {
      sub_998B30((__int64)a3, a3[1], 0, nullptr, v7 - v6);
      v12 = (_QWORD *)*a3;
      v11 = v7 - v6;
    }
    v14 = (char *)v12 + v6;
    if ( v11 == 1 )
      *v14 = 0;
    else
      memset(v14, 0, v11);
    v15 = (_QWORD *)*a3;
    a3[1] = v7;
    *((_BYTE *)v15 + v8 - 1) = 0;
    v9 = (_QWORD *)*a3;
  }
  else
  {
    v9 = (_QWORD *)*a3;
    if ( v5 - 1 < v6 )
    {
      a3[1] = v7;
      *((_BYTE *)v9 + v5 - 1) = 0;
      v9 = (_QWORD *)*a3;
    }
  }
  return sub_2282AF0(v3, a2, v9, v8);
}
