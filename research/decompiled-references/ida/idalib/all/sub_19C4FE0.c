__int64 __fastcall sub_19C4FE0(
        __m128 *a1,
        unsigned __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rbp
  unsigned __int8 v14; // r13
  unsigned int v15; // r13d
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int32 v24; // eax
  _QWORD *v25; // rax
  __int32 v26; // r11d
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int32 v50; // edx
  unsigned __int64 v51; // rdi
  __int32 v52; // ecx
  unsigned int v53; // edx
  __int64 *v54; // rsi
  __int64 v55; // r8
  _QWORD *v56; // rdi
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int32 v59; // r9d
  char *v60; // r11
  __int64 v61; // rax
  int v62; // esi
  __int64 v63; // r8
  unsigned int v65; // [rsp+8h] [rbp-60h]
  int v66; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 v67; // [rsp+10h] [rbp-58h]
  __int64 *v68; // [rsp+10h] [rbp-58h]
  __int64 v69; // [rsp+18h] [rbp-50h]
  __int64 v70; // [rsp+18h] [rbp-50h]
  __int64 v71[8]; // [rsp+28h] [rbp-40h] BYREF

  v13 = a6;
  v66 = a4;
  if ( a3 )
  {
    v15 = 1;
LABEL_6:
    v65 = *(_BYTE *)(a6 + 68) & 1;
    goto LABEL_7;
  }
  v14 = *(_BYTE *)(a2 + 1);
  if ( (v14 & 0x38) != 0 )
  {
    v15 = 0;
    v65 = 0;
    goto LABEL_7;
  }
  v65 = 0;
  v15 = (v14 >> 1) & 3;
  if ( v15 )
    goto LABEL_6;
LABEL_7:
  v16 = *(_QWORD *)(a6 + 48);
  v17 = v16;
  v18 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  v19 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 43 <= 1
    || (v35 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v35 <= 1)
    && (v69 = *(_QWORD *)(a6 + 48),
        v67 = v16 & 0xFFFFFFFFFFFFFFF0LL,
        v19 = sub_F63050(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), v18, v35, a4),
        v18 = v67,
        v16 = v69,
        v19) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v19 + 32);
      if ( (*(_BYTE *)(v19 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v20 = v17 & 0xFFFFFFFFFFFFFFF0LL;
        v19 = *(_QWORD *)v20;
        v21 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v20 + 16LL) - 43;
        if ( (unsigned int)v21 <= 1 )
          break;
        v22 = sub_F63050(v19, v18, v21, a4);
        v17 = *(_QWORD *)(v22 + 32);
        if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
          goto LABEL_11;
      }
    }
