__int64 __fastcall sub_4C8B0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  void (__fastcall *v6)(_QWORD *); // rax
  _QWORD *v7; // rdi
  void *v8; // rdi
  const void *v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = (const void *)__readfsqword(0x28u);
  v2 = operator new(0x30u);
  *(_BYTE *)(v2 + 8) = 14;
  v3 = v2;
  *(_QWORD *)v2 = &off_1614A8;
  *(_QWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a1 )
  {
    v9[0] = a1;
    v4 = (unsigned __int64)a1 + a2;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return 0;
LABEL_4:
      operator delete((void *)v3, 0x30u);
      return 0;
    }
    if ( !(unsigned __int8)sub_480B0((__int64 *)(v2 + 16), v9, v4)
      || !sub_4A460((_DWORD *)(v3 + 40), (unsigned __int64 *)v9, v4) )
    {
      if ( !v3 )
        return 0;
      v6 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v3 + 8LL);
      if ( v6 != sub_3CDB0 )
      {
        v7 = (_QWORD *)v3;
        v3 = 0;
        v6(v7);
        return v3;
      }
      v8 = *(void **)(v3 + 16);
      *(_QWORD *)v3 = &off_1614A8;
      if ( v8 )
      {
        *(_QWORD *)(v3 + 24) = 0;
        j__free(v8);
      }
      goto LABEL_4;
    }
  }
  return v3;
}

