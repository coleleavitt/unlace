void __fastcall sub_15BA710(__m128i *a1, __int64 a2, __int64 a3, const void *a4, size_t a5)
{
  __m128i si128; // xmm0
  _QWORD *v10; // r14
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // r10d
  __int64 *v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // r10
  _QWORD *v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rbp
  char *v26; // rdx
  _QWORD *v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int8 v33; // dl
  __int64 v34; // rdx
  bool v35; // zf
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp-8h] [rbp-110h]
  void *srca; // [rsp+8h] [rbp-100h]
  _QWORD *srcb; // [rsp+8h] [rbp-100h]
  _QWORD *v55; // [rsp+10h] [rbp-F8h]
  unsigned int v56; // [rsp+10h] [rbp-F8h]
  unsigned int v57; // [rsp+10h] [rbp-F8h]
  __int64 *v58; // [rsp+18h] [rbp-F0h]
  __int64 *v59; // [rsp+18h] [rbp-F0h]
  __int64 *v60; // [rsp+20h] [rbp-E8h] BYREF
  void *ptr; // [rsp+28h] [rbp-E0h]
  __int64 v62; // [rsp+30h] [rbp-D8h]
  _BYTE v63[64]; // [rsp+38h] [rbp-D0h] BYREF
  void *v64; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+90h] [rbp-78h]
  unsigned __int64 v68; // [rsp+98h] [rbp-70h]
  int v69; // [rsp+A0h] [rbp-68h]
  __int64 v70; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v71; // [rsp+B0h] [rbp-58h]
  __int64 v72; // [rsp+C0h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  a1->m128i_i64[0] = a2;
  a1[2].m128i_i64[0] = a3;
  a1[3] = si128;
  a1->m128i_i64[1] = 0;
  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i64[1] = 0;
  a1[2].m128i_i64[1] = 0;
  v10 = *(_QWORD **)(a2 + 248);
  v11 = v10[2188];
  v12 = sub_2244B30(a4, a5);
  v14 = sub_2244CB0(v11, a4, a5, v12);
  v15 = (__int64 *)(*(_QWORD *)v11 + 8LL * v14);
  if ( !*v15 )
  {
LABEL_11:
    v24 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v11 + 104) += a5 + 17;
    v25 = (_QWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v26 = (char *)v25 + a5 + 17;
    if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)v26 && v24 )
    {
      *(_QWORD *)(v11 + 24) = v26;
    }
    else
    {
      v59 = v15;
      v57 = v14;
      v49 = sub_986170(v11 + 24, a5 + 17, a5 + 17, 3, v13, (__int64)v15);
      v15 = v59;
      v14 = v57;
      v25 = (_QWORD *)v49;
    }
    v27 = v25 + 2;
    if ( a5 )
    {
      v58 = v15;
      v56 = v14;
      v48 = memcpy(v25 + 2, a4, a5);
      v15 = v58;
      v14 = v56;
      v27 = v48;
    }
    *((_BYTE *)v27 + a5) = 0;
    *v25 = a5;
    v25[1] = 0;
    *v15 = (__int64)v25;
    ++*(_DWORD *)(v11 + 12);
    v28 = sub_22450D0(v11, v14);
    sub_989490(&v60, (__int64 *)(*(_QWORD *)v11 + 8LL * v28), 0);
    v17 = (_QWORD *)*v60;
    v18 = *(_QWORD **)(*v60 + 8);
    if ( v18 )
      goto LABEL_17;
    goto LABEL_4;
  }
  if ( *v15 == -8 )
  {
    --*(_DWORD *)(v11 + 16);
    goto LABEL_11;
  }
  sub_989490(&v60, v15, 0);
  v17 = (_QWORD *)*v60;
  v18 = *(_QWORD **)(*v60 + 8);
  if ( v18 )
  {
LABEL_17:
    v22 = (unsigned __int64)v18;
    goto LABEL_18;
  }
