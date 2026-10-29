unsigned __int64 __fastcall sub_4C5EE0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r15
  _QWORD *v4; // r14
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int128 v9; // kr00_16
  char v10; // r13
  unsigned __int64 v11; // rax
  const char *v12; // rsi
  int v13; // r15d
  size_t v15; // rax
  size_t v16; // r9
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rax
  _QWORD *v20; // r13
  __int64 v21; // rbp
  const char *v22; // r15
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rsi
  size_t n; // [rsp+8h] [rbp-B0h]
  size_t na; // [rsp+8h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-A8h]
  size_t v31; // [rsp+18h] [rbp-A0h]
  __m128i v32; // [rsp+20h] [rbp-98h] BYREF
  void *dest; // [rsp+30h] [rbp-88h] BYREF
  __int128 v34; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v36; // [rsp+58h] [rbp-60h]
  int v37; // [rsp+68h] [rbp-50h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD **)(a1 + 1528);
  v38 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  dest = nullptr;
  v7 = v4 + 18;
  v8 = v3 + v6;
  v30 = (__int64)(v4 + 18);
  v32 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v8);
  v34 = 0;
  v9 = __PAIR128__(v8, v3);
  if ( v3 >= v8 )
  {
    v7 = v4 + 18;
    if ( !a3 )
      return v38 - __readfsqword(0x28u);
  }
  else
  {
    v10 = 1;
    do
    {
      v11 = v9;
      do
      {
        if ( v11 >= *((_QWORD *)&v9 + 1) )
          goto LABEL_6;
        ++v11;
      }
      while ( *(_BYTE *)(v11 - 1) );
      v32.m128i_i64[0] = v11;
      if ( !(_QWORD)v9 || (v15 = strlen((const char *)v9), (v16 = v15) == 0) )
      {
LABEL_6:
        *(_QWORD *)&v34 = 0;
        goto LABEL_7;
      }
      v17 = dest;
      if ( *((_QWORD *)&v34 + 1) < v15 + 1 )
      {
        v31 = v15;
        dest = (void *)qvector_reserve(&dest, dest, v15 + 1, 1);
        v16 = v31;
        v17 = dest;
      }
      *(_QWORD *)&v34 = *((_QWORD *)&v9 + 1);
      n = v16;
      memmove(v17, (const void *)v9, v16);
      *((_BYTE *)dest + n) = 0;
LABEL_7:
      v12 = (const char *)v32.m128i_i64[1];
      v13 = unpack_dd(&v32);
      if ( a3 )
      {
        if ( v10 )
        {
          v10 = 0;
          v7 = sub_3D80D0((__int64)(v4 + 17), (__int64)&dest);
        }
      }
      else
      {
        v18 = nullptr;
        v36 = 0;
        if ( (_QWORD)v34 )
        {
          na = v34;
          v19 = (void *)qalloc_or_throw(v34, v12);
          *((_QWORD *)&v36 + 1) = na;
          v18 = memcpy(v19, dest, na);
          *(_QWORD *)&v36 = na;
        }
        ptr = v18;
        v37 = v13;
        v7 = sub_4C5300(v4 + 17, v7, (__int64)&ptr);
        if ( ptr )
          qfree(ptr);
      }
      v9 = (unsigned __int128)v32;
    }
    while ( v32.m128i_i64[0] < (unsigned __int64)v32.m128i_i64[1] );
    if ( !a3 )
      goto LABEL_12;
  }
  v20 = (_QWORD *)v4[19];
  if ( !v20 )
    goto LABEL_37;
  v21 = v34;
  v22 = (const char *)dest;
  while ( v20[5] )
  {
    v23 = (const char *)v20[4];
    v24 = haystack;
    if ( v21 )
      goto LABEL_28;
LABEL_29:
    v25 = strcmp(v24, v23);
    v26 = v20[2];
    v27 = v20[3];
    if ( v25 >= 0 )
    {
      v20 = (_QWORD *)v20[3];
      if ( !v27 )
        goto LABEL_37;
    }
    else
    {
      v30 = (__int64)v20;
      v20 = (_QWORD *)v20[2];
      if ( !v26 )
        goto LABEL_37;
    }
  }
  v23 = haystack;
  if ( v21 )
  {
LABEL_28:
    v24 = v22;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v20 = (_QWORD *)v20[3];
    if ( !v20 )
      break;
    if ( v20[5] )
    {
      v23 = (const char *)v20[4];
      v24 = haystack;
      goto LABEL_29;
    }
  }
LABEL_37:
  sub_4C32F0((__int64)(v4 + 17), (__int64)v7, v30);
LABEL_12:
  if ( dest )
  {
    *(_QWORD *)&v34 = 0;
    qfree(dest);
  }
  return v38 - __readfsqword(0x28u);
}

