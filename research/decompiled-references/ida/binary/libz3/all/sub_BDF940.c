unsigned __int8 __fastcall sub_BDF940(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // r14
  __int64 i; // rbx
  __int64 v5; // r13
  __int64 *v6; // r12
  __int64 v7; // r15
  _DWORD *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int8 result; // al

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 1;
  v2 = *(_DWORD *)(v1 - 4);
  if ( v2 <= 0 )
    return 1;
  v3 = 8LL * (unsigned int)(v2 - 1);
  for ( i = 0; ; i += 8 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(__int64 **)(v1 + i);
    v7 = *v6;
    if ( !(unsigned int)sub_8E7030(v5)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 7488) + 56LL))(
           *(_QWORD *)(v5 + 7488),
           v7) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(*v6 + 16) + 24LL);
      if ( v8 )
      {
        if ( *(_DWORD *)(a1 + 8) == *v8 )
        {
          v9 = (unsigned int)v8[1];
          if ( (unsigned int)v9 <= 0xB )
          {
            v10 = -2070;
            result = _bittest64(&v10, v9);
            if ( !result )
              break;
          }
        }
      }
    }
    if ( v3 == i )
      return 1;
    v1 = *(_QWORD *)(a1 + 32);
  }
  return result;
}

