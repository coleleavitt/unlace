__int64 __fastcall sub_177CD30(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int16 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v9; // kr00_16
  const __m128i *v10; // r15
  __int32 v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  const __m128i *v14; // rdi
  __int16 v15; // ax
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rdi
  int v24; // r8d
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  int v29; // esi
  const __m128i *v30; // rbx
  __int8 v31; // r14
  __int8 v32; // r15
  bool v33; // bp
  const __m128i *v34; // rdi
  unsigned int v35; // eax
  void *v36; // rdi
  const __m128i *v37; // rdx
  char v38; // cl
  __int8 v39; // bp
  __int16 v40; // ax
  __int8 v41; // al
  unsigned int v42; // eax
  __int8 v43; // al
  __int64 v44; // rdx
  unsigned __int64 v45; // [rsp+8h] [rbp-D0h]
  __m128i v46; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+20h] [rbp-B8h]
  __m128i v48; // [rsp+30h] [rbp-A8h]
  __int64 v49; // [rsp+40h] [rbp-98h]
  const __m128i *v50; // [rsp+50h] [rbp-88h]
  __int32 v51; // [rsp+58h] [rbp-80h]
  __int64 v52; // [rsp+60h] [rbp-78h]
  __int64 v53; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-68h]
  __int8 v55; // [rsp+74h] [rbp-64h]
  char v56; // [rsp+78h] [rbp-60h]
  __int16 v57; // [rsp+80h] [rbp-58h]
  __m128i v58; // [rsp+88h] [rbp-50h]
  char v59; // [rsp+98h] [rbp-40h]

  v2 = 1;
  v5 = *(unsigned __int16 **)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v6 = sub_EEE170(a2);
  sub_175C5C0((__int64)&v46, a1, *(_DWORD *)(a2 + 4), v6, v5, 0);
  if ( !(_BYTE)v47 )
  {
    v9 = v46;
    v10 = *(const __m128i **)(*a1 + 744);
    v11 = v10[2].m128i_i32[0];
    v12 = v10[4].m128i_i8[0] == 0;
    v50 = v10;
    v51 = v11;
    v13 = v10[2].m128i_i64[1];
    v56 = 0;
    v52 = v13;
    if ( v12 )
    {
      v14 = v10;
    }
    else
    {
      v54 = v10[3].m128i_u32[2];
      if ( v54 > 0x40 )
      {
        sub_2205510(&v53);
        v14 = *(const __m128i **)(*a1 + 744);
      }
      else
      {
        v14 = v10;
        v53 = v10[3].m128i_i64[0];
      }
      v41 = v10[3].m128i_i8[12];
      v56 = 1;
      v55 = v41;
    }
    v15 = v10[4].m128i_i16[4];
    v16 = *(unsigned int *)(a2 + 4);
    v59 = 1;
    v17 = _mm_loadu_si128(v10 + 5);
    v57 = v15;
    v58 = v17;
    sub_1AA56C0(v14, v16, v7);
    v21 = sub_177B9C0(
            a1,
            *(unsigned __int16 **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
            0,
            *(double *)v17.m128i_i64,
            v18,
            v19,
            v20);
    if ( v21 == 1 )
    {
      v2 = 1;
    }
    else
    {
      v23 = *a1;
      v24 = v21 & 0xFFFFFFFE;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v45 = v21 & 0xFFFFFFFFFFFFFFFELL;
        v25 = *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
        v26 = sub_EEE170(a2);
        v24 = v45;
        if ( v25 == (v9.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v26 == v9.m128i_i64[0] )
        {
          v2 = a2;
          if ( *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16) == v45 )
            goto LABEL_11;
        }
        v23 = *a1;
      }
      v27 = *(_DWORD *)(a2 + 12);
      v28 = *(_DWORD *)(a2 + 8);
      v48 = _mm_load_si128(&v46);
      v29 = *(_DWORD *)(a2 + 4);
      v49 = v47;
      v2 = sub_1C3AC70(v23, v29, v28, v27, v24, v22, v48.m128i_i64[0], v48.m128i_i64[1], v47);
    }
LABEL_11:
    v30 = v50;
    if ( v59 )
    {
      v31 = v50[4].m128i_i8[8];
      v32 = v50[5].m128i_i8[12];
      v33 = (v50[2].m128i_i8[0] & 2) != 0;
    }
    else
    {
      v31 = v57;
      v32 = v58.m128i_i8[12];
      v33 = (v51 & 2) != 0;
    }
    v12 = v50[4].m128i_i8[0] == 0;
    v34 = v50 + 3;
    v50[2].m128i_i32[0] = v51;
    v30[2].m128i_i64[1] = v52;
    if ( v12 )
    {
      if ( v56 )
      {
        v42 = v54;
        v30[3].m128i_i32[2] = v54;
        if ( v42 > 0x40 )
        {
          sub_2205510(v34);
          v37 = v50;
        }
        else
        {
          v37 = v30;
          v30[3].m128i_i64[0] = v53;
        }
        v43 = v55;
        v30[4].m128i_i8[0] = 1;
        v30[3].m128i_i8[12] = v43;
        goto LABEL_18;
      }
    }
    else
    {
      v35 = v30[3].m128i_u32[2];
      if ( v56 )
      {
        if ( v35 <= 0x40 && v54 <= 0x40 )
        {
          v44 = v53;
          v30[3].m128i_i32[2] = v54;
          v30[3].m128i_i64[0] = v44;
          v37 = v30;
        }
        else
        {
          sub_22056A0(v34, &v53);
          v37 = v50;
        }
        v30[3].m128i_i8[12] = v55;
        goto LABEL_18;
      }
      v30[4].m128i_i8[0] = 0;
      if ( v35 > 0x40 )
      {
        v36 = (void *)v30[3].m128i_i64[0];
        v37 = v30;
        if ( v36 )
        {
          operator delete[](v36);
          v37 = v50;
        }
        goto LABEL_18;
      }
    }
    v37 = v30;
LABEL_18:
    v38 = 2 * v33;
    v30[4].m128i_i16[4] = v57;
    v39 = v37[2].m128i_i8[0];
    v37[5].m128i_i64[0] = v58.m128i_i64[0];
    v37[5].m128i_i32[2] = v58.m128i_i32[2];
    v40 = v58.m128i_i16[6];
    v37[4].m128i_i8[8] = v31;
    v37[5].m128i_i16[6] = v40;
    v37[2].m128i_i8[0] = v38 | v39 & 0xFD;
    v37[5].m128i_i8[12] = v32;
    sub_98E4B0((__int64)&v53);
  }
  return v2;
}
