unsigned __int64 __fastcall sub_3D7620(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rsi
  int v10; // r15d
  _QWORD *v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v17; // r14d
  int v18; // eax
  _QWORD *v19; // rcx
  _QWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 *v24; // [rsp+8h] [rbp-60h] BYREF
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1672);
  v4 = *(_DWORD *)a2 == 7;
  v26 = __readfsqword(0x28u);
  v6 = (_QWORD *)(v3 + 1528);
  if ( !v4 )
    v6 = (_QWORD *)(v3 + 1480);
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
        v23 = unpack_dq(&v25);
        if ( v25.m128i_i64[0] < (unsigned __int64)v25.m128i_i64[1] )
          break;
        v10 = unpack_dd(&v25);
        if ( a3 )
          goto LABEL_11;
LABEL_6:
        sub_3D7400((__int64)v6, v23);
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
          v12 = (_QWORD *)v6[2];
          goto LABEL_12;
        }
        goto LABEL_6;
      }
      v17 = unpack_dd(&v25);
      v18 = unpack_dd(&v25);
      v19 = (_QWORD *)v6[2];
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
              v21 = v19[2];
              v22 = v19[3];
              if ( v19[4] < v23 )
                break;
              v20 = v19;
              v19 = (_QWORD *)v19[2];
              if ( !v21 )
                goto LABEL_28;
            }
            v19 = (_QWORD *)v19[3];
          }
          while ( v22 );
LABEL_28:
          if ( v8 == v20 || v23 < v20[4] )
          {
LABEL_30:
            v24 = &v23;
            v20 = sub_3B9D00(v6, v20, &v24);
          }
          *((_DWORD *)v20 + 10) = v17;
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
            v14 = v12[2];
            v15 = v12[3];
            if ( v12[4] < v23 )
              break;
            v13 = v12;
            v12 = (_QWORD *)v12[2];
            if ( !v14 )
              goto LABEL_17;
          }
          v12 = (_QWORD *)v12[3];
        }
        while ( v15 );
LABEL_17:
        if ( v13 != v8 && v23 >= v13[4] )
          goto LABEL_20;
      }
      else
      {
        v13 = v6 + 1;
      }
      v24 = &v23;
      v13 = sub_3B9D00(v6, v13, &v24);
LABEL_20:
      *((_DWORD *)v13 + 10) = v10;
    }
    while ( v25.m128i_i64[0] < (unsigned __int64)v25.m128i_i64[1] );
  }
  return v26 - __readfsqword(0x28u);
}
