unsigned __int64 __fastcall sub_6FA10(__int64 *a1)
{
  __m128i v2; // xmm0
  __int64 v3; // rdi
  unsigned int *v4; // r12
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rbp
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, int, int); // rax
  int v12; // edx
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, int); // rax
  __int64 (__fastcall *v15)(__int64, int); // rax
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  int v19; // esi
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned int *v21; // [rsp+10h] [rbp-58h] BYREF
  __m128i v22; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  sub_6F8D0((__int64)&v21, a1);
  v2 = _mm_loadu_si128(&v22);
  v3 = a1[19];
  v4 = v21;
  v22 = 0;
  v21 = nullptr;
  v5 = v2.m128i_i64[0];
  if ( v3 )
  {
    a1[20] = 0;
    v20 = v2;
    qfree(v3);
    v6 = _mm_load_si128(&v20);
    v7 = (__int64)v21;
    a1[19] = (__int64)v4;
    *((__m128i *)a1 + 10) = v6;
    if ( v7 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v7);
      v5 = a1[20];
      v4 = (unsigned int *)a1[19];
    }
  }
  else
  {
    a1[19] = (__int64)v4;
    *((__m128i *)a1 + 10) = v2;
  }
  v20.m128i_i64[0] = (__int64)&v4[v5];
  if ( (unsigned int *)v20.m128i_i64[0] == v4 )
    return v23 - __readfsqword(0x28u);
  do
  {
    v8 = *v4;
    v9 = 24LL * (int)*v4;
    while ( 1 )
    {
      v13 = *a1;
      v14 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v14 == sub_65090 )
        break;
      v10 = v14((__int64)a1, v8);
      v13 = *a1;
LABEL_7:
      if ( !v10 )
        goto LABEL_13;
      v11 = *(__int64 (__fastcall **)(__int64, int, int))(v13 + 112);
      if ( v11 == sub_650D0 )
        v12 = **(_DWORD **)(a1[6] + v9);
      else
        v12 = v11((__int64)a1, v8, 0);
      sub_6D320((__int64)a1, v8, v12);
    }
    if ( a1[7] )
    {
      v10 = *(_DWORD *)(a1[6] + v9 + 8);
      goto LABEL_7;
    }
LABEL_13:
    v15 = *(__int64 (__fastcall **)(__int64, int))(v13 + 104);
    if ( v15 == sub_650B0 )
    {
LABEL_14:
      if ( a1[10] )
      {
        v17 = *(_DWORD *)(a1[9] + v9 + 8);
        goto LABEL_18;
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = v15((__int64)a1, v8);
LABEL_18:
        if ( !v17 )
          break;
        v18 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120);
        if ( v18 == sub_650F0 )
          v19 = **(_DWORD **)(a1[9] + v9);
        else
          v19 = v18((__int64)a1, v8, 0);
        sub_6D320((__int64)a1, v19, v8);
        v15 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
        if ( v15 == sub_650B0 )
          goto LABEL_14;
      }
    }
    ++v4;
  }
  while ( (unsigned int *)v20.m128i_i64[0] != v4 );
  return v23 - __readfsqword(0x28u);
}
