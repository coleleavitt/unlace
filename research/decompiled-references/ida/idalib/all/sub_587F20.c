unsigned __int64 __fastcall sub_587F20(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rsi
  _QWORD *v8; // r12
  int v9; // r15d
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v16; // r14d
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 *v23; // [rsp+8h] [rbp-60h] BYREF
  __m128i v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v25 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 1856);
  v6 = v3 + v4;
  v24 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  if ( v3 < v6 )
  {
    v8 = v5 + 3;
    do
    {
      while ( 1 )
      {
        v22 = unpack_dq(&v24);
        if ( v24.m128i_i64[0] < (unsigned __int64)v24.m128i_i64[1] )
          break;
        v9 = unpack_dd(&v24);
        if ( a3 )
          goto LABEL_9;
LABEL_4:
        sub_587D20((__int64)(v5 + 2), v22);
LABEL_5:
        if ( v24.m128i_i64[0] >= (unsigned __int64)v24.m128i_i64[1] )
          return v25 - __readfsqword(0x28u);
      }
      if ( !*(_BYTE *)v24.m128i_i64[0]++ )
      {
        v9 = unpack_dd(&v24);
        if ( a3 )
        {
LABEL_9:
          v11 = (_QWORD *)v5[4];
          goto LABEL_10;
        }
        goto LABEL_4;
      }
      v16 = unpack_dd(&v24);
      v17 = unpack_dd(&v24);
      v18 = (_QWORD *)v5[4];
      v9 = v17;
      v11 = v18;
      if ( !a3 )
      {
        if ( v18 )
        {
          v19 = v5 + 3;
          do
          {
            while ( 1 )
            {
              v20 = v18[2];
              v21 = v18[3];
              if ( v18[4] < v22 )
                break;
              v19 = v18;
              v18 = (_QWORD *)v18[2];
              if ( !v20 )
                goto LABEL_26;
            }
            v18 = (_QWORD *)v18[3];
          }
          while ( v21 );
LABEL_26:
          if ( v8 == v19 || v22 < v19[4] )
          {
LABEL_28:
            v23 = &v22;
            v19 = sub_586A50(v5 + 2, v19, &v23);
          }
          *((_DWORD *)v19 + 10) = v16;
          goto LABEL_5;
        }
        v19 = v5 + 3;
        goto LABEL_28;
      }
LABEL_10:
      if ( v11 )
      {
        v12 = v5 + 3;
        do
        {
          while ( 1 )
          {
            v13 = v11[2];
            v14 = v11[3];
            if ( v11[4] < v22 )
              break;
            v12 = v11;
            v11 = (_QWORD *)v11[2];
            if ( !v13 )
              goto LABEL_15;
          }
          v11 = (_QWORD *)v11[3];
        }
        while ( v14 );
LABEL_15:
        if ( v8 != v12 && v22 >= v12[4] )
          goto LABEL_18;
      }
      else
      {
        v12 = v5 + 3;
      }
      v23 = &v22;
      v12 = sub_586A50(v5 + 2, v12, &v23);
LABEL_18:
      *((_DWORD *)v12 + 10) = v9;
    }
    while ( v24.m128i_i64[0] < (unsigned __int64)v24.m128i_i64[1] );
  }
  return v25 - __readfsqword(0x28u);
}
