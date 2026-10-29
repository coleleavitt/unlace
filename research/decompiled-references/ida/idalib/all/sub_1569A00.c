__int64 __fastcall sub_1569A00(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        _BYTE *a4,
        signed __int64 a5,
        __m128i a6,
        double a7)
{
  __int16 v10; // ax
  char *v13; // rax
  __int64 v14; // rsi
  size_t v15; // rax
  __int8 *v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  char *v19; // rax
  __int64 v20; // rdx
  int v21; // r10d
  char *v22; // r12
  size_t v23; // rax
  _BYTE *v24; // rdi
  unsigned __int8 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  int v32; // [rsp+10h] [rbp-138h]
  unsigned __int8 v33; // [rsp+10h] [rbp-138h]
  unsigned __int8 v34; // [rsp+10h] [rbp-138h]
  unsigned __int8 v35; // [rsp+10h] [rbp-138h]
  unsigned __int8 v36; // [rsp+10h] [rbp-138h]
  unsigned __int8 v37; // [rsp+10h] [rbp-138h]
  char *s; // [rsp+18h] [rbp-130h] BYREF
  char *v39; // [rsp+20h] [rbp-128h]
  int v40; // [rsp+2Ch] [rbp-11Ch]
  void *v41; // [rsp+30h] [rbp-118h] BYREF
  __int128 v42; // [rsp+38h] [rbp-110h] BYREF
  void *dest; // [rsp+48h] [rbp-100h]
  __m128 v44; // [rsp+50h] [rbp-F8h] BYREF
  char v45; // [rsp+68h] [rbp-E0h]
  void *src; // [rsp+70h] [rbp-D8h] BYREF
  __int128 n; // [rsp+78h] [rbp-D0h] BYREF
  void *v48; // [rsp+88h] [rbp-C0h]
  __m128 v49; // [rsp+90h] [rbp-B8h] BYREF
  char v50; // [rsp+A8h] [rbp-A0h]
  unsigned __int8 *v51[17]; // [rsp+C0h] [rbp-88h] BYREF

  v10 = *(_WORD *)(a1 + 32);
  if ( v10 == (__int16)a2 || v10 == 3 )
  {
    sub_149F520(a1, 0);
    return 0;
  }
  if ( a2 != 63 || ((v10 - 62) & 0xFFFB) != 0 )
  {
    v32 = sub_13DC060(
            *(_DWORD *)(a1 + 40),
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            a6,
            a7);
    if ( v32 )
    {
      v13 = sub_10CBF60(a2);
      v14 = *(_QWORD *)(a1 + 104);
      s = v13;
      if ( v13 )
      {
        v40 = v32;
        sub_FC70B0((__int64)v51, v14, v32, a3);
        v39 = s;
        v15 = j__strlen(s);
        BYTE12(v42) = 0;
        LODWORD(v41) = v32;
        HIDWORD(v41) = v32;
        src = (char *)&n + 8;
        s = (char *)&n + 8;
        *(_QWORD *)((char *)&v42 + 4) = 0;
        dest = &v44.m128_u16[4];
        v44.m128_u64[0] = 0;
        v44.m128_i8[8] = 0;
        v45 = 0;
        LOBYTE(v42) = 0;
        sub_1563B60(&src, v39, (__int64)&v39[v15]);
        v16 = &v44.m128_i8[8];
        if ( src == (char *)&n + 8 )
        {
          v30 = n;
          if ( (_QWORD)n )
          {
            if ( (_QWORD)n == 1 )
              *(_BYTE *)dest = BYTE8(n);
            else
              memcpy(dest, src, n);
            v30 = n;
            v16 = (__int8 *)dest;
          }
          v44.m128_u64[0] = v30;
          v16[v30] = 0;
          v16 = (__int8 *)src;
        }
        else
        {
          if ( dest == &v44.m128_u16[4] )
          {
            s = *((char **)&n + 1);
            dest = src;
            v44 = _mm_loadh_ps((const double *)&s);
          }
          else
          {
            s = *((char **)&n + 1);
            v17 = v44.m128_u64[1];
            dest = src;
            v44 = _mm_loadh_ps((const double *)&s);
            if ( &v44 != (__m128 *)-8LL )
            {
              src = &v44.m128_u16[4];
              *((_QWORD *)&n + 1) = v17;
              goto LABEL_9;
            }
          }
          v16 = (char *)&n + 8;
          src = (char *)&n + 8;
        }
LABEL_9:
        *(_QWORD *)&n = 0;
        *v16 = 0;
        if ( src != (char *)&n + 8 )
          operator delete(src);
        v45 = 0;
        if ( (_DWORD)v41 && HIDWORD(v41) )
          sub_1569180((__int64 *)v51, (unsigned __int64)&v41);
        sub_FC70F0((__int64)&src, (__int64)v51);
        if ( dest != &v44.m128_u16[4] )
          operator delete(dest);
        sub_AEA040((__int64)v51);
        if ( a3 == 14 )
          goto LABEL_17;
LABEL_39:
        if ( a3 != 15 )
        {
          sub_AEC220((unsigned __int8 **)&src, a4, a5);
          goto LABEL_41;
        }
        sub_AEC220((unsigned __int8 **)&src, a4, a5);
LABEL_17:
        sub_AE9DF0((unsigned __int8 **)&src, a2, 4u);
LABEL_41:
        sub_AEA040((__int64)&src);
        return 1;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 104);
    }
    sub_FC70B0((__int64)&src, v14, *(_DWORD *)(a1 + 16), a3);
    if ( a3 == 14 )
      goto LABEL_17;
    goto LABEL_39;
  }
  v18 = *(_QWORD *)(a1 + 104);
  LODWORD(s) = *(_DWORD *)(a1 + 16);
  sub_FC70B0((__int64)v51, v18, (int)s, a3);
  v19 = sub_10CBF60(63);
  v20 = 0;
  v21 = (int)s;
  v22 = v19;
  if ( v19 )
  {
    v23 = j__strlen(v19);
    v21 = (int)s;
    v20 = (__int64)&v22[v23];
  }
  LODWORD(src) = v21;
  HIDWORD(src) = v21;
  LOBYTE(v40) = 0;
  v48 = &v49.m128_u16[4];
  v39 = &v49.m128_i8[8];
  v41 = (char *)&v42 + 8;
  s = (char *)&v42 + 8;
  *(_QWORD *)((char *)&n + 4) = 0;
  BYTE12(n) = 0;
  v49.m128_u64[0] = 0;
  v49.m128_i8[8] = 0;
  v50 = 0;
  LOBYTE(n) = 1;
  sub_1563B60(&v41, v22, v20);
  v24 = v48;
  v25 = 0;
  if ( v41 == (char *)&v42 + 8 )
  {
    v31 = v42;
    if ( (_QWORD)v42 )
    {
      if ( (_QWORD)v42 == 1 )
      {
        *(_BYTE *)v48 = BYTE8(v42);
        v31 = v42;
        v24 = v48;
      }
      else
      {
        LOBYTE(s) = v40;
        memcpy(v48, v41, v42);
        v31 = v42;
        v24 = v48;
        v25 = v40;
      }
    }
    v49.m128_u64[0] = v31;
    v24[v31] = 0;
    v24 = v41;
    goto LABEL_25;
  }
  if ( v48 == v39 )
  {
    s = *((char **)&v42 + 1);
    v48 = v41;
    v49 = _mm_loadh_ps((const double *)&s);
    goto LABEL_57;
  }
  s = *((char **)&v42 + 1);
  v26 = v49.m128_u64[1];
  v48 = v41;
  v49 = _mm_loadh_ps((const double *)&s);
  if ( !v24 )
  {
LABEL_57:
    v24 = (char *)&v42 + 8;
    v41 = (char *)&v42 + 8;
    goto LABEL_25;
  }
  v41 = v24;
  *((_QWORD *)&v42 + 1) = v26;
LABEL_25:
  *(_QWORD *)&v42 = 0;
  *v24 = 0;
  if ( v41 != (char *)&v42 + 8 )
  {
    v33 = v25;
    operator delete(v41);
    v25 = v33;
  }
  if ( (_DWORD)src && HIDWORD(src) )
  {
    v37 = v25;
    sub_1569180((__int64 *)v51, (unsigned __int64)&src);
    v25 = v37;
  }
  if ( v48 != &v49.m128_u16[4] )
  {
    v34 = v25;
    operator delete(v48);
    v25 = v34;
  }
  v35 = v25;
  if ( a3 == 14 )
  {
    sub_AE9DF0(v51, 63, 4u);
    v27 = v35;
  }
  else
  {
    sub_AEC220(v51, a4, a5);
    if ( a3 == 15 )
      sub_AE9DF0(v51, 63, 4u);
    v27 = v35;
  }
  v36 = v27;
  sub_AEA040((__int64)v51);
  sub_149F520(a1, 0);
  return v36;
}
