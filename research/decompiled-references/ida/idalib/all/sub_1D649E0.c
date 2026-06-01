__int64 __fastcall sub_1D649E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  unsigned __int16 *v7; // r12
  unsigned __int64 v8; // rax
  __m128i v10; // kr00_16
  const __m128i *v11; // r15
  __int32 v12; // eax
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdi
  __int16 v16; // ax
  unsigned int v17; // esi
  __m128 v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdi
  unsigned __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rsi
  const __m128i *v31; // rbx
  __int8 v32; // r14
  __int8 v33; // r15
  bool v34; // bp
  const __m128i *v35; // rdi
  unsigned int v36; // eax
  void *v37; // rdi
  const __m128i *v38; // rdx
  char v39; // cl
  __int8 v40; // bp
  __int16 v41; // ax
  __int8 v42; // al
  unsigned int v43; // eax
  __int8 v44; // al
  __int64 v45; // rdx
  unsigned __int64 v46; // [rsp+8h] [rbp-D0h]
  __m128i v47; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-B8h]
  __m128i v49; // [rsp+30h] [rbp-A8h]
  __int64 v50; // [rsp+40h] [rbp-98h]
  const __m128i *v51; // [rsp+50h] [rbp-88h]
  __int32 v52; // [rsp+58h] [rbp-80h]
  __int64 v53; // [rsp+60h] [rbp-78h]
  __int64 v54; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-68h]
  __int8 v56; // [rsp+74h] [rbp-64h]
  char v57; // [rsp+78h] [rbp-60h]
  __int16 v58; // [rsp+80h] [rbp-58h]
  __m128 v59; // [rsp+88h] [rbp-50h]
  char v60; // [rsp+98h] [rbp-40h]

  v4 = 1;
  v7 = *(unsigned __int16 **)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v8 = sub_EEE170(a2);
  sub_1D43BE0((__int64)&v47, a1, *(unsigned int *)(a2 + 4), v8, v7, 0, a3, a4);
  if ( !(_BYTE)v48 )
  {
    v10 = v47;
    v11 = *(const __m128i **)(*a1 + 744);
    v12 = v11[2].m128i_i32[0];
    v13 = v11[4].m128i_i8[0] == 0;
    v51 = v11;
    v52 = v12;
    v14 = v11[2].m128i_i64[1];
    v57 = 0;
    v53 = v14;
    if ( v13 )
    {
      v15 = (__int64)v11;
    }
    else
    {
      v55 = v11[3].m128i_u32[2];
      if ( v55 > 0x40 )
      {
        sub_2205510(&v54);
        v15 = *(_QWORD *)(*a1 + 744);
      }
      else
      {
        v15 = (__int64)v11;
        v54 = v11[3].m128i_i64[0];
      }
      v42 = v11[3].m128i_i8[12];
      v57 = 1;
      v56 = v42;
    }
    v16 = v11[4].m128i_i16[4];
    v17 = *(_DWORD *)(a2 + 4);
    v60 = 1;
    v18 = (__m128)_mm_loadu_si128(v11 + 5);
    v58 = v16;
    v59 = v18;
    sub_1AA56C0(v15, v17);
    v22 = sub_1D42130(
            a1,
            *(_WORD **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
            0,
            v18,
            a4,
            v19,
            v20,
            v21);
    if ( v22 == 1 )
    {
      v4 = 1;
    }
    else
    {
      v24 = *a1;
      v25 = v22 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v46 = v22 & 0xFFFFFFFFFFFFFFFELL;
        v26 = *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
        v27 = sub_EEE170(a2);
        v25 = v46;
        if ( v26 == (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v27 == v10.m128i_i64[0] )
        {
          v4 = a2;
          if ( *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16) == v46 )
            goto LABEL_11;
        }
        v24 = *a1;
      }
      v28 = *(unsigned int *)(a2 + 12);
      v29 = *(unsigned int *)(a2 + 8);
      v49 = _mm_load_si128(&v47);
      v30 = *(unsigned int *)(a2 + 4);
      v50 = v48;
      v4 = sub_1C3AC70(v24, v30, v29, v28, v25, *(double *)v18.m128_u64, v23, v49.m128i_i64[0], v49.m128i_i64[1], v48);
    }
LABEL_11:
    v31 = v51;
    if ( v60 )
    {
      v32 = v51[4].m128i_i8[8];
      v33 = v51[5].m128i_i8[12];
      v34 = (v51[2].m128i_i8[0] & 2) != 0;
    }
    else
    {
      v32 = v58;
      v33 = v59.m128_i8[12];
      v34 = (v52 & 2) != 0;
    }
    v13 = v51[4].m128i_i8[0] == 0;
    v35 = v51 + 3;
    v51[2].m128i_i32[0] = v52;
    v31[2].m128i_i64[1] = v53;
    if ( v13 )
    {
      if ( v57 )
      {
        v43 = v55;
        v31[3].m128i_i32[2] = v55;
        if ( v43 > 0x40 )
        {
          sub_2205510(v35);
          v38 = v51;
        }
        else
        {
          v38 = v31;
          v31[3].m128i_i64[0] = v54;
        }
        v44 = v56;
        v31[4].m128i_i8[0] = 1;
        v31[3].m128i_i8[12] = v44;
        goto LABEL_18;
      }
    }
    else
    {
      v36 = v31[3].m128i_u32[2];
      if ( v57 )
      {
        if ( v36 <= 0x40 && v55 <= 0x40 )
        {
          v45 = v54;
          v31[3].m128i_i32[2] = v55;
          v31[3].m128i_i64[0] = v45;
          v38 = v31;
        }
        else
        {
          sub_22056A0(v35, &v54);
          v38 = v51;
        }
        v31[3].m128i_i8[12] = v56;
        goto LABEL_18;
      }
      v31[4].m128i_i8[0] = 0;
      if ( v36 > 0x40 )
      {
        v37 = (void *)v31[3].m128i_i64[0];
        v38 = v31;
        if ( v37 )
        {
          operator delete[](v37);
          v38 = v51;
        }
        goto LABEL_18;
      }
    }
    v38 = v31;
LABEL_18:
    v39 = 2 * v34;
    v31[4].m128i_i16[4] = v58;
    v40 = v38[2].m128i_i8[0];
    v38[5].m128i_i64[0] = v59.m128_u64[0];
    v38[5].m128i_i32[2] = v59.m128_i32[2];
    v41 = v59.m128_i16[6];
    v38[4].m128i_i8[8] = v32;
    v38[5].m128i_i16[6] = v41;
    v38[2].m128i_i8[0] = v39 | v40 & 0xFD;
    v38[5].m128i_i8[12] = v33;
    sub_98E4B0((__int64)&v54);
  }
  return v4;
}
