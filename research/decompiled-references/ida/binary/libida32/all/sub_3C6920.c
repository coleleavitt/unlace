unsigned __int64 __fastcall sub_3C6920(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned int v15; // edx
  unsigned int *v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v18[2]; // [rsp+8h] [rbp-40h] BYREF
  __m128i v19; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v20 = __readfsqword(0x28u);
  v7 = (__int64 *)(a4 + *(_QWORD *)(a1 + 1480));
  v19 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v5));
  v18[0] = unpack_dd(&v19);
  v8 = unpack_dd(&v19);
  v18[1] = v8;
  if ( a3 )
  {
    sub_3C6720(v7, v18);
  }
  else
  {
    v11 = v19.m128i_i64[0];
    if ( v19.m128i_i64[0] < (unsigned __int64)v19.m128i_i64[1] )
    {
      LOBYTE(a3) = *(_BYTE *)v19.m128i_i64[0];
      v11 = v19.m128i_i64[0] + 1;
    }
    v19.m128i_i64[0] = v11;
    v12 = v7[9];
    v13 = (__int64)(v7 + 8);
    v14 = (__int64)(v7 + 8);
    if ( !v12 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v9 = *(unsigned int *)(v12 + 32);
        if ( (unsigned int)v9 < v18[0] || v18[0] >= (unsigned int)v9 && *(_DWORD *)(v12 + 36) < v8 )
          break;
        v14 = v12;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v12 )
          goto LABEL_11;
      }
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
LABEL_11:
    if ( v13 == v14 || (v15 = *(_DWORD *)(v14 + 32), v18[0] < v15) || v15 >= v18[0] && v8 < *(_DWORD *)(v14 + 36) )
    {
LABEL_15:
      v17 = v18;
      v14 = sub_3B4ED0(v7, v14, (__int64 **)&v17, v9, v13, v10);
    }
    *(_BYTE *)(v14 + 40) = a3;
  }
  return v20 - __readfsqword(0x28u);
}

