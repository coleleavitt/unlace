void __fastcall sub_AA8930(_QWORD *a1, size_t a2)
{
  size_t v2; // r12
  _QWORD *v3; // rax
  size_t v5; // r13
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rax
  _BYTE *v8; // rdi
  _QWORD *v9; // rax

  v2 = a1[1];
  if ( v2 < a2 )
  {
    v5 = a2 - v2;
    if ( 0x7FFFFFFFFFFFFFFFLL - v2 < a2 - v2 )
      std::__throw_length_error("basic_string::_M_replace_aux");
    v6 = (_QWORD *)*a1;
    if ( v6 == a1 + 2 )
      v7 = 15;
    else
      v7 = a1[2];
    if ( a2 > v7 )
    {
      sub_974DF0((__int64)a1, v2, 0, nullptr, a2 - v2);
      v6 = (_QWORD *)*a1;
    }
    v8 = (char *)v6 + v2;
    if ( v5 == 1 )
      *v8 = 0;
    else
      memset(v8, 0, v5);
    v9 = (_QWORD *)*a1;
    a1[1] = a2;
    *((_BYTE *)v9 + a2) = 0;
  }
  else if ( v2 > a2 )
  {
    v3 = (_QWORD *)*a1;
    a1[1] = a2;
    *((_BYTE *)v3 + a2) = 0;
  }
}

