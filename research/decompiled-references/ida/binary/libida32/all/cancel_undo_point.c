__int64 __fastcall cancel_undo_point(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 *v4; // r12
  unsigned __int64 v5; // r13
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const void *v10; // rsi
  bool v11; // cf
  const void *v12; // rax
  __int64 v13; // rbp
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // dl
  __int64 v20; // rbp
  __m128i v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(qword_2CA1698 + 1656);
  if ( !*(_QWORD *)(v1 + 24) )
    return 0;
  v2 = *(_QWORD *)(v1 + 32);
  if ( v2 != v1 + 8 )
    return 0;
  v4 = *(__int64 **)(v2 + 8);
  v5 = v4[3];
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4[2], (__m128i)(v4[2] + v5));
  unpack_dd(&v21);
  v6 = unpack_dd(&v21);
  v10 = (const void *)v21.m128i_i64[0];
  if ( v6 )
  {
    v11 = __CFADD__(v21.m128i_i64[0], v6);
    v12 = (const void *)(v21.m128i_i64[0] + v6);
    if ( v11 || v21.m128i_i64[1] < (unsigned __int64)v12 || (v21.m128i_i64[0] = (__int64)v12, !v10) )
    {
      if ( !under_debugger )
        interr(1677);
      BUG();
    }
    v10 = v12;
  }
  if ( (unsigned __int64)v10 < v21.m128i_i64[1] )
  {
    if ( a1 == 1 )
    {
      if ( v4 != *(__int64 **)(v1 + 8) )
      {
        v20 = v4[1];
        sub_564900((__int64 *)(v20 + 16), v10, v21.m128i_i64[1] - (_QWORD)v10);
        v4 = *(__int64 **)v20;
        v5 -= v21.m128i_i64[1] - v21.m128i_i64[0];
      }
    }
    else
    {
      if ( a1 != 2 )
        return 0;
      sub_565450(v1, (int)v10, v21.m128i_i32[2], v7, v8, v9);
    }
  }
  v13 = *v4;
  *(_QWORD *)v4[1] = *v4;
  *(_QWORD *)(v13 + 8) = v4[1];
  v14 = (void *)v4[5];
  if ( v14 )
  {
    v4[6] = 0;
    qfree(v14);
  }
  v15 = (void *)v4[2];
  if ( v15 )
  {
    v4[3] = 0;
    qfree(v15);
  }
  qfree(v4);
  v16 = *(_QWORD *)(v1 + 24);
  v17 = *(_QWORD *)(v1 + 104);
  *(_QWORD *)(v1 + 32) = v13;
  v18 = v16 - 1;
  *(_QWORD *)(v1 + 24) = v18;
  if ( v17 < v5 )
    sub_5648E0();
  *(_QWORD *)(v1 + 104) = v17 - v5;
  v19 = 0;
  if ( v18 )
    v19 = *(_DWORD *)(v1 + 116) == 0;
  *(_BYTE *)(v1 + 120) = v19;
  return 1;
}

