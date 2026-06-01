void __fastcall sub_C05030(_QWORD *a1, unsigned __int64 a2, char a3)
{
  size_t v3; // r12
  _QWORD *v4; // rax
  size_t v7; // r14
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdi
  _QWORD *v11; // rax

  v3 = a1[1];
  if ( a2 > v3 )
  {
    v7 = a2 - v3;
    if ( a2 - v3 > 0x7FFFFFFFFFFFFFFFLL - v3 )
      std::__throw_length_error("basic_string::_M_replace_aux");
    v8 = (_QWORD *)*a1;
    if ( v8 == a1 + 2 )
      v9 = 15;
    else
      v9 = a1[2];
    if ( a2 > v9 )
    {
      sub_998B30((__int64)a1, v3, 0, nullptr, a2 - v3);
      v10 = (_BYTE *)(v3 + *a1);
      if ( v7 != 1 )
        goto LABEL_10;
    }
    else
    {
      v10 = (char *)v8 + v3;
      if ( v7 != 1 )
      {
LABEL_10:
        memset(v10, a3, v7);
LABEL_11:
        v11 = (_QWORD *)*a1;
        a1[1] = a2;
        *((_BYTE *)v11 + a2) = 0;
        return;
      }
    }
    *v10 = a3;
    goto LABEL_11;
  }
  if ( a2 < v3 )
  {
    v4 = (_QWORD *)*a1;
    a1[1] = a2;
    *((_BYTE *)v4 + a2) = 0;
  }
}
