std::_V2 *__fastcall sub_2020880(std::_V2 *a1, const char *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // r14
  size_t v5; // rax
  void *v6; // rbp
  _QWORD *v8; // rax
  void *v9[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = std::_V2::generic_category(a1);
  v3 = v10;
  v9[0] = v10;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v4 = v2;
  v5 = strlen(a2);
  v6 = (void *)v5;
  if ( v5 > 0xF )
  {
    v8 = (_QWORD *)operator new(v5 + 1);
    v10[0] = v6;
    v9[0] = v8;
    goto LABEL_11;
  }
  if ( v5 == 1 )
  {
    LOBYTE(v10[0]) = *a2;
    goto LABEL_5;
  }
  if ( v5 )
  {
    v8 = v10;
LABEL_11:
    memcpy(v8, a2, (size_t)v6);
    v3 = v9[0];
  }
LABEL_5:
  v9[1] = v6;
  *((_BYTE *)v6 + (_QWORD)v3) = 0;
  sub_22205D0(a1, v9, 84, v4);
  if ( v9[0] != v10 )
    operator delete(v9[0]);
  return a1;
}
