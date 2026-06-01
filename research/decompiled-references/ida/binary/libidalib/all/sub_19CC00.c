__int64 __fastcall sub_19CC00(__int64 a1, int a2, char *a3)
{
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r12
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 160) )
  {
    if ( a2 == 2 )
    {
      *(_WORD *)(a1 + 170) = 0;
      if ( a3 && *a3 )
        *(_WORD *)(a1 + 170) = sub_19CA40(a3);
      return 1;
    }
    if ( a2 == 5 )
    {
      *(_DWORD *)(a1 + 120) = *(_DWORD *)a3;
      return 1;
    }
    if ( a2 == 1 && *(_QWORD *)(a1 + 184) > 1u )
    {
      if ( a3 && (v6 = strlen(a3), (v7 = v6) != 0) )
      {
        v8 = *(void **)(a1 + 176);
        v9 = v6 + 1;
        if ( *(_QWORD *)(a1 + 192) < v6 + 1 )
        {
          v10 = qvector_reserve();
          *(_QWORD *)(a1 + 176) = v10;
          v8 = (void *)v10;
        }
        *(_QWORD *)(a1 + 184) = v9;
        memmove(v8, a3, v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 176) + v7) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 184) = 0;
      }
      return 1;
    }
  }
  return result;
}

