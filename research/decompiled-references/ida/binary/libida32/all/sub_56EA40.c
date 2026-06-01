unsigned __int64 __fastcall sub_56EA40(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  _DWORD *v9; // r14
  char v10; // r15
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 i; // rax
  __int64 v16; // rsi
  __int64 v18; // [rsp+8h] [rbp-70h]
  _DWORD v19[2]; // [rsp+18h] [rbp-60h] BYREF
  __m128i v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v21 = __readfsqword(0x28u);
  v7 = v4 + v5;
  v8 = *(_QWORD *)(a1 + 1664) + 24LL;
  v18 = *(_QWORD *)(a1 + 1664);
  v9 = (_DWORD *)v8;
  v20 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v7);
  if ( v4 < v7 )
  {
    v10 = 1;
    do
    {
      while ( 1 )
      {
        v3 = unpack_dd(&v20);
        v11 = unpack_dd(&v20);
        if ( a3 )
          break;
        v19[1] = v11;
        v19[0] = v3;
        v9 = sub_39EC70((_QWORD *)(v18 + 16), (__int64)v9, (const __m128i *)v19);
        if ( v20.m128i_i64[0] >= (unsigned __int64)v20.m128i_i64[1] )
          goto LABEL_15;
      }
      if ( v10 )
      {
        v9 = (_DWORD *)v8;
        v12 = *(_QWORD *)(v18 + 32);
        if ( v12 )
        {
          do
          {
            while ( 1 )
            {
              v13 = *(_QWORD *)(v12 + 16);
              v14 = *(_QWORD *)(v12 + 24);
              if ( *(_DWORD *)(v12 + 32) < v3 )
                break;
              v9 = (_DWORD *)v12;
              v12 = *(_QWORD *)(v12 + 16);
              if ( !v13 )
                goto LABEL_10;
            }
            v12 = *(_QWORD *)(v12 + 24);
          }
          while ( v14 );
LABEL_10:
          if ( (_DWORD *)v8 != v9 && v3 < v9[8] )
            v9 = (_DWORD *)v8;
        }
        v10 = 0;
      }
    }
    while ( v20.m128i_i64[0] < (unsigned __int64)v20.m128i_i64[1] );
  }
LABEL_15:
  if ( a3 )
  {
    for ( i = *(_QWORD *)(v18 + 32); i; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(i + 16);
        if ( v3 >= *(_DWORD *)(i + 32) )
          break;
        v8 = i;
        i = *(_QWORD *)(i + 16);
        if ( !v16 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3A07C0(v18 + 16, (__int64)v9, v8);
  }
  return v21 - __readfsqword(0x28u);
}

