_QWORD *__fastcall sub_7EAF60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  void (__fastcall *v7)(_QWORD *); // rax
  void *v8; // rdi
  void *v9; // rdi
  _QWORD v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v10[0] = a1;
  v4 = operator new(0x40u);
  *(_BYTE *)(v4 + 8) = 15;
  v5 = (_QWORD *)v4;
  *(_QWORD *)v4 = &off_2B12500;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  if ( !a1 || (unsigned __int8)sub_7EB7B0(v4, v10, a2, a3) )
    return v5;
  if ( v5 )
  {
    v7 = *(void (__fastcall **)(_QWORD *))(*v5 + 8LL);
    if ( v7 == sub_7E84A0 )
    {
      v8 = (void *)v5[5];
      *v5 = &off_2B12500;
      if ( v8 )
      {
        v5[6] = 0;
        qfree(v8);
      }
      v9 = (void *)v5[2];
      if ( v9 )
      {
        v5[3] = 0;
        qfree(v9);
      }
      operator delete(v5, 0x40u);
    }
    else
    {
      v7(v5);
    }
  }
  return nullptr;
}

