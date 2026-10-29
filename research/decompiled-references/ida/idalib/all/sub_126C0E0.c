_QWORD *__fastcall sub_126C0E0(_QWORD *a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  bool v4; // zf
  _BYTE *v6; // r12
  signed __int64 v7; // rbp

  v2 = a1 + 2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 496) == 0;
  *a1 = a1 + 2;
  if ( v4 )
  {
    a1[1] = 0;
    *((_BYTE *)a1 + 16) = 0;
    return a1;
  }
  v6 = *(_BYTE **)(v3 + 488);
  v7 = *(_QWORD *)(v3 + 496);
  if ( &v6[v7] && !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v7 > 0xF )
  {
    if ( v7 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v2 = (void *)operator new(v7 + 1);
    a1[2] = v7;
    *a1 = v2;
    goto LABEL_13;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_8;
LABEL_13:
    memcpy(v2, v6, v7);
    v2 = (void *)*a1;
    goto LABEL_8;
  }
  *((_BYTE *)a1 + 16) = *v6;
LABEL_8:
  a1[1] = v7;
  *((_BYTE *)v2 + v7) = 0;
  return a1;
}
