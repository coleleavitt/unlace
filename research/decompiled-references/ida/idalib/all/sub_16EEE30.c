unsigned __int64 __fastcall sub_16EEE30(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __m128 v30; // xmm0
  __m128i v31; // xmm1
  int v32; // r15d
  int v33; // eax
  int v34; // ebx
  _WORD *v35; // rax
  char v36; // cl
  __int64 v37; // rsi
  __int64 v38; // rbp
  char v39; // al
  unsigned __int8 v40; // al
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  char v51; // al
  unsigned int v52; // eax
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v57; // [rsp+8h] [rbp-1B0h]
  int v58; // [rsp+14h] [rbp-1A4h] BYREF
  __int64 v59; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v60; // [rsp+20h] [rbp-198h] BYREF
  __int64 v61; // [rsp+28h] [rbp-190h] BYREF
  __m128 v62; // [rsp+30h] [rbp-188h] BYREF
  int v63; // [rsp+40h] [rbp-178h]
  void *ptr; // [rsp+48h] [rbp-170h]
  __int64 v65; // [rsp+50h] [rbp-168h]
  _BYTE v66[256]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v67; // [rsp+158h] [rbp-60h]
  int v68; // [rsp+160h] [rbp-58h]
  int v69; // [rsp+164h] [rbp-54h]
  __m128i v70; // [rsp+168h] [rbp-50h]

  if ( (unsigned __int8)sub_16EC5F0((__int64)a1, a2, 2u, a3) )
    return 1;
  v6 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v7 = sub_19146F0(a1, v6);
  if ( v7 == 1 )
    return 1;
  v11 = v7 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v7 & 0xFFFFFFFFFFFFFFFELL;
  v59 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v12 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(v12, v6, v8, v9, v10) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 48 )
  {
    v13 = sub_EEB7E0(v11, v6, a3);
    sub_168B9F0((__int64)&v62, a1 + 1, v13, 0xEA6u, 0);
    LODWORD(v60) = 1;
    v14 = sub_1587D10((__int64)&v62, (int *)&v60);
    v15 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v16 = v15;
    if ( v15 && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 34 >= 6 )
      v16 = 0;
    if ( *(_BYTE *)(v14 + 120) )
    {
      sub_16B73F0((unsigned __int8 **)(v14 + 32), v16);
    }
    else if ( *(_BYTE *)(v14 + 132) )
    {
      v47 = sub_168B9E0((_QWORD *)v14);
      v48 = *(_QWORD *)(v14 + 16);
      if ( v48 )
        v48 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 32LL))(*(_QWORD *)(v14 + 16));
      v61 = v48;
      v49 = sub_1587BC0(v47, &v61, v43, v44, v45, v46);
      sub_16B73F0((unsigned __int8 **)(*v49 + 32LL * *(unsigned int *)(v14 + 128) + 8), v16);
    }
    sub_1605D30(v14, &v59);
    sub_15F7200(&v62);
    return 1;
  }
  v20 = sub_F68450(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL), v6, v17, v18, v19);
  v25 = sub_F63240(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v6, v21, v22, v23, v24);
  v26 = (unsigned int)sub_EEB7E0(v11, v6, a3);
  if ( (unsigned __int8)sub_1E63CF0(a1, v26, v20, 1, 3968) )
    return 1;
  v60 = *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL);
  v29 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
    || sub_C1BF80(v29, v26, v27, v28)
    || (v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        v51 = *(_BYTE *)(v50 + 16),
        v51 == 11)
    || (*(_BYTE *)(a1[29] + 1) & 8) != 0 && v51 == 48
    || v51 == 13
    && ((*(_WORD *)(v50 + 18) >> 3) & 0x1FFu) - 497 <= 6
    && ((1LL << ((unsigned __int8)(*(_WORD *)(v50 + 18) >> 3) + 15)) & 0x77) != 0 )
  {
    v56 = a2;
    v30 = _mm_loadh_ps((const double *)&v56);
    v62 = v30;
    v63 = sub_BF6D70(a2);
    ptr = v66;
    v65 = 0x2000000000LL;
    v67 = a1[33];
    v68 = *(_DWORD *)(v67 + 196);
    v69 = *(_DWORD *)(v67 + 200);
    v31 = _mm_loadu_si128((const __m128i *)(a1[31] + 17464));
    v70 = v31;
    v70.m128i_i8[2] = v31.m128i_i8[2] & 0xFB;
    v32 = sub_EEB7E0(v11, v26, *(double *)v30.m128_u64);
    v33 = sub_EEC140(v11);
    v34 = sub_15F0EF0((__int64)a1, v33, 0, (__m128i)v30, *(double *)v31.m128i_i64);
    v35 = (_WORD *)sub_EEE9A0(32, (_QWORD *)a1[31], 8u);
    v36 = *(_BYTE *)(v11 + 1);
    v37 = *(_QWORD *)(v11 + 8);
    v38 = (__int64)v35;
    *v35 = *v35 & 0xFE00 | 0x14;
    if ( unk_2CD7484 )
    {
      v57 = v37;
      LOBYTE(v56) = v36;
      sub_EE9B50(20);
      v37 = v57;
      v36 = v56;
    }
    v39 = *(_BYTE *)(v38 + 1);
    *(_BYTE *)(v38 + 2) &= 0xF0u;
    *(_QWORD *)(v38 + 8) = v37;
    *(_DWORD *)(v38 + 16) = v32;
    *(_DWORD *)(v38 + 20) = v34;
    *(_BYTE *)(v38 + 1) = v36 & 0x3E | v39 & 1;
    *(_QWORD *)(v38 + 24) = v11;
    v40 = sub_B62400(v38);
    *(_BYTE *)(v38 + 1) = (v40 << 6) | *(_BYTE *)(v38 + 1) & 0x3F;
    *(_BYTE *)(v38 + 2) = *(_BYTE *)(v38 + 2) & 0xF8 | (v40 >> 2) & 7;
    if ( (unsigned __int8)sub_16CCF50(&v62, (__int64)v25, v38, 0, v41, v42, v30, *(double *)v31.m128i_i64) )
    {
      result = 1;
    }
    else
    {
      result = sub_C0B960(*(_QWORD **)(v62.m128_u64[0] + 248), v62.m128_i64[1], ptr, (unsigned int)v65, -1);
      *(_QWORD *)(v62.m128_u64[1] + 8) = *(_QWORD *)(result + 8);
      *(_BYTE *)(v62.m128_u64[1] + 1) = *(_BYTE *)(result + 1) & 6 | *(_BYTE *)(v62.m128_u64[1] + 1) & 0xF9;
    }
    if ( ptr != v66 )
    {
      v56 = result;
      free(ptr);
      return v56;
    }
  }
  else
  {
    v52 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40), v26, a3);
    sub_168B9F0((__int64)&v62, a1 + 1, v52, 0xEA2u, 0);
    v58 = 2;
    v53 = sub_1587D10((__int64)&v62, &v58);
    v54 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    if ( v54 && (*(_BYTE *)(v54 + 28) & 0x7Fu) - 34 >= 6 )
      v54 = 0;
    v61 = v54;
    v55 = sub_16CEDA0(v53, &v61);
    sub_1605D30(v55, &v60);
    sub_15F7200(&v62);
    return 1;
  }
  return result;
}
