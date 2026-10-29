unsigned __int64 __fastcall sub_5175D0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 *v11; // rbx
  unsigned __int64 v12; // r13
  char v13; // bp
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  char *v18; // rdi
  char *v19; // rdx
  unsigned __int64 *v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // r14
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-80h]
  __m128i v27; // [rsp+10h] [rbp-78h] BYREF
  __int64 v28[3]; // [rsp+20h] [rbp-68h] BYREF
  char v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v30 = __readfsqword(0x28u);
  v27 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v5));
  v7 = unpack_dd(&v27);
  v8 = *(_QWORD *)(a1 + 1768);
  if ( !*(_BYTE *)(v8 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v9 = v7 - *(_DWORD *)(*(_QWORD *)(v8 + 8) + 68LL);
  if ( v9 >= *(_QWORD *)(v8 + 40) )
    sub_5144F0();
  v10 = v9 << 6;
  *(_DWORD *)(*(_QWORD *)(v8 + 32) + v10 + 56) = v7;
  v11 = (__int64 *)(*(_QWORD *)(v8 + 32) + v10);
  v12 = unpack_dq(&v27);
  v13 = 0;
  v14 = unpack_dq(&v27);
  v26 = unpack_dq(&v27);
  v15 = v27.m128i_i64[0];
  if ( v27.m128i_i64[0] < (unsigned __int64)v27.m128i_i64[1] )
  {
    v13 = *(_BYTE *)v27.m128i_i64[0];
    v15 = v27.m128i_i64[0] + 1;
  }
  v27.m128i_i64[0] = v15;
  if ( *(_DWORD *)a2 - 183 == a3 )
  {
    sub_516950((__int64)v11, v12);
  }
  else
  {
    v16 = v12 + v14;
    if ( v12 < v16 )
    {
      v21 = sub_5168B0((unsigned __int64 **)v11, v12);
      if ( v21 == (unsigned __int64 *)(*v11 + 33 * v11[1]) || v12 < *v21 && *v21 >= v16 )
      {
        v22 = *((unsigned int *)v11 + 14);
        v28[0] = v12;
        v28[2] = v26;
        v28[1] = v16;
        v29 = v13;
        sub_514A20(v22, v28, 183);
        v23 = v11[1];
        v24 = (char *)v21 - *v11;
        if ( v11[2] < (unsigned __int64)(v23 + 1) )
        {
          v25 = qvector_reserve(v11, *v11, v23 + 1, 33);
          *v11 = v25;
          v21 = (unsigned __int64 *)&v24[v25];
          v23 = v11[1];
        }
        memmove((char *)v21 + 33, v21, 33 * v23 - (_QWORD)v24);
        v21[2] = 0;
        *(_OWORD *)v21 = 0;
        *((_BYTE *)v21 + 24) = 0;
        *((_BYTE *)v21 + 32) = 0;
        v11[3] = (__int64)v21;
        ++v11[1];
        *v21 = v12;
        v21[1] = v16;
        v21[2] = v26;
        *((_BYTE *)v21 + 24) = v13;
        *(_BYTE *)(v11[3] + 32) = 1;
      }
    }
    v17 = ea2node(v12);
    v18 = (char *)v11[4];
    v19 = &v18[8 * v11[5]];
    if ( v18 != v19 )
    {
      while ( v17 != *(_QWORD *)v18 )
      {
        v18 += 8;
        if ( v19 == v18 )
          return v30 - __readfsqword(0x28u);
      }
      if ( v19 != v18 )
      {
        memmove(v18, v18 + 8, v19 - v18 - 8);
        --v11[5];
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}
