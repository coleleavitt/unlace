_QWORD *__fastcall sub_8E4100(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  void (__fastcall *v5)(_QWORD *); // rax
  void *v6; // rdi
  void *v7; // rdi
  const void *v8; // [rsp+8h] [rbp-30h] BYREF

  v8 = a1;
  v2 = operator new(0x48u);
  *(_BYTE *)(v2 + 8) = 16;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_2B3E1E8;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  if ( !a1 || sub_8E4050(v2, &v8, a2) )
    return v3;
  if ( v3 )
  {
    v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
    if ( v5 == sub_8D7A90 )
    {
      v6 = (void *)v3[5];
      *v3 = &off_2B3E1E8;
      if ( v6 )
      {
        v3[6] = 0;
        qfree(v6);
      }
      v7 = (void *)v3[2];
      if ( v7 )
      {
        v3[3] = 0;
        qfree(v7);
      }
      operator delete(v3, 0x48u);
    }
    else
    {
      v5(v3);
    }
  }
  return nullptr;
}
