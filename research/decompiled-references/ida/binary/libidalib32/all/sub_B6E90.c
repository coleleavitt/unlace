_DWORD *__fastcall sub_B6E90(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  _DWORD *v5; // rdi

  if ( a2 == -1 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 104);
  if ( !v2 )
    return nullptr;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v3 + 8LL * *(_QWORD *)(v2 + 16);
  if ( v4 == v3 )
    return nullptr;
  while ( 1 )
  {
    v5 = *(_DWORD **)v3;
    if ( *(_DWORD *)(*(_QWORD *)v3 + 12LL) == a2 )
      break;
    if ( v5[2] == 1 )
    {
      v5 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, a2);
      if ( v5 )
        break;
    }
    v3 += 8;
    if ( v4 == v3 )
      return nullptr;
  }
  return v5;
}

