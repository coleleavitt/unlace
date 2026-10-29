unsigned __int64 __fastcall sub_6D9CC0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  char *v6; // rax
  const char **v7; // r14
  void *v8; // rdi
  const char **v9; // rbx
  char tinfo_property; // al
  const char **v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbx
  char *v14; // rdx
  void *v15; // rdi
  _BYTE *v16; // rax
  void *v17; // r13
  size_t v18; // rbx
  void *v19; // rbx
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __m128i v22; // [rsp+0h] [rbp-118h] BYREF
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __int128 v24; // [rsp+18h] [rbp-100h]
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v26; // [rsp+38h] [rbp-E0h]
  void *dest; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v28; // [rsp+58h] [rbp-C0h] BYREF
  void *v29; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+78h] [rbp-A0h]
  void *v31; // [rsp+88h] [rbp-90h]
  __m128i v32; // [rsp+90h] [rbp-88h]
  __int64 v33[6]; // [rsp+A0h] [rbp-78h] BYREF
  int v34; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+D8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    sub_6D4D40(a1, (__int64)&ptr, a3);
    v5 = v24;
    if ( !(_QWORD)v24 )
    {
      v8 = ptr;
      if ( !ptr )
        return v35 - __readfsqword(0x28u);
      goto LABEL_16;
    }
    if ( (*(_BYTE *)a2 & 0xFu) > 9 )
    {
      if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xB )
        goto LABEL_9;
      v5 = v24;
    }
    v6 = (char *)ptr;
    v33[0] = 0;
    v33[5] = 1;
    v7 = (const char **)((char *)ptr + 24 * v5);
    v8 = ptr;
    v34 = -1;
    if ( v7 == ptr )
    {
LABEL_10:
      if ( !v6 )
        return v35 - __readfsqword(0x28u);
      v12 = v24;
      if ( (_QWORD)v24 )
      {
        v13 = 0;
        do
        {
          v14 = &v6[24 * v13];
          v15 = *(void **)v14;
          if ( *(_QWORD *)v14 )
          {
            *((_QWORD *)v14 + 1) = 0;
            qfree(v15);
            v6 = (char *)ptr;
          }
          ++v13;
          v8 = v6;
        }
        while ( v12 != v13 );
      }
LABEL_16:
      *(_QWORD *)&v24 = 0;
      qfree(v8);
      return v35 - __readfsqword(0x28u);
    }
    v9 = (const char **)ptr;
    do
    {
      tinfo_property = get_tinfo_property(*a2, 2);
      v11 = v9;
      v9 += 3;
      sub_6D90F0(a1, (__int64)v33, v11, tinfo_property);
    }
    while ( v7 != v9 );
    if ( v33[0] )
    {
      src = nullptr;
      v26 = 0;
      sub_581110(v33, (__int64 *)&src);
      v29 = nullptr;
      v31 = nullptr;
      v30 = 0;
      v32 = 0;
      v16 = (_BYTE *)qvector_reserve(&v29, 0, 2, 1);
      *(_QWORD *)&v30 = 2;
      v29 = v16;
      *v16 = 1;
      *((_BYTE *)v29 + 1) = 0;
      if ( !(_QWORD)v26 || (v17 = src, dest = nullptr, v28 = 0, v18 = v26 - 1, (_QWORD)v26 == 1) )
      {
        v20 = 0;
        v19 = nullptr;
      }
      else
      {
        dest = (void *)qvector_reserve(&dest, 0, v26 - 1, 1);
        memset((char *)dest + v28.m128i_i64[0], 0, v18 - v28.m128i_i64[0]);
        v28.m128i_i64[0] = v18;
        memcpy(dest, v17, v18);
        v19 = dest;
        v20 = _mm_loadu_si128(&v28);
      }
      dest = nullptr;
      v28 = 0;
      if ( v31 )
      {
        v22 = v20;
        v32.m128i_i64[0] = 0;
        qfree(v31);
        v21 = _mm_load_si128(&v22);
        v31 = v19;
        v32 = v21;
        if ( dest )
        {
          v28.m128i_i64[0] = 0;
          qfree(dest);
        }
      }
      else
      {
        v31 = v19;
        v32 = v20;
      }
      set_tinfo_attr(a2, (__int64)&v29, 1);
      if ( v31 )
      {
        v32.m128i_i64[0] = 0;
        qfree(v31);
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29);
      }
      if ( src )
      {
        *(_QWORD *)&v26 = 0;
        qfree(src);
      }
    }
LABEL_9:
    v6 = (char *)ptr;
    v8 = ptr;
    goto LABEL_10;
  }
  return v35 - __readfsqword(0x28u);
}
