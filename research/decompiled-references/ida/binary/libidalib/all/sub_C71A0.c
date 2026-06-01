__int64 __fastcall sub_C71A0(unsigned __int64 a1, __int64 a2)
{
  int *v2; // rax
  int *v3; // rbx
  unsigned __int64 v4; // r12
  const void *v5; // r14
  void *v6; // rdi
  __int64 v8; // rax

  v2 = sub_C7100(a1);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    v3 = v2;
    if ( v2 != (int *)a2 )
    {
      v4 = *((_QWORD *)v2 + 1);
      if ( v4 < 2 )
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
      else
      {
        v5 = *(const void **)v2;
        v6 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v4 )
        {
          v8 = qvector_reserve();
          *(_QWORD *)a2 = v8;
          v6 = (void *)v8;
        }
        *(_QWORD *)(a2 + 8) = v4;
        memmove(v6, v5, v4 - 1);
        *(_BYTE *)(*(_QWORD *)a2 + v4 - 1) = 0;
      }
    }
    *(_QWORD *)(a2 + 24) = *((_QWORD *)v3 + 3);
    *(_QWORD *)(a2 + 32) = *((_QWORD *)v3 + 4);
    *(_QWORD *)(a2 + 40) = *((_QWORD *)v3 + 5);
  }
  return 1;
}

