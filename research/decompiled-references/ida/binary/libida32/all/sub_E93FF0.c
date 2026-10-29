void __fastcall sub_E93FF0(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm3
  int v14; // edx
  __int64 v15; // rcx
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __m128i v18; // xmm1
  __int64 v19; // rdx
  unsigned int *v20; // r12
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ebp
  int v28; // eax
  __int64 v29; // rax
  void **v31; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+10h] [rbp-C8h]
  _BYTE *v33; // [rsp+18h] [rbp-C0h]
  void *v34[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v35[16]; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+40h] [rbp-98h]
  __int64 v37; // [rsp+50h] [rbp-88h]
  void *v38[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v39[16]; // [rsp+70h] [rbp-68h] BYREF
  __m128i v40; // [rsp+80h] [rbp-58h]
  __int64 v41; // [rsp+90h] [rbp-48h]

  v11 = *(_QWORD *)(a2 + 2320);
  v12 = *(_QWORD *)(v11 + 648);
  if ( v12 == *(_QWORD *)(v11 + 656) )
  {
    v41 = 0;
    v40 = 0;
    v38[0] = v39;
    v38[1] = nullptr;
    v39[0] = 0;
  }
  else
  {
    v31 = *(void ***)(v11 + 648);
    v38[0] = v39;
    sub_E90E10(v38, *(_BYTE **)v12, *(_QWORD *)v12 + *(_QWORD *)(v12 + 8));
    v13 = _mm_loadu_si128((const __m128i *)v31 + 2);
    LODWORD(v41) = *((_DWORD *)v31 + 12);
    v14 = *((_DWORD *)v31 + 13);
    v40 = v13;
    HIDWORD(v41) = v14;
  }
  v15 = *(_QWORD *)(a2 + 17448);
  v34[0] = v35;
  v16 = *(_BYTE **)(v15 + 216);
  v17 = *(_QWORD *)(v15 + 224);
  v33 = v35;
  v32 = v15;
  v31 = v34;
  sub_E90E10(v34, v16, (__int64)&v16[v17]);
  v18 = _mm_loadu_si128((const __m128i *)(v32 + 248));
  v37 = *(_QWORD *)(v32 + 264);
  v19 = *(_QWORD *)(a2 + 2320);
  v36 = v18;
  sub_20CDE20(a1, (*(_BYTE *)(v19 + 68) & 8) != 0, v34, v38, a7);
  if ( v34[0] != v35 )
    operator delete(v34[0]);
  if ( v38[0] != v39 )
    operator delete(v38[0]);
  v20 = &a5[a6];
  v31 = (void **)sub_E90DA0;
  *(_QWORD *)(a1 + 128) = a2;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 160));
  *(_QWORD *)a1 = &off_2B22148;
  v31 = (void **)sub_E90ED0;
  *(_QWORD *)(a1 + 176) = 0;
  *(__m128 *)(a1 + 144) = _mm_loadh_ps((const double *)&v31);
  v22 = _mm_loadu_si128(a3);
  *a3 = v21;
  v23 = *(_QWORD *)(a1 + 176);
  *(__m128i *)(a1 + 160) = v22;
  v24 = a3[1].m128i_i64[0];
  a3[1].m128i_i64[0] = v23;
  v25 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 176) = v24;
  v26 = a3[1].m128i_i64[1];
  a3[1].m128i_i64[1] = v25;
  *(_QWORD *)(a1 + 184) = v26;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0x1000000000LL;
  sub_A60130(a2, (char **)(a1 + 192), a4);
  for ( ; v20 != a5; ++*(_DWORD *)(a1 + 88) )
  {
    while ( 1 )
    {
      v27 = *a5;
      v28 = sub_20D0220(*a5);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (v27 >> 6)) |= 1LL << v27;
      if ( v28 == 1 )
        break;
      if ( v20 == ++a5 )
        return;
    }
    v29 = *(unsigned int *)(a1 + 88);
    if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 92) )
    {
      sub_22134E0(a1 + 80, a1 + 96, v29 + 1, 4);
      v29 = *(unsigned int *)(a1 + 88);
    }
    ++a5;
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v29) = v27;
  }
}

