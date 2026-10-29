_QWORD *__fastcall sub_8E6770(char *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  char *v4; // rbp
  void (__fastcall *v6)(_QWORD *); // rax
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r15
  size_t v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  char *v13; // rax
  __int64 v14; // rax
  void *v15; // rdi
  void *src[9]; // [rsp+0h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v2 = operator new(0x28u);
  *(_BYTE *)(v2 + 8) = 97;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_2B3F118;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a1 )
  {
    src[0] = a1;
    v4 = &a1[a2];
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
LABEL_4:
      operator delete(v3, 0x28u);
      return nullptr;
    }
    if ( !sub_7E30F0((_DWORD *)(v2 + 12), (unsigned __int64 *)src) )
      goto LABEL_8;
    v8 = unpack_dd(src);
    if ( v8 )
    {
      v9 = v3[3];
      v10 = v8;
      v11 = v3[2];
      v12 = v9 + v8;
      if ( v3[4] < v12 )
      {
        v14 = qvector_reserve(v3 + 2, v11, v9 + v8, 1);
        v3[2] = v14;
        v11 = v14;
      }
      v13 = (char *)src[0];
      v3[3] = v12;
      if ( __CFADD__(v10, v13) || v4 < &v13[v10] || (src[0] = &v13[v10], !memcpy((void *)(v11 + v9), v13, v10)) )
      {
LABEL_8:
        if ( !v3 )
          return nullptr;
        v6 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
        if ( v6 != sub_8D6DC0 )
        {
          v7 = v3;
          v3 = nullptr;
          v6(v7);
          return v3;
        }
        v15 = (void *)v3[2];
        *v3 = &off_2B3F118;
        if ( v15 )
        {
          v3[3] = 0;
          qfree(v15);
        }
        goto LABEL_4;
      }
    }
  }
  return v3;
}
