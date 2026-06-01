char __fastcall sub_209EE80(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 *v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  if ( a1 == a2 )
    return 1;
  result = 0;
  if ( a1 && *(_BYTE *)a1 == 1 && a2 && *(_BYTE *)a2 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD *)(a2 + 128);
    v5 = *(_DWORD *)(v3 + 32);
    v6 = *(__int64 **)(v3 + 24);
    if ( v5 > 0x40 )
    {
      v7 = *v6;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = (__int64)((_QWORD)v6 << (64 - (unsigned __int8)v5)) >> (64 - (unsigned __int8)v5);
    }
    v8 = *(_DWORD *)(v4 + 32);
    v9 = *(_QWORD **)(v4 + 24);
    if ( v8 > 0x40 )
    {
      return *v9 == v7;
    }
    else
    {
      v10 = 0;
      if ( v8 )
        v10 = (__int64)((_QWORD)v9 << (64 - (unsigned __int8)v8)) >> (64 - (unsigned __int8)v8);
      return v10 == v7;
    }
  }
  return result;
}