LABEL_11:
    v15 = 1;
  }
  else
  {
    v36 = *(_QWORD *)(a2 + 8);
    if ( a3 )
    {
      v37 = (__int64 *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v38 = *v37;
      if ( *(_BYTE *)(*v37 + 16) != 42 )
      {
        v70 = v16;
        v38 = sub_F63050(*v37, v18, v37, a4);
        v16 = v70;
      }
      v36 = *(_QWORD *)(v38 + 32);
    }
    v39 = 0;
    v40 = (__int64 *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    v41 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v41 & 8) != 0 )
      v39 = *(__int64 *)((char *)&qword_18 + (v41 & 0xFFFFFFFFFFFFFFF0LL));
    v42 = v39 | ((unsigned __int8)v41 | (unsigned __int8)v36) & 7;
    v43 = v42 & 0xFFFFFFFFFFFFFFCELL;
    v44 = v42 & 0xFFFFFFFFFFFFFFCFLL;
    if ( (*(_BYTE *)(v13 + 68) & 2) == 0 )
      v43 = v44;
    v45 = v16 & 7;
    v46 = v16 & 7 | *(_BYTE *)(v18 + 8) & 7;
    if ( (*(_BYTE *)(v18 + 8) & 8) != 0
      && (v46 |= *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL)),
          (v46 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v47 = v46 & 7 | v43;
      if ( (v46 & 0xFFFFFE00) != 0 )
        v47 = (unsigned int)v46 & 0xFFFFFE00 | v47 & 0xFFFFFFFF000001FFLL;
      if ( (v46 & 0x30) != 0 )
        v47 |= v46 & 0x30;
      if ( (v46 & 0x1C0) != 0 )
        v47 |= v46 & 0x1C0;
      if ( (v46 & 0xFFFFFFFF00000000LL) != 0 )
        v47 = v46 & 0xFFFFFFFF00000000LL | (unsigned int)v47;
    }
    else
    {
      v47 = v46 | v43;
    }
    if ( v47 != v46 )
    {
      if ( (v47 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v48 = v47 | v45;
        if ( (v16 & 8) != 0 )
        {
          v48 |= *(_QWORD *)(v18 + 24);
          v18 = *(_QWORD *)v18;
        }
        v68 = v40;
        v49 = sub_A70C40(a1[15].m128_i64[1], v18, v48);
        v40 = v68;
        v17 = v49;
      }
      else
      {
        v17 = (unsigned int)v45 | (unsigned int)v47 | v16 & 0xFFFFFFFFFFFFFFF8LL;
      }
    }
    if ( (unsigned __int8)sub_F6A690(*v40, 21, v45, (__int64)v40, v16) )
      v17 = sub_A71850(a1[15].m128_i64[1], 0x15u, v17, v17, 0);
  }
  v23 = a1[34].m128_u64[0];
  if ( (*(_BYTE *)(v23 + 8) & 0x7Fu) - 35 > 3
    || v23 == 72
    || (*(_BYTE *)(v23 + 11) & 2) == 0
    || (unsigned __int8)sub_183C740((__int64)a1, (_DWORD *)(v23 - 72)) == 6 )
  {
    v24 = a1[246].m128_i32[0];
    v71[0] = v13;
    if ( v24 )
    {
      v50 = a1[246].m128_i32[2];
      v51 = a1[245].m128_u64[1];
      if ( !v50 )
        goto LABEL_21;
      v52 = v50 - 1;
      v53 = (v50 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v54 = (__int64 *)(v51 + 8LL * v53);
      v55 = *v54;
      if ( *v54 != v13 )
      {
        v62 = 1;
        if ( v55 == -4096 )
          goto LABEL_21;
        while ( 1 )
        {
          a6 = (unsigned int)(v62 + 1);
          v53 = v52 & (v62 + v53);
          v54 = (__int64 *)(v51 + 8LL * v53);
          v63 = *v54;
          if ( v13 == *v54 )
            break;
          v62 = a6;
          if ( v63 == -4096 )
            goto LABEL_21;
        }
      }
      *v54 = -8192;
      v56 = (_QWORD *)a1[247].m128_u64[0];
      a1[246].m128_i32[0] = v24 - 1;
      v57 = a1[247].m128_u32[2];
      ++a1[246].m128_i32[1];
      v58 = sub_19C42B0(v56, (__int64)&v56[v57], v71);
      if ( v60 != (char *)(v58 + 1) )
      {
        memmove(v58, v58 + 1, v60 - (char *)(v58 + 1));
        v59 = a1[247].m128_i32[2];
      }
      a6 = (unsigned int)(v59 - 1);
      a1[247].m128_i32[2] = a6;
    }
    else
    {
      v25 = sub_19C42B0((_QWORD *)a1[247].m128_u64[0], a1[247].m128_u64[0] + 8LL * a1[247].m128_u32[2], v71);
      if ( (_QWORD *)a6 != v25 )
      {
        if ( (_QWORD *)a6 != v25 + 1 )
        {
          memmove(v25, v25 + 1, a6 - (_QWORD)(v25 + 1));
          v26 = a1[247].m128_i32[2];
        }
        a1[247].m128_i32[2] = v26 - 1;
      }
    }
  }
LABEL_21:
  result = sub_18C1370(
             (__int64)a1,
             a2,
             *(_QWORD *)(a5 + 8),
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64,
             a9 & 0xFFFFFFFFFFFFFFF8LL,
             v13,
             a6);
  if ( result != 1 )
  {
    v32 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(a1[14].m128_u64[1] + 64)
      && a3
      && !(unsigned __int8)sub_B8E180(a1[34].m128_u64[0])
      && (*(_WORD *)sub_BFBAE0(v32) & 0x1FF) == 0x62
      && (v61 = sub_1B223D0(a1[47].m128_u64[1], v13, 0, 0)) != 0 )
    {
      return sub_1AF5630(a1[47].m128_u64[1], v61, v15, v65, *(unsigned int *)(a10 + 8));
    }
    else
    {
      v33 = sub_15AB9E0(a5, (_QWORD *)a1[15].m128_u64[1], v28, v29, v30, v31);
      return (__int64)sub_19C4C50(a1, v32, a3, v66, v33, v34, a7, a8, 0, v13, a9, 0, a10, v17, v15, v65, 0);
    }
  }
  return result;
}
