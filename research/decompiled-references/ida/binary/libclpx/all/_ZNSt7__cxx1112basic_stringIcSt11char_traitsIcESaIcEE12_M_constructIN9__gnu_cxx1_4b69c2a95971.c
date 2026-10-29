unsigned __int64 __fastcall std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        _QWORD *a1,
        _BYTE *a2,
        __int64 a3)
{
  size_t v3; // rbx
  _BYTE *v4; // rdx
  _BYTE *v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = a3 - (_QWORD)a2;
  v10 = __readfsqword(0x28u);
  v9 = a3 - (_QWORD)a2;
  if ( (unsigned __int64)(a3 - (_QWORD)a2) > 0xF )
  {
    v5 = (_BYTE *)std::string::_M_create(a1, &v9, 0);
    v8 = v9;
    *a1 = v5;
    a1[2] = v8;
    goto LABEL_7;
  }
  v4 = (_BYTE *)*a1;
  v5 = (_BYTE *)*a1;
  if ( v3 == 1 )
  {
    *v4 = *a2;
    v4 = (_BYTE *)*a1;
    goto LABEL_4;
  }
  if ( v3 )
  {
LABEL_7:
    memcpy(v5, a2, v3);
    v4 = (_BYTE *)*a1;
  }
LABEL_4:
  v6 = v9;
  a1[1] = v9;
  v4[v6] = 0;
  return __readfsqword(0x28u) ^ v10;
}

