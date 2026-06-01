__int64 sub_1FEE840()
{
  __int64 **addr; // rax
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 (__fastcall *v3)(_QWORD); // rax
  _QWORD *v4; // rdi

  addr = (__int64 **)__tls_get_addr(&std::__once_callable);
  v1 = **addr;
  v2 = (_QWORD *)(*addr)[1];
  v3 = *(__int64 (__fastcall **)(_QWORD))v1;
  v4 = (_QWORD *)(*v2 + *(_QWORD *)(v1 + 8));
  if ( (*(_QWORD *)v1 & 1) != 0 )
    v3 = *(__int64 (__fastcall **)(_QWORD))((char *)v3 + *v4 - 1);
  return v3(v4);
}
