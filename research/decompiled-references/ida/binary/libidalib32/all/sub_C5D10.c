__int64 __fastcall sub_C5D10(unsigned int a1, __int64 a2)
{
  int *v2; // rax
  int *v3; // rbx
  unsigned __int64 v4; // r12
  const void *v5; // r14
  void *v6; // rdi
  __int64 v8; // rax

  v2 = sub_C5C80(a1);
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
    *(_DWORD *)(a2 + 24) = v3[6];
    *(_DWORD *)(a2 + 28) = v3[7];
    *(_DWORD *)(a2 + 32) = v3[8];
  }
  return 1;
}

