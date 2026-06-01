__int64 __fastcall sub_194BE00(__int64 *a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned int v7; // r12d
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r14
  int v11; // r15d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v18; // [rsp+28h] [rbp-A0h] BYREF
  int v19; // [rsp+2Ch] [rbp-9Ch] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+40h] [rbp-88h]
  __int64 v22; // [rsp+48h] [rbp-80h]
  __m128i v23[2]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v24; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+88h] [rbp-40h]

  v5 = a2 + 24 * a3;
  if ( a2 == v5 )
  {
    return 1;
  }
  else
  {
    v6 = a2;
    v7 = 1;
    while ( 1 )
    {
      while ( !sub_F1D570(v6) )
      {
        v6 += 24;
        ++v7;
        if ( v5 == v6 )
          return v7;
      }
      sub_1D3AAD0(v20, *a1, v6, 0, 0, 0);
      v18 = 0;
      v19 = 0;
      sub_1E4CF80((unsigned int)v23, *a1, (unsigned int)&v18, (unsigned int)&v19, v8, v9, v20[0], v20[1], v21, v22);
      v10 = *a1;
      v24.m128i_i64[1] = 0;
      v11 = *(_DWORD *)(v10 + 12632);
      v24.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v25 = 0;
      *(_DWORD *)(v10 + 12632) = 0;
      if ( (unsigned __int8)sub_1949D50(a1, v23, &v24, 1, a4, a5) )
      {
        *(_DWORD *)(v10 + 12632) = v11;
        return 2;
      }
      v16 = sub_1E4D250(*a1, (unsigned int)v23, v12, v13, v14, v15, v24.m128i_i32[0], v24.m128i_i64[1]);
      if ( !v16 )
        break;
      v6 += 24;
      v7 = v7 + v16 - 1;
      *(_DWORD *)(v10 + 12632) = v11;
      if ( v5 == v6 )
        return v7;
    }
    *(_DWORD *)(v10 + 12632) = v11;
    return 0;
  }
}
