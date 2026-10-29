__int64 __fastcall sub_1BF8E10(__m128 *a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, char a5, __m128 a6, __m128 a7)
{
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // r15
  unsigned __int32 v25; // eax
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  int v28; // eax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  char v32; // al
  char v33; // al
  char v34; // r13
  __int64 v36; // rcx
  unsigned __int8 v37; // al
  __int64 *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r14
  unsigned __int32 v41; // eax
  unsigned __int64 v42; // rbx
  int v43; // eax
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdi
  unsigned __int16 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int32 v56; // eax
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int v62; // eax
  unsigned int v63; // [rsp+8h] [rbp-E0h]
  __int64 v64; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int64 v65; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v66; // [rsp+20h] [rbp-C8h] BYREF
  int v67; // [rsp+28h] [rbp-C0h]
  __int64 v68; // [rsp+30h] [rbp-B8h]

  v11 = a3;
  v12 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( ((v12 + 52) & 0x7Fu) > 1 && (unsigned int)v12 - 53 > 1 )
  {
    v11 = (__int64)a4;
  }
  else if ( a3 == sub_B72ED0(a3) )
  {
    v11 = (__int64)a4;
  }
  if ( (unsigned __int8)sub_B981D0(a4, a2) )
  {
    v15 = sub_1BCBCC0((__int64)a1, a2, (__int64)a4, v13, v14, a6, a7);
    if ( v15 == 1 )
      return 1;
  }
  else
  {
    v15 = sub_1BF87F0((__int64)a1, a2, 0, v11, (__int64)a4, a6, a7);
    if ( v15 == 1 )
      return 1;
  }
  v16 = sub_B72690((__int64)(a4 + 9));
  if ( !v16 )
    BUG();
  v19 = *(_QWORD *)(v16 + 64);
  if ( v19
    && (*(_BYTE *)(v19 + 10) & 0x20) != 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_AED600((__int64)a4, a2, v17, v18) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 11 )
  {
    v47 = a2;
    if ( ((*(_WORD *)a2 + 433) & 0x1FFu) <= 9 && ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 5 )
      v47 = *(_QWORD *)(a2 + 16);
    v48 = (unsigned __int16 *)sub_BFB9F0(v47);
    v17 = *v48;
    LOWORD(v17) = v17 & 0x1FF;
    if ( (_WORD)v17 == 116 )
    {
      v17 = **((unsigned __int16 **)v48 + 3);
      LOWORD(v17) = v17 & 0x1FF;
    }
    v20 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( (_WORD)v17 == 51 )
    {
      sub_18C74E0((__int64)a1, 6, 0, 4);
      v52 = sub_C00A40(v20, 6, v49, v50, v51);
      v56 = sub_C00A40(v20, 6, v53, v54, v55);
      v57 = v56;
      v58 = sub_1A2E800((__int64)a1, v56, v52, (__int64)a4, v20, a6, a7);
      sub_190D5E0((__int64)a1, a6);
      if ( v58 == 1 )
      {
        v62 = sub_C00A40(v20, v57, v59, v60, v61);
        sub_168B9F0((__int64)&v66, &a1->m128_i64[1], v62, 0x17AFu, 0);
        sub_15F7200(&v66);
      }
      return v58;
    }
  }
  else
  {
    v20 = v15 & 0xFFFFFFFFFFFFFFFELL;
  }
  v64 = sub_C1D490((__int64)a4, a2, v17, v18);
  v21 = sub_18C0240(v64, a2);
  v22 = a1[15].m128_i64[1];
  v63 = v21;
  v64 = sub_F67970(&v64, v22);
  if ( (unsigned __int8)sub_B981D0(a4, v22) )
  {
    v66 = 0;
    v23 = sub_EEB7E0(a2, v22, *(double *)a6.m128_u64);
    v24 = sub_1BC7390(a1, (__int64)a4, v11, v20, a5, v23, a6, a7, &v66);
    if ( v24 != 1 )
    {
      v66 = v20;
      v25 = a1[122].m128_u32[0];
      v26 = a1[122].m128_u32[1];
      if ( a1[121].m128_u64[1] == __PAIR64__(v26, v25) )
      {
        v26 = 0;
        v25 = 0;
      }
      v27 = (v26 << 32) | v25;
      v28 = sub_EEC140(v20);
      v29 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v31 = sub_C0BFD0((_QWORD *)a1[15].m128_u64[1], v24 & 0xFFFFFFFFFFFFFFFELL, &v66, 1, v64, v63, v28, v27, 0, 0);
      *(_BYTE *)(v31 + 2) |= 0x80u;
      v32 = *(_BYTE *)(v31 + 3);
      if ( (v32 & 1) != 0 )
      {
        v33 = v32 & 0xFE;
        *(_BYTE *)(v31 + 3) = v33;
        v34 = v33;
        *(_DWORD *)(v31 + 24) = sub_BF6D70(v31);
        *(_BYTE *)(v31 + 3) = v34 | 1;
      }
      goto LABEL_22;
    }
    return 1;
  }
  v36 = *(_QWORD *)(a1[15].m128_u64[1] + 19088);
  v37 = *(_BYTE *)(v11 + 29);
  v67 = 0;
  v66 = 0;
  v68 = 0;
  v65 = (v37 >> 5) & 3 | (unsigned __int64)v11;
  v38 = sub_19C4C50(a1, v20, 0, 0, 0, 0, a6, a7, 0, (__int64)a4, v65, a5, (__int64)&v66, v36, 0, 0, 0);
  v39 = a1[122].m128_u32[1];
  v40 = (__int64)v38;
  v41 = a1[122].m128_u32[0];
  if ( a1[121].m128_u64[1] == __PAIR64__(v39, v41) )
  {
    v39 = 0;
    v41 = 0;
  }
  v42 = (v39 << 32) | v41;
  v43 = sub_EEC140(v20);
  v29 = v40;
  v31 = sub_C99A50((_QWORD *)a1[15].m128_u64[1], v40, nullptr, 0, v64, v63, v43, v42, 0);
LABEL_22:
  v44 = (__int64 *)(a4[6] & 0xFFFFFFFFFFFFFFF0LL);
  v45 = *v44;
  if ( *(_BYTE *)(*v44 + 16) != 26 )
    v45 = sub_F63050(*v44, v29, v30, v45);
  if ( (unsigned __int8)sub_16F8E60((__int64 *)a1, (__int64)a4, v31, v45, (__m128i)a6, *(double *)a7.m128_u64) )
    return 1;
  v46 = sub_BFBC70(*(_QWORD *)(v31 + 32));
  if ( v46 )
  {
    if ( (*(_BYTE *)(v46 + 28) & 0x7Fu) - 34 >= 6 )
      v46 = 0;
  }
  return sub_18C3A50((__int64)a1, v31, v46);
}
