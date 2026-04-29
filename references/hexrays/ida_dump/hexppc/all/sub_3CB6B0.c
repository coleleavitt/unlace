__int64 __fastcall sub_3CB6B0(__int64 a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v5; // rax
  int v7; // r15d
  int v8; // r14d
  __int64 v9; // rax
  unsigned __int8 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // r11d
  __int64 v17; // rdi
  char v18; // si
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r11d
  int v22; // [rsp+0h] [rbp-7Ch]
  __int64 v23; // [rsp+4h] [rbp-78h]
  __int64 v24; // [rsp+4h] [rbp-78h]
  __int64 v25; // [rsp+Ch] [rbp-70h]
  __int64 v26; // [rsp+Ch] [rbp-70h]
  __int64 v27; // [rsp+14h] [rbp-68h]
  int v28; // [rsp+1Ch] [rbp-60h]
  int v29; // [rsp+20h] [rbp-5Ch]
  __m128i v30; // [rsp+24h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+3Ch] [rbp-40h]

  v5 = *a2;
  v31 = __readfsqword(0x28u);
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)a3);
  if ( (unsigned __int64)v5 >= a3 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *v5;
    v30.m128i_i64[0] = (__int64)(v5 + 1);
    if ( (unsigned __int8)v7 > 9u )
      return 0;
  }
  v22 = unpack_dd(&v30);
  v8 = unpack_dd(&v30);
  v28 = unpack_dd(&v30);
  v9 = unpack_dq(&v30, v30.m128i_i64[1]);
  v10 = (unsigned __int8 *)v30.m128i_i64[0];
  v11 = v9;
  if ( v30.m128i_i64[0] < (unsigned __int64)v30.m128i_i64[1] )
  {
    v17 = v30.m128i_i64[0] + 1;
    v18 = *(_BYTE *)v30.m128i_i64[0]++;
    if ( v18 == 1 )
    {
      v25 = v9;
      v23 = unpack_dq(&v30, v30.m128i_i64[1]);
      v19 = unpack_dq(&v30, v30.m128i_i64[1]);
      v20 = v25;
      if ( v30.m128i_i64[0] < (unsigned __int64)v30.m128i_i64[1] )
      {
        v21 = *(unsigned __int8 *)v30.m128i_i64[0]++;
        if ( (unsigned __int8)v21 > 0x48u )
          return 0;
      }
      else
      {
        v21 = 0;
      }
      v29 = v21;
      v27 = v19;
      v26 = v23;
      v24 = v20;
      v14 = unpack_dq(&v30, v30.m128i_i64[1]);
      v10 = (unsigned __int8 *)v30.m128i_i64[0];
      v11 = v24;
      v13 = v26;
      v12 = v27;
      v15 = v29;
    }
    else
    {
      if ( v18 )
        return 0;
      v10 = (unsigned __int8 *)v17;
      v12 = -1;
      v13 = -1;
      v14 = -1;
      v15 = 73;
    }
  }
  else
  {
    v12 = -1;
    v13 = -1;
    v14 = -1;
    v15 = 73;
  }
  if ( a3 >= (unsigned __int64)v10 )
  {
    *(_QWORD *)(a1 + 48) = v14;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 24) = v28;
    *(_DWORD *)(a1 + 12) = v7;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = v8;
    *(_DWORD *)(a1 + 28) = v22;
    *(_DWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 56) = v13;
    *(_QWORD *)(a1 + 64) = v12;
    *a2 = v10;
    return 1;
  }
  return 0;
}
