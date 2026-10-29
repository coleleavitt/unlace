void *__fastcall sub_7E3940(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  void (__fastcall *v5)(void *); // rax
  void *v6; // rdi
  unsigned __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0x10u);
  *((_BYTE *)v2 + 8) = 18;
  v3 = v2;
  *v2 = off_2B3B7A0;
  *((_DWORD *)v2 + 3) = 10;
  if ( a1 )
  {
    v7[0] = a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      if ( sub_7E30F0((_DWORD *)v2 + 3, v7) )
        return v3;
      if ( !v3 )
        return nullptr;
      v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v5 != sub_7DCD80 )
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
