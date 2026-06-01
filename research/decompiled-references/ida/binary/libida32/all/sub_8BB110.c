void *__fastcall sub_8BB110(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4; // r12
  void (__fastcall *v6)(void *); // rax
  void *v7; // rdi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = operator new(0x10u);
  *(_BYTE *)(v2 + 8) = 56;
  v3 = (void *)v2;
  *(_QWORD *)v2 = off_2B149C8;
  *(_DWORD *)(v2 + 12) = 0;
  if ( a1 )
  {
    if ( __CFADD__(a1, a2) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      v4 = a1 + a2;
      v8[0] = a1;
      *(_DWORD *)(v2 + 12) = unpack_dd(v8);
      if ( a1 < v8[0] )
        return v3;
      if ( !v3 )
        return nullptr;
      v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v6 != sub_8B21E0 )
      {
        v7 = v3;
        v3 = nullptr;
        ((void (__fastcall *)(void *, __int64))v6)(v7, v4);
        return v3;
      }
    }
    operator delete(v3, 0x10u);
    return nullptr;
  }
  return v3;
}

