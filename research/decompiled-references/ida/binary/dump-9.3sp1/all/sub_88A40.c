__int64 __fastcall sub_88A40(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  size_t v10; // r13
  size_t v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // [rsp+0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+8h] [rbp-110h]
  __int64 v20; // [rsp+18h] [rbp-100h]
  void *v21; // [rsp+20h] [rbp-F8h]
  size_t v22[2]; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+38h] [rbp-E0h]
  size_t n[2]; // [rsp+40h] [rbp-D8h]
  __int64 v25; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+58h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  int v28[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-98h]
  int v30; // [rsp+88h] [rbp-90h]
  __int64 v31; // [rsp+90h] [rbp-88h]
  __int128 v32; // [rsp+98h] [rbp-80h]
  void *v33; // [rsp+A8h] [rbp-70h]
  __int128 v34; // [rsp+B0h] [rbp-68h]
  __int64 v35; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-50h]
  __int64 v37; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v3 = sub_7D4F0(a1);
  if ( v3 < 0 )
    return 0;
  v4 = a2[1];
  v5 = v3;
  if ( v3 != v4 )
  {
    v18 = 0;
    v20 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v21 = nullptr;
    src = nullptr;
    v25 = 0;
    v26 = 0xFFFFFFFF00000000LL;
    v27 = 0;
    *(_OWORD *)v22 = 0;
    *(_OWORD *)n = 0;
    if ( v3 < v4 )
    {
      v12 = v3;
      v13 = 104LL * v3;
      do
      {
        v14 = (_QWORD *)(v13 + *a2);
        clear_tinfo_t();
        v15 = v14[7];
        if ( v15 )
        {
          v14[8] = 0;
          qfree(v15);
        }
        v16 = v14[4];
        if ( v16 )
        {
          v14[5] = 0;
          qfree(v16);
        }
        ++v12;
        v13 += 104;
        cleanup_argloc();
      }
      while ( v12 < v4 );
      a2[1] = v5;
    }
    else if ( (unsigned __int64)&v18 < *a2 || (unsigned __int64)&v18 >= *a2 + 104 * a2[2] )
    {
      sub_88870(a2, v3, (__int64)&v18);
    }
    else
    {
      v7 = &v18;
      v28[0] = 0;
      copy_argloc();
      v10 = v22[0];
      v31 = 0;
      v32 = 0;
      v29 = si128.m128i_i64[1];
      v30 = v20;
      if ( v22[0] )
      {
        v17 = (void *)qalloc_or_throw(v22[0], (__int64)&v18, v8, v9);
        v7 = (__int64 *)v21;
        v31 = (__int64)v17;
        *((_QWORD *)&v32 + 1) = v10;
        memcpy(v17, v21, v10);
        *(_QWORD *)&v32 = v10;
      }
      v11 = n[0];
      v33 = nullptr;
      v34 = 0;
      if ( n[0] )
      {
        v33 = (void *)qalloc_or_throw(n[0], (__int64)v7, v8, v9);
        *((_QWORD *)&v34 + 1) = v11;
        memcpy(v33, src, v11);
        *(_QWORD *)&v34 = v11;
      }
      v35 = 0;
      copy_tinfo_t();
      v36 = v26;
      v37 = v27;
      sub_88870(a2, v5, (__int64)v28);
      clear_tinfo_t();
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree((__int64)v33);
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      cleanup_argloc();
    }
    clear_tinfo_t();
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    if ( v21 )
    {
      v22[0] = 0;
      qfree((__int64)v21);
    }
    cleanup_argloc();
  }
  return 1;
}
