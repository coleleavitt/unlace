__int64 __fastcall sub_29900(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v5; // r13
  const void *v7; // r15
  void *v8; // rdi
  __int64 v9; // rax

  if ( a2 != (__int64 *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 > 1 )
    {
      v7 = *(const void **)(a1 + 40);
      v8 = (void *)*a2;
      if ( a2[2] < v5 )
      {
        v9 = sub_96080(a2, *a2, v5, 1);
        *a2 = v9;
        v8 = (void *)v9;
      }
      a2[1] = v5;
      memmove(v8, v7, v5 - 1);
      *(_BYTE *)(*a2 + v5 - 1) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  *a3 = *(unsigned __int16 *)(a1 + 64);
  return 1;
}

