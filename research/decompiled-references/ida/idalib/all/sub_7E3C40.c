void *__fastcall sub_7E3C40(unsigned __int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rax
  void *v5; // rbx
  void (__fastcall *v7)(void *); // rax
  void *v8; // rdi
  unsigned __int64 v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v4 = (_QWORD *)operator new(0x10u);
  *((_BYTE *)v4 + 8) = 20;
  v5 = v4;
  *v4 = off_2B3B800;
  *((_DWORD *)v4 + 3) = 0;
  if ( a1 )
  {
    v9[0] = a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v4 )
        return nullptr;
LABEL_6:
      operator delete(v5, 0x10u);
      return nullptr;
    }
    if ( a3 > 5 && !sub_7E30F0((_DWORD *)v4 + 3, v9) )
    {
      if ( !v5 )
        return nullptr;
      v7 = *(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL);
      if ( v7 != sub_7DCD90 )
      {
        v8 = v5;
        v5 = nullptr;
        v7(v8);
        return v5;
      }
      goto LABEL_6;
    }
  }
  return v5;
}
