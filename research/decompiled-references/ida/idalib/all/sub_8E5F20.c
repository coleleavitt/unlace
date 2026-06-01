_DWORD *__fastcall sub_8E5F20(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rbx
  void (__fastcall *v5)(void *); // rax
  _DWORD *v6; // rdi
  unsigned __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = operator new(0x18u);
  *(_BYTE *)(v2 + 8) = 95;
  v3 = (_DWORD *)v2;
  *(_QWORD *)v2 = off_2B3F0B8;
  *(_QWORD *)(v2 + 12) = 0;
  if ( a1 )
  {
    v7[0] = a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
LABEL_4:
      operator delete(v3, 0x18u);
      return nullptr;
    }
    if ( !sub_7E30F0((_DWORD *)(v2 + 12), v7) || !sub_7E30F0(v3 + 4, v7) )
    {
      if ( !v3 )
        return nullptr;
      v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v5 != sub_8D5F80 )
      {
        v6 = v3;
        v3 = nullptr;
        v5(v6);
        return v3;
      }
      goto LABEL_4;
    }
  }
  return v3;
}
