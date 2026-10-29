void __fastcall sub_A00DD0(__m128 *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  double v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = a1[4].m128_u64[0];
  v2 = v1 + 16LL * a1[4].m128_u32[2];
  while ( v2 != v1 )
  {
    v1 += 16LL;
    operator delete();
  }
  v3 = a1[1].m128_u32[2];
  a1[4].m128_i32[2] = 0;
  if ( (_DWORD)v3 )
  {
    v4 = (_QWORD *)a1[1].m128_u64[0];
    a1[5].m128_u64[0] = 0;
    v5 = &v4[v3];
    v6 = v4 + 1;
    *(_QWORD *)&v7[0] = *v4 + 4096LL;
    *a1 = _mm_loadh_ps(v7);
    if ( v4 + 1 != v5 )
    {
      while ( 1 )
      {
        if ( (unsigned int)(v6 - v4) >> 7 > 0x1D )
        {
          ++v6;
          operator delete();
          if ( v5 == v6 )
            break;
        }
        else
        {
          ++v6;
          operator delete();
          if ( v6 == v5 )
            break;
        }
        v4 = (_QWORD *)a1[1].m128_u64[0];
      }
    }
    a1[1].m128_i32[2] = 1;
  }
}

