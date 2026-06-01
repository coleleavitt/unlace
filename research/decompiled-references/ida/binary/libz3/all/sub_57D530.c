__int64 __fastcall sub_57D530(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  _QWORD *i; // r12
  void (__fastcall ***v5)(_QWORD); // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi

  result = (__int64)&off_1C51700;
  v3 = (_QWORD *)a1[1];
  *a1 = &off_1C51700;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; ++v3 )
    {
      v5 = (void (__fastcall ***)(_QWORD))*v3;
      if ( *v3 )
      {
        (**v5)(*v3);
        result = sub_186B220(v5);
      }
    }
  }
  v6 = a1[2];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = a1[1];
  if ( v7 )
    return sub_186B220((void *)(v7 - 8));
  return result;
}

