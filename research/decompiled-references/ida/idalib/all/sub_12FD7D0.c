__int64 __fastcall sub_12FD7D0(
        __int64 (__fastcall *a1)(__int64, __m128i *),
        __int64 a2,
        unsigned int a3,
        const __m128i *a4)
{
  __int64 v4; // r12
  __int64 *v8; // rax
  __int64 v9; // rax
  char v10; // r15
  __int64 v11; // rdx
  const char *v12; // rdi
  size_t v13; // rax
  __int64 v14; // rdx
  char v16; // dl
  _OWORD *v17; // rcx
  __m128i v18; // xmm3
  __m128i v19; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v20; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-D8h]
  _OWORD v22[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v23; // [rsp+80h] [rbp-78h]
  __m128i v24; // [rsp+90h] [rbp-68h] BYREF
  __m128i v25; // [rsp+A0h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-48h]

  v8 = sub_1105E80();
  v9 = sub_21BB380(v8, a3);
  v10 = *(_BYTE *)(v9 + 44);
  v12 = (const char *)(**(_QWORD **)(v11 + 8)
                     + *(unsigned int *)(*(_QWORD *)(v11 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v9 + 40) - 1) + 4));
  if ( v12 )
    v13 = strlen(v12);
  else
    v13 = 0;
  v19.m128i_i64[0] = (__int64)v12;
  LOWORD(v21) = 261;
  v14 = a4[2].m128i_i64[0];
  v19.m128i_i64[1] = v13;
  v23 = v14;
  v22[0] = _mm_load_si128(a4);
  v22[1] = _mm_load_si128(a4 + 1);
  if ( ((1LL << v10) & 0x210) != 0 )
  {
    v16 = v23;
    if ( (_BYTE)v23 )
    {
      if ( (_BYTE)v23 == 1 )
      {
        v18 = _mm_load_si128(&v20);
        v24 = _mm_load_si128(&v19);
        v25 = v18;
        v26 = v21;
      }
      else
      {
        if ( BYTE1(v23) == 1 )
        {
          v4 = *((_QWORD *)&v22[0] + 1);
          v17 = *(_OWORD **)&v22[0];
        }
        else
        {
          v17 = v22;
          v16 = 2;
        }
        v24.m128i_i64[0] = (__int64)v12;
        v24.m128i_i64[1] = v13;
        v25.m128i_i64[0] = (__int64)v17;
        v25.m128i_i64[1] = v4;
        LOBYTE(v26) = 5;
        BYTE1(v26) = v16;
      }
    }
    else
    {
      LOWORD(v26) = 256;
    }
    return a1(a2, &v24);
  }
  else
  {
    a1(a2, &v19);
    return a1(a2, (__m128i *)v22);
  }
}
