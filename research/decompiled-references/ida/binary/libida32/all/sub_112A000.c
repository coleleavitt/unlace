_QWORD *__fastcall sub_112A000(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  _BYTE *v5; // r12
  signed __int64 v6; // rbp
  _BYTE *v8; // rax
  size_t v9; // rdx
  _BYTE *v10; // rax
  size_t v11; // rdx
  _BYTE *v12; // rax
  size_t v13; // rdx

  v3 = a1 + 2;
  *a1 = a1 + 2;
  v5 = *(_BYTE **)a2;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 + *(_QWORD *)a2 && !v5 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v3 = (void *)operator new(v6 + 1);
    a1[2] = v6;
    *a1 = v3;
    goto LABEL_14;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_6;
LABEL_14:
    memcpy(v3, v5, v6);
    v3 = (void *)*a1;
    goto LABEL_6;
  }
  *((_BYTE *)a1 + 16) = *v5;
LABEL_6:
  a1[1] = v6;
  *((_BYTE *)v3 + v6) = 0;
  if ( !sub_990D60((__int64)a1, "native") )
  {
    v10 = (_BYTE *)sub_227F670();
    sub_978080(a1, 0, a1[1], v10, v11);
    if ( !sub_990D60((__int64)a1, "generic") )
    {
      v12 = (_BYTE *)sub_2283200(*(_DWORD *)(a3 + 32) == 14);
      sub_978080(a1, 0, a1[1], v12, v13);
    }
  }
  if ( !a1[1] )
  {
    v8 = (_BYTE *)sub_2283200(*(_DWORD *)(a3 + 32) == 14);
    sub_978080(a1, 0, a1[1], v8, v9);
  }
  return a1;
}

