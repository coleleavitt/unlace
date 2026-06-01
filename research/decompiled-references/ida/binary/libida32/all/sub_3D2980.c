unsigned __int64 __fastcall sub_3D2980(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rsi
  char *v8; // r12
  char *v10; // rdx
  char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  char *v15; // rcx
  char *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned int v19; // [rsp+4h] [rbp-84h] BYREF
  unsigned int *v20; // [rsp+8h] [rbp-80h] BYREF
  __m128i v21; // [rsp+10h] [rbp-78h] BYREF
  __m128i v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __m128i v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v26 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1480);
  v22.m128i_i64[0] = 0;
  v7 = v3 + v4;
  v22.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v24.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v23 = 0;
  v24.m128i_i64[0] = 0;
  v25 = 0;
  v21 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v7);
  if ( v3 < v7 )
  {
    v8 = (char *)(v6 + 296);
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = unpack_dd(&v21);
        if ( v21.m128i_i64[0] < (unsigned __int64)v21.m128i_i64[1] )
        {
          if ( *(_BYTE *)v21.m128i_i64[0]++ )
            break;
        }
        sub_408E00(&v24, &v21);
        if ( a3 )
        {
          v10 = (char *)v6[297];
          goto LABEL_9;
        }
        sub_3D28B0((__int64)(v6 + 295), v19);
LABEL_4:
        if ( v21.m128i_i64[0] >= (unsigned __int64)v21.m128i_i64[1] )
          return v26 - __readfsqword(0x28u);
      }
      sub_408E00(&v22, &v21);
      sub_408E00(&v24, &v21);
      v15 = (char *)v6[297];
      v10 = v15;
      if ( !a3 )
        break;
LABEL_9:
      if ( v10 )
      {
        v11 = (char *)(v6 + 296);
        do
        {
          while ( 1 )
          {
            v12 = *((_QWORD *)v10 + 2);
            v13 = *((_QWORD *)v10 + 3);
            if ( *((_DWORD *)v10 + 8) < v19 )
              break;
            v11 = v10;
            v10 = *((char **)v10 + 2);
            if ( !v12 )
              goto LABEL_14;
          }
          v10 = *((char **)v10 + 3);
        }
        while ( v13 );
LABEL_14:
        if ( v8 != v11 && v19 >= *((_DWORD *)v11 + 8) )
          goto LABEL_17;
      }
      else
      {
        v11 = (char *)(v6 + 296);
      }
      v20 = &v19;
      v11 = (char *)sub_3B4A90(v6 + 295, (__int64)v11, &v20);
LABEL_17:
      *(__m128i *)(v11 + 36) = _mm_load_si128(&v24);
      *(_QWORD *)(v11 + 52) = v25;
      if ( v21.m128i_i64[0] >= (unsigned __int64)v21.m128i_i64[1] )
        return v26 - __readfsqword(0x28u);
    }
    if ( v15 )
    {
      v16 = (char *)(v6 + 296);
      do
      {
        while ( 1 )
        {
          v17 = *((_QWORD *)v15 + 2);
          v18 = *((_QWORD *)v15 + 3);
          if ( *((_DWORD *)v15 + 8) < v19 )
            break;
          v16 = v15;
          v15 = *((char **)v15 + 2);
          if ( !v17 )
            goto LABEL_25;
        }
        v15 = *((char **)v15 + 3);
      }
      while ( v18 );
LABEL_25:
      if ( v8 != v16 && v19 >= *((_DWORD *)v16 + 8) )
        goto LABEL_28;
    }
    else
    {
      v16 = (char *)(v6 + 296);
    }
    v20 = &v19;
    v16 = (char *)sub_3B4A90(v6 + 295, (__int64)v16, &v20);
LABEL_28:
    *(__m128i *)(v16 + 36) = _mm_load_si128(&v22);
    *(_QWORD *)(v16 + 52) = v23;
    goto LABEL_4;
  }
  return v26 - __readfsqword(0x28u);
}

