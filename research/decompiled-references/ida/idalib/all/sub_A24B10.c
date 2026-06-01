void __fastcall sub_A24B10(__m128 *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 *v8; // r12
  __int64 *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdi
  double v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (__int64 *)a1[4].m128_u64[0];
  v3 = &v2[2 * a1[4].m128_u32[2]];
  while ( v3 != v2 )
  {
    v4 = v2[1];
    v5 = *v2;
    v2 += 2;
    operator delete(v5, v4, 16);
  }
  v6 = a1[1].m128_u32[2];
  a1[4].m128_i32[2] = 0;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)a1[1].m128_u64[0];
    a1[5].m128_u64[0] = 0;
    v8 = &v7[v6];
    v9 = v7 + 1;
    *(_QWORD *)&v13[0] = *v7 + 4096LL;
    *a1 = _mm_loadh_ps(v13);
    if ( v7 + 1 != v8 )
    {
      while ( 1 )
      {
        v11 = (unsigned int)(v9 - v7) >> 7;
        if ( v11 > 0x1D )
        {
          v10 = *v9++;
          operator delete(v10, 0x40000000000LL, 16);
          if ( v8 == v9 )
            break;
        }
        else
        {
          v12 = *v9++;
          operator delete(v12, 4096LL << v11, 16);
          if ( v9 == v8 )
            break;
        }
        v7 = (_QWORD *)a1[1].m128_u64[0];
      }
    }
    a1[1].m128_i32[2] = 1;
  }
}
