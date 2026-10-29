_QWORD *__fastcall sub_41FF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  void (__fastcall *v7)(_QWORD *); // rax
  char *v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbp
  char *v11; // rax
  void *v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v14[0] = a1;
  v4 = operator new(0x38u);
  *(_BYTE *)(v4 + 8) = 79;
  v5 = (_QWORD *)v4;
  *(_QWORD *)v4 = &off_1620D8;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_BYTE *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  if ( a1 && !(unsigned __int8)sub_4BCE0(v4, v14, a2, a3) )
  {
    if ( v5 )
    {
      v7 = *(void (__fastcall **)(_QWORD *))(*v5 + 8LL);
      if ( v7 != sub_3F7C0 )
      {
        v13 = v5;
        v5 = nullptr;
        v7(v13);
        return v5;
      }
      v8 = (char *)v5[2];
      *v5 = &off_1620D8;
      if ( v8 )
      {
        v9 = v5[3];
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = &v8[24 * i];
            v12 = *(void **)v11;
            if ( *(_QWORD *)v11 )
            {
              *((_QWORD *)v11 + 1) = 0;
              j__free(v12);
              v8 = (char *)v5[2];
            }
          }
        }
        v5[3] = 0;
        j__free(v8);
      }
      operator delete(v5, 0x38u);
    }
    return nullptr;
  }
  return v5;
}

