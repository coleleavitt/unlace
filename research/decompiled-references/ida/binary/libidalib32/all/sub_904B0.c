unsigned __int64 __fastcall sub_904B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // eax
  bool v7; // dl
  int v8; // r15d
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 (__fastcall **v26)(); // [rsp+0h] [rbp-118h] BYREF
  __int64 v27; // [rsp+8h] [rbp-110h]
  __m128i v28; // [rsp+10h] [rbp-108h] BYREF
  __int64 v29; // [rsp+20h] [rbp-F8h]
  __m128i v30; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-E0h]
  __m128i v32; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-C8h]
  __m128i v34; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+80h] [rbp-98h]
  __int64 v38; // [rsp+88h] [rbp-90h]
  int v39; // [rsp+BCh] [rbp-5Ch]
  __int64 v40; // [rsp+C8h] [rbp-50h]
  int v41; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v5 = byte_24E0E0[53 * *(unsigned __int16 *)&byte_24E0E0[8] + 11];
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 424LL))(a4);
  v7 = 1;
  if ( v6 == -1 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    v7 = v6 != -1;
  }
  v8 = *(unsigned __int8 *)(a2 + 32);
  sub_8FAE0((__int64)&v26, v5 | 0x100000000LL, ((unsigned __int64)v7 << 32) | v6);
  v26 = (__int64 (__fastcall **)())&off_22E2F0;
  v40 = a4;
  v41 = v8;
  sub_8FE60((__int64)&v26, a2 + 8);
  v9 = v29;
  v10 = _mm_loadu_si128(&v30);
  v11 = _mm_loadu_si128((const __m128i *)a1 + 8);
  v29 = a1[15];
  v12 = v39;
  a1[15] = v9;
  v13 = v31;
  *((_DWORD *)a1 + 36) = v12;
  v14 = *a1;
  *((__m128i *)a1 + 8) = v10;
  v15 = _mm_load_si128(&v32);
  *a1 = v13;
  v16 = v33;
  v31 = v14;
  v17 = a1[3];
  v30 = v11;
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *(__m128i *)(a1 + 1) = v15;
  v19 = _mm_loadu_si128(&v34);
  a1[3] = v16;
  v20 = v27;
  v33 = v17;
  v21 = a1[6];
  v32 = v18;
  v22 = _mm_loadu_si128((const __m128i *)a1 + 2);
  *((__m128i *)a1 + 2) = v19;
  v23 = _mm_load_si128(&v28);
  v34 = v22;
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 7));
  a1[6] = v20;
  *(__m128i *)(a1 + 7) = v23;
  v27 = v21;
  v26 = &off_22E2B8;
  v28 = v24;
  if ( v37 )
  {
    v38 = 0;
    qfree();
  }
  if ( v35 )
  {
    v36 = 0;
    qfree();
  }
  if ( v33 )
  {
    v34.m128i_i64[0] = 0;
    qfree();
  }
  if ( v31 )
  {
    v32.m128i_i64[0] = 0;
    qfree();
  }
  if ( v29 )
  {
    v30.m128i_i64[0] = 0;
    qfree();
  }
  if ( v27 )
  {
    v28.m128i_i64[0] = 0;
    qfree();
  }
  return v42 - __readfsqword(0x28u);
}

