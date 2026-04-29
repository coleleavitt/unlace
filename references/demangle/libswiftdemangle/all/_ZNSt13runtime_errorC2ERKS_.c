// Alternative name is '_ZNSt13runtime_errorC1ERKS_'
unsigned __int64 __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const std::runtime_error *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  char v6; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  *(_QWORD *)this = (char *)&`vtable for'std::runtime_error + 16;
  v3 = *((_QWORD *)a2 + 1);
  v4 = (_QWORD *)(v3 - 24);
  if ( *(int *)(v3 - 8) < 0 )
  {
    v3 = std::string::_Rep::_M_clone(v4, &v6, 0);
  }
  else if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v3 - 8), 1u);
    else
      ++*(_DWORD *)(v3 - 8);
  }
  *((_QWORD *)this + 1) = v3;
  return v7 - __readfsqword(0x28u);
}
