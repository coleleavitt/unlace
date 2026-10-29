__int64 __fastcall sub_57D340(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  void (__fastcall ***v4)(_QWORD); // rbp

  result = (__int64)&off_1C516C8;
  v2 = (_QWORD *)a1[1];
  *a1 = &off_1C516C8;
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v3 = &v2[result];
    if ( v2 == v3 )
      return sub_186B220(v3 - 1);
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
    v3 = (_QWORD *)a1[1];
    if ( v3 )
      return sub_186B220(v3 - 1);
  }
  return result;
}

