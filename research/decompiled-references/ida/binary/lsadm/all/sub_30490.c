_QWORD *__fastcall sub_30490(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  void (__fastcall *v7)(_QWORD *); // rax
  void *v8; // rdi
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = a1;
  v4 = operator new(0x28u);
  *(_BYTE *)(v4 + 8) = 19;
  v5 = (_QWORD *)v4;
  *(_QWORD *)v4 = &off_79760;
  *(_QWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  if ( !a1 || (unsigned __int8)sub_31500(v4, v9, a2, a3) )
    return v5;
  if ( v5 )
  {
    v7 = *(void (__fastcall **)(_QWORD *))(*v5 + 8LL);
    if ( v7 == sub_2FED0 )
    {
      v8 = (void *)v5[2];
      *v5 = &off_79760;
      if ( v8 )
      {
        v5[3] = 0;
        j__free(v8);
      }
      operator delete(v5, 0x28u);
    }
    else
    {
      v7(v5);
    }
  }
  return nullptr;
}

