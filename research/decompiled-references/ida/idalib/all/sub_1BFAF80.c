__int64 __fastcall sub_1BFAF80(__int64 a1, __m128 a2, __m128 a3)
{
  unsigned int v3; // ebp
  __int64 result; // rax
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 296);
  result = *(unsigned int *)(a1 + 300);
  if ( v3 < (unsigned int)result )
  {
    v6 = *(_DWORD *)(a1 + 296);
    while ( 1 )
    {
      for ( ; (unsigned int)result > v3; result = *(unsigned int *)(a1 + 300) )
      {
        v7 = *(_QWORD *)(a1 + 64);
        v8 = *(_QWORD *)(a1 + 56);
        v9 = *(_QWORD *)(a1 + 16);
        v10 = *(_QWORD *)a1;
        v14[0] = *(_QWORD *)(v7 + 8LL * v6);
        v11 = v3++;
        v12 = *(_QWORD *)(v7 + 8 * v11);
        v13 = *(_QWORD *)(a1 + 8);
        v14[1] = v12;
        sub_1BFAC00(v10, (__int64)v14, v13, v9, v8, 0, a2, a3);
      }
      if ( ++v6 >= (unsigned int)result )
        break;
      v3 = *(_DWORD *)(a1 + 296);
    }
  }
  return result;
}
