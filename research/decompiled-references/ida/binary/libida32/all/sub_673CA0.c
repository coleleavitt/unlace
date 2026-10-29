unsigned __int64 __fastcall sub_673CA0(__int64 a1, __int64 a2, int a3)
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
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  _BYTE *v22; // rax
  _BYTE *v23; // rdx
  _BYTE *v24; // rax
  _BYTE *v25; // rdx
  _BYTE *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-C8h]
  unsigned int v29; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int64 v30; // [rsp+40h] [rbp-88h] BYREF
  __int64 v31; // [rsp+48h] [rbp-80h] BYREF
  unsigned int *v32; // [rsp+50h] [rbp-78h] BYREF
  unsigned int *v33; // [rsp+58h] [rbp-70h] BYREF
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
  v30 = 0;
  v31 = 0;
  v35 = 0;
  v27 = v5 + 16;
  if ( v3 < v4 )
  {
    while ( 1 )
    {
      v29 = unpack_dd(&v34);
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
              goto LABEL_54;
            }
            ++v22;
          }
          while ( *(v22 - 1) );
          v23 = v9;
          v34.m128i_i64[0] = (__int64)v22;
          v9 = v22;
LABEL_54:
          if ( !*v23 )
            v23 = nullptr;
          v24 = v9;
          *(_QWORD *)&v35 = v23;
          do
          {
            if ( (unsigned __int64)v24 >= v34.m128i_i64[1] )
            {
              v25 = nullptr;
              goto LABEL_60;
            }
            ++v24;
          }
          while ( *(v24 - 1) );
          v25 = v9;
          v34.m128i_i64[0] = (__int64)v24;
          v9 = v24;
LABEL_60:
          if ( !*v25 )
            v25 = nullptr;
          v26 = v9;
          *((_QWORD *)&v35 + 1) = v25;
          do
          {
            if ( (unsigned __int64)v26 >= v34.m128i_i64[1] )
            {
              v9 = nullptr;
              goto LABEL_66;
            }
            ++v26;
          }
          while ( *(v26 - 1) );
          v34.m128i_i64[0] = (__int64)v26;
LABEL_66:
          if ( !*v9 )
            v9 = nullptr;
          v36 = v9;
          if ( !(unsigned __int8)deserialize_tinfo(&v30, 0, &v35, (char *)&v35 + 8, &v36, 0) )
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
      if ( !(unsigned __int8)deserialize_tinfo(&v31, 0, &v35, (char *)&v35 + 8, &v36, 0) )
      {
        if ( !under_debugger )
          interr(1747);
        BUG();
      }
      if ( a3 )
        break;
      if ( v8 )
      {
        v13 = *(_QWORD *)(v5 + 24);
        if ( v13 )
        {
          v14 = v5 + 16;
          do
          {
            while ( 1 )
            {
              v15 = *(_QWORD *)(v13 + 16);
              v16 = *(_QWORD *)(v13 + 24);
              if ( *(_DWORD *)(v13 + 32) < v29 )
                break;
              v14 = v13;
              v13 = *(_QWORD *)(v13 + 16);
              if ( !v15 )
                goto LABEL_30;
            }
            v13 = *(_QWORD *)(v13 + 24);
          }
          while ( v16 );
LABEL_30:
          if ( v14 != v27 && v29 >= *(_DWORD *)(v14 + 32) )
            goto LABEL_33;
        }
        else
        {
          v14 = v5 + 16;
        }
        v32 = &v29;
        v14 = sub_6732D0((_QWORD *)(v5 + 8), v14, &v32);
LABEL_33:
        copy_tinfo_t(v14 + 40);
        if ( v34.m128i_i64[0] >= (unsigned __int64)v34.m128i_i64[1] )
          goto LABEL_34;
      }
      else
      {
        sub_6738D0((_QWORD *)(v5 + 8), v29);
LABEL_39:
        if ( v34.m128i_i64[0] >= (unsigned __int64)v34.m128i_i64[1] )
          goto LABEL_34;
      }
    }
    v18 = *(_QWORD *)(v5 + 24);
    if ( v18 )
    {
      v19 = v5 + 16;
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v18 + 16);
          v21 = *(_QWORD *)(v18 + 24);
          if ( *(_DWORD *)(v18 + 32) < v29 )
            break;
          v19 = v18;
          v18 = *(_QWORD *)(v18 + 16);
          if ( !v20 )
            goto LABEL_46;
        }
        v18 = *(_QWORD *)(v18 + 24);
      }
      while ( v21 );
LABEL_46:
      if ( v27 != v19 && v29 >= *(_DWORD *)(v19 + 32) )
        goto LABEL_49;
    }
    else
    {
      v19 = v5 + 16;
    }
    v33 = &v29;
    v19 = sub_6732D0((_QWORD *)(v5 + 8), v19, &v33);
LABEL_49:
    copy_tinfo_t(v19 + 40);
    goto LABEL_39;
  }
LABEL_34:
  clear_tinfo_t(&v31);
  clear_tinfo_t(&v30);
  return v37 - __readfsqword(0x28u);
}

