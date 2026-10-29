__int64 __fastcall sub_4DB5F0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *v3; // r12
  void *v4; // rbp

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v3 = &v1[result];
    if ( v3 == v1 )
      goto LABEL_7;
    do
    {
      v4 = (void *)*v1;
      if ( *v1 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 24LL))(*v1);
        result = sub_186B220(v4);
      }
      ++v1;
    }
    while ( v3 != v1 );
    v1 = (_QWORD *)*a1;
    if ( *a1 )
LABEL_7:
      *((_DWORD *)v1 - 1) = 0;
  }
  a1[1] = 0;
  return result;
}

