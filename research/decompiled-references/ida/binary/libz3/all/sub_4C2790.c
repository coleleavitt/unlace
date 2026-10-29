__int64 __fastcall sub_4C2790(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // r13
  void (__fastcall ***v4)(_QWORD); // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r13
  void (__fastcall ***v7)(_QWORD); // rbp

  result = sub_4C2540(a1);
  v2 = *(_QWORD **)(a1 + 16);
  *(_OWORD *)(a1 + 104) = 0;
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
    v3 = *(_QWORD **)(a1 + 16);
    if ( v3 )
LABEL_7:
      *((_DWORD *)v3 - 1) = 0;
  }
  v5 = *(_QWORD **)(a1 + 24);
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
    while ( v6 != v5 );
    v6 = *(_QWORD **)(a1 + 24);
    if ( v6 )
LABEL_14:
      *((_DWORD *)v6 - 1) = 0;
  }
  *(_QWORD *)(a1 + 168) = 0;
  return result;
}

