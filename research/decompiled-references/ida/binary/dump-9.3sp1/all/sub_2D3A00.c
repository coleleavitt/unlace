__m128i *__fastcall sub_2D3A00(__int64 a1, __int64 a2, unsigned __int8 **a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // dl
  int v6; // r12d
  int v7; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v19; // rax
  __m128i *v20; // [rsp+0h] [rbp-90h]
  unsigned __int64 v21; // [rsp+10h] [rbp-80h]
  unsigned __int64 v22; // [rsp+10h] [rbp-80h]
  int v23; // [rsp+18h] [rbp-78h]
  int v24; // [rsp+1Ch] [rbp-74h]
  int v25; // [rsp+1Ch] [rbp-74h]
  __int64 v27; // [rsp+28h] [rbp-68h] BYREF
  __int64 *v28; // [rsp+30h] [rbp-60h] BYREF
  __m128i v29; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v4 = *a3;
  v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)a4);
  if ( (unsigned __int64)v4 < a4 )
  {
    v5 = *v4;
    v29.m128i_i64[0] = (__int64)(v4 + 1);
    if ( v5 > 1u )
      return nullptr;
  }
  v20 = (__m128i *)qalloc();
  if ( !v20 )
    sub_4F618(16);
  v6 = 0;
  v20->m128i_i64[0] = 0;
  v20->m128i_i64[1] = 0;
  v7 = unpack_dd();
  v8 = *(_QWORD *)(a1 + 8);
  v23 = v7;
  v27 = v8;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v27 = sub_3323C0(&v29, v8);
      v28 = &v27;
      v9 = sub_2D3890(v20, (unsigned __int64 *)&v27, &v28);
      v10 = (_QWORD *)(v9 + 24);
      v11 = v9;
      v12 = (int)unpack_dd();
      v13 = v10[2];
      v14 = v12;
      if ( v13 < v12 )
      {
        v17 = v10[1];
        if ( v10[3] < v12 )
        {
          v25 = v12;
          v22 = v12;
          v19 = qvector_reserve(v11 + 32, v17, v12, 4);
          v14 = v25;
          v12 = v22;
          v10[1] = v19;
          v17 = v19;
          v13 = v10[2];
        }
        v24 = v14;
        v21 = v12;
        memset((void *)(v17 + 4 * v13), 0, 4 * (v12 - v13));
        v14 = v24;
        v10[2] = v21;
      }
      else if ( v12 != v13 )
      {
        v10[2] = v12;
      }
      v15 = 0;
      v16 = 4LL * (unsigned int)v14;
      if ( v14 > 0 )
      {
        do
        {
          *(_DWORD *)(v10[1] + v15) = unpack_dd();
          v15 += 4;
        }
        while ( v16 != v15 );
      }
      if ( v23 == ++v6 )
        break;
      v8 = v27;
    }
  }
  *a3 = (unsigned __int8 *)v29.m128i_i64[0];
  return v20;
}
