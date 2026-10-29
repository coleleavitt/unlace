__int64 __fastcall sub_6440F0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *v3; // r12
  void (__fastcall ***v4)(_QWORD); // rbp

  v1 = *(_QWORD **)(a1 + 24);
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
    while ( v3 != v1 );
    v3 = *(_QWORD **)(a1 + 24);
    if ( v3 )
    {
LABEL_7:
      *((_DWORD *)v3 - 1) = 0;
      *(_BYTE *)(a1 + 16) = 0;
      return sub_186B220(v3 - 1);
    }
  }
  return result;
}

