_QWORD *__fastcall sub_80DFC0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  void (__fastcall *v5)(_QWORD *); // rax
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  unsigned __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = a1;
  v2 = operator new(0x58u);
  *(_BYTE *)(v2 + 8) = 26;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_2B3C6B0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  if ( !a1 || (unsigned __int8)sub_80DBC0((_QWORD *)v2, v9, a2) )
    return v3;
  if ( v3 )
  {
    v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
    if ( v5 == sub_80B690 )
    {
      v6 = (void *)v3[8];
      *v3 = &off_2B3C6B0;
      if ( v6 )
      {
        v3[9] = 0;
        qfree(v6);
      }
      v7 = (void *)v3[5];
      if ( v7 )
      {
        v3[6] = 0;
        qfree(v7);
      }
      v8 = (void *)v3[2];
      if ( v8 )
      {
        v3[3] = 0;
        qfree(v8);
      }
      operator delete(v3, 0x58u);
    }
    else
    {
      v5(v3);
    }
  }
  return nullptr;
}
