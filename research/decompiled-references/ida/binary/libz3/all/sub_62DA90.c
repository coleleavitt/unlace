__int64 __fastcall sub_62DA90(const __m128i *a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  int v20; // [rsp+1Ch] [rbp-4Ch] BYREF
  __m128 v21; // [rsp+20h] [rbp-48h] BYREF

  v6 = a4[1];
  v20 = a2;
  if ( !v6 )
    return sub_62D6E0(a1, &v20, a3, (__int64)a4);
  v7 = *(unsigned int *)(v6 - 4);
  result = sub_62D6E0(a1, &v20, a3, (__int64)a4);
  if ( (_DWORD)v7 )
  {
    v9 = 8 * v7;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a4[1] + v10);
        v21 = _mm_loadh_ps((const double *)a1->m128i_i64);
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        sub_62D6E0(a1, &v20, (__int64 *)&v21, (__int64)a4);
        result = v21.m128_u64[0];
        v15 = *a4;
        v16 = (__int64 *)(v10 + a4[1]);
        if ( v21.m128_u64[0] )
          ++*(_DWORD *)(v21.m128_u64[0] + 8);
        v17 = *v16;
        if ( *v16 )
        {
          v13 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v13 )
          {
            v19 = result;
            v18 = v16;
            sub_15D7BC0(v15, v17);
            v16 = v18;
            result = v19;
          }
        }
        *v16 = result;
        v11 = v21.m128_u64[0];
        if ( v21.m128_u64[0] )
        {
          v12 = v21.m128_u64[1];
          v13 = (*(_DWORD *)(v21.m128_u64[0] + 8))-- == 1;
          if ( v13 )
            break;
        }
        v10 += 8;
        if ( v9 == v10 )
          return result;
      }
      result = sub_15D7BC0(v12, v11);
      v10 += 8;
    }
    while ( v9 != v10 );
  }
  return result;
}

