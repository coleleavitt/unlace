void *__fastcall sub_7C0900(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  void *v5; // rbx
  void (__fastcall *v7)(void *); // rax
  void *v8; // rdi
  unsigned __int64 v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v4 = operator new(0x10u);
  *(_BYTE *)(v4 + 8) = 20;
  v5 = (void *)v4;
  *(_QWORD *)v4 = off_2B11860;
  *(_DWORD *)(v4 + 12) = 0;
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
    if ( a3 > 5 && !sub_7BFDB0((_DWORD *)(v4 + 12), v9) )
    {
      if ( !v5 )
        return nullptr;
      v7 = *(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL);
      if ( v7 != sub_7B99B0 )
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

