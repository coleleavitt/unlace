unsigned __int64 __fastcall sub_37EF10(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r13
  char v5; // r14
  char *v6; // rdi
  void *v7; // r14
  void *v8; // r13
  char *v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // [rsp+8h] [rbp-160h] BYREF
  __m128i v15; // [rsp+10h] [rbp-158h] BYREF
  void *v16; // [rsp+20h] [rbp-148h]
  __int128 v17; // [rsp+28h] [rbp-140h]
  void *v18; // [rsp+38h] [rbp-130h]
  __int128 v19; // [rsp+40h] [rbp-128h]
  __int128 v20[3]; // [rsp+50h] [rbp-118h] BYREF
  char *v21; // [rsp+80h] [rbp-E8h]
  int v22; // [rsp+88h] [rbp-E0h]
  __int64 v23; // [rsp+90h] [rbp-D8h]
  char v24; // [rsp+98h] [rbp-D0h]
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  void *v26[2]; // [rsp+A8h] [rbp-C0h]
  __int128 v27; // [rsp+B8h] [rbp-B0h]
  void *v28; // [rsp+C8h] [rbp-A0h]
  __int128 v29; // [rsp+D0h] [rbp-98h]
  __int128 v30[3]; // [rsp+E0h] [rbp-88h] BYREF
  char *v31; // [rsp+110h] [rbp-58h]
  int v32; // [rsp+118h] [rbp-50h]
  __int64 v33; // [rsp+120h] [rbp-48h]
  char v34; // [rsp+128h] [rbp-40h]
  unsigned __int64 v35; // [rsp+138h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v14 = 0;
  if ( !(unsigned __int8)get_type_by_tid(&v14, a1) || (get_tinfo_property(v14, 2) & 0x2F) != 0xD )
    goto LABEL_5;
  if ( (get_tinfo_property(v14, 2) & 0x3F) != 0x1D )
  {
    v4 = 8 * a2;
    v16 = nullptr;
    v18 = nullptr;
    v21 = (char *)&dword_0 + 1;
    v22 = -1;
    v23 = 0;
    v24 = 0;
    v15 = (__m128i)(8 * a2);
    v17 = 0;
    v19 = 0;
    v20[0] = 0;
    if ( (unsigned int)find_tinfo_udt_member((int)&v15) != -1 )
    {
      if ( v4 < v15.m128i_i64[0] )
      {
        v2 = a2 + 1;
        goto LABEL_22;
      }
      if ( v4 < v15.m128i_i64[1] + v15.m128i_i64[0] )
      {
        v26[0] = nullptr;
        v26[1] = nullptr;
        v28 = nullptr;
        v31 = (char *)&dword_0 + 1;
        v32 = -1;
        v33 = 0;
        v34 = 0;
        ptr = (void *)(v15.m128i_i64[1] + v15.m128i_i64[0]);
        v27 = 0;
        v29 = 0;
        v30[0] = 0;
        if ( (unsigned int)find_tinfo_udt_member((int)&ptr) == -1 )
        {
          v13 = _mm_load_si128(&v15);
          v2 = _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0] >> 3;
        }
        else
        {
          v2 = (unsigned __int64)ptr >> 3;
        }
        clear_tinfo_t(v30);
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree(v28);
        }
        if ( v26[1] )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26[1]);
        }
        goto LABEL_22;
      }
    }
    ptr = nullptr;
    v28 = nullptr;
    LODWORD(v29) = 1;
    *(_OWORD *)v26 = 0;
    v27 = 0;
    if ( !(unsigned __int8)get_tinfo_details(v14, 13, &ptr) )
      goto LABEL_12;
    v5 = BYTE1(v29);
    if ( !BYTE1(v29) )
      goto LABEL_12;
    if ( !v26[0] )
    {
      v6 = (char *)ptr;
      v2 = -1;
      if ( !ptr )
        goto LABEL_22;
      goto LABEL_21;
    }
    v15.m128i_i64[0] = (__int64)v26[0] - 1;
    find_tinfo_udt_member((int)&v15);
    v12 = _mm_load_si128(&v15);
    if ( a2 < (((1 << v5) - 1 + (_mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0] >> 3)) & -(1 << v5)) )
      v2 = a2 + 1;
    else
LABEL_12:
      v2 = -1;
    v6 = (char *)ptr;
    if ( !ptr )
    {
LABEL_22:
      clear_tinfo_t(v20);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
      goto LABEL_6;
    }
    v7 = v26[0];
    if ( v26[0] )
    {
      v8 = nullptr;
      do
      {
        v9 = &v6[144 * (_QWORD)v8];
        clear_tinfo_t(v9 + 64);
        v10 = *((void **)v9 + 5);
        if ( v10 )
        {
          *((_QWORD *)v9 + 6) = 0;
          qfree(v10);
        }
        v11 = *((void **)v9 + 2);
        if ( v11 )
        {
          *((_QWORD *)v9 + 3) = 0;
          qfree(v11);
        }
        v8 = (char *)v8 + 1;
        v6 = (char *)ptr;
      }
      while ( v7 != v8 );
    }
LABEL_21:
    v26[0] = nullptr;
    qfree(v6);
    goto LABEL_22;
  }
  v2 = a2 + 1;
  if ( (int)get_tinfo_property(v14, 16) < a2 + 1 )
LABEL_5:
    v2 = -1;
LABEL_6:
  clear_tinfo_t(&v14);
  return v2;
}
