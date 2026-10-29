void __fastcall sub_21B9B7F()
{
  __int64 (__fastcall ***v0)(_QWORD); // rbx
  unsigned int *v1; // rbp
  __int64 v2; // r12
  _QWORD *v3; // r13
  __int64 v4; // r14
  unsigned int v5; // r15d
  __int64 (__fastcall *v6)(_QWORD); // rax
  void *v7; // rax
  __int64 v8; // rcx
  void *retaddr; // [rsp+0h] [rbp+0h]

  while ( 1 )
  {
    v5 = *v1;
    if ( v5 >= (unsigned int)(*v0)[1](v0)
      || !((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**v0)(v0, *v1) )
    {
      break;
    }
    v6 = **v0;
    ++*v1;
    v7 = (void *)v6(v0);
    v8 = *(unsigned int *)(v2 + 56);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 60) )
    {
      retaddr = v7;
      sub_2237220(v2 + 48, v4, v8 + 1, 8);
      v8 = *(unsigned int *)(v2 + 56);
      v7 = retaddr;
    }
    *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8 * v8) = v7;
    ++*(_DWORD *)(v2 + 56);
  }
  *v3 = v2;
  JUMPOUT(0x21B9977);
}
