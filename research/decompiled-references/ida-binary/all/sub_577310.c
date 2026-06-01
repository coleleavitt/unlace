__int64 __fastcall sub_577310(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rbx
  const __m128i *i; // r11
  __int32 v5; // ebp
  __int32 v6; // r14d
  __int64 v7; // r10
  int v8; // r12d
  unsigned __int32 v9; // r13d
  __int64 *v10; // rax
  unsigned __int32 v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  int v17; // edi
  int v18; // ecx
  __int64 v19; // rsi
  int v20; // ecx
  __int64 v21; // rdx
  _DWORD *v22; // rdi
  bool v23; // si
  int v24; // edx
  __int64 v25; // r8
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  __int32 v29; // esi
  __int32 v30; // edx
  int v31; // ecx
  __int64 v32; // rdi
  __int64 v33; // rbx
  bool v34; // di
  int v35; // edi
  int v36; // ebx
  unsigned __int64 v37; // rdi
  unsigned __int64 *v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int8 v40; // r10
  __int64 v41; // rdx
  unsigned __int32 v42; // r11d
  int v43; // eax
  __int32 v44; // r12d
  __int64 v45; // rbx
  int v46; // r14d
  __int64 v47; // rax
  int v48; // edx
  __m128i *v49; // rax
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  int v53; // eax
  __int32 v54; // r12d
  __int64 v55; // rbx
  int v56; // r14d
  __int64 v57; // rax
  int v58; // edx
  __m128i *v59; // rax
  __m128i v60; // xmm4
  __m128i v61; // xmm5
  __int64 v62; // [rsp+8h] [rbp-A0h]
  unsigned int v63; // [rsp+14h] [rbp-94h]
  __int64 v64; // [rsp+28h] [rbp-80h]
  unsigned __int8 v65; // [rsp+33h] [rbp-75h]
  int v66; // [rsp+34h] [rbp-74h]
  const __m128i *v67; // [rsp+38h] [rbp-70h]
  __int64 v68; // [rsp+40h] [rbp-68h]
  unsigned int v69; // [rsp+4Ch] [rbp-5Ch]
  __m128i v70; // [rsp+50h] [rbp-58h] BYREF
  __m128i v71; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v69 = v1;
  if ( v1 <= 1 )
    return 0;
  v2 = v1 - 1;
  v3 = a1;
  v66 = v2;
  v68 = *(_QWORD *)(a1 + 8);
  for ( i = (const __m128i *)(v68 + 32 * v2); ; i -= 2 )
  {
    v5 = i->m128i_i32[2];
    v6 = i->m128i_i32[3];
    v7 = (unsigned int)(v66 - 1);
    v8 = i[1].m128i_i32[0];
    v9 = i[1].m128i_u32[1];
    v10 = *(__int64 **)(v68 + 32 * v7);
    v11 = i[1].m128i_u32[2];
    v70 = _mm_loadu_si128(i);
    v71 = _mm_loadu_si128(i + 1);
    v12 = *v10;
    if ( (v12 & 1) == 0 )
    {
      v63 = *(_DWORD *)(v12 + 36);
      if ( v63 )
        break;
    }
LABEL_4:
    if ( !(_DWORD)v7 )
      return 0;
    v66 = v7;
  }
  v64 = 0;
  if ( *(_WORD *)(v12 + 66) )
    v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 128LL)
        + 2LL
        * *(unsigned __int16 *)(v12 + 66)
        * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 36LL);
  if ( (_BYTE)v9 == 0xFF )
    goto LABEL_29;
  v71.m128i_i32[3] = 0;
  v13 = v12 - 8LL * v63;
  v14 = *(_QWORD *)(v13 + 8LL * v9);
  if ( (v14 & 1) != 0 )
    v15 = (*(_QWORD *)(v13 + 8LL * v9) & 2LL) != 0;
  else
    v15 = *(_BYTE *)(v14 + 44) & 1;
  if ( (v14 & 1) != 0 )
    v16 = (v14 >> 3) & 1;
  else
    LOBYTE(v16) = (*(_BYTE *)(v14 + 44) & 4) != 0;
  if ( !(_BYTE)v16 && v64 )
    v15 = (*(unsigned __int16 *)(v64 + 2LL * v11--) | v15) != 0;
  if ( (v14 & 1) != 0 )
  {
    LODWORD(v14) = BYTE4(v14);
    v17 = BYTE6(v14);
    v18 = (*(_QWORD *)(v13 + 8LL * v9) >> 40) & 0xF;
  }
  else
  {
    v17 = *(_DWORD *)(v14 + 4);
    v18 = *(_DWORD *)(v14 + 8);
    LODWORD(v14) = *(_DWORD *)(v14 + 12);
  }
  if ( !v5 && v8 || v18 )
  {
    v8 = 1;
    v6 = 0;
    v5 = 0;
  }
  else
  {
    v5 -= v17;
    v8 -= v14;
  }
  if ( --v9 >= v63 )
    goto LABEL_27;
  v19 = v13 + 8LL * v9;
  v20 = *(unsigned __int8 *)(v19 + 7);
  v21 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFLL;
  v22 = (_DWORD *)(v21 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 7) << 56));
  v23 = v5 == 0 && v8 != 0;
  if ( (v21 & 1) == 0 )
  {
    if ( !v23 && !v22[5] )
    {
      v20 = v22[4];
      v24 = v22[6];
      goto LABEL_26;
    }
LABEL_56:
    v8 = 1;
    v6 = 0;
    v5 = 0;
    goto LABEL_27;
  }
  v24 = v20;
  if ( v23 )
    goto LABEL_56;
