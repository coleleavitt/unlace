unsigned __int64 __fastcall sub_3BAA40(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  unsigned int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 i; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v24 = __readfsqword(0x28u);
  v23 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dq(&v23);
  v6 = unpack_dd(&v23);
  v7 = v23.m128i_i64[0];
  v8 = v6;
  v9 = v6 + v23.m128i_i64[0];
  if ( __CFADD__(v6, v23.m128i_i64[0]) || v23.m128i_i64[1] < v9 )
  {
    v9 = v23.m128i_i64[0];
    v7 = 0;
  }
  else
  {
    v23.m128i_i64[0] += v6;
  }
  v10 = v9 + 2LL * v6;
  if ( v10 < v9 || v23.m128i_i64[1] < v10 || (v23.m128i_i64[0] = v9 + 2 * v8, !v7) || !v9 )
  {
    if ( !under_debugger )
      interr(1674);
    BUG();
  }
  v11 = *(__int64 **)(*(_QWORD *)(a1 + 1672) + 1016LL);
  v12 = sub_8B8E80(v11, v5);
  v13 = 0;
  v14 = v12;
  if ( v12 )
  {
    v15 = *v11;
    v16 = v12 >> *(_DWORD *)(*v11 + 8);
    if ( (_DWORD)v16 == *((_DWORD *)v11 + 18) )
    {
      v17 = v11[10];
    }
    else
    {
      *((_DWORD *)v11 + 18) = v16;
      v17 = sub_8BCA60(v15, (unsigned int)v16, 1);
      v11[10] = v17;
    }
    *(_BYTE *)(v17 - 2) = 1;
    v18 = (_QWORD *)*v11;
    *((_BYTE *)v11 + 100) = 1;
    v13 = v11[10] + (v14 & (*v18 - 1LL) & 0xFFFFFFFFFFFFFFFCLL);
  }
  if ( a3 )
  {
    v21 = 0;
    if ( v8 )
    {
      do
      {
        v22 = *(unsigned __int8 *)(v7 + v21) | *(_DWORD *)(v13 + 4 * v21) & 0xFFFFFE00;
        BYTE1(v22) |= 1u;
        *(_DWORD *)(v13 + 4 * v21++) = v22;
      }
      while ( v8 != v21 );
    }
  }
  else if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
      *(_DWORD *)(v13 + 4 * i) = *(_WORD *)(v9 + 2 * i) & 0x1FF | *(_DWORD *)(v13 + 4 * i) & 0xFFFFFE00;
  }
  return v24 - __readfsqword(0x28u);
}
