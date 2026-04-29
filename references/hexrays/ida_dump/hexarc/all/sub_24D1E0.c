__int64 (__fastcall **__fastcall sub_24D1E0(_QWORD *a1))()
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rdi

  v2 = a1[10];
  *a1 = off_4AC658;
  while ( v2 )
  {
    sub_24C830(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[5];
  result = off_4A8538;
  *a1 = off_4A8538;
  if ( v4 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v6);
  }
  return result;
}
