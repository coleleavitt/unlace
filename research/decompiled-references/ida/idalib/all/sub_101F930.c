__int64 __fastcall sub_101F930(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  size_t v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  void *v10; // rdi

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 16LL))(
          *(_QWORD *)(a1 + 464),
          -2 - a2) )
    return sub_101F8A0(a1 + 264, a2);
  if ( a3 )
    *a3 = 1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * (a2 >> 6));
  if ( _bittest64(&v5, a2) )
    return sub_101F8A0(a1 + 264, a2);
  result = *(_QWORD *)(a1 + 624);
  if ( !result )
  {
    v7 = j__strlen(&byte_22F0C30);
    v8 = sub_101D280(a1);
    *(_QWORD *)(v8 + 24) = &byte_22F0C30;
    *(_QWORD *)(v8 + 32) = v7;
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    result = operator new(0x18u);
    v10 = *(void **)(a1 + 624);
    *(_DWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = v9;
    *(_QWORD *)(a1 + 624) = result;
    if ( v10 )
    {
      operator delete(v10, 0x18u);
      return *(_QWORD *)(a1 + 624);
    }
  }
  return result;
}
