unsigned __int64 __fastcall sub_3D1BA0(_QWORD *a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rbp
  _DWORD *v7; // r14
  char v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 i; // rax
  __int64 v14; // rsi
  __m128i v17; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v5 = (__int64)(a1 + 1);
  v19 = __readfsqword(0x28u);
  v17.m128i_i64[1] = a3;
  v18 = a3 + a2;
  if ( a3 >= v18 )
  {
    v7 = a1 + 1;
  }
  else
  {
    v7 = a1 + 1;
    v8 = 1;
    do
    {
      while ( 1 )
      {
        v4 = unpack_dd(&v17.m128i_u64[1]);
        v9 = unpack_dd(&v17.m128i_u64[1]);
        if ( !a4 )
          break;
        v17.m128i_i64[0] = __PAIR64__(v9, v4);
        v7 = sub_39EC70(a1, (__int64)v7, &v17);
        if ( v17.m128i_i64[1] >= v18 )
          goto LABEL_15;
      }
      if ( v8 )
      {
        v7 = a1 + 1;
        v10 = a1[2];
        if ( v10 )
        {
          do
          {
            while ( 1 )
            {
              v11 = *(_QWORD *)(v10 + 16);
              v12 = *(_QWORD *)(v10 + 24);
              if ( *(_DWORD *)(v10 + 32) < v4 )
                break;
              v7 = (_DWORD *)v10;
              v10 = *(_QWORD *)(v10 + 16);
              if ( !v11 )
                goto LABEL_10;
            }
            v10 = *(_QWORD *)(v10 + 24);
          }
          while ( v12 );
LABEL_10:
          if ( (_DWORD *)v5 != v7 && v4 < v7[8] )
            v7 = a1 + 1;
        }
        v8 = 0;
      }
    }
    while ( v17.m128i_i64[1] < v18 );
  }
LABEL_15:
  if ( !a4 )
  {
    for ( i = a1[2]; i; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(i + 16);
        if ( v4 >= *(_DWORD *)(i + 32) )
          break;
        v5 = i;
        i = *(_QWORD *)(i + 16);
        if ( !v14 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3A07C0((__int64)a1, (__int64)v7, v5);
  }
  return v19 - __readfsqword(0x28u);
}

