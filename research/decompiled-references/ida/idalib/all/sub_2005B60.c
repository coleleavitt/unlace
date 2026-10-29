__int64 __fastcall sub_2005B60(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(), __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 *v8; // r15
  unsigned int v9; // eax
  int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rax
  char **v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-160h]
  __int64 *v17; // [rsp+8h] [rbp-160h]
  __m128i v18; // [rsp+10h] [rbp-158h] BYREF
  __int64 v19; // [rsp+20h] [rbp-148h]
  void *v20[2]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-128h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+50h] [rbp-118h] BYREF
  __int64 v23; // [rsp+58h] [rbp-110h]
  __int128 v24; // [rsp+60h] [rbp-108h]
  __int64 v25; // [rsp+70h] [rbp-F8h]
  char v26; // [rsp+78h] [rbp-F0h]
  int v27; // [rsp+7Ch] [rbp-ECh]
  void **v28; // [rsp+80h] [rbp-E8h]
  void *ptr; // [rsp+90h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-D0h]
  _BYTE v31[192]; // [rsp+A8h] [rbp-C0h] BYREF

  v22 = a3;
  v23 = a4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v31;
  LOWORD(v25) = 261;
  sub_228FF50(&v22, &ptr, 0);
  v20[0] = v21;
  v21[0] = 0;
  v20[1] = nullptr;
  LODWORD(v23) = 0;
  v26 = 0;
  v27 = 1;
  v25 = 0;
  v24 = 0;
  v22 = &off_2BEBE68;
  v28 = v20;
  sub_227B8B0(&v22, 0, 0, 0);
  v5 = sub_1FF6310(a2 + 56, (__int64 *)ptr, si128.m128i_u64[0], (__int64)&v22);
  if ( !v6
    || ((v8 = v5, v16 = v6, v9 = sub_2244B30(v5, v6), v10 = sub_2244E60(a2 + 8, v8, v16, v9), v10 == -1)
      ? (v11 = (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 16)))
      : (v11 = (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL * v10)),
        sub_2005920((__int64 **)&v18, v11, 1),
        v17 = (__int64 *)v18.m128i_i64[0],
        sub_2005920((__int64 **)&v18, (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 16)), 1),
        (__int64 *)v18.m128i_i64[0] == v17) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    v12 = *v17;
    v18 = 0;
    v13 = *(char ***)(v12 + 8);
    v14 = *(_QWORD *)(v12 + 16);
    v19 = 0;
    sub_20045C0(a2, v13, 0xAAAAAAAAAAAAAAABLL * ((v14 - (__int64)v13) >> 4), (char **)&v18);
    v15 = v19;
    *(__m128i *)a1 = _mm_load_si128(&v18);
    *(_QWORD *)(a1 + 16) = v15;
  }
  v22 = &off_2BEBE68;
  sub_227B7A0(&v22);
  if ( v20[0] != v21 )
    operator delete(v20[0]);
  if ( ptr != v31 )
    free(ptr);
  return a1;
}
