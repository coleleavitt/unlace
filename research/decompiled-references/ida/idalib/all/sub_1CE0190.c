__int64 __fastcall sub_1CE0190(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // [rsp+4h] [rbp-B4h] BYREF
  __int64 v26; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v29[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  __int64 v31; // [rsp+48h] [rbp-70h]
  __int64 v32[11]; // [rsp+60h] [rbp-58h] BYREF

  v26 = a2;
  v25 = a3;
  v29[0] = a1;
  v29[1] = (__int64)&v26;
  v29[2] = (__int64)&v25;
  if ( a5 == 1 )
    return sub_1CDFC20(v29, a2, a3, (__int64)a4, 1, a6, (const __m128i)a7, *a4, (const __m128i)a8, a4[1]);
  v8 = 0;
  if ( a5 )
  {
    if ( a5 == 2 )
    {
      v16 = a4[1];
      v17 = a4[4];
      v27 = sub_1E704F0(a1, v16, 0);
      v18 = sub_1E704F0(a1, v17, 0);
      v28 = v18;
      if ( (*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v16) & 7) == (*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v27) & 7)
        && (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v17) & 7) == (*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v18) & 7) )
      {
        v32[0] = a1;
        v32[1] = (__int64)&v27;
        v32[2] = (__int64)&v28;
        v32[3] = (__int64)&v25;
        v24 = sub_1CB8120(v32, 0, a7, a8);
        if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) >= 0 )
            return v8;
          return sub_1CB8120(v32, 1, a7, a8);
        }
        return v24;
      }
      sub_F1D250((__int64)v32, v28, 0, 0);
      v19 = v27;
      sub_F1D250((__int64)&v30, v27, 0, 0);
      return sub_1CDFC20(v29, v19, v20, v21, v22, v23, (const __m128i)a7, v30, (const __m128i)a8, v31);
    }
    else
    {
      v9 = a4 + 3;
      v8 = a4[1];
      v10 = &a4[3 * a5];
      if ( v10 != a4 + 3 )
      {
        while ( 1 )
        {
          sub_F1D250((__int64)v32, v9[1], 0, 0);
          sub_F1D250((__int64)&v30, v8, 0, 0);
          v8 = sub_1CDFC20(v29, v8, v11, v12, v13, v14, (const __m128i)a7, v30, (const __m128i)a8, v31);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            break;
          v9 += 3;
          if ( v9 == v10 )
            return v8;
        }
        return 0;
      }
    }
  }
  return v8;
}
