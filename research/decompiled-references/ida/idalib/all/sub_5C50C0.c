__int64 __fastcall sub_5C50C0(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  char v5; // al
  char *v6; // r12
  _WORD *v7; // rsi
  unsigned __int64 v8; // r12
  size_t v9; // r14
  __int64 v10; // r13
  size_t v11; // r15
  _BYTE *v12; // rsi
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // [rsp+0h] [rbp-A8h] BYREF
  char *s1; // [rsp+10h] [rbp-98h] BYREF
  __m128i v17; // [rsp+18h] [rbp-90h]
  void *v18; // [rsp+30h] [rbp-78h] BYREF
  __int128 v19; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v21; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (get_flags_ex(a2, 4) & 0x4000) == 0 )
    return 0;
  v17 = 0;
  s1 = nullptr;
  if ( get_ea_name(&s1, a2, 0, 0) <= 0 )
  {
    if ( s1 )
    {
      v17.m128i_i64[0] = 0;
      qfree(s1);
    }
    return 0;
  }
  v18 = nullptr;
  v19 = 0;
  v5 = segtype(a2);
  v6 = s1;
  if ( v5 == 1 && strncmp(s1, "__imp_", 6u) )
  {
    v7 = v18;
    if ( *((_QWORD *)&v19 + 1) <= 6u )
    {
      v18 = (void *)qvector_reserve(&v18, v18, 7, 1);
      v7 = v18;
    }
    *(_QWORD *)&v19 = 7;
    *(_DWORD *)v7 = 1835622239;
    v7[2] = 24432;
    *((_BYTE *)v18 + 6) = 0;
    v8 = v17.m128i_i64[0];
    if ( v17.m128i_i64[0] )
    {
      v9 = v17.m128i_i64[0] - 1;
      if ( v17.m128i_i64[0] != 1 )
      {
        v10 = v19;
        v11 = v17.m128i_i64[0] - 1;
        if ( (_QWORD)v19 )
        {
          v10 = v19 - 1;
          v11 = v9 + v19 - 1;
          v8 = v17.m128i_i64[0] + v19 - 1;
        }
        v12 = v18;
        if ( *((_QWORD *)&v19 + 1) < v8 )
        {
          v18 = (void *)qvector_reserve(&v18, v18, v8, 1);
          v12 = v18;
        }
        *(_QWORD *)&v19 = v8;
        v12[v11] = 0;
        memcpy((char *)v18 + v10, s1, v9);
      }
    }
    set_name(a2, v18);
    v21 = 0;
    ptr = nullptr;
    get_ea_name(&ptr, a2, 0, 0);
    v6 = (char *)ptr;
    ptr = nullptr;
    v13 = _mm_loadu_si128(&v21);
    v21 = 0;
    if ( s1 )
    {
      v15 = v13;
      v17.m128i_i64[0] = 0;
      qfree(s1);
      v14 = _mm_load_si128(&v15);
      s1 = v6;
      v17 = v14;
      if ( ptr )
      {
        v21.m128i_i64[0] = 0;
        qfree(ptr);
        v6 = s1;
      }
    }
    else
    {
      s1 = v6;
      v17 = v13;
    }
  }
  v3 = sub_5C4E40((__int64 *)&v18, -1, v6);
  if ( (_BYTE)v3 )
    set_name(a1, v18);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( s1 )
  {
    v17.m128i_i64[0] = 0;
    qfree(s1);
  }
  return v3;
}
