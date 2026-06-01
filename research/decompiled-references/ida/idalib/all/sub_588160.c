unsigned __int64 __fastcall sub_588160(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  _QWORD *v9; // r14
  char v10; // r15
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *i; // rax
  __int64 v16; // rsi
  __int64 v18; // [rsp+8h] [rbp-70h]
  __m128i v19; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v22 = __readfsqword(0x28u);
  v7 = v4 + v5;
  v8 = *(_QWORD *)(a1 + 1856) + 24LL;
  v18 = *(_QWORD *)(a1 + 1856);
  v9 = (_QWORD *)v8;
  v19 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v7);
  if ( v4 < v7 )
  {
    v10 = 1;
    do
    {
      while ( 1 )
      {
        v3 = unpack_dq(&v19);
        v11 = unpack_dd(&v19);
        if ( a3 )
          break;
        v21 = v11;
        v20 = v3;
        v9 = sub_3CF5E0((_QWORD *)(v18 + 16), v9, (__int64)&v20);
        if ( v19.m128i_i64[0] >= (unsigned __int64)v19.m128i_i64[1] )
          goto LABEL_15;
      }
      if ( v10 )
      {
        v9 = (_QWORD *)v8;
        v12 = *(_QWORD **)(v18 + 32);
        if ( v12 )
        {
          do
          {
            while ( 1 )
            {
              v13 = v12[2];
              v14 = v12[3];
              if ( v12[4] < v3 )
                break;
              v9 = v12;
              v12 = (_QWORD *)v12[2];
              if ( !v13 )
                goto LABEL_10;
            }
            v12 = (_QWORD *)v12[3];
          }
          while ( v14 );
LABEL_10:
          if ( (_QWORD *)v8 != v9 && v3 < v9[4] )
            v9 = (_QWORD *)v8;
        }
        v10 = 0;
      }
    }
    while ( v19.m128i_i64[0] < (unsigned __int64)v19.m128i_i64[1] );
  }
LABEL_15:
  if ( a3 )
  {
    for ( i = *(_QWORD **)(v18 + 32); i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v16 = i[2];
        if ( v3 >= i[4] )
          break;
        v8 = (__int64)i;
        i = (_QWORD *)i[2];
        if ( !v16 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3D7370(v18 + 16, (__int64)v9, v8);
  }
  return v22 - __readfsqword(0x28u);
}
