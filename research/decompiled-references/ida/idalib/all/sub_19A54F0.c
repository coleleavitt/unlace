unsigned __int64 __fastcall sub_19A54F0(__m128i *a1, unsigned __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __m128i *v20; // rdx
  const __m128i *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rbp
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-148h]
  unsigned int v37; // [rsp+0h] [rbp-148h]
  unsigned int v38; // [rsp+0h] [rbp-148h]
  __int64 v39; // [rsp+0h] [rbp-148h]
  int v40; // [rsp+0h] [rbp-148h]
  __int64 v41; // [rsp+8h] [rbp-140h]
  __int64 v42; // [rsp+8h] [rbp-140h]
  __int64 v43; // [rsp+8h] [rbp-140h]
  __int64 v44; // [rsp+8h] [rbp-140h]
  __int64 v45; // [rsp+8h] [rbp-140h]
  __int64 v46; // [rsp+8h] [rbp-140h]
  __int64 v47; // [rsp+8h] [rbp-140h]
  __int64 v48; // [rsp+18h] [rbp-130h]
  __int64 v49; // [rsp+18h] [rbp-130h]
  __int64 v50; // [rsp+20h] [rbp-128h]
  unsigned __int64 v51; // [rsp+38h] [rbp-110h] BYREF
  unsigned __int64 *v52; // [rsp+40h] [rbp-108h] BYREF
  __m128i *v53; // [rsp+48h] [rbp-100h]
  __int64 v54; // [rsp+50h] [rbp-F8h]
  void *v55; // [rsp+60h] [rbp-E8h]
  __int64 v56; // [rsp+68h] [rbp-E0h]
  __m128i v57; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+80h] [rbp-C8h]
  __m128i ptr; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v60[12]; // [rsp+A0h] [rbp-A8h] BYREF
  int v61; // [rsp+100h] [rbp-48h]
  char v62; // [rsp+104h] [rbp-44h]

  if ( (*(_DWORD *)a2 & 0x8000) != 0
    || (v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v8 + 16) == 13)
    && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FFu) > 0x1F1
    || (a5 & 2) != 0 )
  {
    v9 = (_QWORD *)a1[15].m128i_i64[1];
    v10 = 0;
    v11 = 0;
    goto LABEL_5;
  }
  if ( a4 )
  {
    v39 = a5;
    v26 = sub_18B2EA0(a1, a2);
    a5 = v39;
    v11 = v26;
    if ( v26 == 2 )
    {
      v9 = (_QWORD *)a1[15].m128i_i64[1];
      v10 = 0;
      goto LABEL_5;
    }
  }
  v9 = (_QWORD *)a1[15].m128i_i64[1];
  v36 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v10 = 0;
    v11 = 5;
    goto LABEL_5;
  }
  if ( (a5 & 4) != 0 )
  {
    v10 = 0;
    v11 = 3;
LABEL_5:
    v12 = v9[294];
    v9[304] += 48LL;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9[295] >= v13 + 48 && v12 )
    {
      v9[294] = v13 + 48;
    }
    else
    {
      v45 = a5;
      v40 = v11;
      v27 = sub_986170((__int64)(v9 + 294), 48, 48, 3, a5, v11);
      a5 = v45;
      LODWORD(v11) = v40;
      v13 = v27;
    }
    sub_A554E0(v13, a2, a3, a4, a5, v11, v10);
    return v13;
  }
  v41 = a5;
  v15 = sub_A732E0((__int64)v9, a2);
  v55 = &v57;
  sub_F1D250(
    (__int64)&ptr,
    *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
  | ((unsigned __int8)*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v15) & 7,
    0,
    0);
  v16 = v41;
  v57 = _mm_loadu_si128(&ptr);
  v58 = v60[0];
  ptr.m128i_i64[0] = (__int64)v60;
  v61 = 0;
  v56 = 0x100000001LL;
  v17 = *(_QWORD *)(v36 + 24);
  v62 = 0;
  ptr.m128i_i64[1] = 0x400000000LL;
  if ( v17 )
  {
    v50 = v41;
    v42 = v17;
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v54 = 1;
    v19 = ptr.m128i_u32[2] + 1LL;
    v52 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFFBLL);
    v17 = v42;
    v20 = (__m128i *)(ptr.m128i_i64[0] + 24LL * ptr.m128i_u32[2]);
    v53 = &v57;
    v21 = (const __m128i *)&v52;
    v16 = v50;
    if ( v19 > ptr.m128i_u32[3] )
    {
      v46 = ptr.m128i_i64[0];
      if ( ptr.m128i_i64[0] > (unsigned __int64)&v52 || v20 <= (__m128i *)&v52 )
      {
        v47 = v17;
        sub_2237220(&ptr, v60, ptr.m128i_u32[2] + 1LL, 24);
        v16 = v50;
        v17 = v47;
        v20 = (__m128i *)(ptr.m128i_i64[0] + 24LL * ptr.m128i_u32[2]);
        v21 = (const __m128i *)&v52;
      }
      else
      {
        v49 = v17;
        sub_2237220(&ptr, v60, v19, 24);
        v17 = v49;
        v16 = v50;
        v21 = (const __m128i *)((char *)&v52 + ptr.m128i_i64[0] - v46);
        v20 = (__m128i *)(ptr.m128i_i64[0] + 24LL * ptr.m128i_u32[2]);
      }
    }
  }
  else
  {
    v54 = 1;
    v20 = (__m128i *)v60;
    v52 = nullptr;
    v21 = (const __m128i *)&v52;
    v53 = &v57;
  }
  v43 = v17;
  v48 = v16;
  *v20 = _mm_loadu_si128(v21);
  v20[1].m128i_i64[0] = v21[1].m128i_i64[0];
  ++ptr.m128i_i32[2];
  v22 = sub_BBD7B0(v36);
  v61 += v22;
  if ( (*(_BYTE *)(v43 + 60) & 4) == 0 )
    BUG();
  v51 = *(_QWORD *)(v43 + 80);
  v23 = sub_1DF2070(a1, v51, &ptr);
  a5 = v48;
  if ( v23 != 1 )
  {
    v10 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v11 = (unsigned int)((*(_BYTE *)(*(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFFELL) + 32) + 8LL) & 1) != 0) + 4;
    if ( (_QWORD *)ptr.m128i_i64[0] != v60 )
    {
      v37 = ((*(_BYTE *)(*(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFFELL) + 32) + 8LL) & 1) != 0) + 4;
      free((void *)ptr.m128i_i64[0]);
      a5 = v48;
      v11 = v37;
    }
    if ( v55 != &v57 )
    {
      v44 = a5;
      v38 = v11;
      free(v55);
      a5 = v44;
      v11 = v38;
    }
    v9 = (_QWORD *)a1[15].m128i_i64[1];
    goto LABEL_5;
  }
  v53 = a1;
  v52 = &v51;
  v28 = sub_C00A40(v51, v51, v24, v25, v48);
  v29 = sub_1DBD540(a1, v28, sub_19A1370, &v52);
  v31 = v48;
  v32 = v29;
  v33 = (_QWORD *)a1[15].m128i_i64[1];
  v34 = v33[294];
  v33[304] += 48LL;
  v13 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v33[295] >= v13 + 48 && v34 )
  {
    v33[294] = v13 + 48;
  }
  else
  {
    v35 = sub_986170((__int64)(v33 + 294), 48, 48, 3, v48, v30);
    v31 = v48;
    v13 = v35;
  }
  sub_A555B0(v13, v32, a3, a4, v31);
  if ( (_QWORD *)ptr.m128i_i64[0] != v60 )
    free((void *)ptr.m128i_i64[0]);
  if ( v55 != &v57 )
    free(v55);
  return v13;
}
