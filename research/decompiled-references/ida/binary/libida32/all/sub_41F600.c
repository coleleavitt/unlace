__int64 (__fastcall *__fastcall sub_41F600(_QWORD *a1))(_QWORD *, _QWORD *, __int64)
{
  void **v2; // r12
  void **v3; // rbx
  void *v4; // rdi
  __int64 (__fastcall *result)(_QWORD *, _QWORD *, __int64); // rax

  v2 = (void **)a1[9];
  v3 = (void **)a1[8];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = nullptr;
        qfree(v4);
      }
      v3 += 3;
    }
    while ( v2 != v3 );
    v3 = (void **)a1[8];
  }
  if ( v3 )
    operator delete(v3, a1[10] - (_QWORD)v3);
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[4];
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(a1 + 2, a1 + 2, 3);
  return result;
}

