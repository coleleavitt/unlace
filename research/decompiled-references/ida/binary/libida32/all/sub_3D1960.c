unsigned __int64 __fastcall sub_3D1960(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned __int64 v9; // rsi
  int v10; // r15d
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // [rsp+4h] [rbp-64h] BYREF
  unsigned int *v24; // [rsp+8h] [rbp-60h] BYREF
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1480);
  v4 = *(_DWORD *)a2 == 7;
  v26 = __readfsqword(0x28u);
  v6 = (_QWORD *)(v3 + 1480);
  if ( !v4 )
    v6 = (_QWORD *)(v3 + 1432);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = v6 + 1;
  v9 = v7 + *(unsigned int *)(a2 + 4);
  v25 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v9);
  if ( v7 < v9 )
  {
    do
    {
      while ( 1 )
      {
        v23 = unpack_dd(&v25);
        if ( v25.m128i_i64[0] < (unsigned __int64)v25.m128i_i64[1] )
          break;
        v10 = unpack_dd(&v25);
        if ( a3 )
          goto LABEL_11;
LABEL_6:
        sub_3D1760((__int64)v6, v23);
LABEL_7:
        if ( v25.m128i_i64[0] >= (unsigned __int64)v25.m128i_i64[1] )
          return v26 - __readfsqword(0x28u);
      }
      if ( !*(_BYTE *)v25.m128i_i64[0]++ )
      {
        v10 = unpack_dd(&v25);
        if ( a3 )
        {
LABEL_11:
          v12 = v6[2];
          goto LABEL_12;
        }
        goto LABEL_6;
      }
      v17 = unpack_dd(&v25);
      v18 = unpack_dd(&v25);
      v19 = v6[2];
      v10 = v18;
      v12 = v19;
      if ( !a3 )
      {
        if ( v19 )
        {
          v20 = v6 + 1;
          do
          {
            while ( 1 )
            {
              v21 = *(_QWORD *)(v19 + 16);
              v22 = *(_QWORD *)(v19 + 24);
              if ( *(_DWORD *)(v19 + 32) < v23 )
                break;
              v20 = (_DWORD *)v19;
              v19 = *(_QWORD *)(v19 + 16);
              if ( !v21 )
                goto LABEL_28;
            }
            v19 = *(_QWORD *)(v19 + 24);
          }
          while ( v22 );
LABEL_28:
          if ( v8 == v20 || v23 < v20[8] )
          {
LABEL_30:
            v24 = &v23;
            v20 = sub_3B5530(v6, (__int64)v20, &v24);
          }
          v20[9] = v17;
          goto LABEL_7;
        }
        v20 = v6 + 1;
        goto LABEL_30;
      }
LABEL_12:
      if ( v12 )
      {
        v13 = v6 + 1;
        do
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(v12 + 16);
            v15 = *(_QWORD *)(v12 + 24);
            if ( *(_DWORD *)(v12 + 32) < v23 )
              break;
            v13 = (_DWORD *)v12;
            v12 = *(_QWORD *)(v12 + 16);
            if ( !v14 )
              goto LABEL_17;
          }
          v12 = *(_QWORD *)(v12 + 24);
        }
        while ( v15 );
LABEL_17:
        if ( v13 != v8 && v23 >= v13[8] )
          goto LABEL_20;
      }
      else
      {
        v13 = v6 + 1;
      }
      v24 = &v23;
      v13 = sub_3B5530(v6, (__int64)v13, &v24);
LABEL_20:
      v13[9] = v10;
    }
    while ( v25.m128i_i64[0] < (unsigned __int64)v25.m128i_i64[1] );
  }
  return v26 - __readfsqword(0x28u);
}

