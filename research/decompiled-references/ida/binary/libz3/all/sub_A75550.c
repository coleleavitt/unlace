__int64 (__fastcall **__fastcall sub_A75550(_QWORD *a1))()
{
  void *v2; // rbp
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rdi

  v2 = (void *)a1[1];
  *(a1 - 7) = off_1C70F18;
  *a1 = off_1C710C8;
  if ( v2 )
  {
    sub_A86280(v2);
    sub_186B220(v2);
  }
  v3 = *(a1 - 2);
  result = off_1C70148;
  *(a1 - 7) = off_1C70148;
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v5 = *(a1 - 3);
  if ( v5 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  return result;
}

