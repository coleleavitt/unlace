__int64 __fastcall sub_E63BD0(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  void (__fastcall ***v4)(_QWORD); // rbp

  result = (__int64)&off_1C4C960;
  v2 = (_QWORD *)a1[4];
  *a1 = &off_1C4C960;
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v3 = &v2[result];
    if ( v2 == v3 )
      goto LABEL_7;
    do
    {
      v4 = (void (__fastcall ***)(_QWORD))*v2;
      if ( *v2 )
      {
        (**v4)(*v2);
        result = sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (_QWORD *)a1[4];
    if ( v3 )
    {
LABEL_7:
      *((_DWORD *)v3 - 1) = 0;
      return sub_186B220(v3 - 1);
    }
  }
  return result;
}