LABEL_4:
  v19 = *(_QWORD *)(v11 + 120);
  if ( v19 )
  {
    v55 = v17;
    v20 = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v19 + 16LL))(v19, a4, a5);
    v17 = v55;
    v18 = (_QWORD *)v20;
    v55[1] = v20;
    if ( v20 )
      goto LABEL_17;
  }
  v21 = *(_QWORD *)(v11 + 24);
  *(_QWORD *)(v11 + 104) += 24LL;
  v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v11 + 32) >= v22 + 24 && v21 )
  {
    *(_QWORD *)(v11 + 24) = v22 + 24;
    v18 = (_QWORD *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    srcb = v17;
    v50 = sub_986170(v11 + 24, 24, 24, 3, v16, (__int64)v18);
    v17 = srcb;
    v18 = (_QWORD *)v50;
    v22 = v50;
  }
  v23 = *v18 & 0xFFFFF80000000000LL;
  v18[1] = 0;
  *v18 = v23 | 0x1FFFC05;
  v17[1] = v18;
  v18[2] = v17;
LABEL_18:
  srca = v18;
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 5;
  ptr = v63;
  v68 = v22;
  v62 = 0x800000000LL;
  v60 = nullptr;
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v67 = a2;
  v69 = 0;
  sub_B85890(&v70, v22);
  v72 = 0x101010000LL;
  v71 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_1A395A0(&v60);
  v29 = a1[2].m128i_i64[0];
  if ( v29 )
    v29 += 48;
  v30 = sub_1A48440(a2, &v60, v29, 0);
  v31 = (__int64)srca;
  if ( !v30 )
    goto LABEL_37;
  v32 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v33 = *(_BYTE *)(v32 + 28) & 0x7F;
  if ( (unsigned int)v33 - 53 <= 1 || ((v33 + 52) & 0x7Fu) <= 1 )
  {
    v32 = sub_B72ED0(v32);
    v31 = (__int64)srca;
    v33 = *(_BYTE *)(v32 + 28) & 0x7F;
  }
  if ( v33 == 72 )
  {
    v34 = *(_QWORD *)(v32 + 48);
    a1[1].m128i_i64[1] = v32;
    v32 = v34;
    if ( v34 )
      goto LABEL_26;
LABEL_37:
    v32 = 0;
    goto LABEL_38;
  }
  if ( (unsigned int)v33 - 59 > 2 )
    goto LABEL_37;
LABEL_26:
  if ( (*(_BYTE *)(v32 + 74) & 1) != 0 )
  {
    a1->m128i_i64[1] = v32;
    v35 = BYTE3(v72) == 0;
    a1[1].m128i_i64[0] = a1[1].m128i_i64[1];
    if ( !v35 )
      goto LABEL_28;
LABEL_43:
    if ( !BYTE4(v72) || (_DWORD)v60 != 5 )
      goto LABEL_31;
LABEL_45:
    sub_1A445B0(v67, &v60);
    goto LABEL_31;
  }
LABEL_38:
  v36 = a1[2].m128i_i64[0];
  if ( v36 )
    v36 += 48;
  v37 = sub_B96A60(v10, 3, v36, 0, 0, v31, v32, 1);
  a1->m128i_i64[1] = v37;
  *(_BYTE *)(v37 + 29) |= 2u;
  v41 = a1[2].m128i_i64[0];
  if ( v41 )
    v41 += 48;
  sub_B90130(a1->m128i_i64[1], v41, v51, v38, v39, v40);
  v42 = a1->m128i_i64[1];
  *(_BYTE *)(v42 + 72) |= 0x80u;
  v43 = sub_B32160((__int64)v10, 0, 0);
  sub_B8CC60(v42, v43, v44, v45, v46, v47);
  if ( !BYTE3(v72) )
    goto LABEL_43;
LABEL_28:
  if ( (_DWORD)v60 == 5 )
  {
    if ( !BYTE4(v72) )
      goto LABEL_31;
    goto LABEL_45;
  }
  if ( v65 && (*(_BYTE *)(*(_QWORD *)(v67 + 232) + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v67, &v60);
    goto LABEL_43;
  }
LABEL_31:
  if ( v64 )
    sub_1A39780(v64);
  if ( ptr != v63 )
    free(ptr);
}
