__int64 *__fastcall sub_7C0AE0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  void (__fastcall *v5)(__int64 *); // rax
  __int64 *v6; // rdi
  void *v7; // rdi
  const void *v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = (const void *)__readfsqword(0x28u);
  v2 = operator new(0x28u);
  *(_BYTE *)(v2 + 8) = 11;
  v3 = (__int64 *)v2;
  *(_QWORD *)v2 = &off_2B116B0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a1 )
  {
    v8[0] = a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
LABEL_4:
      operator delete(v3, 0x28u);
      return nullptr;
    }
    if ( !sub_7BFDB0((_DWORD *)(v2 + 12), (unsigned __int64 *)v8)
      || !(unsigned __int8)sub_7BE9B0(v3 + 2, v8, (unsigned __int64)a1 + a2) )
    {
      if ( !v3 )
        return nullptr;
      v5 = *(void (__fastcall **)(__int64 *))(*v3 + 8);
      if ( v5 != sub_7BA340 )
      {
        v6 = v3;
        v3 = nullptr;
        v5(v6);
        return v3;
      }
      v7 = (void *)v3[2];
      *v3 = (__int64)&off_2B116B0;
      if ( v7 )
      {
        v3[3] = 0;
        qfree(v7);
      }
      goto LABEL_4;
    }
  }
  return v3;
}

