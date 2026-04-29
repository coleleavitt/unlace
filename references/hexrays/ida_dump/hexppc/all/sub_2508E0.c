__int64 (__fastcall **__fastcall sub_2508E0(_QWORD *a1))()
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rdi

  v2 = a1[10];
  *a1 = off_4CCF78;
  while ( v2 )
  {
    sub_24FF30(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[5];
  result = off_4C8E58;
  *a1 = off_4C8E58;
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
