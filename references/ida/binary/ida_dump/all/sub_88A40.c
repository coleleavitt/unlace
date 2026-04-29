__int64 __fastcall sub_88A40(_QWORD *a1, __int64 *a2)
{
  int v2; // eax
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbp
  size_t v6; // r13
  size_t v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+8h] [rbp-110h]
  __int64 v13; // [rsp+18h] [rbp-100h]
  void *v14; // [rsp+20h] [rbp-F8h]
  size_t v15[2]; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+38h] [rbp-E0h]
  size_t n[2]; // [rsp+40h] [rbp-D8h]
  __int64 v18; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v19; // [rsp+58h] [rbp-C0h]
  __int64 v20; // [rsp+60h] [rbp-B8h]
  _DWORD v21[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-98h]
  int v23; // [rsp+88h] [rbp-90h]
  void *v24; // [rsp+90h] [rbp-88h]
  __int128 v25; // [rsp+98h] [rbp-80h]
  void *v26; // [rsp+A8h] [rbp-70h]
  __int128 v27; // [rsp+B0h] [rbp-68h]
  __int64 v28; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v29; // [rsp+C8h] [rbp-50h]
  __int64 v30; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v31; // [rsp+D8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v2 = sub_7D4F0(a1);
  if ( v2 < 0 )
    return 0;
  v3 = a2[1];
  v4 = v2;
  if ( v2 != v3 )
  {
    v11 = 0;
    v13 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v14 = nullptr;
    src = nullptr;
    v18 = 0;
    v19 = 0xFFFFFFFF00000000LL;
    v20 = 0;
    *(_OWORD *)v15 = 0;
    *(_OWORD *)n = 0;
    if ( v2 < v3 )
    {
      v8 = v2;
      v9 = 104LL * v2;
      do
      {
        v10 = (_QWORD *)(v9 + *a2);
        clear_tinfo_t();
        if ( v10[7] )
        {
          v10[8] = 0;
          qfree();
        }
        if ( v10[4] )
        {
          v10[5] = 0;
          qfree();
        }
        ++v8;
        v9 += 104;
        cleanup_argloc();
      }
      while ( v8 < v3 );
      a2[1] = v4;
    }
    else if ( (unsigned __int64)&v11 < *a2 || (unsigned __int64)&v11 >= *a2 + 104 * a2[2] )
    {
      sub_88870(a2, v2, (__int64)&v11);
    }
    else
    {
      v21[0] = 0;
      copy_argloc();
      v6 = v15[0];
      v24 = nullptr;
      v25 = 0;
      v22 = si128.m128i_i64[1];
      v23 = v13;
      if ( v15[0] )
      {
        v24 = (void *)qalloc_or_throw();
        *((_QWORD *)&v25 + 1) = v6;
        memcpy(v24, v14, v6);
        *(_QWORD *)&v25 = v6;
      }
      v7 = n[0];
      v26 = nullptr;
      v27 = 0;
      if ( n[0] )
      {
        v26 = (void *)qalloc_or_throw();
        *((_QWORD *)&v27 + 1) = v7;
        memcpy(v26, src, v7);
        *(_QWORD *)&v27 = v7;
      }
      v28 = 0;
      copy_tinfo_t();
      v29 = v19;
      v30 = v20;
      sub_88870(a2, v4, (__int64)v21);
      clear_tinfo_t();
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      cleanup_argloc();
    }
    clear_tinfo_t();
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    if ( v14 )
    {
      v15[0] = 0;
      qfree();
    }
    cleanup_argloc();
  }
  return 1;
}
