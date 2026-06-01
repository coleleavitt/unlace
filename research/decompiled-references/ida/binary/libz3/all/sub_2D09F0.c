__int64 __fastcall sub_2D09F0(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  void (__fastcall ***v6)(_QWORD); // rbp

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    result = sub_186B220(v2);
  v4 = *(_QWORD **)(a1 + 8);
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    v5 = &v4[result];
    if ( v4 == v5 )
      goto LABEL_9;
    do
    {
      v6 = (void (__fastcall ***)(_QWORD))*v4;
      if ( *v4 )
      {
        (**v6)(*v4);
        result = sub_186B220(v6);
      }
      ++v4;
    }
    while ( v5 != v4 );
    v5 = *(_QWORD **)(a1 + 8);
    if ( v5 )
    {
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
      return sub_186B220(v5 - 1);
    }
  }
  return result;
}

