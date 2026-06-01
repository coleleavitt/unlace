unsigned __int64 __fastcall sub_6774A0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  char v8; // r14
  _BYTE *v9; // rsi
  _BYTE *v10; // rsi
  _BYTE *v11; // r9
  _BYTE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // edx
  unsigned int v21; // eax
  _BYTE *v22; // rax
  _BYTE *v23; // rdx
  _BYTE *v24; // rax
  _BYTE *v25; // rdx
  _BYTE *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+38h] [rbp-90h] BYREF
  __int64 v30; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-80h] BYREF
  __int64 *v32; // [rsp+50h] [rbp-78h] BYREF
  __int64 v33; // [rsp+58h] [rbp-70h] BYREF
  __m128i v34; // [rsp+60h] [rbp-68h] BYREF
  __int128 v35; // [rsp+70h] [rbp-58h] BYREF
  _BYTE *v36; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = v3 + *(unsigned int *)(a2 + 4);
  v37 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 1624);
  v34 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
  v36 = nullptr;
  v33 = -1;
  v29 = 0;
  v30 = 0;
  v35 = 0;
  v27 = v5 + 64;
  if ( v3 >= v4 )
    goto LABEL_36;
  while ( 1 )
  {
LABEL_2:
    LODWORD(v33) = unpack_dd(&v34);
    HIDWORD(v33) = unpack_dd(&v34);
    v6 = v34.m128i_u64[1];
    v7 = (_BYTE *)v34.m128i_i64[0];
    if ( v34.m128i_i64[0] >= (unsigned __int64)v34.m128i_i64[1] )
    {
      v8 = 0;
      v9 = nullptr;
    }
    else
    {
      v8 = *(_BYTE *)v34.m128i_i64[0];
      v9 = (_BYTE *)++v34.m128i_i64[0];
      if ( v8 )
      {
        v22 = v7 + 1;
        do
        {
          if ( (_BYTE *)v34.m128i_i64[1] == v22 )
          {
            v23 = nullptr;
            goto LABEL_66;
          }
          ++v22;
        }
        while ( *(v22 - 1) );
        v23 = v9;
        v34.m128i_i64[0] = (__int64)v22;
        v9 = v22;
LABEL_66:
        if ( !*v23 )
          v23 = nullptr;
        v24 = v9;
        *(_QWORD *)&v35 = v23;
        do
        {
          if ( (unsigned __int64)v24 >= v34.m128i_i64[1] )
          {
            v25 = nullptr;
            goto LABEL_72;
          }
          ++v24;
        }
        while ( *(v24 - 1) );
        v25 = v9;
        v34.m128i_i64[0] = (__int64)v24;
        v9 = v24;
LABEL_72:
        if ( !*v25 )
          v25 = nullptr;
        v26 = v9;
        *((_QWORD *)&v35 + 1) = v25;
        do
        {
          if ( (unsigned __int64)v26 >= v34.m128i_i64[1] )
          {
            v9 = nullptr;
            goto LABEL_78;
          }
          ++v26;
        }
        while ( *(v26 - 1) );
        v34.m128i_i64[0] = (__int64)v26;
LABEL_78:
        if ( !*v9 )
          v9 = nullptr;
        v36 = v9;
        if ( !(unsigned __int8)deserialize_tinfo(&v29, 0, &v35, (char *)&v35 + 8, &v36, 0) )
          sub_673050();
        v6 = v34.m128i_u64[1];
        v9 = (_BYTE *)v34.m128i_i64[0];
      }
      v7 = v9;
      while ( (unsigned __int64)v7 < v6 )
      {
        if ( !*v7++ )
        {
          v34.m128i_i64[0] = (__int64)v7;
          goto LABEL_8;
        }
      }
      v7 = v9;
      v9 = nullptr;
    }
LABEL_8:
    if ( !*v9 )
      v9 = nullptr;
    *(_QWORD *)&v35 = v9;
    v10 = v7;
    do
    {
      if ( (unsigned __int64)v10 >= v6 )
      {
        v11 = nullptr;
        goto LABEL_14;
      }
      ++v10;
    }
    while ( *(v10 - 1) );
    v11 = v7;
    v34.m128i_i64[0] = (__int64)v10;
    v7 = v10;
LABEL_14:
    if ( !*v11 )
      v11 = nullptr;
    v12 = v7;
    *((_QWORD *)&v35 + 1) = v11;
    do
    {
      if ( (unsigned __int64)v12 >= v6 )
      {
        v7 = nullptr;
        goto LABEL_20;
      }
      ++v12;
    }
    while ( *(v12 - 1) );
    v34.m128i_i64[0] = (__int64)v12;
LABEL_20:
    if ( !*v7 )
      v7 = nullptr;
    v36 = v7;
    if ( !(unsigned __int8)deserialize_tinfo(&v30, 0, &v35, (char *)&v35 + 8, &v36, 0) )
    {
      if ( !under_debugger )
        interr(1747);
      BUG();
    }
    if ( !a3 )
      break;
    v18 = *(_QWORD *)(v5 + 72);
    v19 = v5 + 64;
    if ( !v18 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v20 = *(_DWORD *)(v18 + 32);
        if ( v20 < (unsigned int)v33 )
        {
          v18 = *(_QWORD *)(v18 + 24);
          goto LABEL_51;
        }
        if ( (_DWORD)v33 == v20 && SHIDWORD(v33) > *(_DWORD *)(v18 + 36) )
          break;
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v18 )
          goto LABEL_52;
      }
      v18 = *(_QWORD *)(v18 + 24);
