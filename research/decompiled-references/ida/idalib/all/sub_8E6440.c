__int64 __fastcall sub_8E6440(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void (__fastcall *v5)(_QWORD *); // rax
  _QWORD *v6; // rdi
  void *v7; // rdi
  const void *v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = (const void *)__readfsqword(0x28u);
  v2 = operator new(0x30u);
  *(_BYTE *)(v2 + 8) = 14;
  v3 = v2;
  *(_QWORD *)v2 = &off_2B3E188;
  *(_QWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a1 )
  {
    v8[0] = a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return 0;
LABEL_4:
      operator delete((void *)v3, 0x30u);
      return 0;
    }
    if ( !(unsigned __int8)sub_7E1CF0((__int64 *)(v2 + 16), v8, (unsigned __int64)a1 + a2)
      || !sub_7E30F0((_DWORD *)(v3 + 40), (unsigned __int64 *)v8) )
    {
      if ( !v3 )
        return 0;
      v5 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v3 + 8LL);
      if ( v5 != sub_8D6940 )
      {
        v6 = (_QWORD *)v3;
        v3 = 0;
        v5(v6);
        return v3;
      }
      v7 = *(void **)(v3 + 16);
      *(_QWORD *)v3 = &off_2B3E188;
      if ( v7 )
      {
        *(_QWORD *)(v3 + 24) = 0;
        qfree(v7);
      }
      goto LABEL_4;
    }
  }
  return v3;
}
