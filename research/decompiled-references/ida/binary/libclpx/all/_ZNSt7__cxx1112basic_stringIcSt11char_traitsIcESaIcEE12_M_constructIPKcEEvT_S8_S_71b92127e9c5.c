unsigned __int64 __fastcall std::string::_M_construct<char const*>(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  size_t v3; // rbx
  _BYTE *v4; // rdx
  _BYTE *v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !a2 && a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = a3 - (_QWORD)a2;
  v9 = a3 - (_QWORD)a2;
  if ( (unsigned __int64)(a3 - (_QWORD)a2) > 0xF )
  {
    v5 = (_BYTE *)std::string::_M_create(a1, &v9, 0);
    v8 = v9;
    *a1 = v5;
    a1[2] = v8;
    goto LABEL_9;
  }
  v4 = (_BYTE *)*a1;
  v5 = (_BYTE *)*a1;
  if ( v3 == 1 )
  {
    *v4 = *a2;
    v4 = (_BYTE *)*a1;
    goto LABEL_6;
  }
  if ( v3 )
  {
LABEL_9:
    memcpy(v5, a2, v3);
    v4 = (_BYTE *)*a1;
  }
LABEL_6:
  v6 = v9;
  a1[1] = v9;
  v4[v6] = 0;
  return __readfsqword(0x28u) ^ v10;
}

