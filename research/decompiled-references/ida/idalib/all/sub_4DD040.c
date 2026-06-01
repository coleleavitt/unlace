unsigned __int64 __fastcall sub_4DD040(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r15
  _QWORD *v4; // r14
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int128 v9; // kr00_16
  char v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  size_t v14; // rax
  size_t v15; // r9
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // rbp
  const char *v21; // r15
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  size_t n; // [rsp+8h] [rbp-B0h]
  size_t na; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+10h] [rbp-A8h]
  size_t v30; // [rsp+18h] [rbp-A0h]
  __m128i v31; // [rsp+20h] [rbp-98h] BYREF
  void *dest; // [rsp+30h] [rbp-88h] BYREF
  __int128 v33; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v35; // [rsp+58h] [rbp-60h]
  __int64 v36; // [rsp+68h] [rbp-50h]
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD **)(a1 + 1720);
  v37 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  dest = nullptr;
  v7 = v4 + 19;
  v8 = v3 + v6;
  v29 = (__int64)(v4 + 19);
  v31 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v8);
  v33 = 0;
  v9 = __PAIR128__(v8, v3);
  if ( v3 >= v8 )
  {
    v7 = v4 + 19;
    if ( !a3 )
      return v37 - __readfsqword(0x28u);
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
      v31.m128i_i64[0] = v11;
      if ( !(_QWORD)v9 || (v14 = strlen((const char *)v9), (v15 = v14) == 0) )
      {
LABEL_6:
        *(_QWORD *)&v33 = 0;
        goto LABEL_7;
      }
      v16 = dest;
      if ( *((_QWORD *)&v33 + 1) < v14 + 1 )
      {
        v30 = v14;
        dest = (void *)qvector_reserve(&dest, dest, v14 + 1, 1);
        v15 = v30;
        v16 = dest;
      }
      *(_QWORD *)&v33 = *((_QWORD *)&v9 + 1);
      n = v15;
      memmove(v16, (const void *)v9, v15);
      *((_BYTE *)dest + n) = 0;
LABEL_7:
      v12 = unpack_dq(&v31);
      if ( a3 )
      {
        if ( v10 )
        {
          v10 = 0;
          v7 = sub_4D3F70((__int64)(v4 + 18), (__int64)&dest);
        }
      }
      else
      {
        v17 = nullptr;
        v35 = 0;
        if ( (_QWORD)v33 )
        {
          na = v33;
          v18 = (void *)qalloc_or_throw(v33);
          *((_QWORD *)&v35 + 1) = na;
          v17 = memcpy(v18, dest, na);
          *(_QWORD *)&v35 = na;
        }
        ptr = v17;
        v36 = v12;
        v7 = sub_4DC460(v4 + 18, v7, (__int64)&ptr);
        if ( ptr )
          qfree(ptr);
      }
      v9 = (unsigned __int128)v31;
    }
    while ( v31.m128i_i64[0] < (unsigned __int64)v31.m128i_i64[1] );
    if ( !a3 )
      goto LABEL_12;
  }
  v19 = (_QWORD *)v4[20];
  if ( !v19 )
    goto LABEL_37;
  v20 = v33;
  v21 = (const char *)dest;
  while ( v19[5] )
  {
    v22 = (const char *)v19[4];
    v23 = haystack;
    if ( v20 )
      goto LABEL_28;
LABEL_29:
    v24 = strcmp(v23, v22);
    v25 = v19[2];
    v26 = v19[3];
    if ( v24 >= 0 )
    {
      v19 = (_QWORD *)v19[3];
      if ( !v26 )
        goto LABEL_37;
    }
    else
    {
      v29 = (__int64)v19;
      v19 = (_QWORD *)v19[2];
      if ( !v25 )
        goto LABEL_37;
    }
  }
  v22 = haystack;
  if ( v20 )
  {
LABEL_28:
    v23 = v21;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v19 = (_QWORD *)v19[3];
    if ( !v19 )
      break;
    if ( v19[5] )
    {
      v22 = (const char *)v19[4];
      v23 = haystack;
      goto LABEL_29;
    }
  }
LABEL_37:
  sub_4DA450((__int64)(v4 + 18), (__int64)v7, v29);
LABEL_12:
  if ( dest )
  {
    *(_QWORD *)&v33 = 0;
    qfree(dest);
  }
  return v37 - __readfsqword(0x28u);
}
