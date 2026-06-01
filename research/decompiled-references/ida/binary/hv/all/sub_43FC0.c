_BYTE *__fastcall sub_43FC0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rbx
  int v5; // eax
  void (__fastcall *v6)(void *); // rax
  _BYTE *v7; // rdi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = operator new(0x10u);
  *(_BYTE *)(v2 + 8) = 88;
  v3 = (_BYTE *)v2;
  *(_QWORD *)v2 = off_162288;
  *(_BYTE *)(v2 + 9) = 0;
  if ( a1 )
  {
    if ( __CFADD__(a1, a2) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      v8[0] = a1;
      v5 = sub_93BC0(v8, a1 + a2);
      if ( a1 < v8[0] )
      {
        v3[9] = v5 != 0;
        return v3;
      }
      if ( !v3 )
        return nullptr;
      v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v6 != sub_3C3B0 )
      {
        v7 = v3;
        v3 = nullptr;
        v6(v7);
        return v3;
      }
    }
    operator delete(v3, 0x10u);
    return nullptr;
  }
  return v3;
}

