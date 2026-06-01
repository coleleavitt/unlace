char __fastcall sub_2060030(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  char result; // al
  unsigned int v8; // ebx
  void *v9; // r12
  _BYTE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // [rsp+Fh] [rbp-29h]
  void *v14; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-20h]

  if ( *(_BYTE *)a1 == 5 )
  {
    v6 = *(_DWORD *)(a1 + 32);
    result = 1;
    if ( v6 )
    {
      if ( v6 <= 0x40 )
        return 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v6) == *(_QWORD *)(a1 + 24);
      else
        return v6 == (unsigned int)sub_2206980(a1 + 24);
    }
  }
  else if ( *(_BYTE *)a1 == 6 )
  {
    sub_1F6DD40((__int64)&v14, (_QWORD *)(a1 + 24), a3);
    v8 = v15;
    result = 1;
    if ( v15 )
    {
      v9 = v14;
      if ( v15 <= 0x40 )
      {
        return v14 == (void *)(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v15));
      }
      else
      {
        result = v8 == (unsigned int)sub_2206980(&v14);
        if ( v9 )
        {
          v13 = result;
          operator delete[](v9);
          return v13;
        }
      }
    }
  }
  else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 8LL) - 17 <= 1
         && (v10 = sub_205FD90(a1, 0, a3, a4, a5, a6)) != nullptr )
  {
    return sub_2060030(v10, 0, v11, v12);
  }
  else
  {
    return 0;
  }
  return result;
}
