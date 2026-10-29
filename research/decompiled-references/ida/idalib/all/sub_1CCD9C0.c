__int64 __fastcall sub_1CCD9C0(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 a5, __m128 a6, __m128i a7)
{
  __int64 v10; // rbp
  unsigned int v12; // eax
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r14d
  __int64 *v20; // r15
  const __m128i *v22; // r14
  __int16 v23; // ax
  __int16 v24; // ax
  __m128i v25; // xmm2
  size_t v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int32 v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rdi
  unsigned int v36; // rbp^4
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // [rsp-8h] [rbp-250h]
  unsigned __int64 v42; // [rsp+0h] [rbp-248h]
  unsigned int v43; // [rsp+8h] [rbp-240h]
  __int64 v44; // [rsp+8h] [rbp-240h]
  unsigned __int64 v45; // [rsp+10h] [rbp-238h]
  __m128i v46; // [rsp+20h] [rbp-228h] BYREF
  __int64 v47; // [rsp+30h] [rbp-218h]
  __m128i v48; // [rsp+40h] [rbp-208h] BYREF
  void *v49; // [rsp+50h] [rbp-1F8h]
  __int128 v50; // [rsp+60h] [rbp-1E8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-1D8h]
  __int128 v52; // [rsp+80h] [rbp-1C8h]
  __m128 v53; // [rsp+90h] [rbp-1B8h] BYREF
  void *v54[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-190h] BYREF
  void *v56; // [rsp+D0h] [rbp-178h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-170h]
  _DWORD v58[9]; // [rsp+E8h] [rbp-160h] BYREF
  char v59; // [rsp+10Ch] [rbp-13Ch]
  __m128i v60; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+170h] [rbp-D8h]
  char v62; // [rsp+178h] [rbp-D0h] BYREF
  __int128 v63; // [rsp+1B8h] [rbp-90h]
  __int64 v64; // [rsp+1C8h] [rbp-80h]
  __int64 v65; // [rsp+1D0h] [rbp-78h]
  __m128i v66; // [rsp+1D8h] [rbp-70h]
  __int64 v67; // [rsp+1E8h] [rbp-60h]
  __int64 v68; // [rsp+1F0h] [rbp-58h]
  __int64 v69; // [rsp+1F8h] [rbp-50h]
  __int64 v70; // [rsp+200h] [rbp-48h]

  v10 = a2;
  v12 = a3->m128i_i32[0] & 0x7FFFFFFF;
  if ( v12 > 7 )
  {
    if ( v12 != 8 )
    {
LABEL_28:
      if ( v12 == 9
        && *(_DWORD *)(*(_QWORD *)(a1 + 11312) + ((unsigned __int64)*(unsigned int *)(a1 + 11320) << 6) - 64) == 25 )
      {
        v19 = 0;
        sub_1CB6790(a4, a3);
        sub_1CB6790(a5, a3);
      }
      else
      {
        v19 = 1;
        v56 = (void *)sub_F1E510((__int64)a3, a2, *(double *)a6.m128_u64);
        sub_168B9F0((__int64)&v60, (__int64 *)(a1 + 8), (unsigned int)v56, 0x13E7u, 0);
        sub_15884C0((__int64)&v60, (__int64 *)&v56);
        sub_15F7200(&v60);
        sub_1CC6E20(a1, v10);
      }
      return v19;
    }
    v22 = (const __m128i *)a3->m128i_i64[1];
    a6.m128_u64[0] = 0;
    v46.m128i_i64[0] = 0;
    v50 = 0;
    v23 = v22->m128i_i16[0];
    *(_OWORD *)ptr = 0;
    v52 = 0;
    v24 = v23 & 0x1FF;
    v46.m128i_i32[2] = 0;
    v47 = 0;
    if ( v24 == 69 )
    {
      a2 = v22[1].m128i_i64[0];
      sub_15AB8B0((__int64)&v50, a2, v22[1].m128i_i64[1]);
      a7 = _mm_loadu_si128(v22 + 2);
      v47 = v22[3].m128i_i64[0];
      v46 = a7;
    }
    else
    {
      if ( v24 != 109 || (v37 = v22[1].m128i_u64[0]) != 0 && !(unsigned __int8)sub_BFE300(v37) )
      {
LABEL_25:
        if ( HIDWORD(ptr[1]) )
          free(ptr[0]);
        v12 = a3->m128i_i32[0] & 0x7FFFFFFF;
        goto LABEL_28;
      }
      a2 = v22[2].m128i_i64[0];
      sub_15AB8B0((__int64)&v50, a2, v22[2].m128i_i64[1]);
      v38 = v22[4].m128i_i64[0];
      v46 = _mm_loadu_si128(v22 + 3);
      v47 = v38;
    }
    if ( (v46.m128i_i8[0] & 7) == 0 )
    {
      v45 = v46.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v46.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v25 = _mm_load_si128(&v46);
        a6.m128_u64[0] = 0;
        v60.m128i_i64[1] = (__int64)&v62;
        v61 = 0x800000000LL;
        v60.m128i_i64[0] = 0;
        v67 = v47;
        v63 = 0;
        v64 = 0;
        v65 = a1;
        v66 = v25;
        v68 = 0;
        v69 = 0;
        v70 = 0x101010000LL;
        sub_1A395A0((__int64)&v60);
        sub_1A5D3E0(a1, (__int64)&v60, *(__int64 **)(a1 + 608), (__int64)&v50, 0, 0, 0.0, *(double *)a7.m128i_i64, 0);
        a2 = v41;
        if ( v60.m128i_i32[0] == 2 )
        {
          if ( (*(_BYTE *)(sub_16C47B0(*(_QWORD *)v60.m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 58 <= 9 )
          {
LABEL_16:
            v43 = sub_F1E510((__int64)a3, v41, 0.0);
            sub_168B9F0((__int64)&v56, (__int64 *)(a1 + 8), v43, (**(_BYTE **)(a1 + 232) & 0x20) == 0 ? 5096 : 5622, 0);
            v26 = j__strlen("typename ");
            sub_9EC740((__int64)&v53, v43, "typename ", v26, 0);
            sub_1589170((__int64)&v56, &v53);
            if ( v54[1] != &v55 )
              operator delete(v54[1]);
            sub_15F7200(&v56);
            sub_1CC6E20(a1, v10);
            v13 = sub_AB77C0(*(_QWORD **)(a1 + 248), 6, *((__int64 *)&v50 + 1), v45);
            v56 = v58;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
            v58[8] = 0;
            v59 = 0;
            sub_1EA6140(&v56, v13, 24, 8);
            *v27 = 0;
            v44 = (__int64)v27;
            sub_15AB9E0((__int64)&v50, *(_QWORD **)(a1 + 248), (__int64)v27, v28, v29, v30);
            v31 = v46.m128i_i32[2];
            *(_QWORD *)(v44 + 8) = v32;
            *(_DWORD *)(v44 + 16) = v31;
            v14 = (__int64)sub_18C0B80(&v56, *(_QWORD **)(a1 + 248), v13, v44, v33, v34);
            sub_F1D250((__int64)&v48, v13, 0, 0);
            a6 = (__m128)_mm_load_si128(&v48);
            v35 = v56;
            v54[0] = v49;
            v53 = a6;
            *a3 = (__m128i)a6;
            v54[1] = (void *)(v14 & 0xFFFFFFFFFFFFFFFCLL | 2);
            a3[1] = _mm_load_si128((const __m128i *)v54);
            if ( v35 != v58 && v35 )
              operator delete[](v35);
            sub_169D230((__int64)&v60);
            if ( HIDWORD(ptr[1]) )
              free(ptr[0]);
            goto LABEL_5;
          }
        }
        else if ( v60.m128i_i32[0] == 1 )
        {
          goto LABEL_16;
        }
        sub_169D230((__int64)&v60);
      }
    }
    goto LABEL_25;
  }
  if ( v12 >= 6 )
  {
    v19 = 1;
    v36 = sub_F1E510((__int64)a3, a2, *(double *)a6.m128_u64) >> 32;
    sub_F22A90(&v60, a3->m128i_i64[1]);
    sub_1CCD5B0(a1, v60.m128i_i64[0], v36);
    return v19;
  }
  if ( v12 != 1 )
    goto LABEL_28;
  v13 = a3->m128i_u64[1];
  v14 = a3[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
LABEL_5:
  v15 = v14;
  v19 = sub_1CBCEC0((__int64 *)a1, v14, a6);
  if ( !(_BYTE)v19 )
  {
    v20 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v42 = v13 & 7;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
    {
      if ( sub_F6ACC0(*v20, v15, v16, v17, v18) )
      {
        v39 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v39 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v39 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
        {
          v40 = v13 & 7;
          LOBYTE(v40) = v42 | 0x80;
          if ( (v13 & 8) != 0 )
          {
            v40 |= *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
            v20 = (__int64 *)*v20;
          }
          v13 = sub_A70C40(*(_QWORD *)(a1 + 248), (__int64)v20, v40);
          v20 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
          v42 = v13 & 7;
        }
      }
    }
    sub_F1D250((__int64)&v60, v13, 0, 0);
    sub_1CB6790(a4, &v60);
    sub_F1D250((__int64)&v60, v20[1] | v42, 0, 0);
    sub_1CB6790(a5, &v60);
  }
  return v19;
}
