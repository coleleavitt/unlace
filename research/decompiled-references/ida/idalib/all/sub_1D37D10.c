__int64 __fastcall sub_1D37D10(
        __int64 a1,
        unsigned __int64 a2,
        const __m128i *a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6,
        double a7,
        __m128 *a8)
{
  char v10; // dl
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r15
  __int64 result; // rax
  _QWORD *v25; // rsi
  char v26; // si
  _DWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i *v34; // rdx
  _DWORD *v35; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v36; // [rsp+8h] [rbp-160h]
  const __m128i *v37; // [rsp+10h] [rbp-158h]
  __int64 v38; // [rsp+18h] [rbp-150h]
  __int128 v39; // [rsp+20h] [rbp-148h]
  __int64 v40; // [rsp+30h] [rbp-138h]
  void *ptr[2]; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v42[4]; // [rsp+50h] [rbp-118h] BYREF
  void *v43; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-F0h]
  _BYTE v45[48]; // [rsp+80h] [rbp-E8h] BYREF
  void *v46; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp-B0h]
  int v48; // [rsp+BCh] [rbp-ACh]
  _BYTE v49[96]; // [rsp+C0h] [rbp-A8h] BYREF
  int v50; // [rsp+120h] [rbp-48h]

  v35 = (_DWORD *)a6;
  v37 = a3;
  v43 = v45;
  v10 = *(_BYTE *)(a2 + 28);
  v38 = a4;
  v11 = v10 & 0x7F;
  v44 = 0x300000000LL;
  if ( v11 == 61 )
  {
    sub_BBD810(*(_QWORD *)(a2 + 184), (__int64)&v43);
    v12 = *(_QWORD *)(a2 + 16);
    v13 = v12;
    if ( (*(_BYTE *)(a2 + 180) & 7) != 2 )
    {
LABEL_3:
      a7 = 0.0;
      v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      v40 = 0;
      v15 = (v13 >> 2) & 1;
      v39 = 0;
LABEL_4:
      if ( v15 )
        v14 = (_QWORD *)*v14;
      LOBYTE(v40) = 0;
      sub_1DBA4B0((unsigned int)&v46, a1, a2, (_DWORD)v14, 0, 1);
      v16 = v47;
      v17 = v46;
      if ( v47 )
      {
        v18 = (__int64)v35;
        *((_QWORD *)v46 + 1) = a5;
        v17[2] = v18;
      }
      else
      {
        ptr[1] = (void *)a5;
        --v50;
        ptr[0] = (void *)(a2 & 0xFFFFFFFFFFFFFFFBLL);
        v42[0] = v35;
        if ( !v48 )
        {
          sub_2237220(&v46, v49, 1, 24);
          v17 = v46;
          v16 = v47;
        }
        v34 = (__m128i *)&v17[3 * v16];
        *v34 = _mm_load_si128((const __m128i *)ptr);
        ++v47;
        v34[1].m128i_i64[0] = v42[0];
      }
      goto LABEL_8;
    }
  }
  else
  {
    if ( v11 != 42 )
    {
      sub_BBDAC0(a2, (__int64)&v43);
      v32 = *(_QWORD *)(a2 + 16);
      v40 = 0;
      v33 = v32;
      v14 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
      v15 = (v33 >> 2) & 1;
      goto LABEL_22;
    }
    sub_BBD810(*(_QWORD *)(a2 + 144), (__int64)&v43);
    v12 = *(_QWORD *)(a2 + 16);
    v13 = v12;
    if ( (*(_BYTE *)(a2 + 140) & 7) != 2 )
      goto LABEL_3;
  }
  v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  v25 = v14;
  v15 = (v13 >> 2) & 1;
  if ( (_DWORD)v15 )
    v25 = (_QWORD *)v14[1];
  v26 = *((_BYTE *)v25 + 8);
  a7 = 0.0;
  v40 = 0;
  v39 = 0;
  if ( (v26 & 0x7Fu) - 59 > 2 )
    goto LABEL_4;
LABEL_22:
  *(_QWORD *)&v39 = a5;
  *((_QWORD *)&v39 + 1) = v35;
  if ( v15 )
    v14 = (_QWORD *)*v14;
  LOBYTE(v40) = 1;
  sub_1DBA4B0((unsigned int)&v46, a1, a2, (_DWORD)v14, 0, 1);
LABEL_8:
  v19 = a8[1].m128_u32[0];
  ptr[0] = v42;
  v36 = v42;
  ptr[1] = (void *)0x400000000LL;
  v23 = sub_1750770(
          a1,
          a2,
          (__int64)v43,
          (unsigned int)v44,
          (__int64)ptr,
          (__int64)&v46,
          a7,
          (v19 << 32) | v19,
          (__int64)&a8[20]);
  if ( ptr[0] != v42 )
    free(ptr[0]);
  if ( v23 || (result = 0, !a8[28].m128_i8[0]) )
  {
    v27 = sub_BC1D90(*(_QWORD **)(a1 + 248), a5, (__int64)v35, v20, v21, v22);
    v28 = *(_QWORD **)(a1 + 248);
    v35 = v27;
    v36 = sub_BC1D90(v28, v37, v38, v29, v30, v31);
    result = 15;
    *a8 = _mm_loadh_ps((const double *)&v35);
  }
  if ( v46 != v49 )
  {
    LODWORD(v35) = result;
    free(v46);
    result = (unsigned int)v35;
  }
  if ( v43 != v45 )
  {
    LODWORD(v35) = result;
    free(v43);
    return (unsigned int)v35;
  }
  return result;
}
