unsigned __int64 __fastcall std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __int64 *a1,
        _BYTE *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rdx
  size_t v4; // r12
  _BYTE *v6; // rdi
  __int64 v8; // rax
  size_t v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = a3 - (_QWORD)a2;
  v4 = v3;
  v10 = __readfsqword(0x28u);
  v9 = v3;
  if ( v3 > 0xF )
  {
    v8 = std::string::_M_create(a1, &v9, 0);
    *a1 = v8;
    v6 = (_BYTE *)v8;
    a1[2] = v9;
    goto LABEL_8;
  }
  v6 = (_BYTE *)*a1;
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_4;
LABEL_8:
    memcpy(v6, a2, v4);
    v4 = v9;
    v6 = (_BYTE *)*a1;
    goto LABEL_4;
  }
  *v6 = *a2;
  v4 = v9;
  v6 = (_BYTE *)*a1;
LABEL_4:
  a1[1] = v4;
  v6[v4] = 0;
  return v10 - __readfsqword(0x28u);
}

