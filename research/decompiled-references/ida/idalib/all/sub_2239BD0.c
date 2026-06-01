__int64 __fastcall sub_2239BD0(__int64 *a1)
{
  void **v1; // rbp
  __int64 result; // rax

  v1 = (void **)a1[1];
  result = *a1;
  if ( v1 )
  {
    if ( *v1 )
      operator delete(*v1);
    operator delete(v1, 0x18u);
    a1[1] = 0;
    result = *a1;
  }
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}
