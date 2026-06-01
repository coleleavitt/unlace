_QWORD *__fastcall sub_22276A0(_QWORD *a1, size_t a2, char a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  _BYTE *v8; // rsi
  size_t v9; // rdx
  _QWORD *v10; // rax

  v3 = a1[1];
  if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v6 = v3 + 1;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v7 = 15;
  else
    v7 = a1[2];
  if ( v6 > v7 )
  {
    sub_998B30((__int64)a1, a2, 0, nullptr, 1u);
    v8 = (_BYTE *)(a2 + *a1);
  }
  else
  {
    v8 = (_BYTE *)(a2 + *a1);
    v9 = v3 - a2;
    if ( v3 != a2 )
    {
      if ( v9 == 1 )
        v8[1] = *v8;
      else
        memmove(v8 + 1, v8, v9);
      v8 = (_BYTE *)(a2 + *a1);
    }
  }
  *v8 = a3;
  v10 = (_QWORD *)*a1;
  a1[1] = v6;
  *((_BYTE *)v10 + v3 + 1) = 0;
  return a1;
}
