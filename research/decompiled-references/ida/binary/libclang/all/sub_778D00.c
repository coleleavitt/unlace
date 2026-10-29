unsigned __int64 __fastcall sub_778D00(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rax

  v1 = *(unsigned int *)(a1 + 72);
  if ( (_DWORD)v1 )
    return (v1 << 32) | *(unsigned int *)(a1 + 24);
  if ( !(unsigned __int8)sub_79C1B0(a1 + 40) )
  {
    v3 = sub_79C190(a1 + 40);
    v1 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) >> 32;
    return (v1 << 32) | *(unsigned int *)(a1 + 24);
  }
  return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 24);
}

