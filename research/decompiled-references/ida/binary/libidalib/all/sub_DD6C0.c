__int64 __fastcall sub_DD6C0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 *v6; // rbp
  __int64 result; // rax
  unsigned __int64 v8; // r12
  const void *v9; // rbx
  void *v10; // rax

  v5 = *(_QWORD *)(a1 + 184) + 32 * a5;
  sub_94440(*a2);
  v6 = *a2;
  result = v5 + 8;
  if ( *a2 + 3 != (__int64 *)(v5 + 8) )
  {
    v8 = *(_QWORD *)(v5 + 16);
    if ( v8 > 1 )
    {
      v9 = *(const void **)(v5 + 8);
      v10 = (void *)v6[3];
      if ( v6[5] < v8 )
      {
        v10 = (void *)qvector_reserve();
        v6[3] = (__int64)v10;
      }
      v6[4] = v8;
      memmove(v10, v9, v8 - 1);
      result = v6[3];
      *(_BYTE *)(result + v8 - 1) = 0;
    }
    else
    {
      v6[4] = 0;
    }
  }
  return result;
}

