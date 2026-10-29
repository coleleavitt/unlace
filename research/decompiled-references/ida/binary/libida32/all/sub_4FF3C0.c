unsigned __int64 __fastcall sub_4FF3C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rax
  char v13; // r15
  unsigned int v14; // r13d
  __int64 v15; // rax
  unsigned int *v16; // r12
  unsigned int v18; // edx
  unsigned int v19; // r14d
  unsigned int v20; // [rsp+8h] [rbp-60h]
  int v21; // [rsp+Ch] [rbp-5Ch]
  __m128i v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v23 = __readfsqword(0x28u);
  v22 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v22);
  v6 = *(_QWORD *)(a1 + 1576);
  if ( !*(_BYTE *)(v6 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = v5 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v6 + 40) )
    sub_4FC970();
  v8 = v7 << 6;
  v9 = 0;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = v5;
  v10 = *(_QWORD *)(v6 + 32) + v8;
  v11 = unpack_dd(&v22);
  v21 = unpack_dd(&v22);
  v20 = unpack_dd(&v22);
  v12 = v22.m128i_i64[0];
  if ( v22.m128i_i64[0] < (unsigned __int64)v22.m128i_i64[1] )
  {
    v9 = *(_BYTE *)v22.m128i_i64[0];
    v12 = v22.m128i_i64[0] + 1;
  }
  v22.m128i_i64[0] = v12;
  v13 = 0;
  v14 = unpack_dd(&v22);
  v15 = v22.m128i_i64[0];
  if ( v22.m128i_i64[0] < (unsigned __int64)v22.m128i_i64[1] )
  {
    v13 = *(_BYTE *)v22.m128i_i64[0];
    v15 = v22.m128i_i64[0] + 1;
  }
  v22.m128i_i64[0] = v15;
  if ( !a3 )
  {
    v14 = v20;
    v13 = v9;
  }
  v16 = sub_4FED00((unsigned int **)v10, v11);
  if ( v16 != (unsigned int *)(*(_QWORD *)v10 + 17LL * *(_QWORD *)(v10 + 8)) && v11 >= *v16 )
  {
    v18 = v16[1];
    v19 = v11 + v21;
    if ( v11 < v18 && v11 == *v16 && v19 == v18 )
    {
      sub_4FD360(*(unsigned int *)(v10 + 56), v16, v14, v13);
      *v16 = v11;
      v16[1] = v19;
      v16[2] = v14;
      *((_BYTE *)v16 + 12) = v13;
      *((_BYTE *)v16 + 16) = 1;
    }
  }
  return v23 - __readfsqword(0x28u);
}

