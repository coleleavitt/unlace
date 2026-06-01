void *__fastcall sub_30B10(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  void (__fastcall *v5)(void *); // rax
  void *v6; // rdi
  unsigned __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = operator new(0x10u);
  *(_BYTE *)(v2 + 8) = 16;
  v3 = (void *)v2;
  *(_QWORD *)v2 = off_796D0;
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
      v7[0] = a1;
      *(_DWORD *)(v2 + 12) = sub_28F80(v7, a1 + a2);
      if ( a1 < v7[0] )
        return v3;
      if ( !v3 )
        return nullptr;
      v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v5 != sub_2FBC0 )
      {
        v6 = v3;
        v3 = nullptr;
        v5(v6);
        return v3;
      }
    }
    operator delete(v3, 0x10u);
    return nullptr;
  }
  return v3;
}

