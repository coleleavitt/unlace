__int64 __fastcall sub_3FFC90(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *i; // r12
  void (__fastcall ***v4)(_QWORD); // rbp

  v1 = *(_QWORD **)(a1 + 376);
  result = *(unsigned int *)(a1 + 384);
  for ( i = &v1[result]; v1 != i; ++v1 )
  {
    v4 = (void (__fastcall ***)(_QWORD))*v1;
    if ( *v1 )
    {
      (**v4)(*v1);
      result = sub_186B220(v4);
    }
  }
  *(_DWORD *)(a1 + 384) = 0;
  return result;
}

