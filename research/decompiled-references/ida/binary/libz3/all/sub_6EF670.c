__int64 __fastcall sub_6EF670(_QWORD **a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (_QWORD *)v1[4];
    if ( v2 )
    {
      v3 = &v2[*((unsigned int *)v2 - 1)];
      if ( v2 == v3 )
        goto LABEL_8;
      do
      {
        v4 = (void (__fastcall ***)(_QWORD))*v2;
        if ( *v2 )
        {
          (**v4)(*v2);
          sub_186B220(v4);
        }
        ++v2;
      }
      while ( v3 != v2 );
      v3 = (_QWORD *)v1[4];
      if ( v3 )
LABEL_8:
        sub_186B220(v3 - 1);
    }
    sub_14B63F0(v1 + 2);
    sub_18572D0(v1 + 1);
    return sub_186B220(v1);
  }
  return result;
}

