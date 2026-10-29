unsigned __int64 __fastcall std::string::_M_construct<char *>(__int64 *a1, _BYTE *a2, __int64 a3)
{
  size_t v4; // r12
  _BYTE *v5; // rdi
  __int64 v7; // rax
  size_t v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a3 && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v4 = a3 - (_QWORD)a2;
  v8 = a3 - (_QWORD)a2;
  if ( (unsigned __int64)(a3 - (_QWORD)a2) > 0xF )
  {
    v7 = std::string::_M_create(a1, &v8, 0);
    *a1 = v7;
    v5 = (_BYTE *)v7;
    a1[2] = v8;
    goto LABEL_10;
  }
  v5 = (_BYTE *)*a1;
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_6;
LABEL_10:
    memcpy(v5, a2, v4);
    v4 = v8;
    v5 = (_BYTE *)*a1;
    goto LABEL_6;
  }
  *v5 = *a2;
  v4 = v8;
  v5 = (_BYTE *)*a1;
LABEL_6:
  a1[1] = v4;
  v5[v4] = 0;
  return v9 - __readfsqword(0x28u);
}

