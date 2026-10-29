char __fastcall sub_206CDC0(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  if ( a2 == a3 )
    return 1;
  result = 0;
  if ( a2 && *(_BYTE *)a2 == 1 && a3 && *(_BYTE *)a3 == 1 )
  {
    v4 = *(_QWORD *)(a2 + 128);
    v5 = *(_QWORD *)(a3 + 128);
    v6 = *(_DWORD *)(v4 + 32);
    v7 = *(__int64 **)(v4 + 24);
    if ( v6 > 0x40 )
    {
      v8 = *v7;
    }
    else
    {
      v8 = 0;
      if ( v6 )
        v8 = (__int64)((_QWORD)v7 << (64 - (unsigned __int8)v6)) >> (64 - (unsigned __int8)v6);
    }
    v9 = *(_DWORD *)(v5 + 32);
    v10 = *(_QWORD **)(v5 + 24);
    if ( v9 > 0x40 )
    {
      return *v10 == v8;
    }
    else
    {
      v11 = 0;
      if ( v9 )
        v11 = (__int64)((_QWORD)v10 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9);
      return v11 == v8;
    }
  }
  return result;
}
