void __fastcall sub_2096AC0(_QWORD *a1, signed __int64 a2, char a3)
{
  _BYTE *v6; // rdi
  _BYTE *v7; // rax
  int v8; // esi
  _BYTE *v9; // rdi
  _BYTE *v10; // rdi

  if ( (unsigned __int64)a2 > 0xF )
  {
    if ( a2 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (_BYTE *)operator new(a2 + 1);
    a1[2] = a2;
    v8 = a3;
    *a1 = v7;
    v6 = v7;
    goto LABEL_6;
  }
  v6 = (_BYTE *)*a1;
  if ( !a2 )
  {
    a1[1] = 0;
    *v6 = 0;
    return;
  }
  if ( a2 != 1 )
  {
    v8 = a3;
LABEL_6:
    memset(v6, v8, a2);
    v9 = (_BYTE *)*a1;
    a1[1] = a2;
    v9[a2] = 0;
    return;
  }
  *v6 = a3;
  v10 = (_BYTE *)*a1;
  a1[1] = 1;
  v10[1] = 0;
}
