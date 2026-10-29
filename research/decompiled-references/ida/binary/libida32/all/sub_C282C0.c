__m128i *__fastcall sub_C282C0(__m128i *a1, unsigned __int64 a2, __int64 a3)
{
  size_t *v4; // rsi
  __m128i *v5; // rbp
  __int64 v6; // rax
  int v7; // edx
  __m128 v8; // xmm0
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 i; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __m128i *v18; // rdi
  __int64 (__fastcall ***v19)(); // [rsp+8h] [rbp-410h] BYREF
  size_t v20; // [rsp+18h] [rbp-400h] BYREF
  __int16 v21; // [rsp+20h] [rbp-3F8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-3F0h]
  void *v23; // [rsp+30h] [rbp-3E8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-3E0h]
  __m128i v25; // [rsp+40h] [rbp-3D8h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+50h] [rbp-3C8h] BYREF
  char v27; // [rsp+58h] [rbp-3C0h]
  __int64 v28; // [rsp+60h] [rbp-3B8h]
  __int16 *v29; // [rsp+68h] [rbp-3B0h]
  _OWORD *v30; // [rsp+70h] [rbp-3A8h]
  int v31; // [rsp+78h] [rbp-3A0h]
  int v32; // [rsp+7Ch] [rbp-39Ch]
  int v33; // [rsp+80h] [rbp-398h]
  char v34; // [rsp+84h] [rbp-394h]
  _OWORD v35[3]; // [rsp+88h] [rbp-390h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-360h]
  __int64 v37; // [rsp+C0h] [rbp-358h]
  __int64 v38; // [rsp+C8h] [rbp-350h]
  int v39; // [rsp+D8h] [rbp-340h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-338h]
  int *v41; // [rsp+E8h] [rbp-330h]
  int *v42; // [rsp+F0h] [rbp-328h]
  __int64 v43; // [rsp+F8h] [rbp-320h]
  __int64 v44; // [rsp+100h] [rbp-318h]
  int v45; // [rsp+108h] [rbp-310h]
  _DWORD *v46; // [rsp+110h] [rbp-308h]
  __int64 v47; // [rsp+118h] [rbp-300h]
  _DWORD v48[4]; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v49; // [rsp+130h] [rbp-2E8h]
  __int64 v50; // [rsp+138h] [rbp-2E0h]
  int v51; // [rsp+140h] [rbp-2D8h]
  __int64 v52; // [rsp+148h] [rbp-2D0h]
  char v53; // [rsp+150h] [rbp-2C8h]
  __int64 *v54; // [rsp+158h] [rbp-2C0h]
  __int64 v55; // [rsp+160h] [rbp-2B8h]
  __int64 v56; // [rsp+168h] [rbp-2B0h] BYREF
  _DWORD v57[6]; // [rsp+368h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+380h] [rbp-98h]
  __int64 v59; // [rsp+388h] [rbp-90h]
  __int64 v60; // [rsp+390h] [rbp-88h]
  int v61; // [rsp+398h] [rbp-80h]
  int v62; // [rsp+3A8h] [rbp-70h] BYREF
  __int64 v63; // [rsp+3B0h] [rbp-68h]
  int *v64; // [rsp+3B8h] [rbp-60h]
  int *v65; // [rsp+3C0h] [rbp-58h]
  __int64 v66; // [rsp+3C8h] [rbp-50h]
  __int64 v67; // [rsp+3D0h] [rbp-48h]
  __int64 v68; // [rsp+3D8h] [rbp-40h]
  __int64 v69; // [rsp+3E0h] [rbp-38h]

  v4 = nullptr;
  v5 = a1;
  v21 = 0;
  v26 = &off_2B214A8;
  v29 = &v21;
  v6 = *(_QWORD *)(a3 + 2320);
  v28 = a3;
  v7 = *(_DWORD *)(v6 + 136);
  LOBYTE(v6) = *(_BYTE *)(v6 + 140);
  v22 = 0;
  v27 = 0;
  v33 = v7;
  v34 = v6 & 1;
  v19 = &v26;
  v41 = &v39;
  v42 = &v39;
  v8 = _mm_loadh_ps((const double *)&v19);
  v36 = 0;
  v35[0] = v8;
  memset(&v35[1], 0, 32);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v32 = 2;
  v43 = 0;
  v44 = 0;
  v46 = v48;
  v47 = 0x200000001LL;
  v30 = v35;
  v54 = &v56;
  v55 = 0x1000000000LL;
  v45 = 1;
  v48[0] = 1;
  v48[2] = 1;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v31 = 1;
  sub_A2B560((__int64)v57, 0, 0, 0);
  v25.m128i_i8[0] = 0;
  v64 = &v62;
  v65 = &v62;
  v69 = 0x200000000LL;
  v23 = &v25;
  v11 = *(_QWORD *)(a2 + 8);
  v57[4] = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v66 = 0;
  v67 = 0;
  v68 = -1;
  v24 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
  if ( (unsigned __int8)v13 <= 0x2Cu
    && ((v16 = 0x1C0400000800LL, _bittest64(&v16, v13))
     || (_BYTE)v13 == 13 && ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1E8)
    && (*(_BYTE *)(a2 + 1) & 6) == 0 )
  {
    v4 = &v20;
    if ( (unsigned __int8)sub_C27BB0(a2, &v20, (__int64)&v26, &v23, v9, v10) )
    {
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( v23 == &v25 )
      {
        a1[1] = _mm_load_si128(&v25);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v23;
        a1[1].m128i_i64[0] = v25.m128i_i64[0];
      }
      v17 = v24;
      a1[2].m128i_i8[0] = 1;
      a1->m128i_i64[1] = v17;
    }
    else
    {
      v18 = (__m128i *)v23;
      v5[2].m128i_i64[0] = 0;
      *v5 = 0;
      v5[1] = 0;
      if ( v18 != &v25 )
        operator delete(v18);
    }
  }
  else
  {
    for ( i = 10; i; --i )
    {
      a1->m128i_i32[0] = 0;
      a1 = (__m128i *)((char *)a1 + 4);
    }
  }
  sub_C00040((__int64)&v26, (__int64)v4);
  return v5;
}

