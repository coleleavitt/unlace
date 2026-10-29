__int64 __fastcall sub_9901E0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *v3; // r12
  void (__fastcall ***v4)(_QWORD); // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  void (__fastcall ***v7)(_QWORD); // rbp

  v1 = *(_QWORD **)(a1 + 792);
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    v3 = &v1[result];
    if ( v1 == v3 )
      goto LABEL_7;
    do
    {
      v4 = (void (__fastcall ***)(_QWORD))*v1;
      if ( *v1 )
      {
        (**v4)(*v1);
        result = sub_186B220(v4);
      }
      ++v1;
    }
    while ( v1 != v3 );
    v3 = *(_QWORD **)(a1 + 792);
    if ( v3 )
LABEL_7:
      *((_DWORD *)v3 - 1) = 0;
  }
  v5 = *(_QWORD **)(a1 + 1152);
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 == v6 )
      goto LABEL_14;
    do
    {
      v7 = (void (__fastcall ***)(_QWORD))*v5;
      if ( *v5 )
      {
        (**v7)(*v5);
        result = sub_186B220(v7);
      }
      ++v5;
    }
    while ( v5 != v6 );
    v6 = *(_QWORD **)(a1 + 1152);
    if ( v6 )
LABEL_14:
      *((_DWORD *)v6 - 1) = 0;
  }
  return result;
}

