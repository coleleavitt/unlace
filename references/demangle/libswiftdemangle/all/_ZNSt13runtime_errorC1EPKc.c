// Alternative name is '_ZNSt13runtime_errorC2EPKc'
unsigned __int64 __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const char *a2)
{
  size_t v2; // rax
  size_t v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // rcx
  char v8; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *(_QWORD *)this = (char *)&`vtable for'std::runtime_error + 16;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v2 = strlen(a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = std::string::_Rep::_S_create(v2, 0, &v8);
    v5 = v4;
    v6 = (_QWORD *)(v4 + 24);
    if ( v3 == 1 )
      *(_BYTE *)(v4 + 24) = *a2;
    else
      v6 = memcpy((void *)(v4 + 24), a2, v3);
    if ( (_QWORD *)v5 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v5 + 16) = 0;
      *(_QWORD *)v5 = v3;
      *(_BYTE *)(v5 + v3 + 24) = 0;
    }
  }
  else
  {
    v6 = &std::string::_Rep::_S_empty_rep_storage + 3;
  }
  *((_QWORD *)this + 1) = v6;
  return v9 - __readfsqword(0x28u);
}
