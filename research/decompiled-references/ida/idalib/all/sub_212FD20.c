void __fastcall sub_212FD20(__int64 a1, __int64 *a2, __int64 *a3, const __m128i *a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  void **v8; // r13
  void **v9; // rbp
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r10
  void **v19; // r14
  _QWORD *v20; // r13
  __int64 v21; // r14
  __int64 v22; // rbp
  void *v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // r11d
  __int64 *v26; // r10
  __int64 v27; // rcx
  __m128i v28; // xmm2
  __m128i si128; // xmm3
  unsigned int v30; // eax
  __int64 v31; // [rsp+10h] [rbp-E8h]
  __int64 v32; // [rsp+18h] [rbp-E0h]
  char v33; // [rsp+27h] [rbp-D1h]
  int v34; // [rsp+28h] [rbp-D0h]
  unsigned int v35; // [rsp+2Ch] [rbp-CCh]
  __int64 *v36; // [rsp+30h] [rbp-C8h]
  __int64 v37; // [rsp+38h] [rbp-C0h]
  __int64 *v38[3]; // [rsp+48h] [rbp-B0h] BYREF
  __m128i v39; // [rsp+60h] [rbp-98h] BYREF
  __m128i v40[8]; // [rsp+70h] [rbp-88h] BYREF

  v5 = a4[3].m128i_i64[0];
  v6 = (_QWORD *)a4[2].m128i_i64[0];
  a4[3].m128i_i64[0] = 0;
  v7 = (_QWORD *)a4[2].m128i_i64[1];
  v8 = (void **)a4[3].m128i_i64[1];
  a4[2].m128i_i64[0] = 0;
  v9 = (void **)a4[4].m128i_i64[0];
  v31 = v5;
  v10 = a4[4].m128i_i64[1];
  a4[2].m128i_i64[1] = 0;
  v11 = _mm_loadu_si128(a4);
  v12 = _mm_loadu_si128(a4 + 1);
  v38[1] = a2;
  v32 = v10;
  LOBYTE(v10) = a4[5].m128i_i8[0];
  a4[3].m128i_i64[1] = 0;
  a4[4].m128i_i64[0] = 0;
  a4[4].m128i_i64[1] = 0;
  v33 = v10;
  LODWORD(v10) = a4[5].m128i_i32[1];
  v39 = v11;
  v40[0] = v12;
  v34 = v10;
  v38[2] = a3;
  v13 = sub_2244B30(a2, a3);
  v14 = sub_2244CB0(a1 + 2360, a2, a3, v13);
  v18 = (__int64 *)(*(_QWORD *)(a1 + 2360) + 8LL * v14);
  if ( !*v18 )
    goto LABEL_24;
  if ( *v18 == -8 )
  {
    --*(_DWORD *)(a1 + 2376);
LABEL_24:
    v36 = v18;
    v35 = v14;
    v24 = sub_22300B0((char *)a3 + 97, 8, v14, v15, v16, v17);
    v25 = v35;
    v26 = v36;
    v27 = v24;
    if ( a3 )
    {
      v37 = v24;
      memcpy((void *)(v24 + 96), a2, (size_t)a3);
      v27 = v37;
      v26 = v36;
      v25 = v35;
    }
    *((_BYTE *)a3 + v27 + 96) = 0;
    v28 = _mm_load_si128(&v39);
    si128 = _mm_load_si128(v40);
    *(_QWORD *)v27 = a3;
    *(_QWORD *)(v27 + 56) = v31;
    *(__m128i *)(v27 + 8) = v28;
    *(_QWORD *)(v27 + 80) = v32;
    *(__m128i *)(v27 + 24) = si128;
    *(_BYTE *)(v27 + 88) = v33;
    *(_QWORD *)(v27 + 40) = v6;
    *(_QWORD *)(v27 + 48) = v7;
    *(_QWORD *)(v27 + 64) = v8;
    *(_QWORD *)(v27 + 72) = v9;
    *(_DWORD *)(v27 + 92) = v34;
    *v26 = v27;
    ++*(_DWORD *)(a1 + 2372);
    v30 = sub_22450D0(a1 + 2360, v25);
    sub_212FCE0(v38, (__int64 *)(*(_QWORD *)(a1 + 2360) + 8LL * v30), 0);
    return;
  }
  sub_212FCE0(v38, v18, 0);
  if ( v8 != v9 )
  {
    v19 = v8;
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v9 == v19 )
          goto LABEL_7;
      }
      v19 += 4;
    }
    while ( v19 != v9 );
  }
LABEL_7:
  if ( v8 )
    operator delete(v8);
  if ( v6 != v7 )
  {
    v20 = v6;
    do
    {
      while ( 1 )
      {
        v21 = v20[3];
        v22 = v20[2];
        if ( v21 != v22 )
        {
          do
          {
            if ( *(_DWORD *)(v22 + 32) > 0x40u )
            {
              v23 = *(void **)(v22 + 24);
              if ( v23 )
                operator delete[](v23);
            }
            v22 += 40;
          }
          while ( v21 != v22 );
          v22 = v20[2];
        }
        if ( !v22 )
          break;
        v20 += 6;
        operator delete((void *)v22);
        if ( v20 == v7 )
          goto LABEL_19;
      }
      v20 += 6;
    }
    while ( v20 != v7 );
  }
LABEL_19:
  if ( v6 )
    operator delete(v6);
}
