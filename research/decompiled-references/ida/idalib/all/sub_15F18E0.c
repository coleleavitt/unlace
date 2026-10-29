__int64 *__fastcall sub_15F18E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdi

  if ( !a2 )
    return nullptr;
  v6 = sub_B91570(a2, a2, a3, a4, a5, a6);
  v11 = *(__int64 **)(a1 + 608);
  v12 = v6;
  if ( !v11 )
    return nullptr;
  while ( 1 )
  {
    v13 = *((_DWORD *)v11 + 2);
    if ( (v13 & 0x88) != 0 && (v13 & 0x80u) == 0 )
    {
      v14 = v11[45];
      if ( v14 )
      {
        if ( sub_B91570(v14, a2, v7, v8, v9, v10) == v12 )
          break;
      }
    }
    v11 = (__int64 *)*v11;
    if ( !v11 )
      return nullptr;
  }
  return v11;
}
