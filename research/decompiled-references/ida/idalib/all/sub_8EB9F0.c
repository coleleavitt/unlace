_QWORD *__fastcall sub_8EB9F0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  void (__fastcall *v5)(_QWORD *); // rax
  void *v6; // rdi
  char *v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbp
  char *v10; // rax
  void *v11; // rdi
  _QWORD *v12; // rdi
  const void *v13; // [rsp+8h] [rbp-30h] BYREF

  v13 = a1;
  v2 = operator new(0x40u);
  *(_BYTE *)(v2 + 8) = 42;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_2B3E6C8;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  if ( a1 && !(unsigned __int8)sub_8E2C20((__int64 *)v2, &v13, a2) )
  {
    if ( v3 )
    {
      v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
      if ( v5 != sub_8D9C60 )
      {
        v12 = v3;
        v3 = nullptr;
        v5(v12);
        return v3;
      }
      v6 = (void *)v3[5];
      *v3 = &off_2B3E6C8;
      if ( v6 )
      {
        v3[6] = 0;
        qfree(v6);
      }
      v7 = (char *)v3[2];
      if ( v7 )
      {
        v8 = v3[3];
        if ( v8 )
        {
          for ( i = 0; i != v8; ++i )
          {
            v10 = &v7[24 * i];
            v11 = *(void **)v10;
            if ( *(_QWORD *)v10 )
            {
              *((_QWORD *)v10 + 1) = 0;
              qfree(v11);
              v7 = (char *)v3[2];
            }
          }
        }
        v3[3] = 0;
        qfree(v7);
      }
      operator delete(v3, 0x40u);
    }
    return nullptr;
  }
  return v3;
}
