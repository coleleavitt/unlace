_QWORD *__fastcall sub_7E1C00(size_t a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  void (__fastcall *v5)(_QWORD *); // rax
  _QWORD *v6; // rdi
  void *v7; // rdi
  size_t v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = operator new(0x28u);
  *(_BYTE *)(v2 + 8) = 32;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_2B3BA40;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a1 )
  {
    v8[0] = a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      if ( (unsigned __int8)sub_7E1980((__int64 *)(v2 + 16), v8, a2 + a1) )
        return v3;
      if ( !v3 )
        return nullptr;
      v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
      if ( v5 != sub_7DD7A0 )
      {
        v6 = v3;
        v3 = nullptr;
        v5(v6);
        return v3;
      }
      v7 = (void *)v3[2];
      *v3 = &off_2B3BA40;
      if ( v7 )
      {
        v3[3] = 0;
        qfree(v7);
      }
    }
    operator delete(v3, 0x28u);
    return nullptr;
  }
  return v3;
}
