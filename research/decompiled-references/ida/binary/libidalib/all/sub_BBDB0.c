__int64 __fastcall sub_BBDB0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *v3; // rbp

  v1 = (_QWORD *)a1[1];
  *a1 = &off_22FE20;
  result = a1[2];
  v3 = &v1[result];
  if ( v1 != v3 )
  {
    do
    {
      if ( *v1 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      ++v1;
    }
    while ( v3 != v1 );
    v3 = (_QWORD *)a1[1];
  }
  if ( v3 )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

