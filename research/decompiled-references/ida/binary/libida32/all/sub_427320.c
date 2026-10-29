__int64 (__fastcall *__fastcall sub_427320(_QWORD *a1))(_QWORD *, _QWORD *, __int64)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 (__fastcall *result)(_QWORD *, _QWORD *, __int64); // rax

  v1 = a1[9];
  v2 = a1[8];
  if ( v1 != v2 )
  {
    do
    {
      if ( *(_QWORD *)v2 )
        operator delete(*(void **)v2, *(_QWORD *)(v2 + 16) - *(_QWORD *)v2);
      v2 += 24;
    }
    while ( v1 != v2 );
    v2 = a1[8];
  }
  if ( v2 )
    operator delete((void *)v2, a1[10] - v2);
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[4];
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(a1 + 2, a1 + 2, 3);
  return result;
}

