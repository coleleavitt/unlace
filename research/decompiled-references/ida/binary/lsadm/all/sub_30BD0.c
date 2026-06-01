_QWORD *__fastcall sub_30BD0(void *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v6; // eax
  __int64 v7; // r15
  size_t v8; // r12
  char *v9; // rsi
  unsigned __int64 v10; // r14
  char *v11; // rax
  char *v12; // rdi
  void (__fastcall *v13)(_QWORD *); // rax
  _QWORD *v14; // rdi
  char *v15; // rax
  void *v16; // rdi
  void *src[9]; // [rsp+0h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v2 = operator new(0x28u);
  *(_BYTE *)(v2 + 8) = 24;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_79850;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a1 )
  {
    src[0] = a1;
    v4 = (unsigned __int64)a1 + a2;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
LABEL_4:
      operator delete(v3, 0x28u);
      return nullptr;
    }
    v6 = sub_28F80((unsigned __int64 *)src, v4);
    if ( v6 )
    {
      v7 = v3[3];
      v8 = v6;
      v9 = (char *)v3[2];
      v10 = v7 + v6;
      if ( v3[4] < v10 )
      {
        v15 = (char *)sub_29E60((__int64)(v3 + 2), v9, v7 + v6, 1u);
        v3[2] = v15;
        v9 = v15;
      }
      v11 = (char *)src[0];
      v3[3] = v10;
      if ( __CFADD__(v8, v11)
        || v4 < (unsigned __int64)&v11[v8]
        || (src[0] = &v11[v8], v12 = &v9[v7], v9 = v11, !memcpy(v12, v11, v8)) )
      {
        if ( !v3 )
          return nullptr;
        v13 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
        if ( v13 != sub_2FE90 )
        {
          v14 = v3;
          v3 = nullptr;
          ((void (__fastcall *)(_QWORD *, char *))v13)(v14, v9);
          return v3;
        }
        v16 = (void *)v3[2];
        *v3 = &off_79850;
        if ( v16 )
        {
          v3[3] = 0;
          j__free(v16);
        }
        goto LABEL_4;
      }
    }
  }
  return v3;
}

