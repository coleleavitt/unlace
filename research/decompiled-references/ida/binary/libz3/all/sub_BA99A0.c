__int64 __fastcall sub_BA99A0(_QWORD *a1, unsigned int a2, unsigned int a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  unsigned int *v9; // rbx
  unsigned int *i; // r12
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  sub_BA8A20(a1, a2, a4, a5, a6);
  result = a1[24];
  v9 = *(unsigned int **)(result + 8LL * a2);
  if ( v9 )
  {
    result = *(v9 - 1);
    for ( i = &v9[result]; i != v9; a3 >>= 1 )
    {
      while ( 1 )
      {
        v11 = *v9;
        v12 = a1[2];
        v13[0] = 2;
        if ( (a3 & 1) == 0 )
          v11 ^= 1u;
        result = *(unsigned __int8 *)(*(_QWORD *)(v12 + 8848) + v11);
        if ( (_BYTE)result != 0xFF )
          break;
        ++v9;
        a3 >>= 1;
        result = sub_8E8670(v12, v13, v11 ^ 1);
        if ( i == v9 )
          return result;
      }
      if ( !(_BYTE)result )
        result = (__int64)sub_8F28B0(v12, v11, 2, 0);
      ++v9;
    }
  }
  return result;
}