LABEL_26:
  v5 -= v20;
  v8 -= v24;
LABEL_27:
  if ( v66 + 1 < v69 && v15 )
    return 0;
LABEL_29:
  v67 = i;
  v25 = v3;
  v62 = v12 - 8LL * v63;
  while ( 1 )
  {
    if ( (_BYTE)v9 == 0xFF )
    {
      LODWORD(v7) = v66 - 1;
      i = v67;
      v3 = v25;
      goto LABEL_4;
    }
    v71.m128i_i32[3] = 0;
    v38 = (unsigned __int64 *)(v62 + 8LL * v9);
    v39 = *v38;
    if ( (*v38 & 1) != 0 )
      v40 = (*v38 & 2) != 0;
    else
      v40 = *(_BYTE *)(v39 + 44) & 1;
    if ( (v39 & 1) != 0 )
      v41 = (v39 >> 3) & 1;
    else
      LOBYTE(v41) = (*(_BYTE *)(v39 + 44) & 4) != 0;
    v42 = v11;
    if ( !(_BYTE)v41 && v64 )
    {
      v42 = v11 - 1;
      v40 = (v40 | *(unsigned __int16 *)(v64 + 2LL * v11)) != 0;
    }
    if ( (v39 & 1) != 0 )
    {
      v26 = BYTE4(v39);
      v27 = BYTE6(v39);
      v28 = (*v38 >> 40) & 0xF;
    }
    else
    {
      v27 = *(_DWORD *)(v39 + 4);
      v28 = *(_DWORD *)(v39 + 8);
      v26 = *(_DWORD *)(v39 + 12);
    }
    if ( !v5 && v8 || v28 )
    {
      v31 = 1;
      v29 = 0;
      v30 = 0;
    }
    else
    {
      v29 = v6;
      v30 = v5 - v27;
      v31 = v8 - v26;
    }
    if ( v9 - 1 >= v63 )
      goto LABEL_40;
    v32 = v62 + 8LL * (v9 - 1);
    v65 = *(_BYTE *)(v32 + 7);
    v33 = *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFLL;
    v34 = v31 != 0 && v30 == 0;
    if ( (v33 & 1) != 0 )
    {
      if ( !v34 )
      {
        v35 = v65;
        v36 = v65;
LABEL_39:
        v30 -= v35;
        v31 -= v36;
LABEL_40:
        if ( v40 )
          goto LABEL_62;
        goto LABEL_41;
      }
    }
    else if ( !v34 && !*(int *)((char *)&dword_14 + (v33 | ((unsigned __int64)v65 << 56))) )
    {
      v35 = *(_DWORD *)((char *)&word_10 + (v33 | ((unsigned __int64)v65 << 56)));
      v36 = *(_DWORD *)((char *)&off_18 + (v33 | ((unsigned __int64)v65 << 56)));
      goto LABEL_39;
    }
    v31 = 1;
    v29 = 0;
    v30 = 0;
    if ( v40 )
    {
LABEL_62:
      v43 = v8;
      v44 = v6;
      v45 = v25;
      v46 = v43;
      *(_DWORD *)(v25 + 16) = v66;
      sub_55ECB0(v25 + 8, 32);
      v47 = *(unsigned int *)(v45 + 16);
      v70.m128i_i32[2] = v5;
      v48 = v47 + 1;
      v70.m128i_i64[0] = v62 + 8LL * v9;
      v49 = (__m128i *)(*(_QWORD *)(v45 + 8) + 32 * v47);
      *(_DWORD *)(v45 + 16) = v48;
      v70.m128i_i32[3] = v44;
      v50 = _mm_load_si128(&v70);
      v71.m128i_i64[0] = __PAIR64__(v9, v46);
      v71.m128i_i32[2] = v11;
      v51 = _mm_load_si128(&v71);
      *v49 = v50;
      v49[1] = v51;
      sub_55F490(v45);
      return 1;
    }
LABEL_41:
    v37 = *v38;
    if ( (*v38 & 1) == 0 && *(_DWORD *)(v37 + 36) && *(_DWORD *)(v37 + 48) )
      break;
    v11 = v42;
    v6 = v29;
    --v9;
    v8 = v31;
    v5 = v30;
  }
  v53 = v8;
  v54 = v6;
  v55 = v25;
  v56 = v53;
  *(_DWORD *)(v25 + 16) = v66;
  sub_55ECB0(v25 + 8, 32);
  v57 = *(unsigned int *)(v55 + 16);
  v70.m128i_i32[2] = v5;
  v58 = v57 + 1;
  v70.m128i_i64[0] = v62 + 8LL * v9;
  v59 = (__m128i *)(*(_QWORD *)(v55 + 8) + 32 * v57);
  *(_DWORD *)(v55 + 16) = v58;
  v70.m128i_i32[3] = v54;
  v60 = _mm_load_si128(&v70);
  v71.m128i_i64[0] = __PAIR64__(v9, v56);
  v71.m128i_i32[2] = v11;
  v61 = _mm_load_si128(&v71);
  *v59 = v60;
  v59[1] = v61;
  sub_55F490(v55);
  sub_576060(v55);
  return 1;
}