LABEL_51:
      ;
    }
    while ( v18 );
LABEL_52:
    if ( v27 == v19
      || (v21 = *(_DWORD *)(v19 + 32), (unsigned int)v33 < v21)
      || v21 == (_DWORD)v33 && *(_DWORD *)(v19 + 36) > SHIDWORD(v33) )
    {
LABEL_61:
      v32 = &v33;
      v19 = sub_676470((_QWORD *)(v5 + 56), v19, &v32);
    }
    copy_tinfo_t(v19 + 40);
LABEL_43:
    if ( v34.m128i_i64[0] >= (unsigned __int64)v34.m128i_i64[1] )
      goto LABEL_36;
  }
  if ( !v8 )
  {
    sub_677170(v5 + 56, (unsigned int *)&v33);
    goto LABEL_43;
  }
  v13 = *(_QWORD *)(v5 + 72);
  v14 = v5 + 64;
  if ( !v13 )
    goto LABEL_59;
  while ( 1 )
  {
LABEL_29:
    v15 = *(_DWORD *)(v13 + 32);
    if ( v15 < (unsigned int)v33 )
    {
      v13 = *(_QWORD *)(v13 + 24);
      goto LABEL_31;
    }
    if ( (_DWORD)v33 == v15 && SHIDWORD(v33) > *(_DWORD *)(v13 + 36) )
      break;
    v14 = v13;
    v13 = *(_QWORD *)(v13 + 16);
    if ( !v13 )
      goto LABEL_32;
  }
  v13 = *(_QWORD *)(v13 + 24);
LABEL_31:
  if ( v13 )
    goto LABEL_29;
LABEL_32:
  if ( v27 == v14
    || (v16 = *(_DWORD *)(v14 + 32), (unsigned int)v33 < v16)
    || v16 == (_DWORD)v33 && *(_DWORD *)(v14 + 36) > SHIDWORD(v33) )
  {
LABEL_59:
    v31 = &v33;
    v14 = sub_676470((_QWORD *)(v5 + 56), v14, &v31);
  }
  copy_tinfo_t(v14 + 40);
  if ( v34.m128i_i64[0] < (unsigned __int64)v34.m128i_i64[1] )
    goto LABEL_2;
LABEL_36:
  clear_tinfo_t(&v30);
  clear_tinfo_t(&v29);
  return v37 - __readfsqword(0x28u);
}

